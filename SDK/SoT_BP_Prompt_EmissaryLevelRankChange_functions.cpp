// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryLevelRankChange_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.OnEmissaryLevelRankChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryLevel_FEmissaryLevelRankChange NewParam                       (Parm)

void UBP_Prompt_EmissaryLevelRankChange_C::OnEmissaryLevelRankChange(const struct FEmissaryLevel_FEmissaryLevelRankChange& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.OnEmissaryLevelRankChange"));

	struct
	{
		struct FEmissaryLevel_FEmissaryLevelRankChange NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.EmissaryLevelRankChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryLevel_FEmissaryLevelRankChange NewParam                       (Parm)

void UBP_Prompt_EmissaryLevelRankChange_C::EmissaryLevelRankChange(const struct FEmissaryLevel_FEmissaryLevelRankChange& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.EmissaryLevelRankChange"));

	struct
	{
		struct FEmissaryLevel_FEmissaryLevelRankChange NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryLevelRankChange_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryLevelRankChange_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryLevelRankChange_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryLevelRankChange_C::ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryLevelRankChange.BP_Prompt_EmissaryLevelRankChange_C.ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange"));

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
