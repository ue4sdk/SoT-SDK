// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_EmissaryEncounteredKraken_OOS_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptActor_EmissaryEncounteredKraken_OOS.BP_PromptActor_EmissaryEncounteredKraken_OOS_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_EmissaryEncounteredKraken_OOS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissaryEncounteredKraken_OOS.BP_PromptActor_EmissaryEncounteredKraken_OOS_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissaryEncounteredKraken_OOS.BP_PromptActor_EmissaryEncounteredKraken_OOS_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PromptActor_EmissaryEncounteredKraken_OOS_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissaryEncounteredKraken_OOS.BP_PromptActor_EmissaryEncounteredKraken_OOS_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissaryEncounteredKraken_OOS.BP_PromptActor_EmissaryEncounteredKraken_OOS_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_EmissaryEncounteredKraken_OOS_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissaryEncounteredKraken_OOS.BP_PromptActor_EmissaryEncounteredKraken_OOS_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissaryEncounteredKraken_OOS.BP_PromptActor_EmissaryEncounteredKraken_OOS_C.ExecuteUbergraph_BP_PromptActor_EmissaryEncounteredKraken_OOS
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_EmissaryEncounteredKraken_OOS_C::ExecuteUbergraph_BP_PromptActor_EmissaryEncounteredKraken_OOS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissaryEncounteredKraken_OOS.BP_PromptActor_EmissaryEncounteredKraken_OOS_C.ExecuteUbergraph_BP_PromptActor_EmissaryEncounteredKraken_OOS"));

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
