// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkullItemInfo_Legendary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BountyRewardSkullItemInfo_Legendary.BP_BountyRewardSkullItemInfo_Legendary_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Legendary_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Legendary.BP_BountyRewardSkullItemInfo_Legendary_C.UserConstructionScript");

	ABP_BountyRewardSkullItemInfo_Legendary_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BountyRewardSkullItemInfo_Legendary.BP_BountyRewardSkullItemInfo_Legendary_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Legendary_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Legendary.BP_BountyRewardSkullItemInfo_Legendary_C.ReceiveBeginPlay");

	ABP_BountyRewardSkullItemInfo_Legendary_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BountyRewardSkullItemInfo_Legendary.BP_BountyRewardSkullItemInfo_Legendary_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Legendary
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BountyRewardSkullItemInfo_Legendary_C::ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Legendary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Legendary.BP_BountyRewardSkullItemInfo_Legendary_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Legendary");

	ABP_BountyRewardSkullItemInfo_Legendary_C_ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Legendary_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
