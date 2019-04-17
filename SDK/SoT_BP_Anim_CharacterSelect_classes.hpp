#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_CharacterSelect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C
// 0x065A (0x39FA - 0x33A0)
class UBP_Anim_CharacterSelect_C : public UThirdPersonAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x33A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BA91E2B046589C64ABB3C4B5BE37EC7B;      // 0x33A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_825AF7F342BA122C410073BB53F7B2B6;      // 0x33F0(0x0060)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_4604515E42DFC0F4924E188A084526D1;// 0x3450(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_0CE9150E4A30CA1A847B44BC7F2741F3;// 0x34A0(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_EA6626534F1ED0DA4F1BB8828E8B6CAE;// 0x34F0(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_1F623FE647338998F9EE7CBDBB8482F4;// 0x3540(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_5BA33F0B4645CABA9462E8BAA46CB848;// 0x3590(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_8FC28E084F5D06B070B8288538ED49C5;// 0x35E0(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_072A4898420FB56E779F299322CD5C89;// 0x3630(0x0050)
	struct FAnimNode_HIKSolve                          AnimGraphNode_HIKSolve_028FECB44A1A59FD42DE59B062889CCC;  // 0x3680(0x0080)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FB2C5171490F4C8D7764D4B0E0F1823B;// 0x3700(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FE35BD5549FB1F4A9B701DA3AAB144D5;// 0x3748(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DBF34E9449BF8343E7B3A5883F6C2E2B;// 0x3790(0x0058)
	unsigned char                                      UnknownData00[0x8];                                       // 0x37E8(0x0008) MISSED OFFSET
	struct FAnimNode_HIKReach                          AnimGraphNode_HIKReach_0D88BFB0467B089C1B1D3BA07601E4AC;  // 0x37F0(0x0080)
	struct FAnimNode_HIKReach                          AnimGraphNode_HIKReach_654DE6BC4364BCDD4E8F239EF6E25C82;  // 0x3870(0x0080)
	struct FAnimNode_HIKReach                          AnimGraphNode_HIKReach_B4AE38804A30A76C481C54AE8393F6E4;  // 0x38F0(0x0080)
	struct FAnimNode_HIKReach                          AnimGraphNode_HIKReach_695B73B24FFE4232EBB796AB28A56B6B;  // 0x3970(0x0080)
	class UAnimSequenceBase*                           FallbackAnimation;                                        // 0x39F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Selected;                                                 // 0x39F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeginFade;                                                // 0x39F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_CharacterSelect.BP_Anim_CharacterSelect_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_SelectedCameraZoom();
	void AnimNotify_BeginFade();
	void ExecuteUbergraph_BP_Anim_CharacterSelect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
