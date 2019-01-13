// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PigAIController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PigAIController.BP_PigAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PigAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PigAIController.BP_PigAIController_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PigAIController.BP_PigAIController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PigAIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PigAIController.BP_PigAIController_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PigAIController.BP_PigAIController_C.ExecuteUbergraph_BP_PigAIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PigAIController_C::ExecuteUbergraph_BP_PigAIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PigAIController.BP_PigAIController_C.ExecuteUbergraph_BP_PigAIController");

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
