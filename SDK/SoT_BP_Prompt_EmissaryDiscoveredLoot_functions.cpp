// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryDiscoveredLoot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.OnEmissaryDiscoveredLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryDiscoveredLootNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryDiscoveredLoot_C::OnEmissaryDiscoveredLoot(const struct FEmissaryDiscoveredLootNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.OnEmissaryDiscoveredLoot"));

	struct
	{
		struct FEmissaryDiscoveredLootNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.EmissaryDiscoveredLoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryDiscoveredLootNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryDiscoveredLoot_C::EmissaryDiscoveredLoot(const struct FEmissaryDiscoveredLootNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.EmissaryDiscoveredLoot"));

	struct
	{
		struct FEmissaryDiscoveredLootNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryDiscoveredLoot_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryDiscoveredLoot_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryDiscoveredLoot_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.ExecuteUbergraph_BP_Prompt_EmissaryDiscoveredLoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryDiscoveredLoot_C::ExecuteUbergraph_BP_Prompt_EmissaryDiscoveredLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryDiscoveredLoot.BP_Prompt_EmissaryDiscoveredLoot_C.ExecuteUbergraph_BP_Prompt_EmissaryDiscoveredLoot"));

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
