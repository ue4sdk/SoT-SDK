// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissarySecuredLootOnShip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.OnEmissarySecuredLootOnShip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissarySecuredLootOnShipNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissarySecuredLootOnShip_C::OnEmissarySecuredLootOnShip(const struct FEmissarySecuredLootOnShipNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.OnEmissarySecuredLootOnShip"));

	struct
	{
		struct FEmissarySecuredLootOnShipNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.EmissarySecuredLootOnShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissarySecuredLootOnShipNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissarySecuredLootOnShip_C::EmissarySecuredLootOnShip(const struct FEmissarySecuredLootOnShipNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.EmissarySecuredLootOnShip"));

	struct
	{
		struct FEmissarySecuredLootOnShipNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissarySecuredLootOnShip_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissarySecuredLootOnShip_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissarySecuredLootOnShip_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissarySecuredLootOnShip_C::ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySecuredLootOnShip.BP_Prompt_EmissarySecuredLootOnShip_C.ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip"));

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
