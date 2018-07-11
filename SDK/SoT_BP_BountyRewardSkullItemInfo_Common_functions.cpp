// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkullItemInfo_Common_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BountyRewardSkullItemInfo_Common.BP_BountyRewardSkullItemInfo_Common_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Common_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Common.BP_BountyRewardSkullItemInfo_Common_C.UserConstructionScript");

	ABP_BountyRewardSkullItemInfo_Common_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Common.BP_BountyRewardSkullItemInfo_Common_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Common_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Common.BP_BountyRewardSkullItemInfo_Common_C.ReceiveBeginPlay");

	ABP_BountyRewardSkullItemInfo_Common_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Common.BP_BountyRewardSkullItemInfo_Common_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Common
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BountyRewardSkullItemInfo_Common_C::ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Common(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Common.BP_BountyRewardSkullItemInfo_Common_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Common");

	ABP_BountyRewardSkullItemInfo_Common_C_ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Common_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
