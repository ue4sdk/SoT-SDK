#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_CannonBall_ChainShot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C
// 0x0018 (0x0628 - 0x0610)
class ABP_Projectile_CannonBall_ChainShot_C : public ACannonProjectile
{
public:
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        chainshot;                                                // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Collision;                                                // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
