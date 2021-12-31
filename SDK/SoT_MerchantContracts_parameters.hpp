#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MerchantContracts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MerchantContracts.MerchantContractsBlueprintLibrary.GetDateFromTimeLimit
struct UMerchantContractsBlueprintLibrary_GetDateFromTimeLimit_Params
{
	TScriptInterface<class UGameServiceProviderInterface> ServiceProviderInterface;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	FText                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
