#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_NPCBasePortSign_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_NPCBasePortSign.BP_Anim_NPCBasePortSign_C
// 0x0F34 (0x13A4 - 0x0470)
class UBP_Anim_NPCBasePortSign_C : public UNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_41A6FCBE455F71A1F96593A33F40D633;      // 0x0478(0x0048)
	struct FAnimNode_HIKSolve                          AnimGraphNode_HIKSolve_122B2A98460566DEAC3E31A9D95D17FB;  // 0x04C0(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_574DBE92499E4FB08B5304B1F3165C46;// 0x0540(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0F043BB64B69D702FBDD2284C5033305;// 0x0588(0x0048)
	struct FAnimNode_HIKLookAt                         AnimGraphNode_HIKLookAt_13BFA1154D67C96FFE9838AB98FF2628; // 0x05D0(0x0088)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7D7BFE443C78A4DB09BF2954F9FB2A7;// 0x0658(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1590FC9B424009158EB4CD81148B9C41;// 0x0698(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F28B3CF423C1190623B60A13F607335;// 0x06D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43F9A72248609D19E5705EA6BAB1F30C;// 0x0718(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87E5518C4493614D709ADCBB10100CF5;// 0x0758(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C8989714AD1ACE3E3E052B27235B0BB;// 0x0798(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30C5D665441234F12947C383078A8A68;// 0x07D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F745863A43BD24C6D469ADB62F2DCCEA;// 0x0818(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E5638D18445051F1530FEE8B5A4F05EC;// 0x0858(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_269309D3407497D6420FD886C69BE95B;// 0x08B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB97615A44B9DB9275800DB3B00CC81D;// 0x08F8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B18FE85B4ADCBEAB2174A7857612C92D;// 0x0950(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_341236BF4A81EBAA5A49EDB86EC42020;// 0x0998(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_674A6619431A6BBD4596DABD67671419;// 0x0A40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A8806459406B6A533D1A9CAD001FF692;// 0x0A88(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_86A6275B4A5BA192F44B0FA218DF6A6A;// 0x0AE0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09CEE3C24178A5605CCF648191962615;// 0x0B28(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A291661E44C69BA0E4EF43964E4A6942;// 0x0B68(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7CE6B2C24E75C281815BC0864650981A;// 0x0BA8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6673CFE14C2EE62CCE3294A742F35812;// 0x0C00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_69398C85415842511F29849928EE840C;// 0x0C48(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4F05CBB143B076B163966AA6906E1FB9;// 0x0CA0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D238362B487C43917B613DBA962EEC64;// 0x0CE8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B40EA37F4A864F9446DE8997ECE0B8F5;// 0x0D90(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6F0258254DE2553C4D787D978462A78D;// 0x0DD8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AC3CBAAC4C827FD479924A86438256D2;// 0x0E30(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC0AAFE64F928C6D83C3CD845DE4392F;// 0x0E78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEFCE8034CC275366AE4CDA1DE42244B;// 0x0EB8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6571DC784B043D27EED1E59873E2E9A8;// 0x0EF8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D77106F5421C70FDBB57609104AB457F;// 0x0F50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AAE1480D4BFFE14CF05752A7524EDBFF;// 0x0F98(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DBBA67C647C2061BFA1797AFE9BF99E0;// 0x0FF0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4015BE5C46E0BF7E41E53C9658B209E1;// 0x1038(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8354546645EA8B119354CEA64CC8BDC0;// 0x10E0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8049CA5C43DDC762D317E99C6D8080C1;// 0x1128(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E5490ABD4826025E17DA0E875C64C216;// 0x11D0(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7F795A8249F784A3B09936B2CB41A0D9;      // 0x1280(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AFC0500F43882F36BD8625B5C966571B;// 0x12E0(0x0058)
	float                                              IKAlpha;                                                  // 0x1338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IdleVariant;                                              // 0x133C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimSequence*>                       IdleVariantAnims;                                         // 0x1340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimSequence*>                       InactiveVariantAnims;                                     // 0x1350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                InactiveVariant;                                          // 0x1360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InteractVariant;                                          // 0x1364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimSequence*>                       InteractVariantAnims;                                     // 0x1368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimSequence*>                       IntoIdleVariantAnims;                                     // 0x1378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimSequence*>                       OutOfIdleVariantAnims;                                    // 0x1388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               LookAtIsOn;                                               // 0x1398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1399(0x0003) MISSED OFFSET
	struct FVector2D                                   LookAtAngleClamp;                                         // 0x139C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass BP_Anim_NPCBasePortSign.BP_Anim_NPCBasePortSign_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_HIKLookAt_13BFA1154D67C96FFE9838AB98FF2628();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_TransitionResult_B7D7BFE443C78A4DB09BF2954F9FB2A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_TransitionResult_3F28B3CF423C1190623B60A13F607335();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_TransitionResult_43F9A72248609D19E5705EA6BAB1F30C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_TransitionResult_7C8989714AD1ACE3E3E052B27235B0BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_TransitionResult_30C5D665441234F12947C383078A8A68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_TransitionResult_F745863A43BD24C6D469ADB62F2DCCEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_SequencePlayer_E5638D18445051F1530FEE8B5A4F05EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_SequencePlayer_BB97615A44B9DB9275800DB3B00CC81D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_TransitionResult_09CEE3C24178A5605CCF648191962615();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_TransitionResult_A291661E44C69BA0E4EF43964E4A6942();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_SequencePlayer_7CE6B2C24E75C281815BC0864650981A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_SequencePlayer_69398C85415842511F29849928EE840C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_TransitionResult_BC0AAFE64F928C6D83C3CD845DE4392F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_TransitionResult_AEFCE8034CC275366AE4CDA1DE42244B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_SequencePlayer_6571DC784B043D27EED1E59873E2E9A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCBasePortSign_AnimGraphNode_BlendListByBool_E5490ABD4826025E17DA0E875C64C216();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_StartLookat();
	void AnimNotify_StopLookAt();
	void AnimNotify_IdleVariantChange();
	void AnimNotify_NPCItemAnimation();
	void AnimNotify_InactiveVariantChange();
	void AnimNotify_InteractVariantChange();
	void AnimNotify_LH_UseItem_2();
	void AnimNotify_LH_UseItem_3();
	void AnimNotify_LH_UseItem_4();
	void AnimNotify_LH_UseItem_5();
	void AnimNotify_LH_DestroyItem();
	void AnimNotify_RH_UseItem_2();
	void AnimNotify_RH_UseItem_3();
	void AnimNotify_RH_UseItem_4();
	void AnimNotify_RH_UseItem_5();
	void AnimNotify_RH_DestroyItem();
	void AnimNotify_RH_DetachItem();
	void AnimNotify_LH_DetachItem();
	void AnimNotify_LH_AttachItem();
	void AnimNotify_RH_AttachItem();
	void ExecuteUbergraph_BP_Anim_NPCBasePortSign(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
