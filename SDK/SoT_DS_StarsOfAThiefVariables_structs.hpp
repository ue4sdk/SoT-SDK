#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_StarsOfAThiefPairsPuzzles_classes.hpp"
#include "SoT_DS_StarsOfAThief_VaultParams_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_StarsOfAThiefVariables.DS_StarsOfAThiefVariables
// 0x0118
struct FDS_StarsOfAThiefVariables
{
	class AActor*                                      BriggsyChest_68_0FC5B9984D2990D23EB05F96BBA380CE;         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            BriggsyChestRef_65_0E21BBB242FF38D6654E898B3348A9BA;      // 0x0008(0x0020) (Edit, BlueprintVisible)
	class AActor*                                      HandInChest_71_CCECE165436C2B3610C728906E52F9FD;          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpyglassSpawnLocation_74_8AE41AAB4F418BBBB608368AFB0094B5;// 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HandInChestLocation_77_AFC29A124762EDF3C0A5B791E193BFFD;  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TotemSpawnLocation_80_D58CCF994FA08EBB1344C3B3CBA58FF1;   // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StatueMouthTrigger_136_AF88864D48E8D99345E1E0A430DEE25E;  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Totem_89_4C6EB1AC44C920A6E0FF0E9BE3E94FED;                // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPC_92_4BED4C024FF5931BE2A806909C7DABB5;                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPCProxy_95_C34DF281422EDBEE8499CAB720DA8620;             // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDS_StarsOfAThiefPairsPuzzles               SelectedPuzzlePair_98_6FD1BAB243E67A08D20C94A3D44F41A3;   // 0x0068(0x0020) (Edit, BlueprintVisible)
	class AActor*                                      VaultRef_103_4DAE409F49D5CAE65DE2E3914B8350DD;            // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AAthenaPlayerCharacter*                      SpyglassCollector_109_F19C0E0D4087CAE9D37C4CBFB40BFB4A;   // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StatueMechanism_116_F039D28948D5F0D51CC598AB91A1E297;     // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        VaultPages_119_2079B9B0464FB89BFFB4839461BD8764;          // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            VaultAssetID_122_D91C44DE4AF1A77F5BC837943C19EEA4;        // 0x00A8(0x0020) (Edit, BlueprintVisible)
	struct FDS_StarsOfAThief_VaultParams               AllocatedVaultParams_125_ED4B489C408DB8097D35E4B86E8769E5;// 0x00C8(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      StarGem_129_1736228149C9E80498F6C28B7FF3203A;             // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StatueOpenReaction_132_2C1086314BB51EF2E32681B1A0120057;  // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CaveMusic_135_F247FB3847D996FE06E38189AF2FF7B8;           // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LockedStatueLocation_140_187E78724FA89A818C4592BF051022E5;// 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StatueLock_143_5A67D3374895607B98C770B2DF3ED7BB;          // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
