// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_CosmeticPurchased_Vanity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptActor_CosmeticPurchased_Vanity.BP_PromptActor_CosmeticPurchased_Vanity_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_CosmeticPurchased_Vanity_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_CosmeticPurchased_Vanity.BP_PromptActor_CosmeticPurchased_Vanity_C.UserConstructionScript"));

	ABP_PromptActor_CosmeticPurchased_Vanity_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_CosmeticPurchased_Vanity.BP_PromptActor_CosmeticPurchased_Vanity_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PromptActor_CosmeticPurchased_Vanity_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_CosmeticPurchased_Vanity.BP_PromptActor_CosmeticPurchased_Vanity_C.ReceiveBeginPlay"));

	ABP_PromptActor_CosmeticPurchased_Vanity_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_CosmeticPurchased_Vanity.BP_PromptActor_CosmeticPurchased_Vanity_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_CosmeticPurchased_Vanity_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_CosmeticPurchased_Vanity.BP_PromptActor_CosmeticPurchased_Vanity_C.ReceiveEndPlay"));

	ABP_PromptActor_CosmeticPurchased_Vanity_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_CosmeticPurchased_Vanity.BP_PromptActor_CosmeticPurchased_Vanity_C.ExecuteUbergraph_BP_PromptActor_CosmeticPurchased_Vanity
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_CosmeticPurchased_Vanity_C::ExecuteUbergraph_BP_PromptActor_CosmeticPurchased_Vanity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_CosmeticPurchased_Vanity.BP_PromptActor_CosmeticPurchased_Vanity_C.ExecuteUbergraph_BP_PromptActor_CosmeticPurchased_Vanity"));

	ABP_PromptActor_CosmeticPurchased_Vanity_C_ExecuteUbergraph_BP_PromptActor_CosmeticPurchased_Vanity_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
