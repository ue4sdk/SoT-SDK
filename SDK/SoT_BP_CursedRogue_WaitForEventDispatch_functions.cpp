// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedRogue_WaitForEventDispatch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CursedRogue_WaitForEventDispatch.BP_CursedRogue_WaitForEventDispatch_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CursedRogue_WaitForEventDispatch_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_WaitForEventDispatch.BP_CursedRogue_WaitForEventDispatch_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CursedRogue_WaitForEventDispatch.BP_CursedRogue_WaitForEventDispatch_C.On Broadcast Received
// (BlueprintCallable, BlueprintEvent)

void UBP_CursedRogue_WaitForEventDispatch_C::On_Broadcast_Received()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_WaitForEventDispatch.BP_CursedRogue_WaitForEventDispatch_C.On Broadcast Received"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CursedRogue_WaitForEventDispatch.BP_CursedRogue_WaitForEventDispatch_C.ExecuteUbergraph_BP_CursedRogue_WaitForEventDispatch
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CursedRogue_WaitForEventDispatch_C::ExecuteUbergraph_BP_CursedRogue_WaitForEventDispatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_WaitForEventDispatch.BP_CursedRogue_WaitForEventDispatch_C.ExecuteUbergraph_BP_CursedRogue_WaitForEventDispatch"));

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
