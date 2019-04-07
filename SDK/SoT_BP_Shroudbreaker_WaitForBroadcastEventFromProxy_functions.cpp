// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_WaitForBroadcastEventFromProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shroudbreaker_WaitForBroadcastEventFromProxy.BP_Shroudbreaker_WaitForBroadcastEventFromProxy_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shroudbreaker_WaitForBroadcastEventFromProxy_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_WaitForBroadcastEventFromProxy.BP_Shroudbreaker_WaitForBroadcastEventFromProxy_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_WaitForBroadcastEventFromProxy.BP_Shroudbreaker_WaitForBroadcastEventFromProxy_C.OnBroadcastReceived
// (BlueprintCallable, BlueprintEvent)

void UBP_Shroudbreaker_WaitForBroadcastEventFromProxy_C::OnBroadcastReceived()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_WaitForBroadcastEventFromProxy.BP_Shroudbreaker_WaitForBroadcastEventFromProxy_C.OnBroadcastReceived"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_WaitForBroadcastEventFromProxy.BP_Shroudbreaker_WaitForBroadcastEventFromProxy_C.ExecuteUbergraph_BP_Shroudbreaker_WaitForBroadcastEventFromProxy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shroudbreaker_WaitForBroadcastEventFromProxy_C::ExecuteUbergraph_BP_Shroudbreaker_WaitForBroadcastEventFromProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_WaitForBroadcastEventFromProxy.BP_Shroudbreaker_WaitForBroadcastEventFromProxy_C.ExecuteUbergraph_BP_Shroudbreaker_WaitForBroadcastEventFromProxy"));

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
