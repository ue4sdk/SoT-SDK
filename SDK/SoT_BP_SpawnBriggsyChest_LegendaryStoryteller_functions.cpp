// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SpawnBriggsyChest_LegendaryStoryteller_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpawnBriggsyChest_LegendaryStoryteller.BP_SpawnBriggsyChest_LegendaryStoryteller_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SpawnBriggsyChest_LegendaryStoryteller_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnBriggsyChest_LegendaryStoryteller.BP_SpawnBriggsyChest_LegendaryStoryteller_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpawnBriggsyChest_LegendaryStoryteller.BP_SpawnBriggsyChest_LegendaryStoryteller_C.OnItemPickedUp
// (BlueprintCallable, BlueprintEvent)

void UBP_SpawnBriggsyChest_LegendaryStoryteller_C::OnItemPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnBriggsyChest_LegendaryStoryteller.BP_SpawnBriggsyChest_LegendaryStoryteller_C.OnItemPickedUp"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpawnBriggsyChest_LegendaryStoryteller.BP_SpawnBriggsyChest_LegendaryStoryteller_C.ExecuteUbergraph_BP_SpawnBriggsyChest_LegendaryStoryteller
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SpawnBriggsyChest_LegendaryStoryteller_C::ExecuteUbergraph_BP_SpawnBriggsyChest_LegendaryStoryteller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SpawnBriggsyChest_LegendaryStoryteller.BP_SpawnBriggsyChest_LegendaryStoryteller_C.ExecuteUbergraph_BP_SpawnBriggsyChest_LegendaryStoryteller"));

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
