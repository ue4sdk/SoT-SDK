// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryEncounteredSkellyFort_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.OnEmissaryEncounteredSkellyFort
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEncounteredSkellyFortNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEncounteredSkellyFort_C::OnEmissaryEncounteredSkellyFort(const struct FEmissaryEncounteredSkellyFortNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.OnEmissaryEncounteredSkellyFort"));

	struct
	{
		struct FEmissaryEncounteredSkellyFortNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.EmissaryEncounteredSkellyFort
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEncounteredSkellyFortNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEncounteredSkellyFort_C::EmissaryEncounteredSkellyFort(const struct FEmissaryEncounteredSkellyFortNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.EmissaryEncounteredSkellyFort"));

	struct
	{
		struct FEmissaryEncounteredSkellyFortNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredSkellyFort_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredSkellyFort_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredSkellyFort_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryEncounteredSkellyFort_C::ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredSkellyFort.BP_Prompt_EmissaryEncounteredSkellyFort_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredSkellyFort"));

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
