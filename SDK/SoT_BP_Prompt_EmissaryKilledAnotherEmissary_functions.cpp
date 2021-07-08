// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryKilledAnotherEmissary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.OnEmissaryKilledAnotherEmissary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryKilledAnotherEmissaryNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryKilledAnotherEmissary_C::OnEmissaryKilledAnotherEmissary(const struct FEmissaryKilledAnotherEmissaryNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.OnEmissaryKilledAnotherEmissary"));

	struct
	{
		struct FEmissaryKilledAnotherEmissaryNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.EmissaryKilledAnotherEmisary
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryKilledAnotherEmissaryNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryKilledAnotherEmissary_C::EmissaryKilledAnotherEmisary(const struct FEmissaryKilledAnotherEmissaryNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.EmissaryKilledAnotherEmisary"));

	struct
	{
		struct FEmissaryKilledAnotherEmissaryNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryKilledAnotherEmissary_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryKilledAnotherEmissary_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryKilledAnotherEmissary_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryKilledAnotherEmissary_C::ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C.ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary"));

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
