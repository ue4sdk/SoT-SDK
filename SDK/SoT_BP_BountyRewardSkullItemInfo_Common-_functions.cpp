// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkullItemInfo_Common-_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BountyRewardSkullItemInfo_Common-.BP_BountyRewardSkullItemInfo_Common-_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Common__C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BountyRewardSkullItemInfo_Common-.BP_BountyRewardSkullItemInfo_Common-_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BountyRewardSkullItemInfo_Common-.BP_BountyRewardSkullItemInfo_Common-_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Common__C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BountyRewardSkullItemInfo_Common-.BP_BountyRewardSkullItemInfo_Common-_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BountyRewardSkullItemInfo_Common-.BP_BountyRewardSkullItemInfo_Common-_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Common-
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BountyRewardSkullItemInfo_Common__C::ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Common_(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BountyRewardSkullItemInfo_Common-.BP_BountyRewardSkullItemInfo_Common-_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Common-"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
