// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SetVaultPageBundle_StarsOfAThief_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SetVaultPageBundle_StarsOfAThief.BP_SetVaultPageBundle_StarsOfAThief_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SetVaultPageBundle_StarsOfAThief_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SetVaultPageBundle_StarsOfAThief.BP_SetVaultPageBundle_StarsOfAThief_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SetVaultPageBundle_StarsOfAThief.BP_SetVaultPageBundle_StarsOfAThief_C.ExecuteUbergraph_BP_SetVaultPageBundle_StarsOfAThief
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SetVaultPageBundle_StarsOfAThief_C::ExecuteUbergraph_BP_SetVaultPageBundle_StarsOfAThief(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SetVaultPageBundle_StarsOfAThief.BP_SetVaultPageBundle_StarsOfAThief_C.ExecuteUbergraph_BP_SetVaultPageBundle_StarsOfAThief"));

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
