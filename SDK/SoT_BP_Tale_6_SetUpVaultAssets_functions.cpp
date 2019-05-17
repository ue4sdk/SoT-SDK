// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Tale_6_SetUpVaultAssets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Tale_6_SetUpVaultAssets.BP_Tale_6_SetUpVaultAssets_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Tale_6_SetUpVaultAssets_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tale_6_SetUpVaultAssets.BP_Tale_6_SetUpVaultAssets_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tale_6_SetUpVaultAssets.BP_Tale_6_SetUpVaultAssets_C.ExecuteUbergraph_BP_Tale_6_SetUpVaultAssets
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Tale_6_SetUpVaultAssets_C::ExecuteUbergraph_BP_Tale_6_SetUpVaultAssets(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tale_6_SetUpVaultAssets.BP_Tale_6_SetUpVaultAssets_C.ExecuteUbergraph_BP_Tale_6_SetUpVaultAssets"));

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
