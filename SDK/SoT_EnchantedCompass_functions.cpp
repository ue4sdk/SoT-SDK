// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EnchantedCompass_classes.hpp"

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

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FRotator                CompassRotation                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APrototypeMultiTargetEnchantedCompass::CalculateDesiredYaw(const struct FRotator& CompassRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw"));

	struct
	{
		struct FRotator                CompassRotation;
		float                          ReturnValue;
	} params;

	params.CompassRotation = CompassRotation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> APrototypeMultiTargetEnchantedCompass::BP_GetTargetLocations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations"));

	struct
	{
		TArray<struct FVector>         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
