#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_TheArtOfTheTrickster_Variables.DS_TheArtOfTheTrickster_Variables
// 0x0118
struct FDS_TheArtOfTheTrickster_Variables
{
	class AActor*                                      CagedSkeletonLocation_64_F54AAB164656D6A98B75F284133395A0;// 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GunpowderItem_34_317AA22E422B71D218D38092BB647FB3;        // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PlinthLocation_37_F554EBC149888097BBC65D87E82150D6;       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PlinthActor_40_E413E1DF4E2A8871961C26AE50538869;          // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            TrapmakersLabSkeletonSpawnLocation_47_AC1CFC56456D57118CC9F0B632D2ADB4;// 0x0020(0x0020) (Edit, BlueprintVisible)
	class AActor*                                      TotemActor_51_F864BE724DA77C613F0A7A9CDB19C4F9;           // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ShroudbreakerGemLocation_54_80F624E64D3E758EB9B64190F4899452;// 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      VaultTableLocation_57_4EFAFD924EDD176B007E838D7E4C4F7D;   // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      VaultTableActor_60_EAB8524F43083530B61DB894AC239531;      // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            VaultSkeletonSpawnLocation_63_03D07C5F4AAC7AB8A84C41B231EB8875;// 0x0060(0x0020) (Edit, BlueprintVisible)
	class AActor*                                      NPC_70_40172B3446DB391A66A09DBB033C8856;                  // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPCLocation_67_5DBBB4774FDCD3F6EC499AA3576737E9;          // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SaltyHandInLocation_73_2B7988E94128D2C068A6F9AB0034912A;  // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SaltyHandInReference_76_2F6893284F383BF7A6F0348D25331B99; // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTaleVaultHandle                            VaultHandle_88_B89FDED94D7DEB899DDEA787D7314C4C;          // 0x00A0(0x0008) (Edit, BlueprintVisible)
	class AActor*                                      Vault_95_CEE677A94010E267E964E88CB4131899;                // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      KeyType_94_73AAAD214C41D685C44BFA8FD14B3D41;              // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VaultSelectionOrigin_98_EE6F13114A4701058C4F6FB16ECA659E; // 0x00B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	class UQuestBookPageBundle*                        VaultPages_101_0DA87DE14D1D98E5A1A88CB8BBF77E2F;          // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      AmmoCrateLocation_107_23154AC3410BC63DE412D69509DA4BB2;   // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AItemInfo*                                   TotemItemInfo_114_25C4CE52471361B5C13EE085C8011EA0;       // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LabCollectableNoteItemInfo_117_78503C3E40C71209B8D0AABDBBF85224;// 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TrapmakersCaveMusicZoneLocation_121_DD8C834644EC59F8EA6A809337DEB3DB;// 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAISpawner*>                          VaultSpawners_125_5B9903274F27C1107C32FE805C9179CE;       // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAISpawner*                                  SelectedVaultSpawner_128_CE1269874DF5466B06994FAF20D3D097;// 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TrapmakersLabMusicZoneLocation_131_EE6E43D444522AA615F784B7CACCA5DA;// 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CaveOfBonesMusicZoneLocation_134_615782524D5877F8A7587FBC92206535;// 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
