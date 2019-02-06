// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CalmWaterMapping_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CalmWaterMapping.CalmWaterMappingInterface.GetDampeningFactor"));

	struct
	{
		struct FVector2D               InPosition;
		float                          ReturnValue;
	} params;

	params.InPosition = InPosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CalmWaterMapping.CalmWaterMappingInterface.GetChoppinessFactor
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               InPosition                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCalmWaterMappingInterface::GetChoppinessFactor(const struct FVector2D& InPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CalmWaterMapping.CalmWaterMappingInterface.GetChoppinessFactor"));

	struct
	{
		struct FVector2D               InPosition;
		float                          ReturnValue;
	} params;

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

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
