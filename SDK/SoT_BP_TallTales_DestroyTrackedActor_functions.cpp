// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TallTales_DestroyTrackedActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TallTales_DestroyTrackedActor.BP_TallTales_DestroyTrackedActor_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TallTales_DestroyTrackedActor_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TallTales_DestroyTrackedActor.BP_TallTales_DestroyTrackedActor_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TallTales_DestroyTrackedActor.BP_TallTales_DestroyTrackedActor_C.ExecuteUbergraph_BP_TallTales_DestroyTrackedActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_TallTales_DestroyTrackedActor_C::ExecuteUbergraph_BP_TallTales_DestroyTrackedActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TallTales_DestroyTrackedActor.BP_TallTales_DestroyTrackedActor_C.ExecuteUbergraph_BP_TallTales_DestroyTrackedActor"));

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
