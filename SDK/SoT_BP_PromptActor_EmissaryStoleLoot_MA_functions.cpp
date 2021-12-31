// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_EmissaryStoleLoot_MA_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptActor_EmissaryStoleLoot_MA.BP_PromptActor_EmissaryStoleLoot_MA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_EmissaryStoleLoot_MA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissaryStoleLoot_MA.BP_PromptActor_EmissaryStoleLoot_MA_C.UserConstructionScript"));

	ABP_PromptActor_EmissaryStoleLoot_MA_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissaryStoleLoot_MA.BP_PromptActor_EmissaryStoleLoot_MA_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PromptActor_EmissaryStoleLoot_MA_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissaryStoleLoot_MA.BP_PromptActor_EmissaryStoleLoot_MA_C.ReceiveBeginPlay"));

	ABP_PromptActor_EmissaryStoleLoot_MA_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissaryStoleLoot_MA.BP_PromptActor_EmissaryStoleLoot_MA_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_EmissaryStoleLoot_MA_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissaryStoleLoot_MA.BP_PromptActor_EmissaryStoleLoot_MA_C.ReceiveEndPlay"));

	ABP_PromptActor_EmissaryStoleLoot_MA_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissaryStoleLoot_MA.BP_PromptActor_EmissaryStoleLoot_MA_C.ExecuteUbergraph_BP_PromptActor_EmissaryStoleLoot_MA
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_EmissaryStoleLoot_MA_C::ExecuteUbergraph_BP_PromptActor_EmissaryStoleLoot_MA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissaryStoleLoot_MA.BP_PromptActor_EmissaryStoleLoot_MA_C.ExecuteUbergraph_BP_PromptActor_EmissaryStoleLoot_MA"));

	ABP_PromptActor_EmissaryStoleLoot_MA_C_ExecuteUbergraph_BP_PromptActor_EmissaryStoleLoot_MA_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
