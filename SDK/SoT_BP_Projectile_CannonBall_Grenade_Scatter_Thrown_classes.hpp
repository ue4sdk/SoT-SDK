#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_CannonBall_Grenade_Scatter_Thrown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_CannonBall_Grenade_Scatter_Thrown.BP_Projectile_CannonBall_Grenade_Scatter_Thrown_C
// 0x000C (0x06C4 - 0x06B8)
class ABP_Projectile_CannonBall_Grenade_Scatter_Thrown_C : public ABP_Projectile_CannonBall_Cursed_ComplexWaterHits_C
{
public:
	class UExplosiveComponent*                         Explosive;                                                // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ImpactMultiplier;                                         // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Projectile_CannonBall_Grenade_Scatter_Thrown.BP_Projectile_CannonBall_Grenade_Scatter_Thrown_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
