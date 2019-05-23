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

// UserDefinedStruct DS_TheArtOfTheTrickster_VaultParams.DS_TheArtOfTheTrickster_VaultParams
// 0x0050
struct FDS_TheArtOfTheTrickster_VaultParams
{
	TAssetPtr<class APuzzleVault>                      Vault_2_FB8838284F5A745870C0DC97B9B4DED6;                 // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        VaultPages_5_D7F670B648722F0E2958359E1EF1619A;            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            AmmoCrate_8_E0D4CE064B6BB1F7B25C31BE308E3ED0;             // 0x0028(0x0020) (Edit, BlueprintVisible)
	class UClass*                                      MedallionClass_11_CE396EA342E982C7BE9538BF1B43F7B9;       // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
