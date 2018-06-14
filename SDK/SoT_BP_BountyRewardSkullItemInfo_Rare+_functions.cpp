// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkullItemInfo_Rare+_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BountyRewardSkullItemInfo_Rare+.BP_BountyRewardSkullItemInfo_Rare+_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Rare__C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Rare+.BP_BountyRewardSkullItemInfo_Rare+_C.UserConstructionScript");

	ABP_BountyRewardSkullItemInfo_Rare__C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Rare+.BP_BountyRewardSkullItemInfo_Rare+_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Rare__C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Rare+.BP_BountyRewardSkullItemInfo_Rare+_C.ReceiveBeginPlay");

	ABP_BountyRewardSkullItemInfo_Rare__C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Rare+.BP_BountyRewardSkullItemInfo_Rare+_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Rare+
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BountyRewardSkullItemInfo_Rare__C::ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Rare_(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Rare+.BP_BountyRewardSkullItemInfo_Rare+_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Rare+");

	ABP_BountyRewardSkullItemInfo_Rare__C_ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Rare__Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
