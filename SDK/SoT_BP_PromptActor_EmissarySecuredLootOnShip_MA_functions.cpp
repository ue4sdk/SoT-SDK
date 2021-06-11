// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_EmissarySecuredLootOnShip_MA_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptActor_EmissarySecuredLootOnShip_MA.BP_PromptActor_EmissarySecuredLootOnShip_MA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_EmissarySecuredLootOnShip_MA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissarySecuredLootOnShip_MA.BP_PromptActor_EmissarySecuredLootOnShip_MA_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissarySecuredLootOnShip_MA.BP_PromptActor_EmissarySecuredLootOnShip_MA_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PromptActor_EmissarySecuredLootOnShip_MA_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissarySecuredLootOnShip_MA.BP_PromptActor_EmissarySecuredLootOnShip_MA_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissarySecuredLootOnShip_MA.BP_PromptActor_EmissarySecuredLootOnShip_MA_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_EmissarySecuredLootOnShip_MA_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissarySecuredLootOnShip_MA.BP_PromptActor_EmissarySecuredLootOnShip_MA_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissarySecuredLootOnShip_MA.BP_PromptActor_EmissarySecuredLootOnShip_MA_C.ExecuteUbergraph_BP_PromptActor_EmissarySecuredLootOnShip_MA
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_EmissarySecuredLootOnShip_MA_C::ExecuteUbergraph_BP_PromptActor_EmissarySecuredLootOnShip_MA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissarySecuredLootOnShip_MA.BP_PromptActor_EmissarySecuredLootOnShip_MA_C.ExecuteUbergraph_BP_PromptActor_EmissarySecuredLootOnShip_MA"));

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
