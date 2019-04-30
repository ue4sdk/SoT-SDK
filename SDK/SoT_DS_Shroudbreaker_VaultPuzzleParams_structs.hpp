#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_Shroudbreaker_VaultPuzzleParams.DS_Shroudbreaker_VaultPuzzleParams
// 0x0010
struct FDS_Shroudbreaker_VaultPuzzleParams
{
	class UVaultPuzzleDataAsset*                       PuzzleVaultData_4_102DFED545B095489692488A5E31E300;       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        VaultPuzzlePages_6_C18CBCA947E85684F40983949DE9FB04;      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
