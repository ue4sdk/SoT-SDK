// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SetStrangerLocks_SOAT_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SetStrangerLocks_SOAT.SetStrangerLocks_SOAT_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USetStrangerLocks_SOAT_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SetStrangerLocks_SOAT.SetStrangerLocks_SOAT_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function SetStrangerLocks_SOAT.SetStrangerLocks_SOAT_C.ExecuteUbergraph_SetStrangerLocks_SOAT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USetStrangerLocks_SOAT_C::ExecuteUbergraph_SetStrangerLocks_SOAT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SetStrangerLocks_SOAT.SetStrangerLocks_SOAT_C.ExecuteUbergraph_SetStrangerLocks_SOAT"));

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
