// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PickUpStarJewel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PickUpStarJewel.BP_PickUpStarJewel_C.OnStarGemPickedUp
// (BlueprintCallable, BlueprintEvent)

void UBP_PickUpStarJewel_C::OnStarGemPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PickUpStarJewel.BP_PickUpStarJewel_C.OnStarGemPickedUp"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PickUpStarJewel.BP_PickUpStarJewel_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PickUpStarJewel_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PickUpStarJewel.BP_PickUpStarJewel_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PickUpStarJewel.BP_PickUpStarJewel_C.ExecuteUbergraph_BP_PickUpStarJewel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PickUpStarJewel_C::ExecuteUbergraph_BP_PickUpStarJewel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PickUpStarJewel.BP_PickUpStarJewel_C.ExecuteUbergraph_BP_PickUpStarJewel"));

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
