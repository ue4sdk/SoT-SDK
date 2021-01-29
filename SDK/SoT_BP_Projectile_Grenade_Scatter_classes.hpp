#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_Grenade_Scatter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Grenade_Scatter.BP_Projectile_Grenade_Scatter_C
// 0x000C (0x069C - 0x0690)
class ABP_Projectile_Grenade_Scatter_C : public ABP_Projectile_CannonBall_Cursed_C
{
public:
	class UMeshRotatorComponent*                       MeshRotator;                                              // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactMultiplierCannon;                                   // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Projectile_Grenade_Scatter.BP_Projectile_Grenade_Scatter_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
