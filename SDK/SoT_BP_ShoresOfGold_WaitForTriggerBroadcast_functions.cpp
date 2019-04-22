// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShoresOfGold_WaitForTriggerBroadcast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShoresOfGold_WaitForTriggerBroadcast.BP_ShoresOfGold_WaitForTriggerBroadcast_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ShoresOfGold_WaitForTriggerBroadcast_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShoresOfGold_WaitForTriggerBroadcast.BP_ShoresOfGold_WaitForTriggerBroadcast_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ShoresOfGold_WaitForTriggerBroadcast.BP_ShoresOfGold_WaitForTriggerBroadcast_C.Trigger Entered
// (BlueprintCallable, BlueprintEvent)

void UBP_ShoresOfGold_WaitForTriggerBroadcast_C::Trigger_Entered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShoresOfGold_WaitForTriggerBroadcast.BP_ShoresOfGold_WaitForTriggerBroadcast_C.Trigger Entered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ShoresOfGold_WaitForTriggerBroadcast.BP_ShoresOfGold_WaitForTriggerBroadcast_C.ExecuteUbergraph_BP_ShoresOfGold_WaitForTriggerBroadcast
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ShoresOfGold_WaitForTriggerBroadcast_C::ExecuteUbergraph_BP_ShoresOfGold_WaitForTriggerBroadcast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShoresOfGold_WaitForTriggerBroadcast.BP_ShoresOfGold_WaitForTriggerBroadcast_C.ExecuteUbergraph_BP_ShoresOfGold_WaitForTriggerBroadcast"));

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
