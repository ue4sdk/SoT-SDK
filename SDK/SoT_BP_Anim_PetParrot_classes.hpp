#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_PetParrot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_PetParrot.BP_Anim_PetParrot_C
// 0x5678 (0x5E58 - 0x07E0)
class UBP_Anim_PetParrot_C : public UWieldablePetAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_21CD194741A6E61FC58A21810E5A6526;      // 0x07E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF952B00499FE620CC7975B32FDA5512;// 0x0830(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7FE73C74593131C3F60ADA71AC7B8A1;// 0x0870(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A5E2116411D49FF98C527A2DB7E247A;// 0x08B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_464010C0433FC0EF1826E2B41EBB7D8F;// 0x08F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_333A7D1F4100179BF59938B655F1AF2F;// 0x0930(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C3FB3D2943E676833683C4A85ED2E535;// 0x0970(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7BC35DC04D4C99E23EFAB9AC386323B9;// 0x09B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF20C50A45E2BB601AB285AA8CCEA8C6;// 0x09F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C3C89C654FC9811C7B2AC8AF7809A459;// 0x0A30(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8163D8404FBAB7B56325828383E60895;// 0x0A70(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DBDFBFE44A2C82FD9A8EFBA9D5A8DD03;// 0x0AB0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DBC05B55412A10BCACFC43BE805833C8;// 0x0AF0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BBEF6404084AD03446CDCA45FD4054D2;// 0x0B48(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A6F765B7484AFAEB309765B1ECB6E90B;// 0x0B90(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_049251C04E6ED15EADDA4FB3E0EDA8FD;// 0x0BE8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_CC796EE4423E27C89BDB5294EDC6A464;// 0x0C30(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BAD736F54941881A971AC7B744D9B294;// 0x0C80(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83E40CDC4A7BDB92258145AC8187E56A;// 0x0CC8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CC07F7DF414090601BD4DDADBF099B5D;// 0x0D08(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C5D79C15449BD4C30E72F69063A7889D;// 0x0D60(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5FE5159547262445830498BE2823DF85;// 0x0E10(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CCC1B1524984C535B85947A987165825;// 0x0E68(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB6CF837496A9EF949E619ADBE1459A9;// 0x0EB0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E371AF5244C7E4338DA73F8F656C3C1D;// 0x0F08(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1D1368E448D32C49EE3BD38737DED855;// 0x0F50(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7D07013A4D5EE36839243F9817E3BCA0;// 0x0F98(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_56D9B70046F08F5F8F0D81AA161A1B13;// 0x1028(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B0E3F7B24F0234AECA989CA00A8C885B;// 0x1070(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B14539584BFCE276D019FEAECC855CE2;// 0x10B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2DF3E3904E4F6301BAE3AFAF6F43D35C;// 0x10F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E7F3B60241ED331082E83FA0441022E5;// 0x1130(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1661785B4F68BD2829F17782D128CE45;// 0x1170(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33C81F3242BCBB8CDE426CA2CA7F9E8E;// 0x11B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A12F59C24C7F61D41F89A38C6002F12D;// 0x11F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CD62F3E94A7F7721F9AA41A5E0A9216A;// 0x1230(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0EC04F824CF6CC32ABBF7882475B199C;// 0x1270(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37AE67C74B10BC236369668534DE05F1;// 0x12B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_43E3AC6249652231BCB6029263CCB05F;// 0x12F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E3E49CA44EFF8D6C037CEBB16FC47E0;// 0x1330(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9CC6C16E4E05DD1003CC4A9DF57EC60F;// 0x1370(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC916AD94FBAAF5656B7A682B1AC9F5B;// 0x13B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_98A1C6CB4962958B60E2208DB4FE2FD0;// 0x13F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94F406CE48A82A4A68A38196E3A4EA79;// 0x1430(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7ED235FB41CF8AA203E5648C9E0F8B2D;// 0x1470(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F37CC684E640063F02DADA7F082BF53;// 0x14B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F73A5AD4B193B0F5724418C6F884D58;// 0x14F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_852B99A143D18E9FE5A18D8CEC85441F;// 0x1530(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8910E96459EE9B13D9319823E3E343F;// 0x1570(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE7A3FE54EBAA6FE4810DDB2EF312941;// 0x15B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7EBB041433C2EA60FA96798501326F9;// 0x15F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63C81D9F4AAB93F7CE54AFBFDC56165A;// 0x1630(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C6C1341F4E40AF1D33E487B1771E0E48;// 0x1670(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A32515B740514955947CB58148766A41;// 0x16C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB2DD15747BB8D954314CC809A153F32;// 0x1710(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9885113E4A6D748165AA049AD2404AEC;// 0x1768(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6EA70F5642C78E75AA91C98EE0900858;// 0x17B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2C05901541134C2469F82383BB9DC032;// 0x17F8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_50441DBC4000266950F8E2870C850029;// 0x18A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82DE1D1E429B3EC3803BB9B77E62073B2;// 0x18E8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4DFEA8994BE8183C2AAA929FAF57CB242;// 0x1940(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45B3618441D8FD82DABFA5ABB88F6D77;// 0x1988(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BBEF6404084AD03446CDCA45FD4054D;// 0x19E0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_040125664F055143CA83418D57C62CEE;// 0x1A28(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9437995F495BE9BC1B82C987324C1D052;// 0x1B30(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C9A2ACE345E61BDC655B7FB49CA5E7DC2;// 0x1B78(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3345D7C54E122D212C2F698F9C4C25C92;// 0x1C20(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_05FB639A4C979BB9D42E8498BD33A06C;// 0x1C68(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_243E415443B11B516E8F8880DE967696;// 0x1CC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2D7874854273F40A740DB1B388B4F036;// 0x1D08(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B2F471B2438350E521D031893FA3A01C;// 0x1D60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82DE1D1E429B3EC3803BB9B77E62073B;// 0x1DA8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4DFEA8994BE8183C2AAA929FAF57CB24;// 0x1E00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5360DDD74AF16358B592D6907865F970;// 0x1E48(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FBEAE04D4AB8C11998F58D9FFB4A06CE;// 0x1EA0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_869BDE454EC3FDE558111E8BFAE93151;// 0x1EE8(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_22507F1848562A1AF224979F2B8CBBC0;// 0x1F98(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_68B0B730433874A6E2DA94A779FC3D2C;// 0x1FD0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D9F5F2DF45BCD8BAB7BF0BBB4F9AAA51;// 0x2040(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A570137F425B84EF962CDBA5A1E6A176;// 0x20F0(0x0058)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4795AAAD43B2A17B1AF232ADB1825AFF;// 0x2148(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4ED67A614F16E145C86CBEA35196136F;// 0x2250(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9437995F495BE9BC1B82C987324C1D05;// 0x22A8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C9A2ACE345E61BDC655B7FB49CA5E7DC;// 0x22F0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3345D7C54E122D212C2F698F9C4C25C9;// 0x2398(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6F5BC345450A12784D8F87A6A19124A9;// 0x23E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4F134FE24CB83EB4BC58FC8E62091811;// 0x2420(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82789DF6458F01D5F556D390F90B6167;// 0x2460(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1A873C5F4C4B86926131DDA61C3F42AF;// 0x24B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A52C1B843AA6FC07B001CB2296F0AD4;// 0x2500(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D46E92824B64C7170631528AD18B77202;// 0x2558(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BC15BAED48E24F4CC719068E38D0E302;// 0x25A0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0C872364429A7C29536A3C9E06439031;// 0x2648(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B976B710493EF408B68794B70C07F9C4;// 0x2690(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_076BABF54A21D844310FBEA603AF0743;// 0x2738(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC06665B4CDEA44E725D5C91B31E77AB;// 0x2780(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A37A786C4D2F7B64C86BC98C1EDFA24F;// 0x27C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9ECE430B461A89BE3D9036888A112744;// 0x2800(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF7ECFBA467395D82B5BD5AA0AE40508;// 0x2840(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A886307541521D7C533942BE0B4B257B;// 0x2880(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1B4EEC9448AF0EDD066CD89678303FBE;// 0x28C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF334D9142256C348464ADBA1944EEF4;// 0x2900(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_164363FA4E19D074FB0805A57A22F55D;// 0x2940(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C277CC4B47A12D02A2A3468DA7A865F7;// 0x2980(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D379320D4EA0C7B9CAE0A2B9251F9B44;// 0x29C0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B22D996E4BFD02ACAD48E58239301DD0;// 0x2A00(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_56C828FC474922FAB031E994E10D21FC;// 0x2A58(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8E92373E497D50CFD489448E1BDF0D93;// 0x2AA0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_91030B4947860E3AA66E429FD09515ED;// 0x2AF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6163DC4E459F0AD936DD169E739389EC;// 0x2B40(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_80BD03B742BB0CD97E6E449E19E85713;// 0x2B98(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1E286CF840D7D3012D78F2A626CC7267;// 0x2BE0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_600CA90D4C8988B0638A02979F23B519;// 0x2C38(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E4B799224162C2751FC2178121B94459;// 0x2C80(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_703599584DEBCDCA2860DF8A1338CBAE;// 0x2CC0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_619A70CE4ADC86622048E5A8D154F44B;// 0x2CF8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3E570EAF43DD4242D5D2D6B8870750A1;// 0x2D40(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C5F0C2E243CAA1A789558384ED352889;// 0x2DE8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F8FA61A445EAB3E763D8D78B0998CD7A;// 0x2E30(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_EC8FC4C44DFF56DA5066189CBF227C78;// 0x2ED8(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC97545C448E1D4350F93A80D0D9F276;// 0x2F48(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FDF859E4DF20300A8BC028A89D9A702;// 0x2F88(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_253FEA80468B79AC0F61D0B0EFDFF7AC;// 0x2FC8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D2CF643428498890674C0802E023D4C;// 0x3008(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99FC788D438155EAFD7B1E91329B4B19;// 0x3048(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10FC25604347C74B7B5000821FE389C3;// 0x3088(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C98B1994C05E4252F2FE4A4E535AEA3;// 0x30C8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_566CEE0F40297EA1F3C608A70BC25ED7;// 0x3108(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1827B73F4E5CBBD0C18C47B5DA58731F;// 0x3148(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3344726E4C012C372AA6A1AE2D5D4D7F;// 0x31A0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F2F25BA4B237657236CDE9100C291AC;// 0x3250(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_838978C14E639E314854248E855C2286;// 0x32A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E7D796D54CA3857A38B886BF42BF3F81;// 0x32F0(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_20A45B894E7C018126C5AC88DE1EE296;// 0x3348(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EEC2DC9647C111F8129BA4817B440BC8;// 0x33F8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7035E93A4211B3044622C18F1EBBD7A1;// 0x3450(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C88C50A4B469DC9B0A6B49A9104E092;// 0x3498(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_514D841540146AA4453B5594FBB7950E;// 0x34F0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_500D2BCB4FCF00C14A6CBBB906016DC2;// 0x35A0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_03FA4AA44D85E207016FE896B6CABAEE;// 0x35F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87FF318D4C4237A7688AC59F6AFD96C5;// 0x3640(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B1F4587F41851B3889F08FBE5000C43E;// 0x3698(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_81B6BD3943D9A96BD9ED5E8ED3982D58;// 0x3748(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EA33407A4592EAC76556A5A51392E06E;// 0x37A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4353D6C24348B435736EA09DFE28ABC8;// 0x37E8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BA9F7140425B60C3B85C409581D83175;// 0x3828(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A304CA442D7020DD2D0B4BDD79E924D;// 0x38D0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE02;// 0x3910(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FFF40B914B8A799EA675BFB84FBE5137;// 0x3950(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B2;// 0x3990(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6B94D46343C61DC2E6BD84B8951A3C9E;// 0x39D0(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_47F17E3E486C8ED797A24AA4E6192EC8;// 0x3A10(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C3F81EB14D8770E016695D9287B605F6;// 0x3B18(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_EE61AE88436D00DF575F3BB01394F225;// 0x3B60(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_236FC15043BB18301DFD34BE324139A3;// 0x3BB0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D177FF4840AE633809077D9B695DA0032;// 0x3C60(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B7E16ADE403A6333FF78B8B9FB2A559D2;// 0x3CB8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_FEAB4C4C461DC829302313A7C6EA7894;// 0x3D00(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4288FE294EF68AB83F23C9AAF886C7B4;// 0x3D50(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_978E65D8495D427923D848A301B93EAA2;// 0x3E00(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5FF04AD44D3FBF54566AD1B8C61BD21F2;// 0x3E58(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9685FA7B46FF7C1922296B90AC7F49CE;// 0x3EA0(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3D4602A142004CAD75AC138D2EBC283B;// 0x3F48(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F297FAA147B82EDAA2B3AD97A8EFF67C;// 0x3FB8(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BF226C414749E9403F5BD888674BA08A;// 0x4068(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C5940C324CF511D47C8B7DB4092691EE;// 0x40A8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A94E45A04B118F618546E299E65C0309;// 0x40E8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_59E1FF394C2F677D17B70592183B6EAE;// 0x4128(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84D6B52B49C3C1793E5E32AEB6B5CD71;// 0x4168(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0173140A4291E7A0CA817B92823410AA;// 0x41A8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C966EDC440B33018C6C8BE819C1377B4;// 0x41E8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA68A0674B4D53F5C21B0F884ABD3733;// 0x4228(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D2C99E544D20900019B3D8A13F9B3416;// 0x4268(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D09209FD4CDB64C10158C899790D3E0A;// 0x42A8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90A1031D41CD1E055B5CB6A2C506D545;// 0x42E8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB5A066D4402E61D723CA2856742B5DD;// 0x4328(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8D77246C48209E160156DF97BC612EDB;// 0x4368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D2DD3AB4A40CC2DA18F2CAEF0CA47DE;// 0x43A8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52488D95455B906211C0669853531375;// 0x43E8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51864FDF473394B24ECDCB83FBB887E4;// 0x4428(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3CD83675433917B40D4D62BDB4D13221;// 0x4468(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71180B5848E0B5D260418595D40B4448;// 0x44A8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_95F7A5FB4DB3C51B2543519972C02E9E;// 0x44E8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7FC1057546FB2889955A859671E6E3E5;// 0x4540(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB336C0F4270EC2DB0A07DAFFFC077A1;// 0x4588(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2F7E83A3437E68364E83518F80D1C1C8;// 0x45C8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52D8AB254D0CF5FA9F14A6BFAE740615;// 0x4608(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_90FE3AFC49FED9D35A8F3EB2844E065E;// 0x4648(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D7CD513546AB5D4C6360D0AFF2E9A523;// 0x46A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B7FDDCEA4249B372176264BFBC13C15A;// 0x46E8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_28B08CE84822FC605AA317B815A60A49;// 0x4740(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7B861B934934EC86C4BE5C969595D582;// 0x4788(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0FEE083045B6EA866030209286B174E0;// 0x4830(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2ED4E3B64536DFE44C5A7BBF0F3F708C;// 0x4878(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D05FDBB8477A64B783CB8A97107BEA81;// 0x48D0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_31E2E07349427E811B51BABE9805AD21;// 0x4918(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0FCE472C446F0D255B1AC7B52D983D5F;// 0x49C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4159B53941067EB089D9C4A516231D15;// 0x4A08(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FEE3EB2E4165A568E45BDD8F04A6A786;// 0x4A60(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B10366A24250C87443FEFBBAC96524B1;// 0x4B10(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_451635DC487EB9898B86B48A9926911B;// 0x4B68(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E84311F8441979BC7A63E4BDA0A0321F;// 0x4BB0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C48AB80D4014ED059F6B66B007E584A6;// 0x4BF0(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4915618749D83FF3E78ABC895063FBE3;// 0x4C48(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1598EA0F4AC57CEB06F9CBA50E9A0ABD;// 0x4CF8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B976D67745A0AC1EEB8AE0855A2DC8B4;// 0x4D50(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50C81A964960643D6B2889BCB11E4EFE;// 0x4D98(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_191FF31F40C4140B0B776DBA8C212FC7;// 0x4DF0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_90E8A20343D4BA9A4FB59BAD2013D387;// 0x4EA0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AEA41FA7464DB515ACD01FB03EB782D3;// 0x4EF8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_77C33F8A4707927E099F9181D3FB9D6B;// 0x4F40(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_01E5FAE2457D3F4C1EEFF88DE1A68781;// 0x4FE8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A87024E4FD0567EDE346397764E6600;// 0x5030(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_467FD7814156A62C1E9688877ECA2233;// 0x5088(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4DA0DB2C4D170240A5D522AA7784325C;// 0x50D0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_786062CF4B2965D0058B9BBB6E5FA5D0;// 0x5110(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_07C9E32B410A3928CCEB0FA1E37F9CDB;// 0x5168(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E9F3DD3D41BC39DF21039C9C3B845CE8;// 0x51B0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71D72A5A4A5DCBA523E96D8BB42FEB34;// 0x51F0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_04F89A414E8BA3807388CCB694A13FEA;// 0x5248(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20CD9F5D4D9CFD273FF16184453956A3;// 0x5290(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B0A81A9C4E4A8758E5329B941851FAB9;// 0x52E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_57964E5640053928C566609C0C476E85;// 0x5330(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C6A7DB4F487C5016D69887A7D72D80F0;// 0x53D8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CF74AAA2458F68ECF87EAEB7667A1BD2;// 0x5420(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AB83E9944E3A2843BF04DDBC14A161A7;// 0x5528(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41C2C8EE41B604695AE654BA23C29F30;// 0x5570(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1433896B422DD02F722E888BCA82B256;// 0x55C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0;// 0x5610(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B;// 0x5650(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D177FF4840AE633809077D9B695DA003;// 0x5690(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B7E16ADE403A6333FF78B8B9FB2A559D;// 0x56E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_978E65D8495D427923D848A301B93EAA;// 0x5730(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5FF04AD44D3FBF54566AD1B8C61BD21F;// 0x5788(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9686E1AB453C8231555FA691ECE91566;// 0x57D0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D46E92824B64C7170631528AD18B7720;// 0x5878(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1DEF106A4629BE203143D2AB248EBAE2;// 0x58C0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99879163458DB39050F11B8F371FC8B5;// 0x5968(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3C843E5464DFEE227EA7EACF913C662;// 0x59B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AF927BE141F1A4D6155538990D89CC68;// 0x59F8(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A9A3154C4CBDF8C2A085818FCC81D12A;      // 0x5AA0(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E0E254734C2A00A8D9A8CA867319C113;// 0x5B00(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A367591D450BE747E74B30B8A52EDB2E;// 0x5B48(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_59F8102F4DE642B2D238E9B964E5BF59;    // 0x5B90(0x00C0)
	struct FPetAnimationDataBeingHeld                  PetHeldAnimations;                                        // 0x5C50(0x0160) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPetAnimationDataRoaming                    PetRoamingAnimations;                                     // 0x5DB0(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_PetParrot.BP_Anim_PetParrot_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_AF952B00499FE620CC7975B32FDA5512();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_B7FE73C74593131C3F60ADA71AC7B8A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_464010C0433FC0EF1826E2B41EBB7D8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_333A7D1F4100179BF59938B655F1AF2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_C3FB3D2943E676833683C4A85ED2E535();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_7BC35DC04D4C99E23EFAB9AC386323B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_CF20C50A45E2BB601AB285AA8CCEA8C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_C3C89C654FC9811C7B2AC8AF7809A459();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_8163D8404FBAB7B56325828383E60895();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_DBDFBFE44A2C82FD9A8EFBA9D5A8DD03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_A6F765B7484AFAEB309765B1ECB6E90B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequenceEvaluator_CC796EE4423E27C89BDB5294EDC6A464();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_CC07F7DF414090601BD4DDADBF099B5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_5FE5159547262445830498BE2823DF85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_FB6CF837496A9EF949E619ADBE1459A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_B0E3F7B24F0234AECA989CA00A8C885B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_B14539584BFCE276D019FEAECC855CE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_2DF3E3904E4F6301BAE3AFAF6F43D35C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_E7F3B60241ED331082E83FA0441022E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_1661785B4F68BD2829F17782D128CE45();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_33C81F3242BCBB8CDE426CA2CA7F9E8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_A12F59C24C7F61D41F89A38C6002F12D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_CD62F3E94A7F7721F9AA41A5E0A9216A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_0EC04F824CF6CC32ABBF7882475B199C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_43E3AC6249652231BCB6029263CCB05F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_1E3E49CA44EFF8D6C037CEBB16FC47E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_9CC6C16E4E05DD1003CC4A9DF57EC60F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_DC916AD94FBAAF5656B7A682B1AC9F5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_98A1C6CB4962958B60E2208DB4FE2FD0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_94F406CE48A82A4A68A38196E3A4EA79();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_7ED235FB41CF8AA203E5648C9E0F8B2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_3F37CC684E640063F02DADA7F082BF53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_852B99A143D18E9FE5A18D8CEC85441F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_6F5BC345450A12784D8F87A6A19124A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_4F134FE24CB83EB4BC58FC8E62091811();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_82789DF6458F01D5F556D390F90B6167();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_9A52C1B843AA6FC07B001CB2296F0AD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_DC06665B4CDEA44E725D5C91B31E77AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_A37A786C4D2F7B64C86BC98C1EDFA24F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_9ECE430B461A89BE3D9036888A112744();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_FF7ECFBA467395D82B5BD5AA0AE40508();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_A886307541521D7C533942BE0B4B257B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_1B4EEC9448AF0EDD066CD89678303FBE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_AF334D9142256C348464ADBA1944EEF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_164363FA4E19D074FB0805A57A22F55D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_C277CC4B47A12D02A2A3468DA7A865F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_D379320D4EA0C7B9CAE0A2B9251F9B44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_DC97545C448E1D4350F93A80D0D9F276();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_3FDF859E4DF20300A8BC028A89D9A702();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_253FEA80468B79AC0F61D0B0EFDFF7AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_0D2CF643428498890674C0802E023D4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_99FC788D438155EAFD7B1E91329B4B19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_10FC25604347C74B7B5000821FE389C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_7C98B1994C05E4252F2FE4A4E535AEA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_566CEE0F40297EA1F3C608A70BC25ED7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_1827B73F4E5CBBD0C18C47B5DA58731F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_4F2F25BA4B237657236CDE9100C291AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_E7D796D54CA3857A38B886BF42BF3F81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_EEC2DC9647C111F8129BA4817B440BC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_7C88C50A4B469DC9B0A6B49A9104E092();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_500D2BCB4FCF00C14A6CBBB906016DC2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_87FF318D4C4237A7688AC59F6AFD96C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_81B6BD3943D9A96BD9ED5E8ED3982D58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_0A304CA442D7020DD2D0B4BDD79E924D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_FFF40B914B8A799EA675BFB84FBE5137();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_6B94D46343C61DC2E6BD84B8951A3C9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_BlendSpacePlayer_47F17E3E486C8ED797A24AA4E6192EC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequenceEvaluator_EE61AE88436D00DF575F3BB01394F225();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_D177FF4840AE633809077D9B695DA003_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequenceEvaluator_FEAB4C4C461DC829302313A7C6EA7894();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_978E65D8495D427923D848A301B93EAA_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_BF226C414749E9403F5BD888674BA08A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_C5940C324CF511D47C8B7DB4092691EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_A94E45A04B118F618546E299E65C0309();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_59E1FF394C2F677D17B70592183B6EAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_84D6B52B49C3C1793E5E32AEB6B5CD71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_0173140A4291E7A0CA817B92823410AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_C966EDC440B33018C6C8BE819C1377B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_CA68A0674B4D53F5C21B0F884ABD3733();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_D2C99E544D20900019B3D8A13F9B3416();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_D09209FD4CDB64C10158C899790D3E0A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_90A1031D41CD1E055B5CB6A2C506D545();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_EB5A066D4402E61D723CA2856742B5DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_8D77246C48209E160156DF97BC612EDB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_3D2DD3AB4A40CC2DA18F2CAEF0CA47DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_52488D95455B906211C0669853531375();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_51864FDF473394B24ECDCB83FBB887E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_3CD83675433917B40D4D62BDB4D13221();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_71180B5848E0B5D260418595D40B4448();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_95F7A5FB4DB3C51B2543519972C02E9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_DB336C0F4270EC2DB0A07DAFFFC077A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_2F7E83A3437E68364E83518F80D1C1C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_52D8AB254D0CF5FA9F14A6BFAE740615();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_90FE3AFC49FED9D35A8F3EB2844E065E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_B7FDDCEA4249B372176264BFBC13C15A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_2ED4E3B64536DFE44C5A7BBF0F3F708C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_4159B53941067EB089D9C4A516231D15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_B10366A24250C87443FEFBBAC96524B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_E84311F8441979BC7A63E4BDA0A0321F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_C48AB80D4014ED059F6B66B007E584A6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_1598EA0F4AC57CEB06F9CBA50E9A0ABD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_50C81A964960643D6B2889BCB11E4EFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_90E8A20343D4BA9A4FB59BAD2013D387();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_786062CF4B2965D0058B9BBB6E5FA5D0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_E9F3DD3D41BC39DF21039C9C3B845CE8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_71D72A5A4A5DCBA523E96D8BB42FEB34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_20CD9F5D4D9CFD273FF16184453956A3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_D177FF4840AE633809077D9B695DA003();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetParrot_AnimGraphNode_SequencePlayer_978E65D8495D427923D848A301B93EAA();
	void BlueprintInitializeAnimation();
	void AnimNotify_NewIdleA();
	void AnimNotify_NewIdleB();
	void AnimNotify_UnEquipCompleted();
	void AnimNotify_AssignUniqueAnims();
	void AnimNotify_ExitTakeOff();
	void AnimNotify_NewBaseIdleA();
	void AnimNotify_NewBaseIdleB();
	void AnimNotify_PetLookAt_On();
	void AnimNotify_PetLookAt_Off();
	void AnimNotify_StaticBaseOn();
	void AnimNotify_StaticBaseOff();
	void AnimNotify_NewGiveIdleA();
	void AnimNotify_NewGiveIdleB();
	void ExecuteUbergraph_BP_Anim_PetParrot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
