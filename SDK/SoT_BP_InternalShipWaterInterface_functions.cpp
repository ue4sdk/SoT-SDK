// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_InternalShipWaterInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetLineIntersectionFromPlane
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        LineStart                      (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        LineEnd                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Intersect                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        IntersectionPoint              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_InternalShipWaterInterface_C::GetLineIntersectionFromPlane(const FVector& LineStart, const FVector& LineEnd, bool* Intersect, FVector* IntersectionPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetLineIntersectionFromPlane"));

	UBP_InternalShipWaterInterface_C_GetLineIntersectionFromPlane_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;

	UObject::ProcessEvent(fn, &params);

	if (Intersect != nullptr)
		*Intersect = params.Intersect;
	if (IntersectionPoint != nullptr)
		*IntersectionPoint = params.IntersectionPoint;
}


// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetDistanceFromPlane
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_InternalShipWaterInterface_C::GetDistanceFromPlane(const FVector& Location, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetDistanceFromPlane"));

	UBP_InternalShipWaterInterface_C_GetDistanceFromPlane_Params params;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetWaterLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WaterLevel                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_InternalShipWaterInterface_C::GetWaterLevel(float* WaterLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetWaterLevel"));

	UBP_InternalShipWaterInterface_C_GetWaterLevel_Params params;

	UObject::ProcessEvent(fn, &params);

	if (WaterLevel != nullptr)
		*WaterLevel = params.WaterLevel;
}


// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.AddWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Water_Amount                   (Parm, ZeroConstructor, IsPlainOldData)

void UBP_InternalShipWaterInterface_C::AddWater(float Water_Amount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.AddWater"));

	UBP_InternalShipWaterInterface_C_AddWater_Params params;
	params.Water_Amount = Water_Amount;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
