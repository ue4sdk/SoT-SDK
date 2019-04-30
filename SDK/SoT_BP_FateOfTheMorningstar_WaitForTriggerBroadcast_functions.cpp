// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FateOfTheMorningstar_WaitForTriggerBroadcast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FateOfTheMorningstar_WaitForTriggerBroadcast.BP_FateOfTheMorningstar_WaitForTriggerBroadcast_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FateOfTheMorningstar_WaitForTriggerBroadcast_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_WaitForTriggerBroadcast.BP_FateOfTheMorningstar_WaitForTriggerBroadcast_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FateOfTheMorningstar_WaitForTriggerBroadcast.BP_FateOfTheMorningstar_WaitForTriggerBroadcast_C.Player Entered Trigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAthenaPlayerCharacter*  PlayerCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FateOfTheMorningstar_WaitForTriggerBroadcast_C::Player_Entered_Trigger(class AAthenaPlayerCharacter* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_WaitForTriggerBroadcast.BP_FateOfTheMorningstar_WaitForTriggerBroadcast_C.Player Entered Trigger"));

	struct
	{
		class AAthenaPlayerCharacter*  PlayerCharacter;
	} params;

	params.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FateOfTheMorningstar_WaitForTriggerBroadcast.BP_FateOfTheMorningstar_WaitForTriggerBroadcast_C.ExecuteUbergraph_BP_FateOfTheMorningstar_WaitForTriggerBroadcast
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FateOfTheMorningstar_WaitForTriggerBroadcast_C::ExecuteUbergraph_BP_FateOfTheMorningstar_WaitForTriggerBroadcast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_WaitForTriggerBroadcast.BP_FateOfTheMorningstar_WaitForTriggerBroadcast_C.ExecuteUbergraph_BP_FateOfTheMorningstar_WaitForTriggerBroadcast"));

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
