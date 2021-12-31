// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_EmissaryRank5_OOS_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptActor_EmissaryRank5_OOS.BP_PromptActor_EmissaryRank5_OOS_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_EmissaryRank5_OOS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissaryRank5_OOS.BP_PromptActor_EmissaryRank5_OOS_C.UserConstructionScript"));

	ABP_PromptActor_EmissaryRank5_OOS_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissaryRank5_OOS.BP_PromptActor_EmissaryRank5_OOS_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PromptActor_EmissaryRank5_OOS_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissaryRank5_OOS.BP_PromptActor_EmissaryRank5_OOS_C.ReceiveBeginPlay"));

	ABP_PromptActor_EmissaryRank5_OOS_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissaryRank5_OOS.BP_PromptActor_EmissaryRank5_OOS_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_EmissaryRank5_OOS_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissaryRank5_OOS.BP_PromptActor_EmissaryRank5_OOS_C.ReceiveEndPlay"));

	ABP_PromptActor_EmissaryRank5_OOS_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissaryRank5_OOS.BP_PromptActor_EmissaryRank5_OOS_C.ExecuteUbergraph_BP_PromptActor_EmissaryRank5_OOS
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_EmissaryRank5_OOS_C::ExecuteUbergraph_BP_PromptActor_EmissaryRank5_OOS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissaryRank5_OOS.BP_PromptActor_EmissaryRank5_OOS_C.ExecuteUbergraph_BP_PromptActor_EmissaryRank5_OOS"));

	ABP_PromptActor_EmissaryRank5_OOS_C_ExecuteUbergraph_BP_PromptActor_EmissaryRank5_OOS_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
