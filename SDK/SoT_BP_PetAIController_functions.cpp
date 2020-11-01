// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PetAIController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PetAIController.BP_PetAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PetAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PetAIController.BP_PetAIController_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PetAIController.BP_PetAIController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PetAIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PetAIController.BP_PetAIController_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PetAIController.BP_PetAIController_C.ExecuteUbergraph_BP_PetAIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PetAIController_C::ExecuteUbergraph_BP_PetAIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PetAIController.BP_PetAIController_C.ExecuteUbergraph_BP_PetAIController"));

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
