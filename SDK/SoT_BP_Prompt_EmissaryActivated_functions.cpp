// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryActivated_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.OnEmissaryActivatedFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryLevel_FEmissaryActivated NewParam                       (Parm)

void UBP_Prompt_EmissaryActivated_C::OnEmissaryActivatedFunc(const struct FEmissaryLevel_FEmissaryActivated& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.OnEmissaryActivatedFunc"));

	struct
	{
		struct FEmissaryLevel_FEmissaryActivated NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.EmissaryActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryLevel_FEmissaryActivated NewParam                       (Parm)

void UBP_Prompt_EmissaryActivated_C::EmissaryActivated(const struct FEmissaryLevel_FEmissaryActivated& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.EmissaryActivated"));

	struct
	{
		struct FEmissaryLevel_FEmissaryActivated NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryActivated_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryActivated_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryActivated_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.ExecuteUbergraph_BP_Prompt_EmissaryActivated
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryActivated_C::ExecuteUbergraph_BP_Prompt_EmissaryActivated(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryActivated.BP_Prompt_EmissaryActivated_C.ExecuteUbergraph_BP_Prompt_EmissaryActivated"));

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
