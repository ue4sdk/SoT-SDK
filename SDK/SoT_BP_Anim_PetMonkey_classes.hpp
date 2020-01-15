#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_PetMonkey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_PetMonkey.BP_Anim_PetMonkey_C
// 0x4A79 (0x52B9 - 0x0840)
class UBP_Anim_PetMonkey_C : public UWieldablePetAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0840(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C2CE96E74453BC142D679FA29E2E5E3A;      // 0x0848(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C447884F4596B0F3167CC6B2E7DAA505;// 0x0890(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_464010C0433FC0EF1826E2B41EBB7D8F;// 0x08D0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C306CF0249D0FE50472529A943F84941;// 0x0910(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29F98BB1442BF04B05BD0F9FE2929D6A;// 0x0950(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF20C50A45E2BB601AB285AA8CCEA8C6;// 0x0990(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DBDFBFE44A2C82FD9A8EFBA9D5A8DD03;// 0x09D0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2100A24D4B402986ED13008A8C3F664A;// 0x0A10(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BBEF6404084AD03446CDCA45FD4054D2;// 0x0A68(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_43B90E674C820CEE36CD6789252554DE;// 0x0AB0(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8FE7831246301D1DE191CC9C4AD711E1;// 0x0B00(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83E40CDC4A7BDB92258145AC8187E56A;// 0x0B48(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FADA915F45B2717234C7528DFFC4428C;// 0x0B88(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CCC1B1524984C535B85947A987165825;// 0x0BE0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_56500AEC4BDB457D6C8F43B9E4884AFF;// 0x0C28(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1485B3AE4CB31265DD7B38A622C83A3A;// 0x0C70(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9B5AC79B4E09534EF49104B97B5C3A5D;// 0x0D00(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2F9A40AA4C8004664A9328B006596E07;// 0x0D48(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6ADF1DC04106EF4AE0ACA1B1BCFCABE6;// 0x0D88(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DCA011354D92C88DA1D1B29547274D6F;// 0x0DC8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7B61B0D4E24346D9E5292933FFFAAFE;// 0x0E08(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E9183B1B46851EF93A8EDFA7118032E0;// 0x0E48(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33C81F3242BCBB8CDE426CA2CA7F9E8E;// 0x0E88(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A1B6752D440D3B8D28F4298CC1FA1D39;// 0x0EC8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FE4DEB27441019D99D962D9E121535DA;// 0x0F08(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EECE1E5942E3F2BF1D942FAFA6D127E3;// 0x0F48(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F865859C4E354608C39ABFA734B8BC62;// 0x0F88(0x0040)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_FDBE47644AEAD5A726C436A048FEF196;// 0x0FC8(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_97D87C9F462FE154257FD7A845EBC2DB;// 0x1038(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DEA439FA44C72FCF4E8919A6F7E1E1FC;// 0x1070(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_795761B6456E70ED94F865B131654C62;// 0x1120(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A4970AC0459E5D51D5269C9C36A5518E;// 0x1178(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_18C31455411F6666F2A7F28C498B7272;// 0x11D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8910E96459EE9B13D9319823E3E343F;// 0x1218(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE7A3FE54EBAA6FE4810DDB2EF312941;// 0x1258(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C7EBB041433C2EA60FA96798501326F9;// 0x1298(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63C81D9F4AAB93F7CE54AFBFDC56165A;// 0x12D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_03DD814D41C7DD05ADC55CAEBAF70A67;// 0x1318(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A32515B740514955947CB58148766A41;// 0x1370(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EEE91195407D2912C984029E89E8DA04;// 0x13B8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9885113E4A6D748165AA049AD2404AEC;// 0x1410(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6EA70F5642C78E75AA91C98EE0900858;// 0x1458(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2C05901541134C2469F82383BB9DC032;// 0x14A0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_50441DBC4000266950F8E2870C850029;// 0x1548(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E06C7E5C461E86DCF70F6093B83CD614;// 0x1590(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4DFEA8994BE8183C2AAA929FAF57CB24;// 0x15E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D0F86B854514274E3214E88620FCC5C0;// 0x1630(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BBEF6404084AD03446CDCA45FD4054D;// 0x1688(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_A9D0AE5047E374911C3B648F42F8C25D;// 0x16D0(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B7D3E8314AB82AF8D71F1F9C687B55FE;// 0x1708(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DACDA9CF4EDB91772CF553BC10363AF3;// 0x17B8(0x0058)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_00F2FFB740825C45F6E8DCA2CE062FBB;// 0x1810(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_E48AA12448571C09D7BBB39C6AB0A235;// 0x1880(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FD1AACC54E5EA7DF142704AE8AA72571;// 0x1940(0x0058)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_629CA4DA42E98BD7C164399CC9A248F5;// 0x1998(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8C9121C1457E411EC2E8E9BCD18F5596;// 0x1AA0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6F5BC345450A12784D8F87A6A19124A9;// 0x1AE8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4F134FE24CB83EB4BC58FC8E62091811;// 0x1B28(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DD7061F845D192AC7F18BFB49B137E75;// 0x1B68(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1A873C5F4C4B86926131DDA61C3F42AF;// 0x1BC0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BDF526674A846D513F2F94A764B8EF44;// 0x1C08(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D46E92824B64C7170631528AD18B77202;// 0x1C60(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BC15BAED48E24F4CC719068E38D0E302;// 0x1CA8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0C872364429A7C29536A3C9E06439031;// 0x1D50(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B976B710493EF408B68794B70C07F9C4;// 0x1D98(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_076BABF54A21D844310FBEA603AF0743;// 0x1E40(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1E85AC844201B222712CAA9900023DCA;// 0x1E88(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC06665B4CDEA44E725D5C91B31E77AB;// 0x1EF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A37A786C4D2F7B64C86BC98C1EDFA24F;// 0x1F38(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9ECE430B461A89BE3D9036888A112744;// 0x1F78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF7ECFBA467395D82B5BD5AA0AE40508;// 0x1FB8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A886307541521D7C533942BE0B4B257B;// 0x1FF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1B4EEC9448AF0EDD066CD89678303FBE;// 0x2038(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF334D9142256C348464ADBA1944EEF4;// 0x2078(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_164363FA4E19D074FB0805A57A22F55D;// 0x20B8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C277CC4B47A12D02A2A3468DA7A865F7;// 0x20F8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D379320D4EA0C7B9CAE0A2B9251F9B44;// 0x2138(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D0A71F56421ECBA8A8F49EADDB844BF6;// 0x2178(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_56C828FC474922FAB031E994E10D21FC;// 0x21D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A7F2B437428D1A7AD1B9ECBD9092E20E;// 0x2218(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_91030B4947860E3AA66E429FD09515ED;// 0x2270(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8B5345594F2BFE26DF53D6ABF1454046;// 0x22B8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_80BD03B742BB0CD97E6E449E19E85713;// 0x2310(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE246EC54FC296F5B40D899A849C811F;// 0x2358(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_600CA90D4C8988B0638A02979F23B519;// 0x23B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E4B799224162C2751FC2178121B94459;// 0x23F8(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_180002034B02B93E044A93A68F0B6123;// 0x2438(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_619A70CE4ADC86622048E5A8D154F44B;// 0x2470(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4E2CDE1240C88C179D066895EAE6702E;// 0x24B8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C5F0C2E243CAA1A789558384ED352889;// 0x2560(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EA5A87BB4E8C399E1F6B568335CFFBB8;// 0x25A8(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F7AB72AF4C8D55ED0D7BB9B5F67DF6D8;// 0x2650(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE02;// 0x2690(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0EDE89A482F035A29EA2D86C20E6B90;// 0x26D0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B2;// 0x2710(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76D021F047BB19C0732B289AE48A375C;// 0x2750(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_ED3AF26D483FA4A283091E888E56A900;// 0x2790(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_162F224840015817F4EF7395865ABF84;// 0x27E0(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_12D300C642734B62B2D6139993874BFD;// 0x2890(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C3F81EB14D8770E016695D9287B605F6;// 0x2998(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9F18BA8840F7EB160FC02C8EE6DDB3FE;// 0x29E0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_46994D2A4B0D61A28B461BA36CE7358E;// 0x2A30(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1AE224834A4418B4D2E5FB8A1836E46C2;// 0x2AE0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B7E16ADE403A6333FF78B8B9FB2A559D2;// 0x2B38(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9DA6CC1B4CC2ADB5A01817B0DC9D651C;// 0x2B80(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EE639DA74D4AAC3C88C335AADFC46A1C;// 0x2BD0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E9C1745487D3E025824CE94B6B274642;// 0x2C80(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5FF04AD44D3FBF54566AD1B8C61BD21F2;// 0x2CD8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9EE7794840EEFF1692263084CDCFAA41;// 0x2D20(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_375B182343B34140FEAA59994E68B168;// 0x2DC8(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1BC9B1514443B20ED5629A86CA06F2EE;// 0x2E38(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC97545C448E1D4350F93A80D0D9F276;// 0x2EE8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FDF859E4DF20300A8BC028A89D9A702;// 0x2F28(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_253FEA80468B79AC0F61D0B0EFDFF7AC;// 0x2F68(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0D2CF643428498890674C0802E023D4C;// 0x2FA8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99FC788D438155EAFD7B1E91329B4B19;// 0x2FE8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10FC25604347C74B7B5000821FE389C3;// 0x3028(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C98B1994C05E4252F2FE4A4E535AEA3;// 0x3068(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_566CEE0F40297EA1F3C608A70BC25ED7;// 0x30A8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F8BD09F543E861F4E1833085EE80DE80;// 0x30E8(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BA6420C346AFCB6863E5EC86A104CC9B;// 0x3140(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_853067DC436AC8D08338E990FD4B749C;// 0x3198(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_838978C14E639E314854248E855C2286;// 0x3248(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88F74921421D29A2FC0E289A62BC757B;// 0x3290(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B8BDCA3F4C50DC25182445BE1D503953;// 0x32E8(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9D46041F4CCA3678113FAC8473182083;// 0x3340(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7035E93A4211B3044622C18F1EBBD7A1;// 0x33F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4581405C4E2ECEA2C35E33BAB6248F20;// 0x3438(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CA34FC2D4CD3BEF839DF5E9E690078F1;// 0x3490(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F36CA718431F35143574D887A9D00529;// 0x34E8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_03FA4AA44D85E207016FE896B6CABAEE;// 0x3598(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C00A9A14D9A9B6A6B27CD99E099E28D;// 0x35E0(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29A0C440493ABFD5CEECA18E1A788574;// 0x3638(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_720786FF4DBE344D75A355804EA9B4E9;// 0x3690(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EA33407A4592EAC76556A5A51392E06E;// 0x3740(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4353D6C24348B435736EA09DFE28ABC8;// 0x3788(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3F7334DD464F2D098B6F1685009427CC;// 0x37C8(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_191DF8A3454BBAAD60E407A35E7651FC;// 0x3870(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_97E5EE0F4EA0FBDCBF69959191C9E7E4;// 0x38B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_04AC50B4405EC9263FCE0C980534D1C1;// 0x38F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A3324D334DFA82F3415B24AD8B39B5CE;// 0x3930(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B388DED04191E848C8AA9EB06FC18664;// 0x3970(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E68EB5FC4779C1EA9972FABE42116AEC;// 0x39B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C966EDC440B33018C6C8BE819C1377B4;// 0x39F0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78EA3E4E486C2B912505ACA3F2417525;// 0x3A30(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AB2A35AA4FC343113B1F0DA95CE8B535;// 0x3A70(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CAD81E104941D5ECF734E19A87826794;// 0x3AB0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_90A1031D41CD1E055B5CB6A2C506D545;// 0x3AF0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB5A066D4402E61D723CA2856742B5DD;// 0x3B30(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51864FDF473394B24ECDCB83FBB887E4;// 0x3B70(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3CD83675433917B40D4D62BDB4D13221;// 0x3BB0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71180B5848E0B5D260418595D40B4448;// 0x3BF0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DA992A584118EAF768F428A20E852EEE;// 0x3C30(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D8A2FB7F4BF17FA153026CBF4E746905;// 0x3C88(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF4CDBF945EF6C9753B06885C50662B6;// 0x3CD0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD7CB89A48CFEB6187A208B3043BE485;// 0x3D10(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_573E5C09431EF4C7371ECB91086C7554;// 0x3D50(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C0A8AD7B466229ECDDD788B4E482B2BE;// 0x3D90(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D4912ACE4EFA7416591ED385C2EAB708;// 0x3DE8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_308B34E942B066A91B8529A58A4D3E9D;// 0x3E30(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_221215C9423506A2341F71ACE3224767;// 0x3E88(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C54837E343F1982FB78562B1DC40E791;// 0x3ED0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3BD5E52D406B783C28DADD8577F21913;// 0x3F78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5E5FC67A426A8DFE618092926AAA917C;// 0x3FC0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6F63E36D4DDD60239049A58D1DB585E2;// 0x4018(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_461525594A015D6C8A6D149717A60279;// 0x4060(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D86BD52B4288AB6BF586A097EEC2ED8F;// 0x4108(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7B36EF6A4F8B9340D81588A5E3BE72F1;// 0x4150(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73D49F65492F54B56C44DD84ECA710B6;// 0x41A8(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4AAC83DD4EF56EC8336DFA89DA6164BC;// 0x4200(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A658031406C1B61413A50B73D93AF0C;// 0x42B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C824F6764E232131F12605BB10C86926;// 0x42F8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CE279EB14806BA651384528B787BC2DD;// 0x4338(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6DAD491C477C82F35D903193CB184EE1;// 0x4390(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C516BFEA4A0BF739B46B43BAE5C03379;// 0x43E8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0827967F4209756104DC8D9FB546B3EA;// 0x4498(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BD89049D4727B525D76E02BAAFD7950E;// 0x44E0(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_41EF2EFF4649707581A139BADAD123DA;// 0x4538(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B69FAC9D4FE531E681CBF4880D71BCB0;// 0x4590(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D5E56D6449BDD051FD7EEEBDA1BED0B4;// 0x4640(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_74AEEB91485327020363F2BB8579B67F;// 0x4688(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F0E3193E49F04B21F48F9A8002671E0E;// 0x4730(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B4EFFED4FB6A35FF023BCA6387A4207;// 0x4778(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_38118D4945530B5D3203B5BB62CA95B7;// 0x47D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4DA0DB2C4D170240A5D522AA7784325C;// 0x4818(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_55366DB748C4978D45056B8323AD2B90;// 0x4858(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AB83E9944E3A2843BF04DDBC14A161A7;// 0x4960(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33B721FF4FBDF8EA99BE699F9321EF9D;// 0x49A8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1433896B422DD02F722E888BCA82B256;// 0x4A00(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0;// 0x4A48(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B;// 0x4A88(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1AE224834A4418B4D2E5FB8A1836E46C;// 0x4AC8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B7E16ADE403A6333FF78B8B9FB2A559D;// 0x4B20(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E9C1745487D3E025824CE94B6B27464;// 0x4B68(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5FF04AD44D3FBF54566AD1B8C61BD21F;// 0x4BC0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9686E1AB453C8231555FA691ECE91566;// 0x4C08(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D46E92824B64C7170631528AD18B7720;// 0x4CB0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1DEF106A4629BE203143D2AB248EBAE2;// 0x4CF8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99879163458DB39050F11B8F371FC8B5;// 0x4DA0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AC0A5DAB449334BC099C84BA3AEA999E;// 0x4DE8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D3C843E5464DFEE227EA7EACF913C662;// 0x4E40(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1DF6CC67470D4F2EB38FFF9F88AC9E6F;// 0x4E88(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8A7347834E214C280FD58FBF687561BC;      // 0x4F30(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AA3629F84E6F8810D32D918AA8CC9358;// 0x4F90(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7D11EC6A493A4814B509ABA2BC456414;// 0x4FD8(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_5762229E421479A72A95AFAD857A33C3;    // 0x5020(0x00C0)
	struct FPetAnimationDataBeingHeld                  PetHeldAnimations;                                        // 0x50E0(0x0148) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPetAnimationDataRoaming                    PetRoamingAnimations;                                     // 0x5228(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ReactActive;                                              // 0x52B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_PetMonkey.BP_Anim_PetMonkey_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_C447884F4596B0F3167CC6B2E7DAA505();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_464010C0433FC0EF1826E2B41EBB7D8F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_C306CF0249D0FE50472529A943F84941();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_CF20C50A45E2BB601AB285AA8CCEA8C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_DBDFBFE44A2C82FD9A8EFBA9D5A8DD03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_2F9A40AA4C8004664A9328B006596E07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_6ADF1DC04106EF4AE0ACA1B1BCFCABE6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_DCA011354D92C88DA1D1B29547274D6F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_B7B61B0D4E24346D9E5292933FFFAAFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_E9183B1B46851EF93A8EDFA7118032E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_33C81F3242BCBB8CDE426CA2CA7F9E8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_A1B6752D440D3B8D28F4298CC1FA1D39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_FE4DEB27441019D99D962D9E121535DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_F865859C4E354608C39ABFA734B8BC62();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_6F5BC345450A12784D8F87A6A19124A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_4F134FE24CB83EB4BC58FC8E62091811();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_DC06665B4CDEA44E725D5C91B31E77AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_A37A786C4D2F7B64C86BC98C1EDFA24F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_9ECE430B461A89BE3D9036888A112744();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_FF7ECFBA467395D82B5BD5AA0AE40508();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_A886307541521D7C533942BE0B4B257B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_1B4EEC9448AF0EDD066CD89678303FBE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_AF334D9142256C348464ADBA1944EEF4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_164363FA4E19D074FB0805A57A22F55D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_C277CC4B47A12D02A2A3468DA7A865F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_D379320D4EA0C7B9CAE0A2B9251F9B44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B_1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_DC97545C448E1D4350F93A80D0D9F276();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_3FDF859E4DF20300A8BC028A89D9A702();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_253FEA80468B79AC0F61D0B0EFDFF7AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_0D2CF643428498890674C0802E023D4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_99FC788D438155EAFD7B1E91329B4B19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_10FC25604347C74B7B5000821FE389C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_7C98B1994C05E4252F2FE4A4E535AEA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_566CEE0F40297EA1F3C608A70BC25ED7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_191DF8A3454BBAAD60E407A35E7651FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_97E5EE0F4EA0FBDCBF69959191C9E7E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_04AC50B4405EC9263FCE0C980534D1C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_A3324D334DFA82F3415B24AD8B39B5CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_B388DED04191E848C8AA9EB06FC18664();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_E68EB5FC4779C1EA9972FABE42116AEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_C966EDC440B33018C6C8BE819C1377B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_78EA3E4E486C2B912505ACA3F2417525();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_AB2A35AA4FC343113B1F0DA95CE8B535();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_CAD81E104941D5ECF734E19A87826794();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_90A1031D41CD1E055B5CB6A2C506D545();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_EB5A066D4402E61D723CA2856742B5DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_51864FDF473394B24ECDCB83FBB887E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_3CD83675433917B40D4D62BDB4D13221();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_71180B5848E0B5D260418595D40B4448();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_FF4CDBF945EF6C9753B06885C50662B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_DD7CB89A48CFEB6187A208B3043BE485();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_573E5C09431EF4C7371ECB91086C7554();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_C824F6764E232131F12605BB10C86926();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_237511784B144993FCB1379E1EB39EE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Anim_PetMonkey_AnimGraphNode_TransitionResult_44376B314A106BABF5EEBF8135BFEC7B();
	void BlueprintInitializeAnimation();
	void AnimNotify_NewIdleA();
	void AnimNotify_NewIdleB();
	void AnimNotify_UnEquipCompleted();
	void AnimNotify_ExitTakeOff();
	void AnimNotify_NewBaseIdleA();
	void AnimNotify_NewBaseIdleB();
	void AnimNotify_PetLookAt_On();
	void AnimNotify_PetLookAt_Off();
	void AnimNotify_StaticBaseOn();
	void AnimNotify_StaticBaseOff();
	void AnimNotify_PetStaticBase_On();
	void AnimNotify_PetStaticBase_Off();
	void AnimNotify_NewGiveIdleA();
	void AnimNotify_NewGiveIdleB();
	void ExecuteUbergraph_BP_Anim_PetMonkey(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
