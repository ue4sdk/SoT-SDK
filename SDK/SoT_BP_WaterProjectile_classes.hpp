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
// 0x0010 (0x0728 - 0x0718)
class ABP_WaterProjectile_C : public ALiquidProjectile
{
public:
	UStaticMeshComponent*                              Sphere;                                                   // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USphereComponent*                                  Collision;                                                // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
