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

// UserDefinedStruct DS_StarsOfAThief_VaultParams.DS_StarsOfAThief_VaultParams
// 0x0028
struct FDS_StarsOfAThief_VaultParams
{
	TAssetPtr<class APuzzleVault>                      Vault_10_19F0A8B94B9991D18AC1F38F02635A13;                // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        VaultPages_14_1D027F9648653E344BF4B7A886D0DAAC;           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
