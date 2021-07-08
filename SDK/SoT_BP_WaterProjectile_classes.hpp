#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaterProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WaterProjectile.BP_WaterProjectile_C
// 0x0010 (0x0710 - 0x0700)
class ABP_WaterProjectile_C : public ALiquidProjectile
{
public:
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Collision;                                                // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WaterProjectile.BP_WaterProjectile_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
