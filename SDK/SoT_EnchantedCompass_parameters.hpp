#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EnchantedCompass_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.GetFloatMax
struct APrototypeMultiTargetEnchantedCompass_GetFloatMax_Params
{
	float                                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.CalculateDesiredYaw
struct APrototypeMultiTargetEnchantedCompass_CalculateDesiredYaw_Params
{
	FRotator                                           CompassRotation;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EnchantedCompass.PrototypeMultiTargetEnchantedCompass.BP_GetTargetLocations
struct APrototypeMultiTargetEnchantedCompass_BP_GetTargetLocations_Params
{
	TArray<FVector>                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
