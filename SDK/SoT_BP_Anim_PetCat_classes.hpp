#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_PetCat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_PetCat.BP_Anim_PetCat_C
// 0x4E20 (0x56D0 - 0x08B0)
class UBP_Anim_PetCat_C : public UWieldablePetAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_23E9C4514779356855C103BCD37312A8;      // 0x08B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C447884F4596B0F3167CC6B2E7DAA505;// 0x0900(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_464010C0433FC0EF1826E2B41EBB7D8F;// 0x0940(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C306CF0249D0FE50472529A943F84941;// 0x0980(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A1F46D1847085C4FAC5327A8B6D9F16A;// 0x09C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF20C50A45E2BB601AB285AA8CCEA8C6;// 0x0A00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DBDFBFE44A2C82FD9A8EFBA9D5A8DD03;// 0x0A40(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_40037D0640FE22FC4BF877978E54DC7B;// 0x0A80(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DFFCD614432BD9CC63E01D98C9A5DC92;// 0x0AD0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2A193E5545894EA81AE7ECA7EC5CE1F6;// 0x0B18(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BBEF6404084AD03446CDCA45FD4054D2;// 0x0B78(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83E40CDC4A7BDB92258145AC8187E56A;// 0x0BC0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A6D04C364A422B656102FB806E48D0E4;// 0x0C00(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CCC1B1524984C535B85947A987165825;// 0x0C60(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_56500AEC4BDB457D6C8F43B9E4884AFF;// 0x0CA8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1485B3AE4CB31265DD7B38A622C83A3A;// 0x0CF0(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9B5AC79B4E09534EF49104B97B5C3A5D;// 0x0D80(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_570F6E0F49F277407A3D8B8832AD2231;// 0x0DC8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3DD2FE264186A50888C959A9FDF14899;// 0x0E08(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09808AAC49DCDE5F67474C8DEBC8B8B2;// 0x0E48(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AC4D43664123A481E465539336516B10;// 0x0E88(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C32C57AF4615F14246AE26893F0278EF;// 0x0EC8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6ADF1DC04106EF4AE0ACA1B1BCFCABE6;// 0x0F08(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0B180FB146ECFF4FDC8B77AA09BB73E0;// 0x0F48(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2238B0A347459B2012C0A3AD551A0382;// 0x0F88(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6DA4416649E813BCFC7405AD677C95B0;// 0x0FC8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_752E68EC4C1B775295D2EFB2D6BED835;// 0x1008(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_039BFE6E4A3C59B37EB1B2AAAD291A1E;// 0x1048(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_86B4DBFC4984A70F8FBAA99A554375DD;// 0x1088(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EECE1E5942E3F2BF1D942FAFA6D127E3;// 0x10C8(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9DCC6049472EC19FEAA10E9365F3D867;// 0x1108(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E24898E743D3FAA919494DBFA9D7CAA1;// 0x11B8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CBFAD99540DC0C234ACBD180A8769CA4;// 0x1218(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3E9A9D1D42F64D0D860707A43C2F81C6;// 0x1278(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1D3A612442E562FC492D339B1F2F275B;// 0x12C0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5CA65063491075C6507C4FA21FC69715;// 0x1320(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_FB3354AB4409EEDB603F5BB0FD1C87C5;// 0x1368(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9D242B2E46C1A1F3D5C6A79A33304B34;// 0x13A0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A1C05E5B426856DE2361E582CEE41CB7;// 0x1410(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4F518B3445DF89D8B14F34A4D1B62D71;// 0x14C0(0x0060)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_59B38CC744ACA04A3B8A4EB34D12CCF9;// 0x1520(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D494F386497B43B4E11A2B9DE10E166D;// 0x15E0(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D1E0AE794D2A14E8545F9BAEE257F62D;// 0x1640(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F8A91B5C4619FB39404369B3F3ECF24C;// 0x1750(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8910E96459EE9B13D9319823E3E343F;// 0x1798(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE7A3FE54EBAA6FE4810DDB2EF312941;// 0x17D8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7EBB041433C2EA60FA96798501326F9;// 0x1818(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63C81D9F4AAB93F7CE54AFBFDC56165A;// 0x1858(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_95C52B124EB0FA55F2A2A397EFB4924D;// 0x1898(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A32515B740514955947CB58148766A41;// 0x18F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C884C98146D451D83A9CAF89B64C18D9;// 0x1940(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9885113E4A6D748165AA049AD2404AEC;// 0x19A0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6EA70F5642C78E75AA91C98EE0900858;// 0x19E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2C05901541134C2469F82383BB9DC032;// 0x1A30(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_50441DBC4000266950F8E2870C850029;// 0x1AD8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1F86B03D479EC06A8C8A93A26CDFA07E;// 0x1B20(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BBEF6404084AD03446CDCA45FD4054D;// 0x1B80(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_72890467496C3CB1EC044DB9700CA8B6;// 0x1BC8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8C9121C1457E411EC2E8E9BCD18F5596;// 0x1C28(0x0048)
	struct FAnimNode_WeightedLoadOnDemandSquencePlayer AnimGraphNode_WeightedLoadOnDemandSquencePlayer_5FC0E5A84BA9C04EB2FC01B00A1B3F13;// 0x1C70(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0C872364429A7C29536A3C9E06439031;// 0x1CE0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B976B710493EF408B68794B70C07F9C4;// 0x1D28(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_076BABF54A21D844310FBEA603AF0743;// 0x1DD0(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D1ADB8414BF57B9FC6491EA709C73B4E;// 0x1E18(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC06665B4CDEA44E725D5C91B31E77AB;// 0x1E88(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A37A786C4D2F7B64C86BC98C1EDFA24F;// 0x1EC8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9ECE430B461A89BE3D9036888A112744;// 0x1F08(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF7ECFBA467395D82B5BD5AA0AE40508;// 0x1F48(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A886307541521D7C533942BE0B4B257B;// 0x1F88(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1B4EEC9448AF0EDD066CD89678303FBE;// 0x1FC8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF334D9142256C348464ADBA1944EEF4;// 0x2008(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_164363FA4E19D074FB0805A57A22F55D;// 0x2048(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C277CC4B47A12D02A2A3468DA7A865F7;// 0x2088(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D379320D4EA0C7B9CAE0A2B9251F9B44;// 0x20C8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45DF3DEF4081DEA28C6D0B99CEFC9E0A;// 0x2108(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_75181CAA43913D2C146B2B9042D8A816;// 0x2168(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ECDB180442198426CF2BC0ABB0067D6C;// 0x2218(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_56C828FC474922FAB031E994E10D21FC;// 0x2278(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F8645269426C466CCCD470878E439D82;// 0x22C0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8369CEBF42BCA2AD24622A9AC450A6BA;// 0x2320(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D273771B41F2A7C1067CBAB31629DD20;// 0x23D0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_91030B4947860E3AA66E429FD09515ED;// 0x2430(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A38560184D4D148BA8108AB2AF371094;// 0x2478(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EFC5E49B47BEA42A1810DEA4E8202E75;// 0x24D8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6ABFEBAF4F5855C79F8E4EA36F085DFE;// 0x2588(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_80BD03B742BB0CD97E6E449E19E85713;// 0x25E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD1E4CEC416017B28FEA969081BFD013;// 0x2630(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_600CA90D4C8988B0638A02979F23B519;// 0x2690(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E4B799224162C2751FC2178121B94459;// 0x26D8(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_2985368F4102C783FF74BC97C601E90C;// 0x2718(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_619A70CE4ADC86622048E5A8D154F44B;// 0x2750(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_44A5ED524908ACE4860239A0D64E22AF;// 0x2798(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C5F0C2E243CAA1A789558384ED352889;// 0x2840(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D288B2CF4471F065A379BCA1F233CB23;// 0x2888(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_BE6348D2481D00730A1C19936DCF08F0;// 0x2930(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_82E5D426445F1D51196F5C9BE8BEE293;// 0x29A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0;// 0x29E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0EDE89A482F035A29EA2D86C20E6B90;// 0x2A20(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B;// 0x2A60(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76D021F047BB19C0732B289AE48A375C;// 0x2AA0(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_99B78F9F45A4E257503112BA00451E70;// 0x2AE0(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C3F81EB14D8770E016695D9287B605F6;// 0x2BF0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A728728E44600E77B398CDABC6A37B98;// 0x2C38(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_586B011C45ADD754B195F7999C42CA17;// 0x2C88(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_39B6BBA9411EA0B0380E77B8A34EC5AC;// 0x2D38(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B7E16ADE403A6333FF78B8B9FB2A559D;// 0x2D98(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C081824F452DCC26187CB7BD400D881E;// 0x2DE0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_19D549D242619559515C88950A0C9C20;// 0x2E30(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6B00D9D74AEEC8CEE043D7B01A60B785;// 0x2EE0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5FF04AD44D3FBF54566AD1B8C61BD21F;// 0x2F40(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9EE7794840EEFF1692263084CDCFAA41;// 0x2F88(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_375B182343B34140FEAA59994E68B168;// 0x3030(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_928B6CC04D58CE8C8FC6EA80F1B393AC;// 0x30A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5EC8A20C42166E924E69789FD979C279;// 0x30E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BBB4EBF24D72DCD1D2D3AD8175C014D7;// 0x3120(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_662C2E8C445C14085CC933A890EAE20F;// 0x3160(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF65A29D4302DF535C4755B36B10AC10;// 0x31A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ECA7D60E40DA509EE14210AE640EB9A9;// 0x31E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A15F2390423ADAFF7DA850AFE60DC04C;// 0x3220(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC97545C448E1D4350F93A80D0D9F276;// 0x3260(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_46006B68409585B51C5D69A82D473913;// 0x32A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FDF859E4DF20300A8BC028A89D9A702;// 0x32E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_253FEA80468B79AC0F61D0B0EFDFF7AC;// 0x3320(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1EE3E5124EFA7F85F05CBEBD0D6BEAE1;// 0x3360(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_566CEE0F40297EA1F3C608A70BC25ED7;// 0x33A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D2CF643428498890674C0802E023D4C;// 0x33E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CD1D3B28402B93895D23E29868242B28;// 0x3420(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6EED1FE14247C1F4199A2F8AAAA77794;// 0x3460(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C98B1994C05E4252F2FE4A4E535AEA3;// 0x34A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4B7FC23D410E6472E783B9959E31C8CB;// 0x34E0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8E89EC3243FB9FE6456766A413D836C2;// 0x3520(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7035E93A4211B3044622C18F1EBBD7A12;// 0x3580(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D1789E8440B4DF05B6E4948FFD9D30FA2;// 0x35C8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F0AB504740BD008C92834AA289BB6EC5;// 0x3608(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FB671A29407E2DA80A863782F5DB7CA3;// 0x3668(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D1789E8440B4DF05B6E4948FFD9D30FA;// 0x36B0(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_0559C0114CD09E989BDDCAAB307732C8;// 0x36F0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_39DE8CBA463B6A2FAC3744A50D98D19F;// 0x3728(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1B7BB5144E03ECF65F3A37A0E2DD50F9;// 0x3770(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_838978C14E639E314854248E855C2286;// 0x37D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F2FE6E604ED6402568C181B8EB41193C;// 0x3818(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7035E93A4211B3044622C18F1EBBD7A1;// 0x3878(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_845E11024C61DD866864FBA39ABCB50F;// 0x38C0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A78C1C694091958B23D76B8B23297A8B;// 0x3920(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CB5F6E3A4BA556E2C1F3EAB0AF9AC401;// 0x39D0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_03FA4AA44D85E207016FE896B6CABAEE;// 0x3A30(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C4618B74B6EBDFA6BC675ABAD78F583;// 0x3A78(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2B051BCE4DE61ED56B8DDD8ECC59BE0A;// 0x3AD8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B22758C45958DF8BF51E0B656FFA3D4;// 0x3B88(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EA33407A4592EAC76556A5A51392E06E;// 0x3BE8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4353D6C24348B435736EA09DFE28ABC8;// 0x3C30(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3F7334DD464F2D098B6F1685009427CC;// 0x3C70(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E678F1A742B2FD45B7D9C6AFA035DFF5;// 0x3D18(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_470A302846B195655DBB91BB17EBF9B4;// 0x3D58(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C0C91D0D43139361B9E105909CF12E8B;// 0x3D98(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8761D1CA44A75A216B6C3695957BD3F7;// 0x3DD8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_97E5EE0F4EA0FBDCBF69959191C9E7E4;// 0x3E18(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_04AC50B4405EC9263FCE0C980534D1C1;// 0x3E58(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4EBE98684C4E75361F7B2D9B976FC1B5;// 0x3E98(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B388DED04191E848C8AA9EB06FC18664;// 0x3ED8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E68EB5FC4779C1EA9972FABE42116AEC;// 0x3F18(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C966EDC440B33018C6C8BE819C1377B4;// 0x3F58(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4322A58E462C712CD3D9B495C56BF403;// 0x3F98(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AB2A35AA4FC343113B1F0DA95CE8B535;// 0x3FD8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CAD81E104941D5ECF734E19A87826794;// 0x4018(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB5A066D4402E61D723CA2856742B5DD;// 0x4058(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51864FDF473394B24ECDCB83FBB887E4;// 0x4098(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71180B5848E0B5D260418595D40B4448;// 0x40D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9AAE2FF3442D30799190CD99AA010882;// 0x4118(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_129C15AA430B5A0263C0B49906D7A3E0;// 0x4178(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66C0764D4A7C9FE325175D88870D04EB;// 0x41C0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D8A2FB7F4BF17FA153026CBF4E746905;// 0x4220(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44FDB6EA43C5F17EAA9454B22A8DD542;// 0x4268(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_08E045804A4E1CD49138518CF8FAF695;// 0x42A8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D65373D40AE72DE8D9F688DF07C114E;// 0x42E8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_669E86774F6D48CAD9E7B3AC83755140;// 0x4328(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_963B2A0F4727ADB1B8B46184F7C31C02;// 0x4368(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_393477B24BB798D389CFBD92A8BA1828;// 0x43A8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_893A9D924F05582ADEB8069530D37550;// 0x4408(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AA7A261941E1545375FC88B2B8926CF6;// 0x4450(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1C1CB380438D7CA95C58C9A593B8AD2E;// 0x4560(0x0048)
	struct FAnimNode_WeightedLoadOnDemandSquencePlayer AnimGraphNode_WeightedLoadOnDemandSquencePlayer_BEEF36214410F96032C647BA4D8EFEDB;// 0x45A8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3D9F4A51417F81B02A5852A673126006;// 0x4618(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1F9E4FC44D0FDE7349219E8743F23BB3;// 0x4660(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D86BD52B4288AB6BF586A097EEC2ED8F;// 0x4708(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_64884D724EB61F837C6F06807026D71D;// 0x4750(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_49EAB4494995A4B8009317BCF596548E;// 0x4800(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BD5D4DCE414D158F275FB885709447EF;// 0x4860(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A658031406C1B61413A50B73D93AF0C;// 0x48C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3ADCEDBC4566D219D45CBFB276AA1447;// 0x4908(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2A7614814D4A3D6C4128228C169BDFED;// 0x4948(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C824F6764E232131F12605BB10C86926;// 0x4988(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_8225F8EF45161287EBED57A3FB9D6AFC;// 0x49C8(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_349CAD7148B7878B975E7991FCF77A06;// 0x4A00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C028DD84CE5DB2580DF559BEDF27DD0;// 0x4A48(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F181BBA8421BE9B6B98EB398AF12CE09;// 0x4AA8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF2B5F6A454318664B15E893B8A26A57;// 0x4B58(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0827967F4209756104DC8D9FB546B3EA;// 0x4BB8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E4AA6EA548648C6BA416CEBDDD6F32C0;// 0x4C00(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71B253FA4D86045DC87E08AE86E21C58;// 0x4CB0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C68C31BC43698E087985ECAB59C26F0F;// 0x4D10(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D5E56D6449BDD051FD7EEEBDA1BED0B4;// 0x4D70(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_74AEEB91485327020363F2BB8579B67F;// 0x4DB8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F0E3193E49F04B21F48F9A8002671E0E;// 0x4E60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D117B8B245452F48CD5B51926625FD3D;// 0x4EA8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_38118D4945530B5D3203B5BB62CA95B7;// 0x4F08(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4DA0DB2C4D170240A5D522AA7784325C;// 0x4F50(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AADCFBD9496BF9C8CF12B0A5F4462003;// 0x4F90(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AB83E9944E3A2843BF04DDBC14A161A7;// 0x4FF0(0x0048)
	struct FAnimNode_WeightedLoadOnDemandSquencePlayer AnimGraphNode_WeightedLoadOnDemandSquencePlayer_4ADA1B274424E6B72F5907A9BE8F5406;// 0x5038(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D46E92824B64C7170631528AD18B7720;// 0x50A8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1DEF106A4629BE203143D2AB248EBAE2;// 0x50F0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99879163458DB39050F11B8F371FC8B5;// 0x5198(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FBD5BA41406099B5FA04BAA7D6BAD071;// 0x51E0(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3C843E5464DFEE227EA7EACF913C662;// 0x5240(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F9A3D2A1460E5BDE5E749CBC309F3A4B;// 0x5288(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F514B49842643F0820EA4D96D0424A88;      // 0x5330(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_90E9BD5B486F2B1B1850E89A855260A7;// 0x5390(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FA7001F4442FBEDBA751AD95B8AE2826;// 0x53D8(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_AE45709F402C66D420335F8959F48E85;    // 0x5420(0x00C0)
	struct FPetAnimationDataBeingHeld                  PetHeldAnimations;                                        // 0x54E0(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPetAnimationDataRoaming                    PetRoamingAnimations;                                     // 0x5630(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_PetCat.BP_Anim_PetCat_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_C447884F4596B0F3167CC6B2E7DAA505();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_464010C0433FC0EF1826E2B41EBB7D8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_C306CF0249D0FE50472529A943F84941();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_CF20C50A45E2BB601AB285AA8CCEA8C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_570F6E0F49F277407A3D8B8832AD2231();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_3DD2FE264186A50888C959A9FDF14899();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_AC4D43664123A481E465539336516B10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_C32C57AF4615F14246AE26893F0278EF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_0B180FB146ECFF4FDC8B77AA09BB73E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_2238B0A347459B2012C0A3AD551A0382();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_6DA4416649E813BCFC7405AD677C95B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_752E68EC4C1B775295D2EFB2D6BED835();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_039BFE6E4A3C59B37EB1B2AAAD291A1E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_86B4DBFC4984A70F8FBAA99A554375DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_EECE1E5942E3F2BF1D942FAFA6D127E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_DC06665B4CDEA44E725D5C91B31E77AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_A37A786C4D2F7B64C86BC98C1EDFA24F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_9ECE430B461A89BE3D9036888A112744();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_FF7ECFBA467395D82B5BD5AA0AE40508();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_A886307541521D7C533942BE0B4B257B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_1B4EEC9448AF0EDD066CD89678303FBE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_AF334D9142256C348464ADBA1944EEF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_164363FA4E19D074FB0805A57A22F55D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_C277CC4B47A12D02A2A3468DA7A865F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_D379320D4EA0C7B9CAE0A2B9251F9B44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_928B6CC04D58CE8C8FC6EA80F1B393AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_662C2E8C445C14085CC933A890EAE20F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_DC97545C448E1D4350F93A80D0D9F276();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_3FDF859E4DF20300A8BC028A89D9A702();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_253FEA80468B79AC0F61D0B0EFDFF7AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_566CEE0F40297EA1F3C608A70BC25ED7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_0D2CF643428498890674C0802E023D4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_CD1D3B28402B93895D23E29868242B28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_6EED1FE14247C1F4199A2F8AAAA77794();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_7C98B1994C05E4252F2FE4A4E535AEA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_470A302846B195655DBB91BB17EBF9B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_C0C91D0D43139361B9E105909CF12E8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_8761D1CA44A75A216B6C3695957BD3F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_97E5EE0F4EA0FBDCBF69959191C9E7E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_B388DED04191E848C8AA9EB06FC18664();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_E68EB5FC4779C1EA9972FABE42116AEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_C966EDC440B33018C6C8BE819C1377B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_4322A58E462C712CD3D9B495C56BF403();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_AB2A35AA4FC343113B1F0DA95CE8B535();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_CAD81E104941D5ECF734E19A87826794();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_EB5A066D4402E61D723CA2856742B5DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_51864FDF473394B24ECDCB83FBB887E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_71180B5848E0B5D260418595D40B4448();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetCat_AnimGraphNode_TransitionResult_C824F6764E232131F12605BB10C86926();
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
	void InitialiseAnimationData();
	void ExecuteUbergraph_BP_Anim_PetCat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
