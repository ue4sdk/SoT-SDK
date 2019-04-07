// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_SetMedallionLockParams_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shroudbreaker_SetMedallionLockParams.BP_Shroudbreaker_SetMedallionLockParams_C.MakeMedallionMaterialArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDS_ShroudBreaker_VaultParams VaultParams                    (Parm)

void UBP_Shroudbreaker_SetMedallionLockParams_C::MakeMedallionMaterialArray(const struct FDS_ShroudBreaker_VaultParams& VaultParams)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_SetMedallionLockParams.BP_Shroudbreaker_SetMedallionLockParams_C.MakeMedallionMaterialArray"));

	struct
	{
		struct FDS_ShroudBreaker_VaultParams VaultParams;
	} params;

	params.VaultParams = VaultParams;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_SetMedallionLockParams.BP_Shroudbreaker_SetMedallionLockParams_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shroudbreaker_SetMedallionLockParams_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_SetMedallionLockParams.BP_Shroudbreaker_SetMedallionLockParams_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_SetMedallionLockParams.BP_Shroudbreaker_SetMedallionLockParams_C.ExecuteUbergraph_BP_Shroudbreaker_SetMedallionLockParams
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shroudbreaker_SetMedallionLockParams_C::ExecuteUbergraph_BP_Shroudbreaker_SetMedallionLockParams(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_SetMedallionLockParams.BP_Shroudbreaker_SetMedallionLockParams_C.ExecuteUbergraph_BP_Shroudbreaker_SetMedallionLockParams"));

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
