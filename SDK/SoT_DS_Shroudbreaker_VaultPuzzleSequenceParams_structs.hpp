#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_Shroudbreaker_VaultPuzzleSequenceParams.DS_Shroudbreaker_VaultPuzzleSequenceParams
// 0x0028
struct FDS_Shroudbreaker_VaultPuzzleSequenceParams
{
	class UVaultPuzzleDataAsset*                       PuzzleVaultData_2_4E2ADB9543DB3E5E8C89709D276F4BD4;       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        VaultPages_6_C7B439274195DE9B6F4B618614B36C54;            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTaleVaultHandle                            VaultHandle_20_FAD548F148BB6395FEAE0AA47CC6E74C;          // 0x0010(0x0008) (Edit, BlueprintVisible)
	class UClass*                                      VaultKeyType_13_9220ABB148F6E64DFDB67E8094151211;         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        VaultPuzzlePages_19_D3B5C3AA4768D2C93316E6A1EE31DC54;     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
