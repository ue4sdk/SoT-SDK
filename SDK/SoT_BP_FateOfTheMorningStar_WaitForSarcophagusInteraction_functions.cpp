// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FateOfTheMorningStar_WaitForSarcophagusInteraction.BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningStar_WaitForSarcophagusInteraction.BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FateOfTheMorningStar_WaitForSarcophagusInteraction.BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C.HasBeenInteracted
// (BlueprintCallable, BlueprintEvent)

void UBP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C::HasBeenInteracted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningStar_WaitForSarcophagusInteraction.BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C.HasBeenInteracted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FateOfTheMorningStar_WaitForSarcophagusInteraction.BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C.ExecuteUbergraph_BP_FateOfTheMorningStar_WaitForSarcophagusInteraction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C::ExecuteUbergraph_BP_FateOfTheMorningStar_WaitForSarcophagusInteraction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningStar_WaitForSarcophagusInteraction.BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C.ExecuteUbergraph_BP_FateOfTheMorningStar_WaitForSarcophagusInteraction"));

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
