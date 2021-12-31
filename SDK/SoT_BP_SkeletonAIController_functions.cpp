// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SkeletonAIController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SkeletonAIController.BP_SkeletonAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SkeletonAIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletonAIController.BP_SkeletonAIController_C.UserConstructionScript"));

	ABP_SkeletonAIController_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SkeletonAIController.BP_SkeletonAIController_C.OnPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// APawn*                         PossessedPawn                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkeletonAIController_C::OnPossess(APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletonAIController.BP_SkeletonAIController_C.OnPossess"));

	ABP_SkeletonAIController_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SkeletonAIController.BP_SkeletonAIController_C.ExecuteUbergraph_BP_SkeletonAIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkeletonAIController_C::ExecuteUbergraph_BP_SkeletonAIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SkeletonAIController.BP_SkeletonAIController_C.ExecuteUbergraph_BP_SkeletonAIController"));

	ABP_SkeletonAIController_C_ExecuteUbergraph_BP_SkeletonAIController_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
