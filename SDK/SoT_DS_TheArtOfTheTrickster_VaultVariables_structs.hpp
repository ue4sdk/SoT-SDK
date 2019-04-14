#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_TheArtOfTheTrickster_VaultVariables.DS_TheArtOfTheTrickster_VaultVariables
// 0x0010
struct FDS_TheArtOfTheTrickster_VaultVariables
{
	class UVaultPuzzleDataAsset*                       FakeOutVaultDataAsset_5_CCF3CB8C452A214F203365820C8A14CA; // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVaultPuzzleDataAsset*                       CombatVaultDataAsset_6_1F49F6EC451C94E761FA28B869E8AB90;  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
