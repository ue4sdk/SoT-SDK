#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_CannonBall_Cursed_ComplexWaterHits_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_CannonBall_Cursed_ComplexWaterHits.BP_Projectile_CannonBall_Cursed_ComplexWaterHits_C
// 0x0028 (0x06D0 - 0x06A8)
class ABP_Projectile_CannonBall_Cursed_ComplexWaterHits_C : public ABP_Projectile_CannonBall_Cursed_C
{
public:
	class UMeshRotatorComponent*                       MeshRotator;                                              // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               OverlapsWaterInteractionVolumes;                          // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWaterInteractionComponent*                  WaterInteraction;                                         // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipTrackerComponent*                       ShipTracker;                                              // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USimpleOverlapComponent*                     SimpleOverlap;                                            // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Projectile_CannonBall_Cursed_ComplexWaterHits.BP_Projectile_CannonBall_Cursed_ComplexWaterHits_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
