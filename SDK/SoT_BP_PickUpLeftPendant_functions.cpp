// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PickUpLeftPendant_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PickUpLeftPendant.BP_PickUpLeftPendant_C.OnPendantPickedUp
// (BlueprintCallable, BlueprintEvent)

void UBP_PickUpLeftPendant_C::OnPendantPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PickUpLeftPendant.BP_PickUpLeftPendant_C.OnPendantPickedUp"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PickUpLeftPendant.BP_PickUpLeftPendant_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PickUpLeftPendant_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PickUpLeftPendant.BP_PickUpLeftPendant_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PickUpLeftPendant.BP_PickUpLeftPendant_C.ExecuteUbergraph_BP_PickUpLeftPendant
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PickUpLeftPendant_C::ExecuteUbergraph_BP_PickUpLeftPendant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PickUpLeftPendant.BP_PickUpLeftPendant_C.ExecuteUbergraph_BP_PickUpLeftPendant"));

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
