#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_PetDog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_PetDog.BP_Anim_PetDog_C
// 0x4E00 (0x56B0 - 0x08B0)
class UBP_Anim_PetDog_C : public UWieldablePetAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0100E63C4D85EB741DD12DB2A7557B1B;      // 0x08B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C447884F4596B0F3167CC6B2E7DAA505;// 0x0900(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_464010C0433FC0EF1826E2B41EBB7D8F;// 0x0940(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C306CF0249D0FE50472529A943F84941;// 0x0980(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29F98BB1442BF04B05BD0F9FE2929D6A;// 0x09C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF20C50A45E2BB601AB285AA8CCEA8C6;// 0x0A00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DBDFBFE44A2C82FD9A8EFBA9D5A8DD03;// 0x0A40(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BED313DF4E50103F6804C68CD3E73A8F;// 0x0A80(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BBEF6404084AD03446CDCA45FD4054D2;// 0x0AE0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_05FDBCA648E621D8A30A47A0AF2E003B;// 0x0B28(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8FE7831246301D1DE191CC9C4AD711E1;// 0x0B78(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83E40CDC4A7BDB92258145AC8187E56A;// 0x0BC0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A1C3A98405FC011AC920C80F8DCBE71;// 0x0C00(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CCC1B1524984C535B85947A987165825;// 0x0C60(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5C6836CD4B0F35E52EC74CB6B32FC9A2;// 0x0CA8(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_35A391E645612DDF895D11AB0BC9E813;// 0x0D48(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B856A9FE452CC75440F711AC2D7A0539;// 0x0DB8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F0EB18094BF0D16B03A06EBA99958486;// 0x0E18(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_914BC744473D12BCD20CB898C084CBBB;// 0x0E60(0x00A8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CC10A5BD4DF4311517E8879BB106ED7C;// 0x0F08(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C3C3F98147BA9F0CA91B0DB4EA661E9C;// 0x0F68(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_512141C54D6F0C47CE9B99B17EEEF1C9;// 0x0FB0(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_56500AEC4BDB457D6C8F43B9E4884AFF;// 0x1058(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1485B3AE4CB31265DD7B38A622C83A3A;// 0x10A0(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9B5AC79B4E09534EF49104B97B5C3A5D;// 0x1130(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_199DD6F14DDDF1E92A6B73AA04DCFA34;// 0x1178(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F790FB744681D85B55ED6B0870AC682;// 0x11B8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C45E816A4AC1F8AC8926639114AD4FE4;// 0x11F8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B604080D442CE37FFF2D14BEEC898E44;// 0x1238(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9E2927BD468E84ED6EE6878694B82B5A;// 0x1278(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4347D01642EFD9F8EEBED1A0B42B8135;// 0x12B8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6ADF1DC04106EF4AE0ACA1B1BCFCABE6;// 0x12F8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FCC950A545414DF71E40B1AADEB75932;// 0x1338(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F62FF5DD44CE660A82C4C983F8E89B5B;// 0x1378(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BE8E6B1D47FAC55016B6CDB9C711D095;// 0x13B8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D652C58E41B9DEAEA124DF9B80C63BA5;// 0x13F8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EECE1E5942E3F2BF1D942FAFA6D127E3;// 0x1438(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AA3FF9F4339C30AE3DA80862AE93059;// 0x1478(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8F9F56DD498CA7542C5261A257D5E57E;// 0x14B8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7E9277BF4521E459610E0F8C7D0D4F48;// 0x1568(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A425C4D14F31E4F5BD7BAEA69E622313;// 0x15C8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8C0829F04EC6F56BF6EA0CB37ADD7FCD;// 0x1628(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_901C46774926AAAAA56850B183203BC4;// 0x1670(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_587495AC455CE7218B3843BD799DDD7D;// 0x16D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E424BF6B46BF5F4860E4B5893BD44B81;// 0x1718(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_04EBF8D54668686A8C393B896A48A8D3;// 0x1778(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8910E96459EE9B13D9319823E3E343F;// 0x17C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE7A3FE54EBAA6FE4810DDB2EF312941;// 0x1800(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7EBB041433C2EA60FA96798501326F9;// 0x1840(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63C81D9F4AAB93F7CE54AFBFDC56165A;// 0x1880(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E2EB788E47281681C651858945717124;// 0x18C0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A32515B740514955947CB58148766A41;// 0x1920(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8086267845F723094B0D22AA1FD4330E;// 0x1968(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9885113E4A6D748165AA049AD2404AEC;// 0x19C8(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6EA70F5642C78E75AA91C98EE0900858;// 0x1A10(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2C05901541134C2469F82383BB9DC032;// 0x1A58(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_50441DBC4000266950F8E2870C850029;// 0x1B00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B47547874848915018F707AE234B5DFD;// 0x1B48(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BBEF6404084AD03446CDCA45FD4054D;// 0x1BA8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4564ED2A436CEFF5604A74AD08E696FF;// 0x1BF0(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_707647824931991D545F6993646B1D84;// 0x1C50(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E9AA0AF343AB31FB8F9F289DA7251E4E;// 0x1C88(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C908676849DCD799542F9093A292544D;// 0x1D38(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_A739C4634A4947F90CA9F2A0999E2E13;// 0x1DA8(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9CDAC4774EE78B604FF26F92CA81319C;// 0x1E68(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5601E0A64092F3460052D1BC2FE19901;// 0x1EC8(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8C9121C1457E411EC2E8E9BCD18F5596;// 0x1FD8(0x0048)
	struct FAnimNode_WeightedLoadOnDemandSquencePlayer AnimGraphNode_WeightedLoadOnDemandSquencePlayer_ED2F012A40086F68380A15997F97366D;// 0x2020(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0C872364429A7C29536A3C9E06439031;// 0x2090(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B976B710493EF408B68794B70C07F9C4;// 0x20D8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_076BABF54A21D844310FBEA603AF0743;// 0x2180(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CFC6BD654B1B74A7BA5A93A97E679CCB;// 0x21C8(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC06665B4CDEA44E725D5C91B31E77AB;// 0x2238(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A37A786C4D2F7B64C86BC98C1EDFA24F;// 0x2278(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9ECE430B461A89BE3D9036888A112744;// 0x22B8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF7ECFBA467395D82B5BD5AA0AE40508;// 0x22F8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A886307541521D7C533942BE0B4B257B;// 0x2338(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1B4EEC9448AF0EDD066CD89678303FBE;// 0x2378(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF334D9142256C348464ADBA1944EEF4;// 0x23B8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_164363FA4E19D074FB0805A57A22F55D;// 0x23F8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C277CC4B47A12D02A2A3468DA7A865F7;// 0x2438(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D379320D4EA0C7B9CAE0A2B9251F9B44;// 0x2478(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B48A61BF4E21EDC2A1FB48AE7DFFD1B7;// 0x24B8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_56C828FC474922FAB031E994E10D21FC;// 0x2518(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0536699141606CEB852A88B751523810;// 0x2560(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_91030B4947860E3AA66E429FD09515ED;// 0x25C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EE1EB7DB4B0BD51C6F303A858511476D;// 0x2608(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_80BD03B742BB0CD97E6E449E19E85713;// 0x2668(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15692DB042AC1F974008D9884AABE6F9;// 0x26B0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_600CA90D4C8988B0638A02979F23B519;// 0x2710(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E4B799224162C2751FC2178121B94459;// 0x2758(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_DA7354FD4842DF50EB292C85EAFAA77A;// 0x2798(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_619A70CE4ADC86622048E5A8D154F44B;// 0x27D0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D1F75504424C237BD1DC0F83F939CC23;// 0x2818(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C5F0C2E243CAA1A789558384ED352889;// 0x28C0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8F179FBC4A975561B4C08097EBE31737;// 0x2908(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FD7E2518423B29308410CAA90FB77DFD;// 0x29B0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F7AB72AF4C8D55ED0D7BB9B5F67DF6D8;// 0x2A20(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0;// 0x2A60(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0EDE89A482F035A29EA2D86C20E6B90;// 0x2AA0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B;// 0x2AE0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76D021F047BB19C0732B289AE48A375C;// 0x2B20(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7409276C45E604F6EAF546AD356321AB;// 0x2B60(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C3F81EB14D8770E016695D9287B605F6;// 0x2C70(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_1A622A7F49F3748DEE4BD2B1BFE2F1AC;// 0x2CB8(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BAC2FA554A06CD748377518D178F12BC;// 0x2D08(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5781D624471A0592A6CC198B730EB747;// 0x2DB8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B7E16ADE403A6333FF78B8B9FB2A559D;// 0x2E18(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_0691CCB64B7A9C2B9022AB8317132215;// 0x2E60(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6AEABB8A476DCE6354140493750D8A51;// 0x2EB0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_78EACC494981ABC8659AD89F1743C337;// 0x2F60(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5FF04AD44D3FBF54566AD1B8C61BD21F;// 0x2FC0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9EE7794840EEFF1692263084CDCFAA41;// 0x3008(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_375B182343B34140FEAA59994E68B168;// 0x30B0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D0C901E44AECA2506C9AFC99F8385F84;// 0x3120(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9DEA85374A9CF92EDAFA1A913004D24A;// 0x3160(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_522CDBBA4A36596521414C859F78A16F;// 0x31A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38DA6DA041693AE96731E4B4F85608D7;// 0x31E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7D04862F4B0E7FF0B463029AFDEF9F90;// 0x3220(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_363AA11C42D97BB52C9E9CAFAD44C656;// 0x3260(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6965DAA740B0D5522281569809EC0283;// 0x32A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC97545C448E1D4350F93A80D0D9F276;// 0x32E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C44492144674F18E4886C4AEB5AC164F;// 0x3320(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FDF859E4DF20300A8BC028A89D9A702;// 0x3360(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_253FEA80468B79AC0F61D0B0EFDFF7AC;// 0x33A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13A0490140BD71B56EAAC9B2A2C8D390;// 0x33E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_566CEE0F40297EA1F3C608A70BC25ED7;// 0x3420(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D2CF643428498890674C0802E023D4C;// 0x3460(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0992DD224974ED44AD287F8AA7F4B908;// 0x34A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8279920941C2060C279035AEC1F39B6B;// 0x34E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C98B1994C05E4252F2FE4A4E535AEA3;// 0x3520(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01BAF2A444B724BC2A70128681A11DA7;// 0x3560(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CCD577384A4DCC609AEF94BD30549218;// 0x35A0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_86AF64F0445003D88A994BAFD4285D44;// 0x3600(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7B6874646B62BCAC0F90CA74574E8DB;// 0x3648(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CEE738C4D908381B0A11B9F3DFC638A;// 0x3688(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_271779EE4ABCA8AE44590FA1E6474A28;// 0x36E8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_95F15BAB4552803EFCCCE6A9D1CDAD03;// 0x3730(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_35E6E497429CD388F7EB0084CD552D18;// 0x3768(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2548549143B347714C18E6825E220F87;// 0x37B0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F2DA1A8A41BF69FCE46070B1D886E798;// 0x37F0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_838978C14E639E314854248E855C2286;// 0x3850(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E7C8E1DD450E53AA557E639FA1C54C84;// 0x3898(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7035E93A4211B3044622C18F1EBBD7A1;// 0x38F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_049E49C047126313349C6EAABA299D13;// 0x3940(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_86E500DE4AA9F5D07739C6BF8790B6A3;// 0x39A0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3B104A4C4E6B18C3E5F293BA8924ECB0;// 0x3A50(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_03FA4AA44D85E207016FE896B6CABAEE;// 0x3AB0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51C5871F49C007DCBC177AA1C74ECB5D;// 0x3AF8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0458795F4217E4EBAAEC3C8E5F53AEAF;// 0x3B58(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3ECB6CB3454EE59C18FC8C8BE51DF48C;// 0x3C08(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EA33407A4592EAC76556A5A51392E06E;// 0x3C68(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4353D6C24348B435736EA09DFE28ABC8;// 0x3CB0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3F7334DD464F2D098B6F1685009427CC;// 0x3CF0(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3B266D924CEA13B3F68D5F9530BDE731;// 0x3D98(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C0C91D0D43139361B9E105909CF12E8B;// 0x3DD8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_524F9A9C414521DBA32F3E881C517D71;// 0x3E18(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48A8EC864EDEA2F84A2055BF6BB5C669;// 0x3E58(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_426B081D49FDB7A77AAEF7A3222D5B23;// 0x3E98(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_04AC50B4405EC9263FCE0C980534D1C1;// 0x3ED8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B388DED04191E848C8AA9EB06FC18664;// 0x3F18(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E68EB5FC4779C1EA9972FABE42116AEC;// 0x3F58(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C966EDC440B33018C6C8BE819C1377B4;// 0x3F98(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_79C8CD59444D81522149F888551A01CC;// 0x3FD8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AB2A35AA4FC343113B1F0DA95CE8B535;// 0x4018(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CAD81E104941D5ECF734E19A87826794;// 0x4058(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB5A066D4402E61D723CA2856742B5DD;// 0x4098(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51864FDF473394B24ECDCB83FBB887E4;// 0x40D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71180B5848E0B5D260418595D40B4448;// 0x4118(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C0D82D34457603FC856648904A6931CA;// 0x4158(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53E88FAC41258A7295F9E9954A7D39AA;// 0x4198(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D6669C14FD7B4A406E56B925FBA9DF1;// 0x41D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F4D99B454248DFB1D6B9BDB376784F0F;// 0x4218(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D7626EA94BA9B1A4A316D6AC2F846A41;// 0x4258(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_84099AE74FBAE57604E2EA8AB4E7000A;// 0x4298(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8CD0CAE04471F2F7D158ACA0979FE662;// 0x42F8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_143749774567DFC79E97B289D5139D50;// 0x4340(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F5A3373541490F71508088A50DF30D3D;// 0x4450(0x0048)
	struct FAnimNode_WeightedLoadOnDemandSquencePlayer AnimGraphNode_WeightedLoadOnDemandSquencePlayer_AB9462C949B010E619EC1ABFA20A5491;// 0x4498(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1AB94B194B3191A80EF1DF976023E96E;// 0x4508(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_63D1EDC5495EE53EA81D839104B1714E;// 0x4550(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1865DD68424BCFDC208ECCB2FD8F1431;// 0x45F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9C2FECC64CD5D5ED4AC70CBE106CDC95;// 0x4640(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D8A2FB7F4BF17FA153026CBF4E746905;// 0x46A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49CDE1F74A3892C636D5B586D7C91668;// 0x46E8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D86BD52B4288AB6BF586A097EEC2ED8F;// 0x4748(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B7228E3140B07E508D4DA498878A1A37;// 0x4790(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D256CE2F4D6BB42E3E6653B1A804257E;// 0x4840(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3298CE61488D175528987985A634E25F;// 0x48A0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A658031406C1B61413A50B73D93AF0C;// 0x4900(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C187F55A448E90CA86B4C284250194FD;// 0x4948(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_532C4E784C64FDE73D7703A824CD4F70;// 0x4988(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C824F6764E232131F12605BB10C86926;// 0x49C8(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_9F707A68481ECC02297598BFD403ADDC;// 0x4A08(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3FE8D3BB48353E7483C15CA0CBD39FDE;// 0x4A40(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C0889CCE4C5015B8048115A763588686;// 0x4A88(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F7B7EA8E4814A86E4C253FB59C7531CE;// 0x4B38(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8A7FF8BC439E07FB8385F7BCCC1AD125;// 0x4B98(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0827967F4209756104DC8D9FB546B3EA;// 0x4BF8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D0AC548D4291F8D5475C2F9AF6B1F638;// 0x4C40(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21428C3A4DF35024B5D5418FB4DE7D27;// 0x4CF0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_865FF6D54F3E570FB4C13F850A77E236;// 0x4D50(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D5E56D6449BDD051FD7EEEBDA1BED0B4;// 0x4DB0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_74AEEB91485327020363F2BB8579B67F;// 0x4DF8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F0E3193E49F04B21F48F9A8002671E0E;// 0x4EA0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE548AA14CA08435091FDBBEC788B9AA;// 0x4EE8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_38118D4945530B5D3203B5BB62CA95B7;// 0x4F48(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4DA0DB2C4D170240A5D522AA7784325C;// 0x4F90(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_094142434C217A982E6B1EA02904D91E;// 0x4FD0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AB83E9944E3A2843BF04DDBC14A161A7;// 0x5030(0x0048)
	struct FAnimNode_WeightedLoadOnDemandSquencePlayer AnimGraphNode_WeightedLoadOnDemandSquencePlayer_DA4DE8F64259481730359297A212DBEA;// 0x5078(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D46E92824B64C7170631528AD18B7720;// 0x50E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1DEF106A4629BE203143D2AB248EBAE2;// 0x5130(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99879163458DB39050F11B8F371FC8B5;// 0x51D8(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3C843E5464DFEE227EA7EACF913C662;// 0x5220(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DA72BAD44DDA82CBA049AA8157AE38B3;// 0x5268(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_20A882354BCA01FC8C787CA5BCC8F179;      // 0x5310(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_05EF063A4262D1CB8B7A1B851013B759;// 0x5370(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D3C9B257469262D176093F93BA975BD7;// 0x53B8(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_1BFE494845DE6D37020FA186C939D6BE;    // 0x5400(0x00C0)
	struct FPetAnimationDataBeingHeld                  PetHeldAnimations;                                        // 0x54C0(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPetAnimationDataRoaming                    PetRoamingAnimations;                                     // 0x5610(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_PetDog.BP_Anim_PetDog_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_C447884F4596B0F3167CC6B2E7DAA505();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_464010C0433FC0EF1826E2B41EBB7D8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_C306CF0249D0FE50472529A943F84941();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_CF20C50A45E2BB601AB285AA8CCEA8C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_199DD6F14DDDF1E92A6B73AA04DCFA34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_7F790FB744681D85B55ED6B0870AC682();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_B604080D442CE37FFF2D14BEEC898E44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_9E2927BD468E84ED6EE6878694B82B5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_4347D01642EFD9F8EEBED1A0B42B8135();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_FCC950A545414DF71E40B1AADEB75932();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_F62FF5DD44CE660A82C4C983F8E89B5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_BE8E6B1D47FAC55016B6CDB9C711D095();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_D652C58E41B9DEAEA124DF9B80C63BA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_EECE1E5942E3F2BF1D942FAFA6D127E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_8AA3FF9F4339C30AE3DA80862AE93059();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_DC06665B4CDEA44E725D5C91B31E77AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_A37A786C4D2F7B64C86BC98C1EDFA24F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_9ECE430B461A89BE3D9036888A112744();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_FF7ECFBA467395D82B5BD5AA0AE40508();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_A886307541521D7C533942BE0B4B257B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_1B4EEC9448AF0EDD066CD89678303FBE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_AF334D9142256C348464ADBA1944EEF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_164363FA4E19D074FB0805A57A22F55D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_C277CC4B47A12D02A2A3468DA7A865F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_D379320D4EA0C7B9CAE0A2B9251F9B44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_D0C901E44AECA2506C9AFC99F8385F84();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_7D04862F4B0E7FF0B463029AFDEF9F90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_DC97545C448E1D4350F93A80D0D9F276();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_3FDF859E4DF20300A8BC028A89D9A702();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_253FEA80468B79AC0F61D0B0EFDFF7AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_566CEE0F40297EA1F3C608A70BC25ED7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_0D2CF643428498890674C0802E023D4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_0992DD224974ED44AD287F8AA7F4B908();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_8279920941C2060C279035AEC1F39B6B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_7C98B1994C05E4252F2FE4A4E535AEA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_3B266D924CEA13B3F68D5F9530BDE731();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_C0C91D0D43139361B9E105909CF12E8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_524F9A9C414521DBA32F3E881C517D71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_426B081D49FDB7A77AAEF7A3222D5B23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_04AC50B4405EC9263FCE0C980534D1C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_B388DED04191E848C8AA9EB06FC18664();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_E68EB5FC4779C1EA9972FABE42116AEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_C966EDC440B33018C6C8BE819C1377B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_79C8CD59444D81522149F888551A01CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_AB2A35AA4FC343113B1F0DA95CE8B535();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_CAD81E104941D5ECF734E19A87826794();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_EB5A066D4402E61D723CA2856742B5DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_51864FDF473394B24ECDCB83FBB887E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_71180B5848E0B5D260418595D40B4448();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetDog_AnimGraphNode_TransitionResult_C824F6764E232131F12605BB10C86926();
	void BlueprintInitializeAnimation();
	void AnimNotify_UnEquipCompleted();
	void AnimNotify_ExitTakeOff();
	void AnimNotify_NewBaseIdleA();
	void AnimNotify_NewBaseIdleB();
	void AnimNotify_PetLookAt_On();
	void AnimNotify_PetLookAt_Off();
	void AnimNotify_StaticBaseOn();
	void AnimNotify_StaticBaseOff();
	void AnimNotify_StartStroke();
	void AnimNotify_StopStroke();
	void ExecuteUbergraph_BP_Anim_PetDog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
