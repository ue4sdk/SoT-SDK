// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryStoleLoot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.OnEmissaryStoleLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryStoleLootNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryStoleLoot_C::OnEmissaryStoleLoot(const struct FEmissaryStoleLootNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.OnEmissaryStoleLoot"));

	struct
	{
		struct FEmissaryStoleLootNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.EmissaryStoleLoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissaryStoleLootNetworkEvent NewParam                       (Parm)

void UBP_Prompt_EmissaryStoleLoot_C::EmissaryStoleLoot(const struct FEmissaryStoleLootNetworkEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.EmissaryStoleLoot"));

	struct
	{
		struct FEmissaryStoleLootNetworkEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_EmissaryStoleLoot_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryStoleLoot_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_EmissaryStoleLoot_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.ExecuteUbergraph_BP_Prompt_EmissaryStoleLoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_EmissaryStoleLoot_C::ExecuteUbergraph_BP_Prompt_EmissaryStoleLoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_EmissaryStoleLoot.BP_Prompt_EmissaryStoleLoot_C.ExecuteUbergraph_BP_Prompt_EmissaryStoleLoot"));

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
