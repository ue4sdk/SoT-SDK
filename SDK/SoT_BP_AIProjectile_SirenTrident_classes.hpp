#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AIProjectile_SirenTrident_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AIProjectile_SirenTrident.BP_AIProjectile_SirenTrident_C
// 0x0018 (0x0830 - 0x0818)
class ABP_AIProjectile_SirenTrident_C : public ASirenTridentProjectile
{
public:
	USphereCollisionExtentAdjustOverTimeComponent*     SphereCollisionExtentAdjustOverTime;                      // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Sphere;                                                   // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USphereComponent*                                  Collision;                                                // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AIProjectile_SirenTrident.BP_AIProjectile_SirenTrident_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
