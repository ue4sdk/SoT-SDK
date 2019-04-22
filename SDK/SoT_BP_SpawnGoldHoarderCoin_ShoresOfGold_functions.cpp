// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SpawnGoldHoarderCoin_ShoresOfGold_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpawnGoldHoarderCoin_ShoresOfGold.BP_SpawnGoldHoarderCoin_ShoresOfGold_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SpawnGoldHoarderCoin_ShoresOfGold_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnGoldHoarderCoin_ShoresOfGold.BP_SpawnGoldHoarderCoin_ShoresOfGold_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpawnGoldHoarderCoin_ShoresOfGold.BP_SpawnGoldHoarderCoin_ShoresOfGold_C.OnItemPickedUp
// (BlueprintCallable, BlueprintEvent)

void UBP_SpawnGoldHoarderCoin_ShoresOfGold_C::OnItemPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnGoldHoarderCoin_ShoresOfGold.BP_SpawnGoldHoarderCoin_ShoresOfGold_C.OnItemPickedUp"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpawnGoldHoarderCoin_ShoresOfGold.BP_SpawnGoldHoarderCoin_ShoresOfGold_C.ExecuteUbergraph_BP_SpawnGoldHoarderCoin_ShoresOfGold
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SpawnGoldHoarderCoin_ShoresOfGold_C::ExecuteUbergraph_BP_SpawnGoldHoarderCoin_ShoresOfGold(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnGoldHoarderCoin_ShoresOfGold.BP_SpawnGoldHoarderCoin_ShoresOfGold_C.ExecuteUbergraph_BP_SpawnGoldHoarderCoin_ShoresOfGold"));

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