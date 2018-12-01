// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_StepsTrigger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StepsTrigger.BP_StepsTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_StepsTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepsTrigger.BP_StepsTrigger_C.UserConstructionScript");

	ABP_StepsTrigger_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_StepsTrigger.BP_StepsTrigger_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_StepsTrigger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepsTrigger.BP_StepsTrigger_C.ReceiveBeginPlay");

	ABP_StepsTrigger_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_StepsTrigger.BP_StepsTrigger_C.ExecuteUbergraph_BP_StepsTrigger
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepsTrigger_C::ExecuteUbergraph_BP_StepsTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepsTrigger.BP_StepsTrigger_C.ExecuteUbergraph_BP_StepsTrigger");

	ABP_StepsTrigger_C_ExecuteUbergraph_BP_StepsTrigger_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
