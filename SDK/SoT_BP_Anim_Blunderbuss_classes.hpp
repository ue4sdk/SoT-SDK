#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Blunderbuss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C
// 0x0150 (0x0780 - 0x0630)
class UBP_Anim_Blunderbuss_C : public UWieldableItemAnimationInstance
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	FAnimNode_Root                                     AnimGraphNode_Root_9FBA9E2B4FB6DEB587FBDEB3B3124193;      // 0x0638(0x0048)
	FAnimNode_Slot                                     AnimGraphNode_Slot_AE2920654CCB7E5DD9AEB9AC04611F9F;      // 0x0680(0x0060)
	FAnimNode_SequenceEvaluator                        AnimGraphNode_SequenceEvaluator_0B1EB6664361B3F1CD71A3B760F24D5B;// 0x06E0(0x0050)
	TEnumAsByte<EObjectAnimationState>                 ObjectAnimationState;                                     // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReloadWanted;                                            // 0x0731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0732(0x0006) MISSED OFFSET
	FObjectMessagingHandle                             ReloadEventHandle;                                        // 0x0738(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C"));
		return ptr;
	}


	void AnimNotify_ExitedFire();
	void OnOneShotUseTriggered(UClass* InputID, const FWieldableItemActionVisuals& ActionVisuals);
	void OnUseStarted(UClass* InputID, const FWieldableItemActionVisuals& ActionVisuals);
	void BlueprintInitializeAnimation();
	void ReloadEventDelegate(const FEventProjectileWeaponReload& Event);
	void BlueprintUninitializeAnimation();
	void AnimNotify_ResetReload();
	void ExecuteUbergraph_BP_Anim_Blunderbuss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
