// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ChickenAIController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ChickenAIController.BP_ChickenAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChickenAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChickenAIController.BP_ChickenAIController_C.UserConstructionScript"));

	ABP_ChickenAIController_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ChickenAIController.BP_ChickenAIController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ChickenAIController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChickenAIController.BP_ChickenAIController_C.ReceiveBeginPlay"));

	ABP_ChickenAIController_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ChickenAIController.BP_ChickenAIController_C.ExecuteUbergraph_BP_ChickenAIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChickenAIController_C::ExecuteUbergraph_BP_ChickenAIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChickenAIController.BP_ChickenAIController_C.ExecuteUbergraph_BP_ChickenAIController"));

	ABP_ChickenAIController_C_ExecuteUbergraph_BP_ChickenAIController_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
