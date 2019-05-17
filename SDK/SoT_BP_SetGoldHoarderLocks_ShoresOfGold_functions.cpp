// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SetGoldHoarderLocks_ShoresOfGold_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SetGoldHoarderLocks_ShoresOfGold.BP_SetGoldHoarderLocks_ShoresOfGold_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SetGoldHoarderLocks_ShoresOfGold_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SetGoldHoarderLocks_ShoresOfGold.BP_SetGoldHoarderLocks_ShoresOfGold_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SetGoldHoarderLocks_ShoresOfGold.BP_SetGoldHoarderLocks_ShoresOfGold_C.ExecuteUbergraph_BP_SetGoldHoarderLocks_ShoresOfGold
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SetGoldHoarderLocks_ShoresOfGold_C::ExecuteUbergraph_BP_SetGoldHoarderLocks_ShoresOfGold(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SetGoldHoarderLocks_ShoresOfGold.BP_SetGoldHoarderLocks_ShoresOfGold_C.ExecuteUbergraph_BP_SetGoldHoarderLocks_ShoresOfGold"));

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
