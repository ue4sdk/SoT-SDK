#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_FlintlockPistol_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C
// 0x0150 (0x0780 - 0x0630)
class UBP_Anim_FlintlockPistol_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BA28F382499BAD2D62FC829468574B03;      // 0x0638(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F39798534963A2FAA39D00965995ABD4;      // 0x0680(0x0060)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_10C67A1147FD9A4753E31CA816D0F579;// 0x06E0(0x0050)
	TEnumAsByte<EObjectAnimationState>                 ObjectAnimationState;                                     // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReloadWanted;                                            // 0x0731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0732(0x0006) MISSED OFFSET
	struct FObjectMessagingHandle                      ReloadEventHandle;                                        // 0x0738(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_FlintlockPistol.BP_Anim_FlintlockPistol_C"));
		return ptr;
	}


	void AnimNotify_ExitedFire();
	void OnOneShotUseTriggered(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
	void OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
	void BlueprintInitializeAnimation();
	void ReloadEventDelegate(const struct FEventProjectileWeaponReload& Event);
	void BlueprintUninitializeAnimation();
	void AnimNotify_ResetReload();
	void ExecuteUbergraph_BP_Anim_FlintlockPistol(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
