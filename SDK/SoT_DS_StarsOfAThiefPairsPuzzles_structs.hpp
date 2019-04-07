#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_StarsOfAThiefPuzzle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_StarsOfAThiefPairsPuzzles.DS_StarsOfAThiefPairsPuzzles
// 0x0020
struct FDS_StarsOfAThiefPairsPuzzles
{
	TArray<struct FDS_StarsOfAThiefPuzzle>             Puzzles_18_54B3A2CC4FAEAA5A5E2288AD4C551A5A;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UVaultPuzzleDataAsset*                       PuzzleVaultData_22_B869D4C64ED4F7D5CF7BD993B64B8A47;      // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        VaultSolutionPages_25_E711E5FD494BAB44BA8520AE47ADBC79;   // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
