// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkullItemInfo_Rare_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BountyRewardSkullItemInfo_Rare.BP_BountyRewardSkullItemInfo_Rare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Rare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Rare.BP_BountyRewardSkullItemInfo_Rare_C.UserConstructionScript");

	ABP_BountyRewardSkullItemInfo_Rare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Rare.BP_BountyRewardSkullItemInfo_Rare_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Rare_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Rare.BP_BountyRewardSkullItemInfo_Rare_C.ReceiveBeginPlay");

	ABP_BountyRewardSkullItemInfo_Rare_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Rare.BP_BountyRewardSkullItemInfo_Rare_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Rare
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BountyRewardSkullItemInfo_Rare_C::ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Rare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Rare.BP_BountyRewardSkullItemInfo_Rare_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Rare");

	ABP_BountyRewardSkullItemInfo_Rare_C_ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Rare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
