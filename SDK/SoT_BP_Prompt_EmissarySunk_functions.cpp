// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissarySunk_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.OnEmissarySunk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissarySunkNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissarySunk_C::OnEmissarySunk(const struct FEmissarySunkNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.OnEmissarySunk"));

	struct
	{
		struct FEmissarySunkNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.EmissarySunk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissarySunkNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissarySunk_C::EmissarySunk(const struct FEmissarySunkNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.EmissarySunk"));

	struct
	{
		struct FEmissarySunkNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissarySunk_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissarySunk_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissarySunk_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.ExecuteUbergraph_BP_Prompt_EmissarySunk
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissarySunk_C::ExecuteUbergraph_BP_Prompt_EmissarySunk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySunk.BP_Prompt_EmissarySunk_C.ExecuteUbergraph_BP_Prompt_EmissarySunk"));

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
