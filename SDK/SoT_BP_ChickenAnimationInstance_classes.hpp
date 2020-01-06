#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ChickenAnimationInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_ChickenAnimationInstance.BP_ChickenAnimationInstance_C
// 0x48C0 (0x5C30 - 0x1370)
class UBP_ChickenAnimationInstance_C : public UFaunaAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FFA33C654AE920A19B1E8CB74FAE7F2D;      // 0x1378(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E614EBB461B09BBA511DBB7AD085AB0;// 0x13C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01BC3B2E4816B7739C01BC9BDEBF3AB1;// 0x1400(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A410FC4749FDA24090C4AAA76F7FF6CA;// 0x1440(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EA6FAB1149A8D48CCC9670972C3BEBB8;// 0x1480(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B95A4A5247205C6B7C70D4A1E19D37A9;// 0x14C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FAA3A63E4BC2E15F214031954B07BAE7;// 0x1500(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB920C5249023537598D839E0FC0EF50;// 0x1540(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7E5F896842DE7A03710DB1A68E010AB1;// 0x1580(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_424515284F00F2C6448ABAA7EBBFBC49;// 0x15C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_95B32487463D8FFA31C335BC5A16A21F;// 0x1600(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_810FDBFF45BB0CFECC11B9BA0AA767DC;// 0x1640(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34D4FB7946655DA99754BCA3A6078EC8;// 0x1680(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83E460E748D553D200ACA78F1F23A41E;// 0x16C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5CB3BCCC40403D0D40151DB59963A12E;// 0x1700(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_046AB6A4405FF1D50ECAFBA60025B8BC;// 0x1740(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B161EFFA43495F24548F3ABF8F8D1E42;// 0x1780(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2D5C9F404A02C1B296C18EAF8C8C2B42;// 0x17C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20B1F4554F45C503D0DA5EB2BDF5003E;// 0x1800(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_396A5D2F4B1B6E5C6A7E5383405572A4;// 0x1840(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_56B68C0B441B0EEA871A0D9DEB3392AE;// 0x1880(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BD1BD9FC4DFE716C1FC1D898039B91D9;// 0x18C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F069A53342356A3F6DC799B377908936;// 0x1900(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FBECD9E144FDEE64B4C26DB06305FA21;// 0x1940(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51401648484B9047C7FF73850497BBE5;// 0x1980(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9571E8A14060D1CAA7D79CBC2D821E8E;// 0x19C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C04CB41B4889D847675CF98723786A94;// 0x1A00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_74CF22D84525F8C172F3778284AD7AF4;// 0x1A40(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3493369546DBF9937201569376E40572;// 0x1A80(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA955D73485042C11B80FAB560336D38;// 0x1AC0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A564F0764E784F5D608B828AFBFC8A24;// 0x1B00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C40BD44E4D12D877D0E37E844E04E6C4;// 0x1B40(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62652B9640C9A56EFA130493DE48D0DB;// 0x1B80(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F85336C04F575114E1FC72A76A14EFF9;// 0x1BC0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BAE03F484646FF9FE1B44C8C38C34F0C;// 0x1C00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F4F493A84BD32CA42BD1E7A792ABA36F;// 0x1C40(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3612F52441E7C8650F4AAB930BD77EFF;// 0x1C80(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_55CB9F3E43ED304394636FB1689FD563;// 0x1CC0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D4E0BAE841BA0C8A063BD2A9B57DC0C2;// 0x1D00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F92060384272D2EF7425B1BA2110FE66;// 0x1D40(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E25FFBF342B47E5C45AC618207540A07;// 0x1D80(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3BB5AF80402B606E83205C8FD39E4911;// 0x1DC0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_659EFA824F6BC7C0C9C962A428657B23;// 0x1E00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1BF9E77C46D2BF806216B0A25C7D9E96;// 0x1E40(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_921C424542E83AA57BCEA9890D0D23BE;// 0x1E80(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52ED0BCE4537F7B1343085AE14EB27F2;// 0x1EC0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_50BB477F4487A0DE4BAC89951A546317;// 0x1F00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C194BAF44BA11BC964A5D88891D83963;// 0x1F40(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_71B3FFA640D5F841050748927AD394853;// 0x1F80(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_96F6396E4A284A04E5F242A5BDF38EEB3;// 0x1FD0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F418F694893B5F8069A529CB1B20A8A3;// 0x2018(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BE69FD4647480B60F132479B282AD0573;// 0x2070(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6F0C0B7C4DC85A637E9C7EB3DEBFD97A3;// 0x20B8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_39B564ED46F055D97F8A34A5FE90866C3;// 0x2160(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C194BAF44BA11BC964A5D88891D83962;// 0x21A8(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_71B3FFA640D5F841050748927AD394852;// 0x21E8(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_96F6396E4A284A04E5F242A5BDF38EEB2;// 0x2238(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F418F694893B5F8069A529CB1B20A8A2;// 0x2280(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BE69FD4647480B60F132479B282AD0572;// 0x22D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6F0C0B7C4DC85A637E9C7EB3DEBFD97A2;// 0x2320(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_39B564ED46F055D97F8A34A5FE90866C2;// 0x23C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C194BAF44BA11BC964A5D88891D8396;// 0x2410(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_71B3FFA640D5F841050748927AD39485;// 0x2450(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_96F6396E4A284A04E5F242A5BDF38EEB;// 0x24A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F418F694893B5F8069A529CB1B20A8A;// 0x24E8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BE69FD4647480B60F132479B282AD057;// 0x2540(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6F0C0B7C4DC85A637E9C7EB3DEBFD97A;// 0x2588(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_39B564ED46F055D97F8A34A5FE90866C;// 0x2630(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1D5CB70044C0170A054A65B052C72A343;// 0x2678(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_210BC9E44BC6429DC7B5DAA8B7DF88443;// 0x26D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1D5CB70044C0170A054A65B052C72A342;// 0x2718(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_210BC9E44BC6429DC7B5DAA8B7DF88442;// 0x2770(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1D5CB70044C0170A054A65B052C72A34;// 0x27B8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_210BC9E44BC6429DC7B5DAA8B7DF8844;// 0x2810(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C771ED2406636209AA8939CA83AC9E53;// 0x2858(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0B47A873470FEC7DDABF8BB079A494AA3;// 0x28B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C771ED2406636209AA8939CA83AC9E52;// 0x28F8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0B47A873470FEC7DDABF8BB079A494AA2;// 0x2950(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C771ED2406636209AA8939CA83AC9E5;// 0x2998(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0B47A873470FEC7DDABF8BB079A494AA;// 0x29F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73348F9F4DCD1CF93E4D618361380B143;// 0x2A38(0x0040)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_485921C9406F695358F574BAAF9D76973;// 0x2A78(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_092AF2B8437681E6D57330B49D3CA7CA3;// 0x2B88(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F3A74538418072176E04C5A0E82F87CE3;// 0x2BD0(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2D76BCB0436D1826492E08BC98BAE5753;// 0x2CD8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F9025C4B463277FD328A8592FD148D8A3;// 0x2D20(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_819E7D7F48CD01C64B69018EAA7AD6F53;// 0x2DC8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73348F9F4DCD1CF93E4D618361380B142;// 0x2E10(0x0040)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_485921C9406F695358F574BAAF9D76972;// 0x2E50(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_092AF2B8437681E6D57330B49D3CA7CA2;// 0x2F60(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F3A74538418072176E04C5A0E82F87CE2;// 0x2FA8(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2D76BCB0436D1826492E08BC98BAE5752;// 0x30B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F9025C4B463277FD328A8592FD148D8A2;// 0x30F8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_819E7D7F48CD01C64B69018EAA7AD6F52;// 0x31A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73348F9F4DCD1CF93E4D618361380B14;// 0x31E8(0x0040)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_485921C9406F695358F574BAAF9D7697;// 0x3228(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_092AF2B8437681E6D57330B49D3CA7CA;// 0x3338(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F3A74538418072176E04C5A0E82F87CE;// 0x3380(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2D76BCB0436D1826492E08BC98BAE575;// 0x3488(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F9025C4B463277FD328A8592FD148D8A;// 0x34D0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_819E7D7F48CD01C64B69018EAA7AD6F5;// 0x3578(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E76C086F4F19B23DCFED82944BEA77443;// 0x35C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_090D0E1B460A320FEBFA74B32FA5D9913;// 0x3600(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B1E85F7D4E85832A078A7B80C13203133;// 0x3640(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_44C9AB4C46961283BA224BA7385117CF3;// 0x3748(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D44E9C25459B551869C9C696400360963;// 0x3790(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E0388CD04390E45D9C2030B37E7BF1403;// 0x3898(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EC19412D42365C3FA29B0BB69D72BBC4;// 0x38E0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1042D32849B6122922AEEA85BA83D7D6;// 0x3988(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E76C086F4F19B23DCFED82944BEA77442;// 0x39D0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_090D0E1B460A320FEBFA74B32FA5D9912;// 0x3A10(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B1E85F7D4E85832A078A7B80C13203132;// 0x3A50(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_44C9AB4C46961283BA224BA7385117CF2;// 0x3B58(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D44E9C25459B551869C9C696400360962;// 0x3BA0(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E0388CD04390E45D9C2030B37E7BF1402;// 0x3CA8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FCD8AD0C44A11B675898BBA1E8F08A83;// 0x3CF0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A3825B8D49D8AE99985A719BAEBE2144;// 0x3D98(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_563C14EF493CB43D938202B908CCFE89;// 0x3DE0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DFE9E9BE4E88C6C2D034C9A95F2093E0;// 0x3E28(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15D903154641092FBE2DAA9B15B4B8EF;// 0x3E70(0x0090)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_78DD0BC34B84E2974C8657891D0412CE;// 0x3F00(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E76C086F4F19B23DCFED82944BEA7744;// 0x3F90(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_090D0E1B460A320FEBFA74B32FA5D991;// 0x3FD0(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B1E85F7D4E85832A078A7B80C1320313;// 0x4010(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_44C9AB4C46961283BA224BA7385117CF;// 0x4118(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D44E9C25459B551869C9C69640036096;// 0x4160(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E0388CD04390E45D9C2030B37E7BF140;// 0x4268(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_ACE3502343444277B44872BB17CE1BD1;// 0x42B0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CF916052436E3854203BC89F34995F83;// 0x4358(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C1B41B5B40516B7D95AE3480DD3E8DCB;// 0x43A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87F27BBD45053333C51281B32E943BC7;// 0x43E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8DB7D0D54485CE893D60C79FAB547990;// 0x4420(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B1A9349C481CBEC8AFD05F9210B3AC883;// 0x4460(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA186256465FDC32AABD0E8F2CC967A23;// 0x44A0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A8BCB65D4EB6D3D3AF77F7964D481C9E;// 0x44E0(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5335BC1247A37277D1473B83FFC547F8;// 0x4538(0x0058)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_960F039544AEFABF37D702930B62BB6C;// 0x4590(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7342503C44859CFB104A6BA31A282414;// 0x4650(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6540177A4EE0DAD396636797723F4A9C3;// 0x46A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B688B6BC4B9CFCD634C65889EACDBA59;// 0x46F0(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9CF7441D4B0CADB721E3EAA08D3592BC;// 0x4748(0x0058)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_7EAD529A4F023C03B5A04390BB287663;// 0x47A0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4DAA740E40E88A029E7C248C8B9B002A;// 0x4860(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD76F7164D589644CD4607825E1555EC3;// 0x48B8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9B7834A642B0C5F4213BE38DF5BB4076;// 0x4900(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1228337549F59A0141491FABF1915DD3;// 0x49A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B1A9349C481CBEC8AFD05F9210B3AC882;// 0x49F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA186256465FDC32AABD0E8F2CC967A22;// 0x4A30(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61F1D9194FE9CD29770FC8A8C49AE236;// 0x4A70(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_294418EB4CCD679550E20FADFE67B093;// 0x4AC8(0x0058)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8AD74EBF4DA5C945E574E8A4E390BEAF;// 0x4B20(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6070944A43C25012E629C99ABB2DD5AF;// 0x4BE0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6540177A4EE0DAD396636797723F4A9C2;// 0x4C38(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C900376646A770D740B3638DDFC36ED8;// 0x4C80(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF8D4A8E41316392AD38CDAED301EC4D;// 0x4CD8(0x0058)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_300E046E4BDCCBE74447D5A448EC83FC;// 0x4D30(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B5A37D98404FEC967E13B293B8076813;// 0x4DF0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD76F7164D589644CD4607825E1555EC2;// 0x4E48(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F155F0B3454BDEA4AA207BB58075CBD3;// 0x4E90(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6505BFE04C3F1776111F11A9C671DCDE;// 0x4F38(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5D36F3E143B36EE557C43193AC799D33;// 0x4F80(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01BB2ABC49D4862A92D757B3199848AA;// 0x4FC0(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B62FF083491359093FD3CEBD661A97BE;// 0x5000(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2B72A02A486A0775ED0442A9CBFBBB24;// 0x5048(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A4093D7049E99088635AD1B376D598E1;// 0x5090(0x0090)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_897AC242440D90DC21E2A48F0723FD7B;// 0x5120(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ED43398E4A2491B8AE0335874C694F6B;// 0x51B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6ABBCF9F4B4C4CC66339039D702C69E9;// 0x51F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F6C115E84A0769C7392DC397CCD166B4;// 0x5230(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34C97639471138550330A1A6EE5C2F80;// 0x5270(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BCADA337434939730E411DAD1E3F0274;// 0x52B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6865D23D4C913F9B5AE954AA25CA8008;// 0x52F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01AB9F854CAF4E422BD7379BF8BC630E;// 0x5330(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B1A9349C481CBEC8AFD05F9210B3AC88;// 0x5370(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4EB4A988488B7847BBB3CA83CA8F7014;// 0x53B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA186256465FDC32AABD0E8F2CC967A2;// 0x53F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF78CA2340C1093A5E2455A5FD65393E;// 0x5430(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2D847A84483D6B0ED3BC23933F99B831;// 0x5470(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_86BE80F84E9E77373DF1AAA3286B727B;// 0x54C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3C1FF9274698C0389D3AB6A1B1F68CC0;// 0x5510(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D854AB134836723E63C62C8BC8CF2395;// 0x5568(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_855963844EFF76823E7E018ED059D544;// 0x55B0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0CFC21DD458F3B229BED6BBE8EF9E815;// 0x55F0(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A92F9B3E4420C32E9EA931A31FA21C64;// 0x5648(0x0058)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_EAEA3AEC422A29724605689B34198ABA;// 0x56A0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94E128D3415D053937EDE0B05B4DA5E9;// 0x5760(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6540177A4EE0DAD396636797723F4A9C;// 0x57B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_792FF40D4065E17AFFE2BFADD4884A54;// 0x5800(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2679BCF24756B17041A25394DDCB359B;// 0x5858(0x0058)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_DFAA3DDA48D971599A09E9AAE1DA94FC;// 0x58B0(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75C47A8A4E82CBAC86E797A98D48D08E;// 0x5970(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD76F7164D589644CD4607825E1555EC;// 0x59C8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9357888545C857FCE6FDD8A97D04710B;// 0x5A10(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_984AB1C14C43CCF2462541954C0D933C;// 0x5AB8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39A79BA6453AB6D34F069B935AE26F79;// 0x5B00(0x0040)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E623B838407C50570ECFEC8EEE0A1276;// 0x5B40(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_31A8D3E543508AA0C203218920C39A8D;// 0x5B88(0x00A8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_ChickenAnimationInstance.BP_ChickenAnimationInstance_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_8E614EBB461B09BBA511DBB7AD085AB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_01BC3B2E4816B7739C01BC9BDEBF3AB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_A410FC4749FDA24090C4AAA76F7FF6CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_EA6FAB1149A8D48CCC9670972C3BEBB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_B95A4A5247205C6B7C70D4A1E19D37A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_FAA3A63E4BC2E15F214031954B07BAE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_DB920C5249023537598D839E0FC0EF50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_7E5F896842DE7A03710DB1A68E010AB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_424515284F00F2C6448ABAA7EBBFBC49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_95B32487463D8FFA31C335BC5A16A21F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_810FDBFF45BB0CFECC11B9BA0AA767DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_34D4FB7946655DA99754BCA3A6078EC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_83E460E748D553D200ACA78F1F23A41E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_5CB3BCCC40403D0D40151DB59963A12E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_046AB6A4405FF1D50ECAFBA60025B8BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_B161EFFA43495F24548F3ABF8F8D1E42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_2D5C9F404A02C1B296C18EAF8C8C2B42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_20B1F4554F45C503D0DA5EB2BDF5003E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_396A5D2F4B1B6E5C6A7E5383405572A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_56B68C0B441B0EEA871A0D9DEB3392AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_BD1BD9FC4DFE716C1FC1D898039B91D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_F069A53342356A3F6DC799B377908936();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_FBECD9E144FDEE64B4C26DB06305FA21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_51401648484B9047C7FF73850497BBE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_9571E8A14060D1CAA7D79CBC2D821E8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_C04CB41B4889D847675CF98723786A94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_74CF22D84525F8C172F3778284AD7AF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_3493369546DBF9937201569376E40572();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_CA955D73485042C11B80FAB560336D38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_A564F0764E784F5D608B828AFBFC8A24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_C40BD44E4D12D877D0E37E844E04E6C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_62652B9640C9A56EFA130493DE48D0DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_F85336C04F575114E1FC72A76A14EFF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_BAE03F484646FF9FE1B44C8C38C34F0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_F4F493A84BD32CA42BD1E7A792ABA36F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_3612F52441E7C8650F4AAB930BD77EFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_55CB9F3E43ED304394636FB1689FD563();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_D4E0BAE841BA0C8A063BD2A9B57DC0C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_F92060384272D2EF7425B1BA2110FE66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_E25FFBF342B47E5C45AC618207540A07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_3BB5AF80402B606E83205C8FD39E4911();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_659EFA824F6BC7C0C9C962A428657B23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_1BF9E77C46D2BF806216B0A25C7D9E96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_921C424542E83AA57BCEA9890D0D23BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_52ED0BCE4537F7B1343085AE14EB27F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_50BB477F4487A0DE4BAC89951A546317();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_6C194BAF44BA11BC964A5D88891D8396_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequenceEvaluator_71B3FFA640D5F841050748927AD39485_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_8F418F694893B5F8069A529CB1B20A8A_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_6C194BAF44BA11BC964A5D88891D8396_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequenceEvaluator_71B3FFA640D5F841050748927AD39485_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_8F418F694893B5F8069A529CB1B20A8A_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_6C194BAF44BA11BC964A5D88891D8396();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequenceEvaluator_71B3FFA640D5F841050748927AD39485();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_8F418F694893B5F8069A529CB1B20A8A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_1D5CB70044C0170A054A65B052C72A34_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_1D5CB70044C0170A054A65B052C72A34_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_1D5CB70044C0170A054A65B052C72A34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_7C771ED2406636209AA8939CA83AC9E5_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_7C771ED2406636209AA8939CA83AC9E5_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_7C771ED2406636209AA8939CA83AC9E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_73348F9F4DCD1CF93E4D618361380B14_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_BlendSpaceEvaluator_485921C9406F695358F574BAAF9D7697_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_BlendSpacePlayer_F3A74538418072176E04C5A0E82F87CE_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_73348F9F4DCD1CF93E4D618361380B14_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_BlendSpaceEvaluator_485921C9406F695358F574BAAF9D7697_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_BlendSpacePlayer_F3A74538418072176E04C5A0E82F87CE_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_73348F9F4DCD1CF93E4D618361380B14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_BlendSpaceEvaluator_485921C9406F695358F574BAAF9D7697();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_BlendSpacePlayer_F3A74538418072176E04C5A0E82F87CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_E76C086F4F19B23DCFED82944BEA7744_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_090D0E1B460A320FEBFA74B32FA5D991_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_BlendSpacePlayer_B1E85F7D4E85832A078A7B80C1320313_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_BlendSpacePlayer_D44E9C25459B551869C9C69640036096_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_E76C086F4F19B23DCFED82944BEA7744_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_090D0E1B460A320FEBFA74B32FA5D991_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_BlendSpacePlayer_B1E85F7D4E85832A078A7B80C1320313_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_BlendSpacePlayer_D44E9C25459B551869C9C69640036096_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_E76C086F4F19B23DCFED82944BEA7744();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_090D0E1B460A320FEBFA74B32FA5D991();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_BlendSpacePlayer_B1E85F7D4E85832A078A7B80C1320313();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_BlendSpacePlayer_D44E9C25459B551869C9C69640036096();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_B1A9349C481CBEC8AFD05F9210B3AC88_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_FA186256465FDC32AABD0E8F2CC967A2_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_A8BCB65D4EB6D3D3AF77F7964D481C9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_5335BC1247A37277D1473B83FFC547F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_7342503C44859CFB104A6BA31A282414();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_B688B6BC4B9CFCD634C65889EACDBA59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_9CF7441D4B0CADB721E3EAA08D3592BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_4DAA740E40E88A029E7C248C8B9B002A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_B1A9349C481CBEC8AFD05F9210B3AC88_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_FA186256465FDC32AABD0E8F2CC967A2_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_61F1D9194FE9CD29770FC8A8C49AE236();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_294418EB4CCD679550E20FADFE67B093();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_6070944A43C25012E629C99ABB2DD5AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_C900376646A770D740B3638DDFC36ED8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_BF8D4A8E41316392AD38CDAED301EC4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_B5A37D98404FEC967E13B293B8076813();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_6865D23D4C913F9B5AE954AA25CA8008();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_01AB9F854CAF4E422BD7379BF8BC630E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_B1A9349C481CBEC8AFD05F9210B3AC88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_4EB4A988488B7847BBB3CA83CA8F7014();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_FA186256465FDC32AABD0E8F2CC967A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_TransitionResult_FF78CA2340C1093A5E2455A5FD65393E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_2D847A84483D6B0ED3BC23933F99B831();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_3C1FF9274698C0389D3AB6A1B1F68CC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_0CFC21DD458F3B229BED6BBE8EF9E815();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_A92F9B3E4420C32E9EA931A31FA21C64();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_94E128D3415D053937EDE0B05B4DA5E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_792FF40D4065E17AFFE2BFADD4884A54();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_2679BCF24756B17041A25394DDCB359B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ChickenAnimationInstance_AnimGraphNode_SequencePlayer_75C47A8A4E82CBAC86E797A98D48D08E();
	void AnimNotify_NewUnderwaterLocomotionIndexB();
	void AnimNotify_NewUnderwaterLocomotionIndexA();
	void AnimNotify_NewSeaLocomotionIndexB();
	void AnimNotify_NewSeaLocomotionIndexA();
	void AnimNotify_NewLandLocomotionIndexB();
	void AnimNotify_NewLandLocomotionIndexA();
	void AnimNotify_NewUnderwaterDeathIndex();
	void AnimNotify_NewSeaDeathIndex();
	void AnimNotify_NewLandDeathIndex();
	void AnimNotify_NewUnderwaterDyingLoopIndex();
	void AnimNotify_NewSeaDyingLoopIndex();
	void AnimNotify_NewLandDyingLoopIndex();
	void AnimNotify_NewUnderwaterImpactIndex();
	void AnimNotify_NewSeaImpactIndex();
	void AnimNotify_NewLandImpactIndex();
	void AnimNotify_ResetToIdle();
	void AnimNotify_NewUnderwaterIdleIndexB();
	void AnimNotify_NewUnderwaterIdleIndexA();
	void AnimNotify_NewSeaIdleIndexB();
	void AnimNotify_NewSeaIdleIndexA();
	void AnimNotify_NewLandIdleIndexB();
	void AnimNotify_NewLandIdleIndexA();
	void ExecuteUbergraph_BP_ChickenAnimationInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
