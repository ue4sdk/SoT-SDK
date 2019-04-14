#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_NPCParrot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_NPCParrot.BP_Anim_NPCParrot_C
// 0x0F34 (0x1454 - 0x0520)
class UBP_Anim_NPCParrot_C : public UNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8A85E25A414471494144A293BD92B415;      // 0x0528(0x0048)
	struct FAnimNode_HIKSolve                          AnimGraphNode_HIKSolve_A22B345F4EDC3B7D084D7E9C9BCF52C4;  // 0x0570(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0F8520BD4785C4782E27229D026538A9;// 0x05F0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_64D5B02845231320A518639F68C74E6D;// 0x0638(0x0048)
	struct FAnimNode_HIKLookAt                         AnimGraphNode_HIKLookAt_973CE729482BB27528FC04908D05393C; // 0x0680(0x0088)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7D7BFE443C78A4DB09BF2954F9FB2A7;// 0x0708(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1590FC9B424009158EB4CD81148B9C41;// 0x0748(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F28B3CF423C1190623B60A13F607335;// 0x0788(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43F9A72248609D19E5705EA6BAB1F30C;// 0x07C8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87E5518C4493614D709ADCBB10100CF5;// 0x0808(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C8989714AD1ACE3E3E052B27235B0BB;// 0x0848(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30C5D665441234F12947C383078A8A68;// 0x0888(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F745863A43BD24C6D469ADB62F2DCCEA;// 0x08C8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_03105431414707EDD8F941948A14624B;// 0x0908(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_269309D3407497D6420FD886C69BE95B;// 0x0960(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DFAD7A794B6EBD36BB19BAACA9F5EA9D;// 0x09A8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B18FE85B4ADCBEAB2174A7857612C92D;// 0x0A00(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_341236BF4A81EBAA5A49EDB86EC42020;// 0x0A48(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_674A6619431A6BBD4596DABD67671419;// 0x0AF0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0F3A3E97436901DB03619FB8BE6C9D6D;// 0x0B38(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_86A6275B4A5BA192F44B0FA218DF6A6A;// 0x0B90(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09CEE3C24178A5605CCF648191962615;// 0x0BD8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A291661E44C69BA0E4EF43964E4A6942;// 0x0C18(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41CCBFF342AA30ED3F04B48AB7BE8836;// 0x0C58(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6673CFE14C2EE62CCE3294A742F35812;// 0x0CB0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A58B614E401AA56D95FAC1A4B6925534;// 0x0CF8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4F05CBB143B076B163966AA6906E1FB9;// 0x0D50(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D238362B487C43917B613DBA962EEC64;// 0x0D98(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B40EA37F4A864F9446DE8997ECE0B8F5;// 0x0E40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_74A702A044A0A7533C7038B68FD2284C;// 0x0E88(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AC3CBAAC4C827FD479924A86438256D2;// 0x0EE0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC0AAFE64F928C6D83C3CD845DE4392F;// 0x0F28(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEFCE8034CC275366AE4CDA1DE42244B;// 0x0F68(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_121EEB664B94C01F9FCB319D028732EE;// 0x0FA8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D77106F5421C70FDBB57609104AB457F;// 0x1000(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_510EDDC34E6D719B3A3E3A8AFA63BE50;// 0x1048(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DBBA67C647C2061BFA1797AFE9BF99E0;// 0x10A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4015BE5C46E0BF7E41E53C9658B209E1;// 0x10E8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8354546645EA8B119354CEA64CC8BDC0;// 0x1190(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_819CF67C4922D81B270D6BAB49CD29A5;// 0x11D8(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_05967B9443C11B0064CA25978A464E28;// 0x1280(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5D0824A944A61EB700A4E6864BCAA765;      // 0x1330(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_357834FA4AC1C20CFF09D9A998A72CDF;// 0x1390(0x0058)
	float                                              IKAlpha;                                                  // 0x13E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IdleVariant;                                              // 0x13EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimSequence*>                       IdleVariantAnims;                                         // 0x13F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimSequence*>                       InactiveVariantAnims;                                     // 0x1400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                InactiveVariant;                                          // 0x1410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InteractVariant;                                          // 0x1414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimSequence*>                       InteractVariantAnims;                                     // 0x1418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimSequence*>                       IntoIdleVariantAnims;                                     // 0x1428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimSequence*>                       OutOfIdleVariantAnims;                                    // 0x1438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               LookAtIsOn;                                               // 0x1448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1449(0x0003) MISSED OFFSET
	struct FVector2D                                   LookAtAngleClamp;                                         // 0x144C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_NPCParrot.BP_Anim_NPCParrot_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_HIKLookAt_973CE729482BB27528FC04908D05393C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_TransitionResult_B7D7BFE443C78A4DB09BF2954F9FB2A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_TransitionResult_3F28B3CF423C1190623B60A13F607335();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_TransitionResult_43F9A72248609D19E5705EA6BAB1F30C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_TransitionResult_7C8989714AD1ACE3E3E052B27235B0BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_TransitionResult_30C5D665441234F12947C383078A8A68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_TransitionResult_F745863A43BD24C6D469ADB62F2DCCEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_SequencePlayer_03105431414707EDD8F941948A14624B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_SequencePlayer_DFAD7A794B6EBD36BB19BAACA9F5EA9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_TransitionResult_09CEE3C24178A5605CCF648191962615();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_TransitionResult_A291661E44C69BA0E4EF43964E4A6942();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_SequencePlayer_41CCBFF342AA30ED3F04B48AB7BE8836();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_SequencePlayer_A58B614E401AA56D95FAC1A4B6925534();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_TransitionResult_BC0AAFE64F928C6D83C3CD845DE4392F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_TransitionResult_AEFCE8034CC275366AE4CDA1DE42244B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_SequencePlayer_121EEB664B94C01F9FCB319D028732EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_NPCParrot_AnimGraphNode_BlendListByBool_05967B9443C11B0064CA25978A464E28();
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
	void ExecuteUbergraph_BP_Anim_NPCParrot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
