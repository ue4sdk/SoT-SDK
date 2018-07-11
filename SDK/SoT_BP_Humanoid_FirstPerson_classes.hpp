#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Humanoid_FirstPerson_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Humanoid_FirstPerson.BP_Humanoid_FirstPerson_C
// 0xD4B2 (0xF0A2 - 0x1BF0)
class UBP_Humanoid_FirstPerson_C : public UFirstPersonAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1BF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D0188A614D143FB7821BC9B3CCA7655C;      // 0x1BF8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2B8700FB4F8D370CE8590D99226C071C;// 0x1C40(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_129FE3024D442BFB00CF33AD59DB42E7;// 0x1CD0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_948AA19D4BBB26DE46D6F68AF0632D40;// 0x1D10(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7DBB79E4444F18C00CFDD7ADF5C641C7;// 0x1D50(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C156E52048447FFB87EC07A8137FDC76;// 0x1D98(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8E6667E84202C651009EC68662D42034;// 0x1DE0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_28B2F24E47E6D3C18AEA81846281D7E0;// 0x1E28(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2B4A8ADF431650833CDDB3927BF5EF47;// 0x1E70(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E9951E0C45CA7B3A40F1CEA234CE79F2;// 0x1EB8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FE0684FA4DA5B73D4467C38655260D49;// 0x1F00(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9CD9B4E44081175D8066C99FEABD575B;// 0x1F48(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1A10FD3243E979D42CB92A9E0389C99A;// 0x1FE8(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_577F1696465934275E74F6AFC6058707;// 0x2058(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F2A6A00042396DF212C52FAA8705B9AA;// 0x20A8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B4D1EFE4481D2C843B7A31ABD02DA5B7;// 0x2158(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A3C480144612CFBAE0DE2D82CC901541;// 0x2208(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_29ACD86045A3D644E2F06780D22FCF70;// 0x22A8(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7B6B2E8243531812A43AC695DD2D4695;// 0x2318(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_777B7581432DB72AAC7AE0B7DB4182B4;// 0x2368(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FF2E30AE470566A6EE0A99995C40BF74;// 0x23B0(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1A084AFE4178CB4E0AD3CB9CD222C27E;// 0x2458(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7BFD74D44C548AC8CEE02CB3AE486F0D;// 0x24C8(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F165A49C4CA138DCFCF69DBB3F83541C;// 0x2538(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3B249D6E479FA946B34141903D1CBFB0;// 0x2588(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_BE1161194E27CD1CC32B62B670B372A8;// 0x2648(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F368A7F24F506C771BD82C95752E325A;// 0x2698(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4D1B47F34381B8AE4E27CBAF554168A5;// 0x26E8(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_36F5984B49D837B85137C49FC9A9D17B;// 0x2738(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DB01F11D48F268904277C9ADA2A9901C;// 0x2788(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_06E2CB1F434A1E99FFCCFFB90CBE492F;// 0x27D0(0x00A8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B8D1E2154FA5AC99B3E64FA52EE07EC1;// 0x2878(0x0050)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3202085A40AD5E0620EF6D9C6D5E3616;// 0x28C8(0x00C0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_026EDE994444DC429291CD97E00E8BEB;// 0x2988(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_46D571D0486B8F37BE908088A724C9BE;// 0x29D8(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_BE271CFE4BFA90BF3160E685A1A20241;// 0x2A28(0x0050)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_83B7F5534C077447DA94E087915D6503;// 0x2A78(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BFB85F1345EBB8F3FC4622BA43CB4367;// 0x2AC8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_90F33FA84C5AB34A48B12F996703BEDE;// 0x2B10(0x00A8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DDE6B56447B642ACB11217A5006B1FB3;// 0x2BB8(0x0090)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6D7BA53247CC9BEC955ABBB519359F68;// 0x2C48(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D0EC7340490F4016C6018CBE68F596D2;// 0x2CE8(0x0090)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_64B9A7DD438218B1339E0DA17224AF33;// 0x2D78(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_34E8653443F400DD7BCA0BACEA3F37AE;// 0x2E28(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4AAE2E5140E335DCB6C2358F14E4D8CA;// 0x2EB8(0x0040)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_F900935F49D992230DD78B8AFDC87012;// 0x2EF8(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA9D62B442CAC6470510759CC47028BA;// 0x2F68(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_927CB34045C3A632F15D3A87C93E8882;// 0x2FA8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_79EAD2674E9004B0943CE99382032BB3;// 0x2FE8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B28A44EA43484CF3CAA41B9D0A1466F9;// 0x3028(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7DBF6FFF4FABF7A1FB5D54AFB78C34B3;// 0x3068(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_753E6A3C4E2B9ADDBF7DE6A2F37B4149;// 0x30A8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AB3262B1482BEF0F8EB5EA8DED3AA27E;// 0x30E8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C1B654AE48446548146379A0ADA342A5;// 0x3128(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94D232914CE207A62C243DABF29B1D39;// 0x3168(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D49029824FFABD54055266A4B1D0F078;// 0x31A8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F5409A74D39BAAE12B073AEAD11C830;// 0x31E8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0393B7734364FB279A07BE8DD4E26B32;// 0x3228(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_81AE75D943BEE0611AADAF96519B79F8;// 0x3268(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E105872B47A850DA5C0E0BA4DF987AA9;// 0x3370(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_605B167D4104185D2B3964A24CF41E92;// 0x33B8(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3839F7E14129DC8756D436B3A173A97D;// 0x33F0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_820D617B441B04665F9DB4A864DDAE30;// 0x3438(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_2414FD2A4C9A5AA676DB4E951A73E5C6;// 0x34E8(0x0038)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_27E78F814A610563337C299CDC625C0B;// 0x3520(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1BA077CA47D946B39F36FC81806A0EB5;// 0x3628(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_72D46F714D55C230DC4464A3BC9E7B55;// 0x3670(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_2CED4B3143C99B8CBDBA079CAE7376A0;// 0x3720(0x0038)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DF8030724C0B3E88EB5945B61A276B65;// 0x3758(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3E586B9048B5B51BB773DCA45D16985D;// 0x3860(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_07069C9443BEB11D4085E5A234862D72;// 0x38A8(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_EDE1A19541714B467DB4AD9288E64751;// 0x3958(0x0038)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5218ABC940DE9A2A8C531BAE965970BB;// 0x3990(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F7A9A7E4413865A4757C078B26ADD1E4;// 0x3A98(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_76D380754989701A9BEE7C86DC27E3E5;// 0x3AE0(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_983A065D44F2D1BF202A8091B1EC744F;// 0x3B18(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_CA0F377A46DE783A714451978F294EE7;// 0x3BC8(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4A36B9EE48DDFB6C90FC0CA953419F87;// 0x3CD0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8C44C6B442F66F9F1C4808B957DA9D49;// 0x3D18(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6D18536C4D6C5E74D11E4EA59800712A;// 0x3D58(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_43F88B8B4E331B31A852D490FA8759C6;// 0x3E00(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0065DD5E4AEF508DCC1F40A6FE280D8D;// 0x3EB0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F2B9CC8E4A873043809F748F674D371B;// 0x3EF0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64C97D8240BFB5D45B3CDFB5A21E685B;// 0x3F30(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1391AB0C4353FB8672072CB0372E2D14;// 0x3F70(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D5FD9B2F4908D15B6512CB98AFC7EC6D;// 0x3FB0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1DB962564495322F1D6E0299F8D5F977;// 0x3FF0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C9B0F834472B6D6E6D928C92CE64DDF1;// 0x4030(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9F7DAEBC498F8AA46442A295D52A4EEA;// 0x4070(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1AE3662640E5D930EC691DADD7A37914;// 0x40B0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EB40443F4CC91A18E7F2FD9A3DCF649B;// 0x40F0(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_BBAC39AC417A417A082A369EC48EF7F8;// 0x4130(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DE0764E24580DA5A2D31909098420BA5;// 0x4168(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_5EA9047F48637B1836BC13872F24C2AA;// 0x41B0(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E2463EE945357D91B4C6F5BE69AF9FEA;// 0x41E8(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_147F3E5D4D4EF17A1207CAB46616F342;// 0x4298(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4A7645DF4004B0B784EB04BD9138BE00;// 0x43A0(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_0209655042582D3B23F30BA10E5C3C1F;// 0x43E8(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2B7EB5DB4E43198D2E91019FDA98C28E;// 0x4420(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8F294C4E41E3232362E06EB316D882E5;// 0x44D0(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D276690B4999C12EBBF5D5B7887A4AED;// 0x45D8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_E402B38947840D8E2CF8DEBB28ADE435;// 0x4620(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FA46522340E88018CDD393A4835AFEE0;// 0x4658(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7FF634F540389C07EE91648A06B1A928;// 0x4708(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2303FA6A43655D7344FED09C44548E08;// 0x4810(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_2071F87043470355B527FBA89ADC7A54;// 0x4858(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_033A7878495D52DD0E1606A007910003;// 0x4890(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_23E534104A87F765C276ECAE687C40FE;// 0x4940(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5FEA9B714AABE4087F76A483C163F72F;// 0x4A48(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C2FCCC4A4E7507A6B362EC94FEFCA83A;// 0x4A90(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_12BDB6FD4D208047E9B269ABFD8784D6;// 0x4AD0(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_835549A04AD123C31FAC48A395B42963;// 0x4B78(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F8FF6BF45A0241923039ABFF878B327;// 0x4C18(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3B9D140B462925B0F74A51B6095F5895;// 0x4C58(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D743353D417980747A3FD989D345634E;// 0x4C98(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C8F9A914B30A2B8AD134A91FDF60E6D;// 0x4CD8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FAA7A9C042B877260702C0910C2592EC;// 0x4D18(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A995FA8445AE1C9F5F13A8CC5E17317;// 0x4D58(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B0BF7B09421E1B2C550E36900E73EE61;// 0x4D98(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C73E2DD49BAA2E326CC6DA891D667D9;// 0x4DD8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_825FA43542896E7C744853B7CAA3AC15;// 0x4E18(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73BA2333404B0B2ED23A46BC6104482A;// 0x4E58(0x0040)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_FF21551B4E429025ECF2158CFE876BF4;// 0x4E98(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_68F1478E4869B35B0A4016802C82E4E0;// 0x4ED0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2472EA954528905CFE3FBDA1883F4220;// 0x4F18(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B97BA5314A764371437E6E95047832DE;// 0x5020(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_58AC7D7D4840BACD91C450980BC64658;// 0x5068(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8AE142E3464968BE1D7140A5418989C3;// 0x5170(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_14FA8C97492E9C23A67144B399259131;// 0x51B8(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_40223A3E45CF753E3FC525B5192E9940;// 0x52C0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_90B3EC8C4D1FF150CEEDB8A6A4B67A84;// 0x5308(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D115A27D44BCB6DDA386DBBFA782AAB4;// 0x5410(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EEDFBC5141BA8C728907FB8983991822;// 0x5458(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_908601F64069338B174BD98079C75920;// 0x5498(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_67B9A90348EC7B69EE973FBDC9FFCA98;// 0x5540(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23C1957B4FB54DC48407F98B0C642CA8;// 0x5580(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_377B03FB4F35ED33391BEA97A45241ED;// 0x55C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8599851F475CAD883D0593BB97C60A00;// 0x5600(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF8568B748E2986D61BB44BEE9B49F7D;// 0x5640(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D5B15C8E47DB370C0ADA6483C25E58EC;// 0x5680(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44AD2BB342D0F2561FB94EB5F952B9E4;// 0x56C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16DB626B48D6C2D7376D50BEA809159C;// 0x5700(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_402F52F544F90941492B34AC765CC050;// 0x5740(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_154E2A1249D724202CAC588DB6DFACB5;// 0x5780(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_53656A0C401E9D8814612F88AE19B3D8;// 0x57C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88F58F3049D75D378863E28B3E0BA04A;// 0x5800(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C85E32F845370E2C29BE8B9F2B5E7B66;// 0x5840(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2999983B4EA442EDF693CCB20E8CA34C;// 0x5880(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4FC8234F4B54F1E3DF1012A5D3E1C031;// 0x58C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_82903E584D7994295D3ABE912B31B4CF;// 0x5900(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AA15013E475FC7D90CB4E7BE15B3EACC;// 0x5940(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BB2A78A0401E119194337BA137C9DFCA;// 0x5980(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CABDB43844276933954B329B5CD68721;// 0x59C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F91E008443A5138B592211B4B1AA9753;// 0x5A00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88137F364C1010F700BD2B933548D6B6;// 0x5A40(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_47FE7632495346574D701A8404459F74;// 0x5A80(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7421B970447C29586D0840936C0CC174;// 0x5AC0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1CD9726946A348C8278A458BE991C17C;// 0x5B00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_77DF910242FB159533AFC694EB125B5D;// 0x5B40(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C4CB6E149BFF7FD8AB5158633676E38;// 0x5B80(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E249442D47798C3780AF45BC524A461D;// 0x5BC0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4FCFF14647FD96E50E43228D82332CD2;// 0x5C00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5A7FEE6245CDA017C2DE728A6E606BAB;// 0x5C40(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A42D9EB744B6CE804DBD17B41AD5B0B0;// 0x5C80(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9FB2171E4CC4B457E3E450A9CB895B4C;// 0x5CC0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_89BD283B4F69A10535F5159E4CFAB212;// 0x5D00(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1E6B1DB44459A98DEF5F059A178A8EAB;// 0x5D58(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FFCA7B1E42D52FF658E3DBB275B79289;// 0x5DA0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A22B58A746CE63E1F695809768479B3D;// 0x5DE0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C8A65B5945E9BBAE51334B891812DA38;// 0x5E20(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AA661F9F4AD62C72ABBFF98402A05535;// 0x5E60(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4C8B1DD04E6B90A6E84C3EAEA254D36C;// 0x5EA0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EC2E69204E39DD097F7D77ACE38528D9;// 0x5EE0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0178D7D3468564C585892E94CACA2799;// 0x5F20(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_940184B44514CAC819E27E970184680C;// 0x5F60(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2389DD79467A5DD71544B48F00A6E01A;// 0x5FA0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_49F26C134FFB0E19B09E2FB3EC674CC3;// 0x5FE0(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_25970FB041FAF94111AAF18629169D7A;// 0x6020(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_722706844AFD4F0D01E8969002789C8F;// 0x6128(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E10B89074A435563F15DBCB683566621;// 0x6170(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_96B075ED4D082A61C62FA8A86C479BAB;// 0x61C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0B9FEF1A47E0DD3D5BFD798DDFB6E849;// 0x6210(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3F01ED8344749D7D6534FBAE8D11C62D2;// 0x6268(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FC91638A45E05D20E474C59C1A1CF4E5;// 0x62B0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3F01ED8344749D7D6534FBAE8D11C62D;// 0x6308(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E81318B34D8511A80043C2B9D3274D8B;// 0x6350(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AB3706D049EAF2AE8839FBAFBC8A1D83;// 0x6458(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3C6AF21E481615F06D5ED1B6D4389651;// 0x64A0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B45EE26748B9A2BD872B37A6990C7A22;// 0x6548(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E942EBD947E578519A5C1FA4F15DB2B3;// 0x6590(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5AA90AC04049F02EE336CA9367222670;// 0x65D0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_123526EE4144B286DBA741B2FEA6E5B7;// 0x6610(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DCA53CB84E6601BC6FCB9BB03C134C7E;// 0x6650(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4206DD574F23C48A98B04DA1C5762873;// 0x6690(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F77E54DF4494C4438783B9A16FE6A50C;// 0x66D0(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7E1B68AE4BD3C569A21DE299C753C470;// 0x6720(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5883EEB94A4E9554519AFF82E1878DFB;// 0x6768(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C2571E8B454C97BF5277CF9685FF264B;// 0x67C0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8AB0B9A547B3DC564F83B8B0609A0CBA;// 0x6808(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9A7340624EF8B0121F02F2A5DA94D2BF;// 0x6858(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5B46034D4F6337B84774A18F56268C76;// 0x68A0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2E1DF91E44DE1F1431629A94433F62103;// 0x68F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_77C8BDAB4EDB906473E4618D1B5D711A;// 0x6940(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2E1DF91E44DE1F1431629A94433F62102;// 0x6998(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9028199045473BB076A69B8812086C29;// 0x69E0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2E1DF91E44DE1F1431629A94433F6210;// 0x6A38(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_196F472E4B2BE27B04E429B87E190DD9;// 0x6A80(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8EDA082C495F57C37E70AE9403CDA7B5;// 0x6B28(0x0048)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_113DD02044BBC04D539786BBBE106D92;// 0x6B70(0x0110)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_42F5B7BB4DB01540751506871A26978D;// 0x6C80(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_56F2DE2B473F2348AA56C9BB8ABABA5B;// 0x6CD0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D725C16648CF5C6F3891F0B57CC3F60C;// 0x6D80(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7F4DCEEA4C715ACB1E1C179E418323C1;// 0x6DC8(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BEC8329C4B5EF27D49B37880FEAC8674;// 0x6E78(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_01FFAF124A976EA8AFA487BE818366A0;// 0x6F80(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DCDBE7814E8EC16DCA977DA50927ADE0;// 0x6FD8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C8A1FD94D655195BE7124849BE39D0F;// 0x7020(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B6B0D1CC44CE7EBF4C7AEDB918E9CD50;// 0x7078(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EEA9D7A940B822ED2476D28DB7F2EEF8;// 0x70C0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_442D6B5D431E834414D146B030443C1D;// 0x7118(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_901288274FAD069F1203EAA2C7DDAD46;// 0x7160(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_612C4B1C41B908993D2FBDBE499D46DB;// 0x71A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_619D88B74C56AF22B4A19B9772AAFCAF;// 0x71E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A69CC76C4D46CF5FFD3155A1AB55C8C3;// 0x7220(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_717283874E19F474AA87639B5CC447EC;// 0x7260(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE9CFB9F4AF3E48FE63BA29EACAA3C63;// 0x72A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4D0F0E1741BD56DEC62329AED5CF6068;// 0x72E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_03ABDF4A4345AEA30888E184C7275C52;// 0x7320(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EF99854B44E1FFAEFFA05E9CC30E1E0C;// 0x7360(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B747C86944D3DEA7EE3E05AF827EC87E;// 0x7468(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B349BEFD4CEEC950D0D3029C3A63ECB4;// 0x74B0(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8814C1924FAE3D0945361FAFAF902C15;// 0x75B8(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AC6A2B3B4511958EEBE8C2988B40E07A;// 0x7600(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_653B2A904F3734DBDF1893A7B6FC41DC;// 0x7648(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1E9313124C7B1D6EC04EF4B6A36B2230;// 0x7750(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_797F255D459C7814293DAA9783AA5905;// 0x7798(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_604441324C983CCBC4D71FA5CDDA95F1;// 0x77F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_562957EE409443DC0FBAB5B39BCF4AFF;// 0x7838(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_85CC058C4E205D23A3AE59AA2A869ED0;// 0x7890(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2C1F570942461946533F96B1074F00B8;// 0x78D8(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CEFCA87042D0B922C00A899B93549E25;// 0x7980(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BAC980FE4F09933FBB789988CDEE1DAB;// 0x79C8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BE23C99544F628EC541279971371CA56;// 0x7A08(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CEB5DBEC4D18E334015C718A2671863B;// 0x7A48(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3C99232741D366E265530693E53E0EAD;// 0x7A88(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_885866B543DD30363DF62E9DA332C8BA;// 0x7AC8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E76724248EDE265C48D3BA2798E732C;// 0x7B08(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C9EFA104875FFB2172FA8B957A41590;// 0x7B48(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA21FA8F426CDF8CE3B2E88AED77FA05;// 0x7B88(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BFBAD1BC4C8B9B05AB51889DF2FE29C4;// 0x7BC8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87E63B2241D3A47669976BB98212639F;// 0x7C08(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D4232AF9414B06122FA07B89D4C885E5;// 0x7C48(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6242580F4B496CC2B3BEA086F13532C1;// 0x7C88(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E0FB565242F35E0CC7CC8E9D56B4E1A5;// 0x7CC8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_751173444E5B0D5F486F52B67754272A;// 0x7D08(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4AEAD5684C658EE69F0941A1A77C10EA;// 0x7D48(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A09715F4A83A456611E2AA11CF5036C;// 0x7D88(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78E9238F4B1B281E8D0A489E2B634C5D;// 0x7DC8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F0290364409090813CD2548460F299DB;// 0x7E08(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A06931E7475EA79253EC4E85B2D0BBC9;// 0x7E48(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AD579AE845875E577C99BDAF2CDA2190;// 0x7EA0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8DBACF184C327F61BE8EC2A191F95DFA;// 0x7EE8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DE75779F4797BBF2F08787B9D83E67C5;// 0x7F40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB076BFF45B66E3339AEFE90175D6B2A;// 0x7F88(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_724A056A48BF1877BDC4739EFE3D9CFB;// 0x7FE0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CE0CFE544EACC1D50D6C5B9BD5B526E1;// 0x8028(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0B1C0E344CE4D244B345459EAA264385;// 0x8068(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1A5727864F58BBB00D6A118A31C516E1;// 0x80A8(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C9847A1246DA7A421C59D88C48876D7F;// 0x8100(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9D40264B49660B6683201699C8708E4F;// 0x81B0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0D4D3A594888750CF6507CA95BCB7D55;// 0x8208(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9C111B5448E091E1799E2EACB65B6915;// 0x8250(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_11CAE05F4B0E031100D0DF99A6BC19FD;// 0x8358(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_73CFF3124FD0960B82293FBE7A2EFAC0;// 0x83A0(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AACF9B77446CEA65B296B28CF3AB2011;// 0x84A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6324914645DB563106B057B297910FC1;// 0x84F0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A70BF0AE499CD96BE2D251B8CA54EA52;// 0x8548(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1570B7264C050675CE0C45A7D60A87E1;// 0x8590(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0241BF1542D9B5D80961BDBF11189B9D;// 0x8638(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_09A2EAA445CA0440DF564D9464909AC1;// 0x8680(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_75B3FA6F46445DA9565A77AF93680106;// 0x86D0(0x0048)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_2798666641C032BF9A9B748AE7C4EE52;// 0x8718(0x0110)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_F9809F6743EDB8194DA7D69AB5BD7233;// 0x8828(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_242DC02E4539EF1B4276559B5FFBD89E;// 0x8878(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A440D8334EC7ED4DC07AE6B750302811;// 0x8928(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2823A80F4C9B5ADECA59509FC0FE617B;// 0x8970(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8977519F476344CF33BA888A97E8E228;// 0x89C8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3EB586B744ECABB5A039468BC12552B7;// 0x8A10(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_51034A3740919FADB271E2824E39E53B;// 0x8A60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E8B40CD943FE2AACAE488D84B436881B;// 0x8AA8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A9462D38439BA77C61A93B86598EA664;// 0x8B00(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0CA863624B2C9693B05238A3E35ED033;// 0x8B48(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2D28F76E478B710EA9345DBDD88E16F6;// 0x8BF8(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_678A6B9D49CB5BBAB2EA12AEA8193D10;// 0x8D00(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9A0C04D249D5EB49933BABBEAC7F2173;// 0x8D58(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5D1B280F4E62852208563D80F583884C;// 0x8DA0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_548A0F274B6C096B06797384102D9FA6;// 0x8E48(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_816BF7E8414DF91B477C638AED5947D2;// 0x8E90(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_67D245924FF395E5AD33D6ADFD3AFEDF;// 0x8ED8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D300E40E44A817FE9E6035BB31044EFD;// 0x8F80(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_755AB7FD4355B5C347203297CD39805D;// 0x8FC8(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4B2424E24041FE698CEB8F88D52C65D8;// 0x9078(0x0090)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_260FF2AF4585E2064693B7A025A5C336;// 0x9108(0x0090)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_53209D924AB639131BF4C395BE8837E7;// 0x9198(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1DF4298E47785363EED2AD9C1C68A1B6;// 0x91E8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0F6A769C4E2E3D06E66EA98232E96584;// 0x9230(0x00B0)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_9B1C7C7E4F940C91EAF98BAD9B094A7B;// 0x92E0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C52F638E4BF80B4DBE6BBD8D923EA419;// 0x9330(0x0048)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_9993E16A49BAD500CB10DC9A424458A0;// 0x9378(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_46C2CD6244061F4017B2F68FCD8186D5;// 0x93C8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0627BA604BA43F809E9BD697D207D272;// 0x9410(0x0048)
	struct FAnimNode_HIKSolve                          AnimGraphNode_HIKSolve_ECBECB834333AC1DC5AE5096041D6774;  // 0x9458(0x0080)
	unsigned char                                      UnknownData00[0x8];                                       // 0x94D8(0x0008) MISSED OFFSET
	struct FAnimNode_HIKReach                          AnimGraphNode_HIKReach_E42BD3E8401C10A894C498B2E9584CC1;  // 0x94E0(0x0080)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_CE015F0A43EECEA9CA37099DADE92127;// 0x9560(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_8BE99C564AA6F979DADE2FBB2226B4C3;// 0x95B0(0x0050)
	struct FAnimNode_HIKSetProperty                    AnimGraphNode_HIKSetProperty_3AF3546C43C6BAE285D73D8F9A08D603;// 0x9600(0x0050)
	struct FAnimNode_HIKReach                          AnimGraphNode_HIKReach_DBD67FFD4536F215D08511B3C367CBD6;  // 0x9650(0x0080)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_14714C244A05F2E5A296C79CEA23AFB4;// 0x96D0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C6E9941A48999F3CFEA38C9217F3D72F;// 0x9718(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4A49EBD3452092FB53AFD1B1D2826BB7;// 0x97C0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FB23FFE84DF57BFFE9799BB26D2E91AA;// 0x9808(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F628C2E74AAC9CBD9B96E6B42D61ED13;// 0x9850(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3A76EE35475951C79F92F8BCFDB7FCD5;// 0x9898(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7173227A47E93B8C298A2CAD2AED65A4;// 0x9938(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_172E7ACF452FC7027A89B6B817E502E2;// 0x9980(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E498E6374CE9F0F04120E184C81D950F;// 0x99C8(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2ED6FDD242F34A548D3E9A854C42B9AC;// 0x9A10(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2AA22C4947DADD91F7F7A0A58361A3CB;// 0x9AB0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8EB2311F45F9646B4B2B078CDA9034EB;// 0x9AF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B2A691F2465BF8BFD07BD6B5A4531A29;// 0x9B38(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_917906FB43EE9D97EDCF49B38992F62D;// 0x9B78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7DDE0DF94D1DA2AEBD67FBB6A0D9C698;// 0x9BB8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC3848804ABA1D99208684A623BE8492;// 0x9BF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_341737F94DA1531508BD0291FFFCC276;// 0x9C38(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5DBAD6B246638C8277BCB5B0B5048671;// 0x9C78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C36AE9194BC2DF68BAC7CA884F969522;// 0x9CB8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2732DF7647EF095600903782E98BEC8B;// 0x9CF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8AAEF112440CBD374C8E809CD45F4C12;// 0x9D38(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4C28F395431AC6F9CA66F0AE13FB9CBB;// 0x9D78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5807F6B74E52737299A6C1AD86C8247D;// 0x9DB8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_42929259439955B3D04C68AA3394366E;// 0x9DF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C5FB4C6A4F1050616F166A8CB3EF770F;// 0x9E38(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C27553714E1A286B88CD2A8B6DA054AD;// 0x9E78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33BB35DF4D4761BB6D2E90AC9753DAEC;// 0x9EB8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73DDD4E04111F1E1471B029AABD19007;// 0x9EF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FE44775743940573EC8FDE80F26BD0A6;// 0x9F38(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0CC6DD2D480B7FDFADA910A47A8746B4;// 0x9F78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0DF7BAA343F65A88FD86B48973B3F81C;// 0x9FB8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_147ACE0149DF4FA79F2D75A161776F79;// 0x9FF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D23FB7D441FEEDFA61CF9C97F33BDE7D;// 0xA038(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1C4C59264B5BB736AE41528A126B3AFB;// 0xA078(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E495725544F40CD669CBD79CFF583B2B;// 0xA128(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91F42035475901E9442309B7F118DBD5;// 0xA180(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_515644C14A81D27C109E6A92F1A52F8F;// 0xA1D8(0x0048)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_28A70A1B4868DF6B6A0C1F90EC9D84CC;// 0xA220(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9D091A584840F78CA15A5F9CBC62AD47;// 0xA2E0(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B67A74BB4793DD7022C5AD8141247505;// 0xA338(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_92B26E294205102337F8218D60317932;// 0xA390(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BAAB0B5248907D6140FF4098CE56F974;// 0xA440(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C26789CB45CDE09F741C0E9629BE9206;// 0xA498(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D1F4BAE645667ADF569200A9F829A043;// 0xA4E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_57A52DDD4AE556E1807C2CAB96A9712C;// 0xA520(0x0040)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3BBAA4EE41ED876608B24FBB402255BD;// 0xA560(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1B0154384C1EABBC4520C69A9C1A9DC6;// 0xA620(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_11C83FBF4EC11C63C63C9F914A60650E;// 0xA678(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29CF7A374414F0DAA94FF5BD72A4A73C;// 0xA6C0(0x0058)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1D28739E427B01F64AF823864119E287;// 0xA718(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_345CCE7D4B02B8A01F9F7D902B0A54D7;// 0xA788(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CA4A36934BD751B60300C4A5DEB09520;// 0xA7D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9795D4564D2DAE68CD830D9EA65DCC0B;// 0xA820(0x0058)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_0CC916914B8ED56C76B7C0A9A7560956;// 0xA878(0x00C0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6386A3C44E494EC13EEC6EAD2BD25AD9;// 0xA938(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FBBB7CC24CF10EDCEAE8F1BF39844C29;// 0xA980(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DA18BF644C388E9C64D28FBA3C65513D;// 0xAA28(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D4617AA142CE9E35081CE59BCFE79436;// 0xAA70(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CE2BAB4045B25D33779CDAB7B98D4EDE;// 0xAAC8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4252B08846EC00A0C41040AC3D82792C;// 0xAB10(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9BCFD340486FDBE613DB2EB9D445B28E;// 0xAC18(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52E036D84EED41F1DED8BF912AD5640B;// 0xAC60(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3A189C5C4F74B1E5AAA31B88F1995DFA;// 0xACA0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AEE5C30B48918F31D8C36BBF9CF07DCB;// 0xACE0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_835706C24A9B24BDC070C19A5073395D;// 0xAD20(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FACF014946BD9E3E2372AD80C99C66F6;// 0xAD60(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A06361A743F89335FA1E4EA66F2EF58C;// 0xADA0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6DDA5A6D4C9F78D2EE24C6BE3BD1ADD1;// 0xADF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54B95FAB42E066488FAEF2B8F3EDAFC7;// 0xAE40(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_540E150C47A2520AC1C306AB58C79DCB;// 0xAE98(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1EFA34DB45C280823224DAABC8A233F6;// 0xAEE0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D85A8BAA472C15758CF09EBB94156FBB;// 0xAF88(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D21A0B2E43BBBD35FC4018860C7E9411;// 0xAFD0(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DF796E344291B1946AE31A8066053E96;// 0xB0D8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B1928EEA44F20DB8CE02FC88CF38FE07;// 0xB120(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_47DF4D7E4C2231B46CA932964D4B3A17;// 0xB178(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EACC97424EEC2540D90616A95D5577F5;// 0xB1C0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6C09643F40CF75409F05E99FE7979641;// 0xB268(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF1364674F23DF8D8717BDAB5FF18062;// 0xB2B0(0x0040)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_A2776BBA4C431762C50C87B6E32F6649;// 0xB2F0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3535BB164A3D6EA1E3002EBCC2C36182;// 0xB360(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48D2691A4E670255C8368E9D035ECA8B;// 0xB3A0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9D21F95D4687726F4B964281EBA0ACE8;// 0xB3E0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AF1EA6D444A9D8F6F0EDF59C51E4B09F;// 0xB438(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8ED430774C769C54B8AD4F8563D59ADD;// 0xB480(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CBFD6761444BB66D2392EEAC45447723;// 0xB4D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_52572D6B4B4F930FE99E28B23909FE30;// 0xB520(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7838FFDA4AA4DCA66270E08786B8AE19;// 0xB5C8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7F766E29483FC1AE9B2D8CBA4589421F;// 0xB608(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DFC20B024615280C001F8AB3CD52C152;// 0xB648(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_44F2BE4741380C20E4D47699472A7ED2;// 0xB6A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B6FDF0ED41E4797C3B9150931CD2A778;// 0xB6E8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_676EA3854B771E6814FE43B32E6AC749;// 0xB740(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3FA3DB2E468344DDD727B2AB6CDE3EBF;// 0xB788(0x00A8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D2A87BF94F909ADCA66E7C8A35E659CD;// 0xB830(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BA1DFFBB42A939470D6F16A443707D78;// 0xB8A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8F9818B54AB1419F1EF8E5800CCB2C7E;// 0xB8E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_770AFD814131A7B1AEDB3382982A8736;// 0xB920(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_54E9685748BFCFABC7AA9BB1B957D818;// 0xB960(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E17D7F444F25D03DA69654AA498A6F4C;// 0xB9A0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA0384E54F96D7D053627F88E08669CB;// 0xB9E0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3AD377A14A29BB3CAF122C9A9D0D7FDE;// 0xBA20(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AF74C8834B54AEE4A27E83811BDE3CA5;// 0xBA60(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3B8C4ACE4D3BF3DE50C07A98C237ADDF;// 0xBAA0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5FA015DA4FAEB79DE0F3A6B97901F620;// 0xBAE0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D18D0C4342754FEE1820989928D36345;// 0xBB20(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_63BFA8DE46AD045F7FFABEA73603D528;// 0xBB60(0x0040)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4E4A01414793CD12F15B10B7E81E63E8;// 0xBBA0(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_992B1F56461A2481154B59828669F90D;// 0xBBF0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9EE53B454BE5BC6BDFF48692B54683B1;// 0xBC38(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FAE897E44AF03D11B5B544B0A168EF6B;// 0xBC88(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_03393B4A40A186EB033C27A4D94F8990;// 0xBCD0(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D029C47847D4D66F921D199E00AF1C02;// 0xBD20(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_81B0D70F47EB7148BCDE05B6E23E75CE;// 0xBD68(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_54386DB146A1C52D59217D95270F0174;// 0xBDB8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_A0B7C5824BFF6C411F3F91B3CE8C6D40;// 0xBE00(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0AD632B444CAD0BAED2225A4D8480004;// 0xBE50(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_92A489FA42540ABCAC3AFBB62EF9529E;// 0xBEF0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87D7DFBD45771BBB777DE98ED82E2EBD;// 0xBF30(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD9172EA400842A93FC51EA7AB5868DA;// 0xBF70(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DD8CB5D64FA811EBE9FF1C9860C450D9;// 0xBFB0(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2787646D4FE0067F098BC0BDAB807BD7;// 0xC0B8(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E05905F049D97A45B83EB48691139149;// 0xC100(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_59BCCD4745865B28CD06E686D9D17208;// 0xC150(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7912B59E4042F1017F3272BA40A1F532;// 0xC198(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0BD4E3EC4CFC3FD2AFD8B691BF0FD7C7;// 0xC2A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_525A42304474E8C6E169E9A29D390906;// 0xC2E8(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B8F2DE434A9D9AF78D98F8A3D3DEE7F0;// 0xC390(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64DC74E1446A67964621DABB91D29D87;// 0xC3D0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F1F5ABAC4CC8171880114EBEF5C6DA30;// 0xC410(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_97103FF84815E6466B13FD8A93B9263E;// 0xC450(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DE561F3445C865094F535590722F7F50;// 0xC558(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_C83100BF4B80EBBD2132BABA0EE5E4D4;// 0xC5A0(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_933FA9FC43908395DEB0E9A210CAA7BB;// 0xC5F0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_52C6E52B4637E82E823BCBA24175110B;// 0xC638(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6EAEF841451304B23BE5DB9A84A88833;// 0xC740(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1C97CC344EC8BD52A92180A452B6E3C2;// 0xC788(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_05997EC140D17EEBFC3355A16159831C;// 0xC830(0x00A0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E5A045ED4AE33F7D5C5300A5CCB4A5FB;// 0xC8D0(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_7108FAE744831D00A83359A7AFD06EEF;// 0xC970(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8A5D63A841348E27DCD37D97D62E72A8;// 0xC9C0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B33900DB4A5027D68831ABBF942D6B86;// 0xCA08(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8426350045323907E207BC9C79FA8574;// 0xCAB0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11B8280F468470C79BC0BE85B88C4EB1;// 0xCAF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7D62BF41491C23400EDDF3A919B72A40;// 0xCB38(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4FAB512245F8F725FC795F9D6C19AECA;// 0xCB78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B23880CA46281EC43C57CE97FA18EF8B;// 0xCBB8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2A521915487BD0375E2FF3A68AFF3F28;// 0xCBF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_894B66DD4D136E5FDF69EA82975DF5F6;// 0xCC38(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CE1FE21D446E8A51C288A0B15AF935AF;// 0xCC78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93C5A93540BE5FE1783FC790FDD3E397;// 0xCCB8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_67A76BF04ED2F66105CCC6B1B05D4E37;// 0xCCF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F6CA06DD43554A3690C1EAAFFB742885;// 0xCD38(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EE254727489A4A39467563A7DDFFFB44;// 0xCD78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F82A3CF545C45C9424CA58BC769803F4;// 0xCDB8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6727E80348CD4230190E85BC61123F76;// 0xCDF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_231D9420489E474C86B4AAB810368A0E;// 0xCE38(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1155BC6C488562796C7B5AA2661C67EB;// 0xCE78(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_89EE80EF4D5A9DEAFFBDA8857A264B14;// 0xCEB8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_727F31A048C3938140E5F9859FCBB426;// 0xCEF8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CC1D03CB4C3F556F6521E5BB5D74B64C;// 0xCF38(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_873DE3B24C11E74E321E4983E3D350D5;// 0xCF78(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99F19DDF45EC43CFB6C6978F841A1ED5;// 0xCFD0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A9CE2B8A441368124786C5A4A93A29D0;// 0xD018(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9DF45A2B4D27863BF377C7A7FA0A3F1C;// 0xD058(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A1191C343F2E0073771DDB8437ABA28;// 0xD160(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_72EA10674FFD3878120DEEA20BA660CD;// 0xD1A8(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_72B91D6B430BBE767DA290B688F11C43;// 0xD2B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F17FD9914A568EA3933B40A8F0C46E3A;// 0xD2F8(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D73561A34C8391C6E80CE1A21158B127;// 0xD350(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8F0D5597473564D6818E7FA3FCA2D781;// 0xD398(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A107D739425ABD1D8F2192B6CD1CFA75;// 0xD448(0x0058)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F26398C544B4F5AF1E499B965DE34811;// 0xD4A0(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_500C00FE4B1E462CFB5FF9BD89D31B42;// 0xD5A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14A241094514D7AC08AF2D9D648CD21F;// 0xD5F0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EF21CD4C4FD496871F1564A6716656E6;// 0xD648(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_19418384401D047BEA93868D4A08F2C4;// 0xD690(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_06E0247C4D7CED0F9B7DE2B41E667F75;// 0xD738(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6487C8764696032E1B74FAA7BB8FA9CC;// 0xD780(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C923ECE94529D346878585B6BBDE981D;// 0xD7C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94DB998940A7BF876C8EDA8303827EFF;// 0xD800(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E61ACB884206408767A7F58191D9AB2F;// 0xD840(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_535159DD42454B2041459FA5C6B8549F;// 0xD880(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC4E9B79417E537B26EC6CAF14D33837;// 0xD8C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A7E10B4442D6F6725A589CB170B690F5;// 0xD900(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BBCC6A804DC7338DB36823824C0A08CA;// 0xD940(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64CF38F14250D8AC9DE8A9BB1E73BD4E;// 0xD980(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_059CC46A45B37AB57290909B5462472A;// 0xD9C0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_77D3DB2C438A1416704FE3985AF839CC;// 0xDA00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FC6AB72349457E258AE068B39C9C2594;// 0xDA40(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E561CB24BCAC71E315426B4A1508713;// 0xDA80(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E872A71B44E8854EB5CFB2AE65C77682;// 0xDAC0(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F62CDC95405C937ADC3EE6A4117AD40D;// 0xDB00(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB6043184FF6E877191A33B79D43B898;// 0xDB40(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_72485C45485871AD898D90B2744B1A58;// 0xDB80(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_44F111154FFF993EE74E6D866431F16D;// 0xDC88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1719C6C14D195494430CA3B7D4237A42;// 0xDCD0(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4069D5294969EC79633418A26E03B3C7;// 0xDD28(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_172D2F374DA5F379615C80AEB0153105;// 0xDD70(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_952CF4AA427481757CBBCB9ECF3D7F7A;// 0xDDC0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_5357D82C4D3D47BDEBF889998236AB19;// 0xDE08(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_051C9C544EDBF73ECC0AFC98395B9B53;// 0xDE58(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CCE90CA344F247D6ECD843B193AEECF4;// 0xDEA0(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_11C5EFD440D07D3F16AB608D05A03CA3;// 0xDEE0(0x0108)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A7809BD4083683A736DACB91193518E;// 0xDFE8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D3DF5C49438D15B8D0E95B9EA2ED10E2;// 0xE030(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4296EB4B4DAA36D934A780A820FECA08;// 0xE088(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1C19981D48DFAD3CE1453CB9A9D8DCED;// 0xE0D0(0x00A8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_48E2DA1C4B68D9823B3AFCAE19E12FDA;// 0xE178(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9E9304F044DACDE33415F18A883FBFAE;// 0xE1C0(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_77BAEC0B454FAB9177B86887F10A5CBD;      // 0xE268(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AC10C99548114CF51ABC2D9499C447B2;// 0xE2C8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7623E6AF46BD4AC349AB789A99CD4CAF;// 0xE310(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_787AB0784DAB91CD62BD08AD23FFEFAC;// 0xE3C0(0x0090)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_12A760774ACB60E43098029BEB05978B;// 0xE450(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1941DE8B448E37DD8660CFAD8DABD0C8;// 0xE498(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E96598BF46ACF4C6AF46D391D3E641D3;// 0xE4E0(0x0090)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_1103CBD948AD60C898B3848FCC475622;// 0xE570(0x00C0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_34F8BD844EF9873F3A9CB38DED4F1F72;// 0xE630(0x0090)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7B1F2FE344014482C07B5B9D773FDF0E;// 0xE6C0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6CAB69E84167D694DD4706B6F7430FF9;// 0xE708(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6459E0CD4418225059AD519E9F254E1F;// 0xE750(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_39A65C1D4871E78CC6DE9E9EB0D0E714;// 0xE7E0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C41587F14FE941888EFD2585733E931C;// 0xE828(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ED965A744BD79BF82D5351A1B4DF5D9B;// 0xE870(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C7950B754A9067EDA60263AFBF25C8BC;// 0xE8B8(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_47EEE190494242CE41106AAE49F5EF48;// 0xE948(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_82BCF1CE44A69F25099C0FB1A78C6EDD;// 0xE990(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3099A91147875EB98BA64CA4FB8EA0AB;// 0xE9D8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B6502AF344DF2E3629FC3F89BA192E48;// 0xEA20(0x0090)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FE73416E4AA9169E045C8797AD339CCA;// 0xEAB0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6B6290204DD1AC9D1773F0B045B1C84B;// 0xEAF8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0543155845BBC29CC3AC90A79D2C4F45;// 0xEB40(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7643933C400B12E8BAF606BB456ADC67;// 0xEBF0(0x0048)
	struct FScriptMulticastDelegate                    EventUpper;                                               // 0xEC38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0xEC48(0x0008) MISSED OFFSET
	struct FTransform                                  LHIKRelativeOffset;                                       // 0xEC50(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RHIKRelativeOffset;                                       // 0xEC80(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  ChestIKRelativeOffset;                                    // 0xECB0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              IKStretchSpine;                                           // 0xECE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKStretchArms;                                            // 0xECE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKStretchLegs;                                            // 0xECE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0xECEC(0x0004) MISSED OFFSET
	class UAnimationData*                              AnimationData;                                            // 0xECF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 LocomotionBlendspaceUpper;                                // 0xECF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBP_TurningAnimations                       TurnLeftAnimations;                                       // 0xED00(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBP_TurningAnimations                       TurnRightAnimations;                                      // 0xED18(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimSequence*                               TurnOutShuffle;                                           // 0xED30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               JumpStartAnimation;                                       // 0xED38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 JumpCycleBlendspace;                                      // 0xED40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               JumpPreImpact;                                            // 0xED48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      ControlledObject;                                         // 0xED50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FObjectMessagingHandle                      RelinquishedControlEventHandle;                           // 0xED58(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      TakenControlOfObjectEventHandle;                          // 0xEDA0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimSequence*                               WheelInto;                                                // 0xEDE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBP_WheelTurns                              WheelLeftTurn;                                            // 0xEDF0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBP_WheelTurns                              WheelRightTurn;                                           // 0xEE08(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBP_WheelArmOverlay                         WheelLeftArm;                                             // 0xEE20(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBP_WheelArmOverlay                         WheelRightArm;                                            // 0xEE30(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimSequence*                               CapstanAttach;                                            // 0xEE40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CapstanDetach;                                            // 0xEE48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UBlendSpace1D*>                       CapstanNeutral;                                           // 0xEE50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UBlendSpace1D*>                       CapstanPush;                                              // 0xEE60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UBlendSpace1D*>                       CapstanPull;                                              // 0xEE70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UBlendSpace1D*                               CapstanUpperIntentBS;                                     // 0xEE80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBP_AnimSequenceVariants                    WheelLeftFingerIdleAnimations;                            // 0xEE88(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBP_AnimSequenceVariants                    WheelRightFingerIdleAnimations;                           // 0xEE98(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentRightHandIdle_1;                                   // 0xEEA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentRightHandIdle_2;                                   // 0xEEAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentLeftHandIdle_1;                                    // 0xEEB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentLeftHandIdle_2;                                    // 0xEEB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBP_SailControlLogic                        SailControlLogic;                                         // 0xEEB8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimSequence*                               CameraAdditiveDefaultYaw;                                 // 0xEEE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CameraAdditiveWheelYaw;                                   // 0xEEE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CameraAdditiveCapstanYaw;                                 // 0xEEF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CameraAdditiveSailYaw;                                    // 0xEEF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CameraAdditiveDefaultPitch;                               // 0xEF00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CameraAdditiveWheelPitch;                                 // 0xEF08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CameraAdditiveCapstanPitch;                               // 0xEF10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CameraAdditiveSailPitch;                                  // 0xEF18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 OutOfRunBlendspace;                                       // 0xEF20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 JumpLandLightBlendspace;                                  // 0xEF28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 JumpLandHeavyBlendSpaces;                                 // 0xEF30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CharacterType_;                                           // 0xEF38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ELadderState>                          LadderState;                                              // 0xEF40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0xEF41(0x0003) MISSED OFFSET
	float                                              LadderAnimationTime;                                      // 0xEF44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               IdleAnimation;                                            // 0xEF48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                HandOverlayMontage;                                       // 0xEF50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAthenaAnimationDeathAnimData               DeathAnims;                                               // 0xEF58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAthenaAnimationSwimmingAnimData            SwimmingAnims;                                            // 0xEF78(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      CurrentItem;                                              // 0xEFE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAthenaAnimationCannonConcealedAnimData     ConcealedCannonAnims;                                     // 0xEFE8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ContinuousUse1Chosen;                                     // 0xEFF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0xEFF9(0x0007) MISSED OFFSET
	struct FObjectMessagingHandle                      EventDockedToObjectHandle;                                // 0xF000(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      EventUndockedFromObjectHandle;                            // 0xF048(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimSequence*                               Camera_Additive_Ladder_Yaw;                               // 0xF090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               Camera_Additive_Ladder_Pitch;                             // 0xF098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFemale;                                                 // 0xF0A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CutsceneItemsSpawned;                                     // 0xF0A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Humanoid_FirstPerson.BP_Humanoid_FirstPerson_C");
		return ptr;
	}


	void ItemWielded(TScriptInterface<class UWieldableInterface>* Item, struct FWieldAnimationParams* AnimParams);
	void Start_Stow(bool InputPin);
	void Start_Wield(const TScriptInterface<class UWieldableInterface>& Wielded_Item);
	void Update_Athena_Character(class AAthenaCharacter* AthenaCharacter);
	void CapstanRotationSpeed(float RotationSpeed);
	void DockingInterface(const struct FBP_Docking& Docking);
	void CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor);
	void IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_948AA19D4BBB26DE46D6F68AF0632D40();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_FA9D62B442CAC6470510759CC47028BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_927CB34045C3A632F15D3A87C93E8882();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_79EAD2674E9004B0943CE99382032BB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_B28A44EA43484CF3CAA41B9D0A1466F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_7DBF6FFF4FABF7A1FB5D54AFB78C34B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_753E6A3C4E2B9ADDBF7DE6A2F37B4149();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_C1B654AE48446548146379A0ADA342A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_94D232914CE207A62C243DABF29B1D39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_D49029824FFABD54055266A4B1D0F078();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_7F5409A74D39BAAE12B073AEAD11C830();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_0393B7734364FB279A07BE8DD4E26B32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_81AE75D943BEE0611AADAF96519B79F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_820D617B441B04665F9DB4A864DDAE30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_27E78F814A610563337C299CDC625C0B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_72D46F714D55C230DC4464A3BC9E7B55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_DF8030724C0B3E88EB5945B61A276B65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_07069C9443BEB11D4085E5A234862D72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_5218ABC940DE9A2A8C531BAE965970BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_983A065D44F2D1BF202A8091B1EC744F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_CA0F377A46DE783A714451978F294EE7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_0065DD5E4AEF508DCC1F40A6FE280D8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_F2B9CC8E4A873043809F748F674D371B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_64C97D8240BFB5D45B3CDFB5A21E685B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_1391AB0C4353FB8672072CB0372E2D14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_D5FD9B2F4908D15B6512CB98AFC7EC6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_1DB962564495322F1D6E0299F8D5F977();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_C9B0F834472B6D6E6D928C92CE64DDF1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_9F7DAEBC498F8AA46442A295D52A4EEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_1AE3662640E5D930EC691DADD7A37914();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_EB40443F4CC91A18E7F2FD9A3DCF649B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_E2463EE945357D91B4C6F5BE69AF9FEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_147F3E5D4D4EF17A1207CAB46616F342();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_2B7EB5DB4E43198D2E91019FDA98C28E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_8F294C4E41E3232362E06EB316D882E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_FA46522340E88018CDD393A4835AFEE0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_7FF634F540389C07EE91648A06B1A928();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_033A7878495D52DD0E1606A007910003();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_23E534104A87F765C276ECAE687C40FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_7F8FF6BF45A0241923039ABFF878B327();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_3B9D140B462925B0F74A51B6095F5895();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_D743353D417980747A3FD989D345634E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_7C8F9A914B30A2B8AD134A91FDF60E6D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_FAA7A9C042B877260702C0910C2592EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_0A995FA8445AE1C9F5F13A8CC5E17317();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_B0BF7B09421E1B2C550E36900E73EE61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_7C73E2DD49BAA2E326CC6DA891D667D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_825FA43542896E7C744853B7CAA3AC15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_73BA2333404B0B2ED23A46BC6104482A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_2472EA954528905CFE3FBDA1883F4220();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_58AC7D7D4840BACD91C450980BC64658();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_14FA8C97492E9C23A67144B399259131();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_90B3EC8C4D1FF150CEEDB8A6A4B67A84();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_67B9A90348EC7B69EE973FBDC9FFCA98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_23C1957B4FB54DC48407F98B0C642CA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_CF8568B748E2986D61BB44BEE9B49F7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_D5B15C8E47DB370C0ADA6483C25E58EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_44AD2BB342D0F2561FB94EB5F952B9E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_402F52F544F90941492B34AC765CC050();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_154E2A1249D724202CAC588DB6DFACB5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_53656A0C401E9D8814612F88AE19B3D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_88F58F3049D75D378863E28B3E0BA04A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_4FC8234F4B54F1E3DF1012A5D3E1C031();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_82903E584D7994295D3ABE912B31B4CF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_AA15013E475FC7D90CB4E7BE15B3EACC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_BB2A78A0401E119194337BA137C9DFCA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_CABDB43844276933954B329B5CD68721();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_F91E008443A5138B592211B4B1AA9753();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_88137F364C1010F700BD2B933548D6B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_47FE7632495346574D701A8404459F74();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_7421B970447C29586D0840936C0CC174();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_1CD9726946A348C8278A458BE991C17C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_77DF910242FB159533AFC694EB125B5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_9C4CB6E149BFF7FD8AB5158633676E38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_E249442D47798C3780AF45BC524A461D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_4FCFF14647FD96E50E43228D82332CD2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_5A7FEE6245CDA017C2DE728A6E606BAB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_A42D9EB744B6CE804DBD17B41AD5B0B0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_9FB2171E4CC4B457E3E450A9CB895B4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_89BD283B4F69A10535F5159E4CFAB212();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_FFCA7B1E42D52FF658E3DBB275B79289();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_A22B58A746CE63E1F695809768479B3D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_C8A65B5945E9BBAE51334B891812DA38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_AA661F9F4AD62C72ABBFF98402A05535();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_4C8B1DD04E6B90A6E84C3EAEA254D36C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_EC2E69204E39DD097F7D77ACE38528D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_0178D7D3468564C585892E94CACA2799();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_940184B44514CAC819E27E970184680C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_2389DD79467A5DD71544B48F00A6E01A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_49F26C134FFB0E19B09E2FB3EC674CC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_25970FB041FAF94111AAF18629169D7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_E10B89074A435563F15DBCB683566621();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_0B9FEF1A47E0DD3D5BFD798DDFB6E849();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_FC91638A45E05D20E474C59C1A1CF4E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_E81318B34D8511A80043C2B9D3274D8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_123526EE4144B286DBA741B2FEA6E5B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_DCA53CB84E6601BC6FCB9BB03C134C7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_F77E54DF4494C4438783B9A16FE6A50C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_5883EEB94A4E9554519AFF82E1878DFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_8AB0B9A547B3DC564F83B8B0609A0CBA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_5B46034D4F6337B84774A18F56268C76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_77C8BDAB4EDB906473E4618D1B5D711A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_9028199045473BB076A69B8812086C29();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpaceEvaluator_113DD02044BBC04D539786BBBE106D92();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_42F5B7BB4DB01540751506871A26978D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_56F2DE2B473F2348AA56C9BB8ABABA5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_7F4DCEEA4C715ACB1E1C179E418323C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_BEC8329C4B5EF27D49B37880FEAC8674();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_01FFAF124A976EA8AFA487BE818366A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_6C8A1FD94D655195BE7124849BE39D0F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_EEA9D7A940B822ED2476D28DB7F2EEF8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_901288274FAD069F1203EAA2C7DDAD46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_612C4B1C41B908993D2FBDBE499D46DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_619D88B74C56AF22B4A19B9772AAFCAF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_A69CC76C4D46CF5FFD3155A1AB55C8C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_717283874E19F474AA87639B5CC447EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_AE9CFB9F4AF3E48FE63BA29EACAA3C63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_4D0F0E1741BD56DEC62329AED5CF6068();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_03ABDF4A4345AEA30888E184C7275C52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_EF99854B44E1FFAEFFA05E9CC30E1E0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_B349BEFD4CEEC950D0D3029C3A63ECB4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_653B2A904F3734DBDF1893A7B6FC41DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_797F255D459C7814293DAA9783AA5905();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_562957EE409443DC0FBAB5B39BCF4AFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_BAC980FE4F09933FBB789988CDEE1DAB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_BE23C99544F628EC541279971371CA56();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_CEB5DBEC4D18E334015C718A2671863B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_3C99232741D366E265530693E53E0EAD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_885866B543DD30363DF62E9DA332C8BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_3E76724248EDE265C48D3BA2798E732C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_9C9EFA104875FFB2172FA8B957A41590();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_DA21FA8F426CDF8CE3B2E88AED77FA05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_BFBAD1BC4C8B9B05AB51889DF2FE29C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_87E63B2241D3A47669976BB98212639F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_D4232AF9414B06122FA07B89D4C885E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_6242580F4B496CC2B3BEA086F13532C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_E0FB565242F35E0CC7CC8E9D56B4E1A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_751173444E5B0D5F486F52B67754272A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_4AEAD5684C658EE69F0941A1A77C10EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_7A09715F4A83A456611E2AA11CF5036C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_78E9238F4B1B281E8D0A489E2B634C5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_A06931E7475EA79253EC4E85B2D0BBC9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_8DBACF184C327F61BE8EC2A191F95DFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_AB076BFF45B66E3339AEFE90175D6B2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_1A5727864F58BBB00D6A118A31C516E1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_C9847A1246DA7A421C59D88C48876D7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_9D40264B49660B6683201699C8708E4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_9C111B5448E091E1799E2EACB65B6915();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_73CFF3124FD0960B82293FBE7A2EFAC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_6324914645DB563106B057B297910FC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_09A2EAA445CA0440DF564D9464909AC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpaceEvaluator_2798666641C032BF9A9B748AE7C4EE52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_F9809F6743EDB8194DA7D69AB5BD7233();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_242DC02E4539EF1B4276559B5FFBD89E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_2823A80F4C9B5ADECA59509FC0FE617B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_3EB586B744ECABB5A039468BC12552B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_E8B40CD943FE2AACAE488D84B436881B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_0CA863624B2C9693B05238A3E35ED033();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_2D28F76E478B710EA9345DBDD88E16F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_678A6B9D49CB5BBAB2EA12AEA8193D10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_0F6A769C4E2E3D06E66EA98232E96584();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_HIKReach_E42BD3E8401C10A894C498B2E9584CC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_HIKReach_DBD67FFD4536F215D08511B3C367CBD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_8EB2311F45F9646B4B2B078CDA9034EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_B2A691F2465BF8BFD07BD6B5A4531A29();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_917906FB43EE9D97EDCF49B38992F62D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_7DDE0DF94D1DA2AEBD67FBB6A0D9C698();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_341737F94DA1531508BD0291FFFCC276();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_C36AE9194BC2DF68BAC7CA884F969522();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_8AAEF112440CBD374C8E809CD45F4C12();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_4C28F395431AC6F9CA66F0AE13FB9CBB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_42929259439955B3D04C68AA3394366E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_C27553714E1A286B88CD2A8B6DA054AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_0CC6DD2D480B7FDFADA910A47A8746B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_D23FB7D441FEEDFA61CF9C97F33BDE7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_92B26E294205102337F8218D60317932();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_D1F4BAE645667ADF569200A9F829A043();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_57A52DDD4AE556E1807C2CAB96A9712C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_4252B08846EC00A0C41040AC3D82792C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_52E036D84EED41F1DED8BF912AD5640B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_3A189C5C4F74B1E5AAA31B88F1995DFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_AEE5C30B48918F31D8C36BBF9CF07DCB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_835706C24A9B24BDC070C19A5073395D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_FACF014946BD9E3E2372AD80C99C66F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_A06361A743F89335FA1E4EA66F2EF58C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_54B95FAB42E066488FAEF2B8F3EDAFC7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_D21A0B2E43BBBD35FC4018860C7E9411();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_B1928EEA44F20DB8CE02FC88CF38FE07();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_ApplyAdditive_A2776BBA4C431762C50C87B6E32F6649();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_3535BB164A3D6EA1E3002EBCC2C36182();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_48D2691A4E670255C8368E9D035ECA8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_9D21F95D4687726F4B964281EBA0ACE8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_8ED430774C769C54B8AD4F8563D59ADD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_7838FFDA4AA4DCA66270E08786B8AE19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_7F766E29483FC1AE9B2D8CBA4589421F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_DFC20B024615280C001F8AB3CD52C152();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequencePlayer_B6FDF0ED41E4797C3B9150931CD2A778();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_ApplyAdditive_D2A87BF94F909ADCA66E7C8A35E659CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_BA1DFFBB42A939470D6F16A443707D78();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_8F9818B54AB1419F1EF8E5800CCB2C7E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_770AFD814131A7B1AEDB3382982A8736();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_54E9685748BFCFABC7AA9BB1B957D818();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_E17D7F444F25D03DA69654AA498A6F4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_DA0384E54F96D7D053627F88E08669CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_3AD377A14A29BB3CAF122C9A9D0D7FDE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_AF74C8834B54AEE4A27E83811BDE3CA5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_3B8C4ACE4D3BF3DE50C07A98C237ADDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_5FA015DA4FAEB79DE0F3A6B97901F620();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_D18D0C4342754FEE1820989928D36345();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_63BFA8DE46AD045F7FFABEA73603D528();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_4E4A01414793CD12F15B10B7E81E63E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_9EE53B454BE5BC6BDFF48692B54683B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_03393B4A40A186EB033C27A4D94F8990();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_81B0D70F47EB7148BCDE05B6E23E75CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_LayeredBoneBlend_0AD632B444CAD0BAED2225A4D8480004();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_92A489FA42540ABCAC3AFBB62EF9529E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_87D7DFBD45771BBB777DE98ED82E2EBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_FD9172EA400842A93FC51EA7AB5868DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_DD8CB5D64FA811EBE9FF1C9860C450D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_E05905F049D97A45B83EB48691139149();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_7912B59E4042F1017F3272BA40A1F532();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_B8F2DE434A9D9AF78D98F8A3D3DEE7F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_64DC74E1446A67964621DABB91D29D87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_F1F5ABAC4CC8171880114EBEF5C6DA30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_97103FF84815E6466B13FD8A93B9263E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_C83100BF4B80EBBD2132BABA0EE5E4D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_52C6E52B4637E82E823BCBA24175110B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_7108FAE744831D00A83359A7AFD06EEF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_11B8280F468470C79BC0BE85B88C4EB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_7D62BF41491C23400EDDF3A919B72A40();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_4FAB512245F8F725FC795F9D6C19AECA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_B23880CA46281EC43C57CE97FA18EF8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_2A521915487BD0375E2FF3A68AFF3F28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_894B66DD4D136E5FDF69EA82975DF5F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_CE1FE21D446E8A51C288A0B15AF935AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_93C5A93540BE5FE1783FC790FDD3E397();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_67A76BF04ED2F66105CCC6B1B05D4E37();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_F6CA06DD43554A3690C1EAAFFB742885();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_EE254727489A4A39467563A7DDFFFB44();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_F82A3CF545C45C9424CA58BC769803F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_6727E80348CD4230190E85BC61123F76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_231D9420489E474C86B4AAB810368A0E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_1155BC6C488562796C7B5AA2661C67EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_89EE80EF4D5A9DEAFFBDA8857A264B14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_727F31A048C3938140E5F9859FCBB426();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_CC1D03CB4C3F556F6521E5BB5D74B64C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_9DF45A2B4D27863BF377C7A7FA0A3F1C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_72EA10674FFD3878120DEEA20BA660CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_F26398C544B4F5AF1E499B965DE34811();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_6487C8764696032E1B74FAA7BB8FA9CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_C923ECE94529D346878585B6BBDE981D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_94DB998940A7BF876C8EDA8303827EFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_E61ACB884206408767A7F58191D9AB2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_535159DD42454B2041459FA5C6B8549F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_BC4E9B79417E537B26EC6CAF14D33837();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_A7E10B4442D6F6725A589CB170B690F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_BBCC6A804DC7338DB36823824C0A08CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_64CF38F14250D8AC9DE8A9BB1E73BD4E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_059CC46A45B37AB57290909B5462472A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_77D3DB2C438A1416704FE3985AF839CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_FC6AB72349457E258AE068B39C9C2594();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_6E561CB24BCAC71E315426B4A1508713();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_E872A71B44E8854EB5CFB2AE65C77682();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_F62CDC95405C937ADC3EE6A4117AD40D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_TransitionResult_DB6043184FF6E877191A33B79D43B898();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_72485C45485871AD898D90B2744B1A58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_172D2F374DA5F379615C80AEB0153105();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_SequenceEvaluator_5357D82C4D3D47BDEBF889998236AB19();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendSpacePlayer_11C5EFD440D07D3F16AB608D05A03CA3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByEnum_1103CBD948AD60C898B3848FCC475622();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_ModifyBone_6459E0CD4418225059AD519E9F254E1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_ModifyBone_C7950B754A9067EDA60263AFBF25C8BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_ModifyBone_B6502AF344DF2E3629FC3F89BA192E48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Humanoid_FirstPerson_AnimGraphNode_BlendListByBool_0543155845BBC29CC3AC90A79D2C4F45();
	void UnbindFromCharacter(class AAthenaCharacter** Character);
	void BindFirstPersonToCharacter(class AAthenaCharacter** Character, class UClass** AnimDataId);
	void LoadCharacterAnimations(class UClass** AnimDataId);
	void AnimNotify_IKOn();
	void AnimNotify_IKOff();
	void IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace);
	void IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const struct FTransform& TransformUpdate);
	void IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength);
	void IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch);
	void AnimNotify_RightHandIIKOff_S();
	void AnimNotify_RightHandIKOff();
	void AnimNotify_LeftHandIIKOff_S();
	void AnimNotify_LeftHandIKOff();
	void AnimNotify_RightHandIKOn();
	void AnimNotify_LeftHandIKOn();
	void AnimNotify_BothHandsIKOn_S();
	void OnUndockedFromObject(const struct FEventUndockedFromObject& Event);
	void OnDockedToObject(const struct FEventDockedToObject& Event);
	void OnTakenControl(const struct FEventTakenControlOfObject& TakenControlOfObjectEvent);
	void OnRelinqusihedControl(const struct FEventRelinquishedControlOfObject& RelinquishedControlEvent);
	void AnimNotify_ExitJumpLand();
	void AnimNotify_Upper_TurnRight();
	void AnimNotify_Upper_TurnLeft();
	void AnimNotify_Upper_Locomotion();
	void AnimNotify_Upper_InIdle();
	void AnimNotify_ResetRunStopRequired();
	void AnimNotify_OnLeftItemBlockFeedback();
	void AnimNotify_OnEnteredItemBlockFeedback();
	void AnimNotify_OnLeftItemBlocking();
	void AnimNotify_OnOneShotComplexComplete();
	void AnimNotify_OnEnterEquipState();
	void AnimNotify_OnIntoContinuousUseComplete();
	void AnimNotify_ArmOverlay_BlendFinished1();
	void AnimNotify_OnStartEnteredOneShotUse();
	void AnimNotify_OnStartContinuousUse();
	void AnimNotify_OnOutOfContinuousUseComplete();
	void AnimNotify_OnStartOutOfContinuousUse();
	void AnimNotify_OnOneShotUseComplete();
	void AnimNotify_UnequipComplete();
	void AnimNotify_EquipComplete();
	void AnimNotify_OnIdle();
	void ItemStowed(TScriptInterface<class UWieldableInterface>* Item, bool* FastStow);
	void AnimNotify_ResetIKBlendOut();
	void AnimNotify_ObjectTurnOff();
	void ObjectEquip();
	void AnimNotify_ObjectSwimming();
	void AnimNotify_ObjectTurning();
	void AnimNotify_ObjectIdle();
	void AnimNotify_ObjectLocomotion();
	void AnimNotify_IncrementIdleAnimSequence();
	void AnimNotify_ArmOverlay_Blocking_OutOf();
	void AnimNotify_ArmOverlay_Blocking_FeedbackB();
	void AnimNotify_ArmOverlay_Blocking_FeedbackA();
	void AnimNotify_ArmOverlay_Blocking_Locomotion();
	void AnimNotify_ArmOverlay_Blocking_Into();
	void AnimNotify_ArmOverlay_ComplexRecover();
	void AnimNotify_ArmOverlay_ComplexAction();
	void AnimNotify_ArmOverlay_ComplexWarmUp();
	void AnimNotify_ArmOverlay_InContinuousSwimming();
	void AnimNotify_ArmOverlay_InContinuousLandLight();
	void AnimNotify_ArmOverlay_InContinuousJumpPreImpact();
	void AnimNotify_ArmOverlay_InContinuousJumpCycle();
	void AnimNotify_ArmOverlay_InContinuousJumpStart();
	void AnimNotify_ArmOverlay_InContinuousLocomotion();
	void AnimNotify_ArmOverlay_InContinuousOut1();
	void AnimNotify_ArmOverlay_InContinuousCycle1();
	void AnimNotify_ArmOverlay_InContinuousIn1();
	void AnimNotify_ArmOverlay_InOneShot1();
	void AnimNotify_ArmOverlay_InUnequip1();
	void AnimNotify_ArmOverlay_InEquip1();
	void AnimNotify_ArmOverlay_InLandLight1();
	void AnimNotify_ArmOverlay_InJumpPreimpact1();
	void AnimNotify_ArmOverlay_InJumpCycle1();
	void AnimNotify_ArmOverlay_InJumpStart1();
	void AnimNotify_ArmOverlay_InSwimming1();
	void AnimNotify_ArmOverlay_InTurning1();
	void AnimNotify_ArmOverlay_InLocomotion1();
	void AnimNotify_ArmOverlay_InIdle1();
	void AnimNotify_EndCutscene();
	void AnimNotify_Cutscene_DeleteBanana();
	void AnimNotify_Cutscene_DeleteMap();
	void AnimNotify_Cutscene_DeleteDagger();
	void AnimNotify_Cutscene_DeleteBagOfGold();
	void AnimNotify_SpawnCutsceneItems();
	void AnimNotify_FaunaAddedToCrate();
	void ExecuteUbergraph_BP_Humanoid_FirstPerson(int EntryPoint);
	void EventUpper__DelegateSignature(const struct FName& StateName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
