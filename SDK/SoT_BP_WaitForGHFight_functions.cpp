// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaitForGHFight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WaitForGHFight.BP_WaitForGHFight_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_WaitForGHFight_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaitForGHFight.BP_WaitForGHFight_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WaitForGHFight.BP_WaitForGHFight_C.OnBattleStarted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ActorsInside                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_WaitForGHFight_C::OnBattleStarted(TArray<class AActor*> ActorsInside)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaitForGHFight.BP_WaitForGHFight_C.OnBattleStarted"));

	struct
	{
		TArray<class AActor*>          ActorsInside;
	} params;

	params.ActorsInside = ActorsInside;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WaitForGHFight.BP_WaitForGHFight_C.ExecuteUbergraph_BP_WaitForGHFight
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_WaitForGHFight_C::ExecuteUbergraph_BP_WaitForGHFight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaitForGHFight.BP_WaitForGHFight_C.ExecuteUbergraph_BP_WaitForGHFight"));

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
