// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_EmissarySecuredLootOnShip_GH_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptActor_EmissarySecuredLootOnShip_GH.BP_PromptActor_EmissarySecuredLootOnShip_GH_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_EmissarySecuredLootOnShip_GH_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissarySecuredLootOnShip_GH.BP_PromptActor_EmissarySecuredLootOnShip_GH_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissarySecuredLootOnShip_GH.BP_PromptActor_EmissarySecuredLootOnShip_GH_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PromptActor_EmissarySecuredLootOnShip_GH_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissarySecuredLootOnShip_GH.BP_PromptActor_EmissarySecuredLootOnShip_GH_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissarySecuredLootOnShip_GH.BP_PromptActor_EmissarySecuredLootOnShip_GH_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_EmissarySecuredLootOnShip_GH_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissarySecuredLootOnShip_GH.BP_PromptActor_EmissarySecuredLootOnShip_GH_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_EmissarySecuredLootOnShip_GH.BP_PromptActor_EmissarySecuredLootOnShip_GH_C.ExecuteUbergraph_BP_PromptActor_EmissarySecuredLootOnShip_GH
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_EmissarySecuredLootOnShip_GH_C::ExecuteUbergraph_BP_PromptActor_EmissarySecuredLootOnShip_GH(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_EmissarySecuredLootOnShip_GH.BP_PromptActor_EmissarySecuredLootOnShip_GH_C.ExecuteUbergraph_BP_PromptActor_EmissarySecuredLootOnShip_GH"));

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
