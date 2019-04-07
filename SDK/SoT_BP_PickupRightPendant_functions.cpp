// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PickupRightPendant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PickupRightPendant.BP_PickUpRightPendant_C.OnPendantPickedUp
// (BlueprintCallable, BlueprintEvent)

void UBP_PickUpRightPendant_C::OnPendantPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PickupRightPendant.BP_PickUpRightPendant_C.OnPendantPickedUp"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PickupRightPendant.BP_PickUpRightPendant_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PickUpRightPendant_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PickupRightPendant.BP_PickUpRightPendant_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PickupRightPendant.BP_PickUpRightPendant_C.ExecuteUbergraph_BP_PickUpRightPendant
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PickUpRightPendant_C::ExecuteUbergraph_BP_PickUpRightPendant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PickupRightPendant.BP_PickUpRightPendant_C.ExecuteUbergraph_BP_PickUpRightPendant"));

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
