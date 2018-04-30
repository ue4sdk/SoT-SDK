// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkullItemInfo_Common+_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BountyRewardSkullItemInfo_Common+.BP_BountyRewardSkullItemInfo_Common+_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Common__C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Common+.BP_BountyRewardSkullItemInfo_Common+_C.UserConstructionScript");

	ABP_BountyRewardSkullItemInfo_Common__C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Common+.BP_BountyRewardSkullItemInfo_Common+_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Common__C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Common+.BP_BountyRewardSkullItemInfo_Common+_C.ReceiveBeginPlay");

	ABP_BountyRewardSkullItemInfo_Common__C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Common+.BP_BountyRewardSkullItemInfo_Common+_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Common+
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BountyRewardSkullItemInfo_Common__C::ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Common_(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Common+.BP_BountyRewardSkullItemInfo_Common+_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Common+");

	ABP_BountyRewardSkullItemInfo_Common__C_ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Common__Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
