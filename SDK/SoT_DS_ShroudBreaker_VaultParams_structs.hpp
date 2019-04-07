#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_Shroudbreaker_MedallionParams_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_ShroudBreaker_VaultParams.DS_ShroudBreaker_VaultParams
// 0x0040
struct FDS_ShroudBreaker_VaultParams
{
	TAssetPtr<class APuzzleVault>                      Vault_10_19F0A8B94B9991D18AC1F38F02635A13;                // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        VaultPages_11_542B6BE74DC344410CFCAF8C760BF5B6;           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MedallionType_18_26B7CFE340A8D4453002E8994A26BAAD;        // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FDS_Shroudbreaker_MedallionParams>   VaultMedallions_15_74FC6B4742304392287ACFA0F166838D;      // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
