// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_StarsOfAThief_SetVaultPuzzle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StarsOfAThief_SetVaultPuzzle.BP_StarsOfAThief_SetVaultPuzzle_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_StarsOfAThief_SetVaultPuzzle_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_StarsOfAThief_SetVaultPuzzle.BP_StarsOfAThief_SetVaultPuzzle_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_StarsOfAThief_SetVaultPuzzle.BP_StarsOfAThief_SetVaultPuzzle_C.ExecuteUbergraph_BP_StarsOfAThief_SetVaultPuzzle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_StarsOfAThief_SetVaultPuzzle_C::ExecuteUbergraph_BP_StarsOfAThief_SetVaultPuzzle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_StarsOfAThief_SetVaultPuzzle.BP_StarsOfAThief_SetVaultPuzzle_C.ExecuteUbergraph_BP_StarsOfAThief_SetVaultPuzzle"));

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
