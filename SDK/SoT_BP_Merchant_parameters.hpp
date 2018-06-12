#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Merchant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Merchant.BP_Merchant_C.UserConstructionScript
struct ABP_Merchant_C_UserConstructionScript_Params
{
};

// Function BP_Merchant.BP_Merchant_C.PlayItemAnimation
struct ABP_Merchant_C_PlayItemAnimation_Params
{
};

// Function BP_Merchant.BP_Merchant_C.ExecuteUbergraph_BP_Merchant
struct ABP_Merchant_C_ExecuteUbergraph_BP_Merchant_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
