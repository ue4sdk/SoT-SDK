// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryEncounteredAIShip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.OnEmissaryEncounteredAIShip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEncounteredAIShipEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEncounteredAIShip_C::OnEmissaryEncounteredAIShip(const struct FEmissaryEncounteredAIShipEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.OnEmissaryEncounteredAIShip"));

	struct
	{
		struct FEmissaryEncounteredAIShipEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.EmissaryEncounteredAIShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryEncounteredAIShipEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryEncounteredAIShip_C::EmissaryEncounteredAIShip(const struct FEmissaryEncounteredAIShipEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.EmissaryEncounteredAIShip"));

	struct
	{
		struct FEmissaryEncounteredAIShipEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredAIShip_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredAIShip_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryEncounteredAIShip_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryEncounteredAIShip_C::ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryEncounteredAIShip.BP_Prompt_EmissaryEncounteredAIShip_C.ExecuteUbergraph_BP_Prompt_EmissaryEncounteredAIShip"));

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
