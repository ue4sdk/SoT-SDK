// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PickUpVaultTotem_StarsOfAThief_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PickUpVaultTotem_StarsOfAThief.BP_PickUpVaultTotem_StarsOfAThief_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PickUpVaultTotem_StarsOfAThief_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PickUpVaultTotem_StarsOfAThief.BP_PickUpVaultTotem_StarsOfAThief_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PickUpVaultTotem_StarsOfAThief.BP_PickUpVaultTotem_StarsOfAThief_C.OnItemPickedUp
// (BlueprintCallable, BlueprintEvent)

void UBP_PickUpVaultTotem_StarsOfAThief_C::OnItemPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PickUpVaultTotem_StarsOfAThief.BP_PickUpVaultTotem_StarsOfAThief_C.OnItemPickedUp"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PickUpVaultTotem_StarsOfAThief.BP_PickUpVaultTotem_StarsOfAThief_C.ExecuteUbergraph_BP_PickUpVaultTotem_StarsOfAThief
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_PickUpVaultTotem_StarsOfAThief_C::ExecuteUbergraph_BP_PickUpVaultTotem_StarsOfAThief(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PickUpVaultTotem_StarsOfAThief.BP_PickUpVaultTotem_StarsOfAThief_C.ExecuteUbergraph_BP_PickUpVaultTotem_StarsOfAThief"));

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
