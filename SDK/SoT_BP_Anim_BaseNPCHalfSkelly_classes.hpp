#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_BaseNPCHalfSkelly_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_BaseNPCHalfSkelly.BP_Anim_BaseNPCHalfSkelly_C
// 0x15A9 (0x1BA9 - 0x0600)
class UBP_Anim_BaseNPCHalfSkelly_C : public UNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0600(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_78BAADEF4BC2352F6AB3FCA0182921E6;      // 0x0608(0x0048)
	struct FAnimNode_HIKSolve                          AnimGraphNode_HIKSolve_31DA8BB448F9132859AEDEA42543ADAA;  // 0x0650(0x0080)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AEF5030F45D8669EF9AB80844F0C4685;// 0x06D0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_58141A1C4893E34D2A4F29A186CBD1E2;// 0x0718(0x0048)
	struct FAnimNode_HIKLookAt                         AnimGraphNode_HIKLookAt_6841D6594849EDB47EEFDD8BEA3A6CE7; // 0x0760(0x0088)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC64FDEA4BBFFE90A3627BA6AB48F620;// 0x07E8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9483A01D4C1B669FDDBC83A096E16147;// 0x0828(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FE5A5D1440DB2F427E58D6AC70DC06DB;// 0x0868(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9567C4A04A22EE6F7A7ABC88010B2440;// 0x08A8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7433345E488A10C07A54539356B3583E;// 0x08E8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6A18F34E4002BA423E4993BC5862A274;// 0x0928(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA78912B41DB556E02815A9AA0F9CB47;// 0x0968(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ED4658E44127E92321B5878EE2F5DA8D;// 0x09A8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7A57248A498588D722BFD2808B157E65;// 0x09E8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3A33FA744E5A30B0FA4938E200127A9;// 0x0A48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D1E14280415D7DDAA25BD29C6F86847D;// 0x0A90(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1DF7F6C34792A94A1DB63EA28641B958;// 0x0AF0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_55996B854837638E907F469922417F58;// 0x0B38(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E6255C6B4C8E7C2EDA5D818B09D679EF;// 0x0BE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CEB217A4CB9F46924B0D5A4C9858BBA;// 0x0C28(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0481176B4267D49701401A9BE196A460;// 0x0C88(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E902919C4ECC01A834A81AAD7DAC2393;// 0x0CD0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26555C234437E3FAC6E733BB8FB2F99F;// 0x0D10(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_660E2F1B40E05F5ED0503D951EBC1597;// 0x0D50(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_31CB9476408BB615E2FFBF978A2C5F22;// 0x0DB0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2BBD5EDA4255887B476C9D9DF46D7327;// 0x0DF8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_47B10ACF4D206CFD42958A8DF900BF7B;// 0x0E58(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_585725B04FF6A592EDDADB81273C21CE;// 0x0EA0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B9F91A7E4E940623F483678D3F05AF5E;// 0x0F48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_755D93124CEA6AC1D710989583BF3B8A;// 0x0F90(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1A3700E34420CC29AC50CFB2A2CFCEF8;// 0x0FF0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_607B41D74647635BDCB2D9A379488F5A;// 0x1038(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AA8523643F30A14D673988A7BF868E4;// 0x1078(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D488528343C0C0D9F2FB528AEB911D53;// 0x10B8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BD406D834274037916106DBE0FB47C8D;// 0x1118(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FAFA01804A6C0010A36F0AA852FCA68D;// 0x1160(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8522A2564A69129051DCD29CA9DD01FE;// 0x11C0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1AEA26C74255A2123096D98F7361F3E1;// 0x1208(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9D95770345D99D0975552EB6CDB714C8;// 0x12B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_53CA859F471932BB16E799ABDF64077D;// 0x12F8(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F1D46DD04F20E95F3180BCA4B9799D0C;// 0x13A0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EF9D613D41FCD0FA7BEB57B9A9AA5A11;// 0x1450(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F9435E94421FB0E05751E394F9654A3A;// 0x14B0(0x00B0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_23EC2405463DA3644FC21B9BBEF6A507;// 0x1560(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B57F8C854F219D66AF8E878A2C741836;      // 0x15B0(0x0060)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_367B699446F86572DAFB2A8DDF47D07C;// 0x1610(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1317351E46DE17B688E47682042B99B1;// 0x1650(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_315C7AA043EAF370C2211CA04FB5DD6B;// 0x1690(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DED7B6C64493A8F122C168AD31EA3621;// 0x16D0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93CC47174200411241C7FD8ECA13582B;// 0x1710(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A1FDFCDB44823A108F2C6698910C2EEF;// 0x1750(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5751A9554CC80808E9554D89D428DB4C;// 0x1860(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_12F818A94A9E50E5EFFD8797A7DB58CB;// 0x18A8(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FACB29FD432C248964694E80A335FDEA;// 0x19B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_F823BA4B4A20F4BF7F96008AADAE209E;// 0x1A00(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C0C8A71745D12AF7EA654BA03E61B5DA;// 0x1A38(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_50DFC8D84A68174BA85C26B137FE651F;// 0x1A80(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_16F40C0F48DA2EAAACBFEEA378CF2C38;// 0x1B28(0x0070)
	float                                              IKAlpha;                                                  // 0x1B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LookAtIsOn;                                               // 0x1B9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1B9D(0x0003) MISSED OFFSET
	struct FVector2D                                   LookAtAngleClamp;                                         // 0x1BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSkellyActive;                                           // 0x1BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_BaseNPCHalfSkelly.BP_Anim_BaseNPCHalfSkelly_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_BaseNPCHalfSkelly_AnimGraphNode_HIKLookAt_6841D6594849EDB47EEFDD8BEA3A6CE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_BaseNPCHalfSkelly_AnimGraphNode_TransitionResult_BC64FDEA4BBFFE90A3627BA6AB48F620();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_BaseNPCHalfSkelly_AnimGraphNode_TransitionResult_FE5A5D1440DB2F427E58D6AC70DC06DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_BaseNPCHalfSkelly_AnimGraphNode_TransitionResult_9567C4A04A22EE6F7A7ABC88010B2440();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_BaseNPCHalfSkelly_AnimGraphNode_TransitionResult_6A18F34E4002BA423E4993BC5862A274();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_BaseNPCHalfSkelly_AnimGraphNode_TransitionResult_CA78912B41DB556E02815A9AA0F9CB47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_BaseNPCHalfSkelly_AnimGraphNode_TransitionResult_ED4658E44127E92321B5878EE2F5DA8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_BaseNPCHalfSkelly_AnimGraphNode_TransitionResult_E902919C4ECC01A834A81AAD7DAC2393();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_BaseNPCHalfSkelly_AnimGraphNode_TransitionResult_26555C234437E3FAC6E733BB8FB2F99F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_BaseNPCHalfSkelly_AnimGraphNode_TransitionResult_607B41D74647635BDCB2D9A379488F5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_BaseNPCHalfSkelly_AnimGraphNode_TransitionResult_8AA8523643F30A14D673988A7BF868E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_BaseNPCHalfSkelly_AnimGraphNode_BlendListByBool_F1D46DD04F20E95F3180BCA4B9799D0C();
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
	void AnimNotify_StartingHitReact();
	void ExecuteUbergraph_BP_Anim_BaseNPCHalfSkelly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
