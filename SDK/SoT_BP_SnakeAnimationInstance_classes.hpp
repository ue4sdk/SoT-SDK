#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SnakeAnimationInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_SnakeAnimationInstance.BP_SnakeAnimationInstance_C
// 0x60A1 (0x7411 - 0x1370)
class UBP_SnakeAnimationInstance_C : public UFaunaAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_54D4A7F94174F74167D9D8B45A9DA6A4;      // 0x1378(0x0048)
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
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_585300184E4BC6C07C13ECA6C64372C8;// 0x1F00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C194BAF44BA11BC964A5D88891D83963;// 0x1F40(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_081A769549053BF90A9806A487289F8F;// 0x1F80(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_96F6396E4A284A04E5F242A5BDF38EEB3;// 0x1FD0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DBBA3BA042131A967F8B60927BB4B6F8;// 0x2018(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BE69FD4647480B60F132479B282AD0573;// 0x2070(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6F0C0B7C4DC85A637E9C7EB3DEBFD97A3;// 0x20B8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_39B564ED46F055D97F8A34A5FE90866C3;// 0x2160(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C194BAF44BA11BC964A5D88891D83962;// 0x21A8(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3A6363754472A042A21B9292A12C4D45;// 0x21E8(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_96F6396E4A284A04E5F242A5BDF38EEB2;// 0x2238(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F35F274E436C49DD209FFBB824E54723;// 0x2280(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BE69FD4647480B60F132479B282AD0572;// 0x22D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6F0C0B7C4DC85A637E9C7EB3DEBFD97A2;// 0x2320(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_39B564ED46F055D97F8A34A5FE90866C2;// 0x23C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C194BAF44BA11BC964A5D88891D8396;// 0x2410(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B5185FB94BC89B52C411938E1DFB0971;// 0x2450(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_96F6396E4A284A04E5F242A5BDF38EEB;// 0x24A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BFA784C649A2806BC0C07DB4A8064654;// 0x24E8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BE69FD4647480B60F132479B282AD057;// 0x2540(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6F0C0B7C4DC85A637E9C7EB3DEBFD97A;// 0x2588(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_39B564ED46F055D97F8A34A5FE90866C;// 0x2630(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_339CDB1148D68054C57946AF69AB1EC4;// 0x2678(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_210BC9E44BC6429DC7B5DAA8B7DF88443;// 0x26D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73D088634A0B53E0FEB6B4AF6245248C;// 0x2718(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_210BC9E44BC6429DC7B5DAA8B7DF88442;// 0x2770(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9B5715E844BB6453A03D2C8F314DC701;// 0x27B8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_210BC9E44BC6429DC7B5DAA8B7DF8844;// 0x2810(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27CCDD5247851FEA360CBB98215DFB41;// 0x2858(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0B47A873470FEC7DDABF8BB079A494AA3;// 0x28B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_84992E4E4A0141B72A438EA7435FA7EB;// 0x28F8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0B47A873470FEC7DDABF8BB079A494AA2;// 0x2950(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FA6E534C488ECAB83B6E5ABFA7A6B831;// 0x2998(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0B47A873470FEC7DDABF8BB079A494AA;// 0x29F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73348F9F4DCD1CF93E4D618361380B143;// 0x2A38(0x0040)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_A2F9257141FD296F5038D2877173A0D3;// 0x2A78(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_092AF2B8437681E6D57330B49D3CA7CA3;// 0x2B88(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_211A96024B11AEB12570E4899FF76A59;// 0x2BD0(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2D76BCB0436D1826492E08BC98BAE5753;// 0x2CD8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F9025C4B463277FD328A8592FD148D8A3;// 0x2D20(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_819E7D7F48CD01C64B69018EAA7AD6F53;// 0x2DC8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73348F9F4DCD1CF93E4D618361380B142;// 0x2E10(0x0040)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_F630C66143FB15052500A5B9E4D9C9C7;// 0x2E50(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_092AF2B8437681E6D57330B49D3CA7CA2;// 0x2F60(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_41D68DBB4BAF7349A020FBBEEE0D5B9F;// 0x2FA8(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2D76BCB0436D1826492E08BC98BAE5752;// 0x30B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F9025C4B463277FD328A8592FD148D8A2;// 0x30F8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_819E7D7F48CD01C64B69018EAA7AD6F52;// 0x31A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73348F9F4DCD1CF93E4D618361380B14;// 0x31E8(0x0040)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_8881B2DA47D18C24388C419B007D2F21;// 0x3228(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_092AF2B8437681E6D57330B49D3CA7CA;// 0x3338(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4F3D67DC4BE7BCB4080F38847D4A3D04;// 0x3380(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2D76BCB0436D1826492E08BC98BAE575;// 0x3488(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F9025C4B463277FD328A8592FD148D8A;// 0x34D0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_819E7D7F48CD01C64B69018EAA7AD6F5;// 0x3578(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_003ED49748C554174ED1A38D7A3E5C033;// 0x35C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FE13A5954F314394F7D93CB264D56F583;// 0x3600(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FD66363248EE1CEC1A1A20B5170454406;// 0x3640(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EF6D0D34422616D9527DFD8B812E92256;// 0x3748(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FD66363248EE1CEC1A1A20B5170454405;// 0x3790(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EF6D0D34422616D9527DFD8B812E92255;// 0x3898(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8999C7DF4DB1C04286957AB50CDD9D21;// 0x38E0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1042D32849B6122922AEEA85BA83D7D6;// 0x3988(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_003ED49748C554174ED1A38D7A3E5C032;// 0x39D0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FE13A5954F314394F7D93CB264D56F582;// 0x3A10(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FD66363248EE1CEC1A1A20B5170454404;// 0x3A50(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EF6D0D34422616D9527DFD8B812E92254;// 0x3B58(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FD66363248EE1CEC1A1A20B5170454403;// 0x3BA0(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EF6D0D34422616D9527DFD8B812E92253;// 0x3CA8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2BDA6BF444CACDB827403394F711FB81;// 0x3CF0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A3825B8D49D8AE99985A719BAEBE2144;// 0x3D98(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_70F0B11B4A08FBC3CE2347B4200D3234;// 0x3DE0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4571673B4A86EFCE2795229BDE2C5B76;// 0x3E28(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_61E21D43476E0F7888801CA01747CEAB;// 0x3EB8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_003ED49748C554174ED1A38D7A3E5C03;// 0x3F00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FE13A5954F314394F7D93CB264D56F58;// 0x3F40(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FD66363248EE1CEC1A1A20B5170454402;// 0x3F80(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EF6D0D34422616D9527DFD8B812E92252;// 0x4088(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FD66363248EE1CEC1A1A20B517045440;// 0x40D0(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EF6D0D34422616D9527DFD8B812E9225;// 0x41D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0AE8F2244689250CC37F47B7E4A01642;// 0x4220(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CF916052436E3854203BC89F34995F83;// 0x42C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C1B41B5B40516B7D95AE3480DD3E8DCB;// 0x4310(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87F27BBD45053333C51281B32E943BC7;// 0x4350(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8DB7D0D54485CE893D60C79FAB547990;// 0x4390(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB7BF80E41D7A3995ED5D2B427D794D0;// 0x43D0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F14209C44D13A5713564EFBDA84BFBF24;// 0x4410(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3EE03D6A44594C37B0164CABE1DB2ED34;// 0x4450(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DFB5B45D4E9EA2308620A3BEAF93AE80;// 0x4490(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0C941A1441515059C46DD85EEFCEE554;// 0x44D0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2DC397204EA750EA59C77EB2030F1F32;// 0x4510(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D2F1530C4ED23954D723788C9B7467A64;// 0x4568(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ADDF43E44503E809952EB28A091670F44;// 0x45B0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_32ACC071425038DA14052887E2AECE3C4;// 0x4608(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4EE73C864DC7371458E464BD808D52824;// 0x4650(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_970D8E0748331E671A6138BC4ABEEA0B4;// 0x4690(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E376D7F4AE05CAB9DC2B0948BFC8EF04;// 0x46D0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5557F8754490F7C5CA4CF3879B5C106A4;// 0x4710(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0268C62B4871E0DF3799AC9CBF31993C4;// 0x4768(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2B51F97412A6DCE5ADAAA951AADF9124;// 0x47B0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_032D95BF40FE72C0C30811B42627885F4;// 0x4808(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7D19375548E1013789423CA76463A6F94;// 0x4850(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7A4294E44755BD2F3C92EBA885C195394;// 0x48A8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C80A95DE46EADF87748A92B1FC14CC7A4;// 0x48F0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1EB244EB468D4EA915BC39843DA56ABE4;// 0x4998(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4C4AE4B4464A4E1F92CF6B2CDF7DF094;// 0x49E0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7E4650FE48951BD89D6F1BACFD3EDC444;// 0x4A38(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_616C2A4849CDA1A1E17CD4963BDD15DD;// 0x4A80(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD76F7164D589644CD4607825E1555EC3;// 0x4B28(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9B7834A642B0C5F4213BE38DF5BB4076;// 0x4B70(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1228337549F59A0141491FABF1915DD3;// 0x4C18(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E071A9B24E0175571C764088C087B4DE;// 0x4C60(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5DADBB9D463EB0803157ABA7F3904184;// 0x4CA0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AD93D2D847A7334C1ABED68AD83D8DFB;// 0x4CE0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4FCFAA614B81EC2C8F45D0A1B414BDE2;// 0x4D20(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6A57A6DE40B6F90F325792885422854A;// 0x4D78(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_79164A934E0695B6CDE9BFAB1D2BCB782;// 0x4DC0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CA3A2414D289A46ABB2FA98EC408C312;// 0x4E00(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4E4E752D43096245553E06B0FE8BC48E2;// 0x4E58(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ECF0C75C453DBE0931154D95583D76032;// 0x4EA0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_73AAB90A4507A071FFF404882A75C9D62;// 0x4EF8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B9C2FA864F4DB7C443F05895CCFB64F62;// 0x4F40(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_97FD960D4DEB4D90C6E21085412063BD2;// 0x4FE8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5ADE2A2A4C54E85071A45482A0C7093A;// 0x5030(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F14209C44D13A5713564EFBDA84BFBF23;// 0x5070(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3EE03D6A44594C37B0164CABE1DB2ED33;// 0x50B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9547BC314E64600A80A088813311FBB8;// 0x50F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0C941A1441515059C46DD85EEFCEE553;// 0x5130(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B422F50445DC467AD635669B616DF348;// 0x5170(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D2F1530C4ED23954D723788C9B7467A63;// 0x51C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ADDF43E44503E809952EB28A091670F43;// 0x5210(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_32ACC071425038DA14052887E2AECE3C3;// 0x5268(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4EE73C864DC7371458E464BD808D52823;// 0x52B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_970D8E0748331E671A6138BC4ABEEA0B3;// 0x52F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E376D7F4AE05CAB9DC2B0948BFC8EF03;// 0x5330(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5557F8754490F7C5CA4CF3879B5C106A3;// 0x5370(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0268C62B4871E0DF3799AC9CBF31993C3;// 0x53C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2B51F97412A6DCE5ADAAA951AADF9123;// 0x5410(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_032D95BF40FE72C0C30811B42627885F3;// 0x5468(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7D19375548E1013789423CA76463A6F93;// 0x54B0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7A4294E44755BD2F3C92EBA885C195393;// 0x5508(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C80A95DE46EADF87748A92B1FC14CC7A3;// 0x5550(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1EB244EB468D4EA915BC39843DA56ABE3;// 0x55F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4C4AE4B4464A4E1F92CF6B2CDF7DF093;// 0x5640(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7E4650FE48951BD89D6F1BACFD3EDC443;// 0x5698(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6318D2804BAA16D163B2D7AC437DE768;// 0x56E0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD76F7164D589644CD4607825E1555EC2;// 0x5788(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F155F0B3454BDEA4AA207BB58075CBD3;// 0x57D0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6505BFE04C3F1776111F11A9C671DCDE;// 0x5878(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5D36F3E143B36EE557C43193AC799D33;// 0x58C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01BB2ABC49D4862A92D757B3199848AA;// 0x5900(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C125AA1541F716B9C19A1BB798D452AA;// 0x5940(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A3308CC546183AE4037139844EE54B00;// 0x5988(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_907D9DF84546DA984A34DC927F3C94B6;// 0x5A18(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4CA5DC2943EE905BDAD0D6899E93D8D1;// 0x5A60(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1BEA8A78430A49B2346A2A8459FE52B6;// 0x5AA0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ED43398E4A2491B8AE0335874C694F6B;// 0x5AE0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6ABBCF9F4B4C4CC66339039D702C69E9;// 0x5B20(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F6C115E84A0769C7392DC397CCD166B4;// 0x5B60(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34C97639471138550330A1A6EE5C2F80;// 0x5BA0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01AB9F854CAF4E422BD7379BF8BC630E;// 0x5BE0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5BFB284F4CA24B2CE434CAA9917A4B20;// 0x5C20(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6865D23D4C913F9B5AE954AA25CA8008;// 0x5C60(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B1A9349C481CBEC8AFD05F9210B3AC88;// 0x5CA0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E03C9F049F53CD4BA36B780B7579F5C;// 0x5CE0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0F8303EE44EF97C4EA3708A896A1742F;// 0x5D20(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA186256465FDC32AABD0E8F2CC967A2;// 0x5D60(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B530B14A4A08F9056A97078427B31579;// 0x5DA0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8AF54AF4A6BD89C40CC44B60C9F2DE6;// 0x5DE0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CD22BE50464BC65B4B7971ADDD68610E;// 0x5E20(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E50CEA8D47FA794F7D7743830A88E25B;// 0x5E78(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_79164A934E0695B6CDE9BFAB1D2BCB78;// 0x5EC0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6CA3A2414D289A46ABB2FA98EC408C31;// 0x5F00(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4E4E752D43096245553E06B0FE8BC48E;// 0x5F58(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ECF0C75C453DBE0931154D95583D7603;// 0x5FA0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_73AAB90A4507A071FFF404882A75C9D6;// 0x5FF8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B9C2FA864F4DB7C443F05895CCFB64F6;// 0x6040(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_97FD960D4DEB4D90C6E21085412063BD;// 0x60E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3BBFDD13499FD728CD610E85BB7751BE;// 0x6130(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_86BE80F84E9E77373DF1AAA3286B727B;// 0x6188(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5081905340AFF45EA5E09EA9569887DD;// 0x61D0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D854AB134836723E63C62C8BC8CF2395;// 0x6228(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_855963844EFF76823E7E018ED059D544;// 0x6270(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4828AB8A4B9A7EAE177704B29A96D482;// 0x62B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F14209C44D13A5713564EFBDA84BFBF22;// 0x62F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3EE03D6A44594C37B0164CABE1DB2ED32;// 0x6330(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_57DE42E4495CE74AF5D5CFB3EAF1BD65;// 0x6370(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0C941A1441515059C46DD85EEFCEE552;// 0x63B0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E417C4744B571F05426C8E9D8632BD81;// 0x63F0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D2F1530C4ED23954D723788C9B7467A62;// 0x6448(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ADDF43E44503E809952EB28A091670F42;// 0x6490(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_32ACC071425038DA14052887E2AECE3C2;// 0x64E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4EE73C864DC7371458E464BD808D52822;// 0x6530(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_970D8E0748331E671A6138BC4ABEEA0B2;// 0x6570(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E376D7F4AE05CAB9DC2B0948BFC8EF02;// 0x65B0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5557F8754490F7C5CA4CF3879B5C106A2;// 0x65F0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0268C62B4871E0DF3799AC9CBF31993C2;// 0x6648(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2B51F97412A6DCE5ADAAA951AADF9122;// 0x6690(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_032D95BF40FE72C0C30811B42627885F2;// 0x66E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7D19375548E1013789423CA76463A6F92;// 0x6730(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7A4294E44755BD2F3C92EBA885C195392;// 0x6788(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C80A95DE46EADF87748A92B1FC14CC7A2;// 0x67D0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1EB244EB468D4EA915BC39843DA56ABE2;// 0x6878(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4C4AE4B4464A4E1F92CF6B2CDF7DF092;// 0x68C0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7E4650FE48951BD89D6F1BACFD3EDC442;// 0x6918(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_16EABB89420EC8301D99EBB43673A5D5;// 0x6960(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6540177A4EE0DAD396636797723F4A9C;// 0x6A08(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C03B3FD84577E6415F66648D11CE787B;// 0x6A50(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F14209C44D13A5713564EFBDA84BFBF2;// 0x6A90(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3EE03D6A44594C37B0164CABE1DB2ED3;// 0x6AD0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_75D27D624597F38095EB13B9DDB431C2;// 0x6B10(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0C941A1441515059C46DD85EEFCEE55;// 0x6B50(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CBEC863643DD0C6239C5C88974C53401;// 0x6B90(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D2F1530C4ED23954D723788C9B7467A6;// 0x6BE8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ADDF43E44503E809952EB28A091670F4;// 0x6C30(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_32ACC071425038DA14052887E2AECE3C;// 0x6C88(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4EE73C864DC7371458E464BD808D5282;// 0x6CD0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_970D8E0748331E671A6138BC4ABEEA0B;// 0x6D10(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8E376D7F4AE05CAB9DC2B0948BFC8EF0;// 0x6D50(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5557F8754490F7C5CA4CF3879B5C106A;// 0x6D90(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0268C62B4871E0DF3799AC9CBF31993C;// 0x6DE8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D2B51F97412A6DCE5ADAAA951AADF912;// 0x6E30(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_032D95BF40FE72C0C30811B42627885F;// 0x6E88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7D19375548E1013789423CA76463A6F9;// 0x6ED0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7A4294E44755BD2F3C92EBA885C19539;// 0x6F28(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C80A95DE46EADF87748A92B1FC14CC7A;// 0x6F70(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1EB244EB468D4EA915BC39843DA56ABE;// 0x7018(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4C4AE4B4464A4E1F92CF6B2CDF7DF09;// 0x7060(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7E4650FE48951BD89D6F1BACFD3EDC44;// 0x70B8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_880D01BC4607CC71FBAECD948ECB7942;// 0x7100(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD76F7164D589644CD4607825E1555EC;// 0x71A8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9357888545C857FCE6FDD8A97D04710B;// 0x71F0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_984AB1C14C43CCF2462541954C0D933C;// 0x7298(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39A79BA6453AB6D34F069B935AE26F79;// 0x72E0(0x0040)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E623B838407C50570ECFEC8EEE0A1276;// 0x7320(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_11E274B24782746EC5AFFC86382B3C24;// 0x7368(0x00A8)
	bool                                               InAgitation;                                              // 0x7410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_SnakeAnimationInstance.BP_SnakeAnimationInstance_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_8E614EBB461B09BBA511DBB7AD085AB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_01BC3B2E4816B7739C01BC9BDEBF3AB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_A410FC4749FDA24090C4AAA76F7FF6CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_EA6FAB1149A8D48CCC9670972C3BEBB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_B95A4A5247205C6B7C70D4A1E19D37A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_FAA3A63E4BC2E15F214031954B07BAE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_DB920C5249023537598D839E0FC0EF50();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_7E5F896842DE7A03710DB1A68E010AB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_424515284F00F2C6448ABAA7EBBFBC49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_95B32487463D8FFA31C335BC5A16A21F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_810FDBFF45BB0CFECC11B9BA0AA767DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_34D4FB7946655DA99754BCA3A6078EC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_83E460E748D553D200ACA78F1F23A41E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_5CB3BCCC40403D0D40151DB59963A12E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_046AB6A4405FF1D50ECAFBA60025B8BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_B161EFFA43495F24548F3ABF8F8D1E42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_2D5C9F404A02C1B296C18EAF8C8C2B42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_20B1F4554F45C503D0DA5EB2BDF5003E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_396A5D2F4B1B6E5C6A7E5383405572A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_56B68C0B441B0EEA871A0D9DEB3392AE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_BD1BD9FC4DFE716C1FC1D898039B91D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_F069A53342356A3F6DC799B377908936();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_FBECD9E144FDEE64B4C26DB06305FA21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_51401648484B9047C7FF73850497BBE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_9571E8A14060D1CAA7D79CBC2D821E8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_C04CB41B4889D847675CF98723786A94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_74CF22D84525F8C172F3778284AD7AF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_3493369546DBF9937201569376E40572();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_CA955D73485042C11B80FAB560336D38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_A564F0764E784F5D608B828AFBFC8A24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_C40BD44E4D12D877D0E37E844E04E6C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_62652B9640C9A56EFA130493DE48D0DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_F85336C04F575114E1FC72A76A14EFF9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_BAE03F484646FF9FE1B44C8C38C34F0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_F4F493A84BD32CA42BD1E7A792ABA36F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_3612F52441E7C8650F4AAB930BD77EFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_55CB9F3E43ED304394636FB1689FD563();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_D4E0BAE841BA0C8A063BD2A9B57DC0C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_F92060384272D2EF7425B1BA2110FE66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_E25FFBF342B47E5C45AC618207540A07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_3BB5AF80402B606E83205C8FD39E4911();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_659EFA824F6BC7C0C9C962A428657B23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_1BF9E77C46D2BF806216B0A25C7D9E96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_921C424542E83AA57BCEA9890D0D23BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_52ED0BCE4537F7B1343085AE14EB27F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_585300184E4BC6C07C13ECA6C64372C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_6C194BAF44BA11BC964A5D88891D8396_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequenceEvaluator_081A769549053BF90A9806A487289F8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_DBBA3BA042131A967F8B60927BB4B6F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_6C194BAF44BA11BC964A5D88891D8396_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequenceEvaluator_3A6363754472A042A21B9292A12C4D45();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_F35F274E436C49DD209FFBB824E54723();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_6C194BAF44BA11BC964A5D88891D8396();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequenceEvaluator_B5185FB94BC89B52C411938E1DFB0971();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_BFA784C649A2806BC0C07DB4A8064654();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_339CDB1148D68054C57946AF69AB1EC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_73D088634A0B53E0FEB6B4AF6245248C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_9B5715E844BB6453A03D2C8F314DC701();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_27CCDD5247851FEA360CBB98215DFB41();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_84992E4E4A0141B72A438EA7435FA7EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_FA6E534C488ECAB83B6E5ABFA7A6B831();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_73348F9F4DCD1CF93E4D618361380B14_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_BlendSpaceEvaluator_A2F9257141FD296F5038D2877173A0D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_BlendSpacePlayer_211A96024B11AEB12570E4899FF76A59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_73348F9F4DCD1CF93E4D618361380B14_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_BlendSpaceEvaluator_F630C66143FB15052500A5B9E4D9C9C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_BlendSpacePlayer_41D68DBB4BAF7349A020FBBEEE0D5B9F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_73348F9F4DCD1CF93E4D618361380B14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_BlendSpaceEvaluator_8881B2DA47D18C24388C419B007D2F21();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_BlendSpacePlayer_4F3D67DC4BE7BCB4080F38847D4A3D04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_003ED49748C554174ED1A38D7A3E5C03_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_FE13A5954F314394F7D93CB264D56F58_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_003ED49748C554174ED1A38D7A3E5C03_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_FE13A5954F314394F7D93CB264D56F58_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_003ED49748C554174ED1A38D7A3E5C03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_FE13A5954F314394F7D93CB264D56F58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_DB7BF80E41D7A3995ED5D2B427D794D0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_F14209C44D13A5713564EFBDA84BFBF2_3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_3EE03D6A44594C37B0164CABE1DB2ED3_3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_DFB5B45D4E9EA2308620A3BEAF93AE80();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_E0C941A1441515059C46DD85EEFCEE55_3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_2DC397204EA750EA59C77EB2030F1F32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_ADDF43E44503E809952EB28A091670F4_3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_4EE73C864DC7371458E464BD808D5282_3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_8E376D7F4AE05CAB9DC2B0948BFC8EF0_3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_5557F8754490F7C5CA4CF3879B5C106A_3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_D2B51F97412A6DCE5ADAAA951AADF912_3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_7D19375548E1013789423CA76463A6F9_3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_E071A9B24E0175571C764088C087B4DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_4FCFAA614B81EC2C8F45D0A1B414BDE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_79164A934E0695B6CDE9BFAB1D2BCB78_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_6CA3A2414D289A46ABB2FA98EC408C31_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_ECF0C75C453DBE0931154D95583D7603_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_5ADE2A2A4C54E85071A45482A0C7093A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_F14209C44D13A5713564EFBDA84BFBF2_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_3EE03D6A44594C37B0164CABE1DB2ED3_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_9547BC314E64600A80A088813311FBB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_E0C941A1441515059C46DD85EEFCEE55_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_B422F50445DC467AD635669B616DF348();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_ADDF43E44503E809952EB28A091670F4_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_4EE73C864DC7371458E464BD808D5282_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_8E376D7F4AE05CAB9DC2B0948BFC8EF0_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_5557F8754490F7C5CA4CF3879B5C106A_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_D2B51F97412A6DCE5ADAAA951AADF912_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_7D19375548E1013789423CA76463A6F9_2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_4CA5DC2943EE905BDAD0D6899E93D8D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_01AB9F854CAF4E422BD7379BF8BC630E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_6865D23D4C913F9B5AE954AA25CA8008();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_B1A9349C481CBEC8AFD05F9210B3AC88();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_0F8303EE44EF97C4EA3708A896A1742F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_FA186256465FDC32AABD0E8F2CC967A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_D8AF54AF4A6BD89C40CC44B60C9F2DE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_CD22BE50464BC65B4B7971ADDD68610E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_79164A934E0695B6CDE9BFAB1D2BCB78();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_6CA3A2414D289A46ABB2FA98EC408C31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_ECF0C75C453DBE0931154D95583D7603();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_3BBFDD13499FD728CD610E85BB7751BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_5081905340AFF45EA5E09EA9569887DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_4828AB8A4B9A7EAE177704B29A96D482();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_F14209C44D13A5713564EFBDA84BFBF2_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_3EE03D6A44594C37B0164CABE1DB2ED3_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_57DE42E4495CE74AF5D5CFB3EAF1BD65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_E0C941A1441515059C46DD85EEFCEE55_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_E417C4744B571F05426C8E9D8632BD81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_ADDF43E44503E809952EB28A091670F4_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_4EE73C864DC7371458E464BD808D5282_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_8E376D7F4AE05CAB9DC2B0948BFC8EF0_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_5557F8754490F7C5CA4CF3879B5C106A_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_D2B51F97412A6DCE5ADAAA951AADF912_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_7D19375548E1013789423CA76463A6F9_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_C03B3FD84577E6415F66648D11CE787B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_F14209C44D13A5713564EFBDA84BFBF2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_3EE03D6A44594C37B0164CABE1DB2ED3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_75D27D624597F38095EB13B9DDB431C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_E0C941A1441515059C46DD85EEFCEE55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_CBEC863643DD0C6239C5C88974C53401();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_ADDF43E44503E809952EB28A091670F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_4EE73C864DC7371458E464BD808D5282();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_TransitionResult_8E376D7F4AE05CAB9DC2B0948BFC8EF0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_5557F8754490F7C5CA4CF3879B5C106A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_D2B51F97412A6DCE5ADAAA951AADF912();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_SnakeAnimationInstance_AnimGraphNode_SequencePlayer_7D19375548E1013789423CA76463A6F9();
	void AnimNotify_EnterAgitation();
	void AnimNotify_ExitAgitation();
	void AnimNotify_SnakeStrikeStarted();
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
	void ExecuteUbergraph_BP_SnakeAnimationInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
