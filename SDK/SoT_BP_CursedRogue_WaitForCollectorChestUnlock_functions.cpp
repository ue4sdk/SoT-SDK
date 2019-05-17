// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedRogue_WaitForCollectorChestUnlock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CursedRogue_WaitForCollectorChestUnlock.BP_CursedRogue_WaitForCollectorChestUnlock_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_CursedRogue_WaitForCollectorChestUnlock_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_WaitForCollectorChestUnlock.BP_CursedRogue_WaitForCollectorChestUnlock_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CursedRogue_WaitForCollectorChestUnlock.BP_CursedRogue_WaitForCollectorChestUnlock_C.On Chest Unlocked
// (BlueprintCallable, BlueprintEvent)

void UBP_CursedRogue_WaitForCollectorChestUnlock_C::On_Chest_Unlocked()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_WaitForCollectorChestUnlock.BP_CursedRogue_WaitForCollectorChestUnlock_C.On Chest Unlocked"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CursedRogue_WaitForCollectorChestUnlock.BP_CursedRogue_WaitForCollectorChestUnlock_C.ExecuteUbergraph_BP_CursedRogue_WaitForCollectorChestUnlock
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CursedRogue_WaitForCollectorChestUnlock_C::ExecuteUbergraph_BP_CursedRogue_WaitForCollectorChestUnlock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_WaitForCollectorChestUnlock.BP_CursedRogue_WaitForCollectorChestUnlock_C.ExecuteUbergraph_BP_CursedRogue_WaitForCollectorChestUnlock"));

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
