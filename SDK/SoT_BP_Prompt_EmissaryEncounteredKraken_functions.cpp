// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryEncounteredKraken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.OnEmissaryEncounteredKraken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEncounteredKrakenEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEncounteredKraken_C::OnEmissaryEncounteredKraken(const struct FEmissaryEncounteredKrakenEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.OnEmissaryEncounteredKraken"));

	struct
	{
		struct FEmissaryEncounteredKrakenEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.EmissaryEncounteredKraken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEncounteredKrakenEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEncounteredKraken_C::EmissaryEncounteredKraken(const struct FEmissaryEncounteredKrakenEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.EmissaryEncounteredKraken"));

	struct
	{
		struct FEmissaryEncounteredKrakenEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredKraken_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredKraken_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredKraken_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredKraken
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryEncounteredKraken_C::ExecuteUbergraph_BP_Prompt_EmissaryEncounteredKraken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredKraken.BP_Prompt_EmissaryEncounteredKraken_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredKraken"));

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
