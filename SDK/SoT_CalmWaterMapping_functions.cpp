// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CalmWaterMapping_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CalmWaterMapping.CalmWaterMappingInterface.GetDampeningFactor
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InPosition                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCalmWaterMappingInterface::GetDampeningFactor(const struct FVector2D& InPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function CalmWaterMapping.CalmWaterMappingInterface.GetDampeningFactor");

	UCalmWaterMappingInterface_GetDampeningFactor_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CalmWaterMapping.CalmWaterMappingInterface.GetChoppinessFactor
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InPosition                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCalmWaterMappingInterface::GetChoppinessFactor(const struct FVector2D& InPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function CalmWaterMapping.CalmWaterMappingInterface.GetChoppinessFactor");

	UCalmWaterMappingInterface_GetChoppinessFactor_Params params;
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CalmWaterMapping.CalmWaterMappingService.GetMaxWindSpeed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCalmWaterMappingService::STATIC_GetMaxWindSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CalmWaterMapping.CalmWaterMappingService.GetMaxWindSpeed");

	UCalmWaterMappingService_GetMaxWindSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
