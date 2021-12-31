// Sea of Thieves (2) SDK

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
// FVector2D                      InPosition                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCalmWaterMappingInterface::GetDampeningFactor(const FVector2D& InPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CalmWaterMapping.CalmWaterMappingInterface.GetDampeningFactor"));

	UCalmWaterMappingInterface_GetDampeningFactor_Params params;
	params.InPosition = InPosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CalmWaterMapping.CalmWaterMappingInterface.GetChoppinessFactor
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FVector2D                      InPosition                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCalmWaterMappingInterface::GetChoppinessFactor(const FVector2D& InPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CalmWaterMapping.CalmWaterMappingInterface.GetChoppinessFactor"));

	UCalmWaterMappingInterface_GetChoppinessFactor_Params params;
	params.InPosition = InPosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CalmWaterMapping.CalmWaterMappingService.GetMaxWindSpeed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCalmWaterMappingService::GetMaxWindSpeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CalmWaterMapping.CalmWaterMappingService.GetMaxWindSpeed"));

	UCalmWaterMappingService_GetMaxWindSpeed_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
