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

// UserDefinedStruct DS_TheArtOfTheTrickster_VaultVariables.DS_TheArtOfTheTrickster_VaultVariables
// 0x0018
struct FDS_TheArtOfTheTrickster_VaultVariables
{
	class UVaultPuzzleDataAsset*                       FakeOutVaultDataAsset_5_CCF3CB8C452A214F203365820C8A14CA; // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVaultPuzzleDataAsset*                       CombatVaultDataAsset_6_1F49F6EC451C94E761FA28B869E8AB90;  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MedallionClass_9_81C1F3F248D815EA07AA0681F9AE42C2;        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
