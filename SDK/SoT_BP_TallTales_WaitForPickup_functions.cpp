// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TallTales_WaitForPickup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TallTales_WaitForPickup.BP_TallTales_WaitForPickup_C.GetStepName
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Name                           (Parm, OutParm, ZeroConstructor)

void UBP_TallTales_WaitForPickup_C::GetStepName(class FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TallTales_WaitForPickup.BP_TallTales_WaitForPickup_C.GetStepName"));

	struct
	{
		class FString                  Name;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_TallTales_WaitForPickup.BP_TallTales_WaitForPickup_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TallTales_WaitForPickup_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TallTales_WaitForPickup.BP_TallTales_WaitForPickup_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TallTales_WaitForPickup.BP_TallTales_WaitForPickup_C.OnPickup
// (BlueprintCallable, BlueprintEvent)

void UBP_TallTales_WaitForPickup_C::OnPickup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TallTales_WaitForPickup.BP_TallTales_WaitForPickup_C.OnPickup"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TallTales_WaitForPickup.BP_TallTales_WaitForPickup_C.ExecuteUbergraph_BP_TallTales_WaitForPickup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_TallTales_WaitForPickup_C::ExecuteUbergraph_BP_TallTales_WaitForPickup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TallTales_WaitForPickup.BP_TallTales_WaitForPickup_C.ExecuteUbergraph_BP_TallTales_WaitForPickup"));

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
