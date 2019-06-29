// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SharkAIController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SharkAIController.BP_SharkAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SharkAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SharkAIController.BP_SharkAIController_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SharkAIController.BP_SharkAIController_C.OnNewlySpawned
// (Event, Public, BlueprintEvent)

void ABP_SharkAIController_C::OnNewlySpawned()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SharkAIController.BP_SharkAIController_C.OnNewlySpawned"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SharkAIController.BP_SharkAIController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SharkAIController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SharkAIController.BP_SharkAIController_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SharkAIController.BP_SharkAIController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_SharkAIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SharkAIController.BP_SharkAIController_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SharkAIController.BP_SharkAIController_C.ExecuteUbergraph_BP_SharkAIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SharkAIController_C::ExecuteUbergraph_BP_SharkAIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SharkAIController.BP_SharkAIController_C.ExecuteUbergraph_BP_SharkAIController"));

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
