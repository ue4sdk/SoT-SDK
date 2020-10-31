// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissarySoldLoot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.OnEmissarySoldLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissarySoldLootNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissarySoldLoot_C::OnEmissarySoldLoot(const struct FEmissarySoldLootNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.OnEmissarySoldLoot"));

	struct
	{
		struct FEmissarySoldLootNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.EmissarySoldLoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissarySoldLootNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissarySoldLoot_C::EmissarySoldLoot(const struct FEmissarySoldLootNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.EmissarySoldLoot"));

	struct
	{
		struct FEmissarySoldLootNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissarySoldLoot_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissarySoldLoot_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissarySoldLoot_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.ExecuteUbergraph_BP_Prompt_EmissarySoldLoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissarySoldLoot_C::ExecuteUbergraph_BP_Prompt_EmissarySoldLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.ExecuteUbergraph_BP_Prompt_EmissarySoldLoot"));

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
