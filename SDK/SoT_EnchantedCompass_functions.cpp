// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EnchantedCompass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.GetFloatMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrototypeMultiTargetEnchantedCompass::GetFloatMax()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.GetFloatMax"));

	APrototypeMultiTargetEnchantedCompass_GetFloatMax_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// FRotator                       CompassRotation                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrototypeMultiTargetEnchantedCompass::CalculateDesiredYaw(const FRotator& CompassRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw"));

	APrototypeMultiTargetEnchantedCompass_CalculateDesiredYaw_Params params;
	params.CompassRotation = CompassRotation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<FVector>                ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<FVector> APrototypeMultiTargetEnchantedCompass::BP_GetTargetLocations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations"));

	APrototypeMultiTargetEnchantedCompass_BP_GetTargetLocations_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
