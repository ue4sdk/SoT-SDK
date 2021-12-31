#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SirenTrident_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SirenTrident_Wieldable.BP_SirenTrident_Wieldable_C
// 0x0040 (0x09B0 - 0x0970)
class ABP_SirenTrident_Wieldable_C : public ADoubleActionItemWithAmmo
{
public:
	UAimSensitivityComponent*                          AimSensitivity;                                           // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAmmoEffectsComponent*                             AmmoEffects;                                              // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticStashedMeshMemoryConstraintComponent*       StaticStashedMeshMemoryConstraint;                        // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAmmoTransferComponent*                            AmmoTransfer;                                             // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UItemActionComponent*                              AimDownSightAction;                                       // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USirenTridentShotActionComponent*                  SirenTridentShotAction;                                   // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ULaunchableAttachPointComponent*                   LaunchableAttachPoint;                                    // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPostProcessComponent*                             PostProcess;                                              // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SirenTrident_Wieldable.BP_SirenTrident_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
