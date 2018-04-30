// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkullItemInfo_Legendary+_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BountyRewardSkullItemInfo_Legendary+.BP_BountyRewardSkullItemInfo_Legendary+_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Legendary__C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Legendary+.BP_BountyRewardSkullItemInfo_Legendary+_C.UserConstructionScript");

	ABP_BountyRewardSkullItemInfo_Legendary__C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Legendary+.BP_BountyRewardSkullItemInfo_Legendary+_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Legendary__C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Legendary+.BP_BountyRewardSkullItemInfo_Legendary+_C.ReceiveBeginPlay");

	ABP_BountyRewardSkullItemInfo_Legendary__C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Legendary+.BP_BountyRewardSkullItemInfo_Legendary+_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Legendary+
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BountyRewardSkullItemInfo_Legendary__C::ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Legendary_(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Legendary+.BP_BountyRewardSkullItemInfo_Legendary+_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Legendary+");

	ABP_BountyRewardSkullItemInfo_Legendary__C_ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Legendary__Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
