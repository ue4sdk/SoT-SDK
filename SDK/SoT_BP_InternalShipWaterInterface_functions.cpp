// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_InternalShipWaterInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetLineIntersectionFromPlane
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LineStart                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineEnd                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Intersect                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 IntersectionPoint              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_InternalShipWaterInterface_C::GetLineIntersectionFromPlane(const struct FVector& LineStart, const struct FVector& LineEnd, bool* Intersect, struct FVector* IntersectionPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetLineIntersectionFromPlane"));

	struct
	{
		struct FVector                 LineStart;
		struct FVector                 LineEnd;
		bool                           Intersect;
		struct FVector                 IntersectionPoint;
	} params;

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
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_InternalShipWaterInterface_C::GetDistanceFromPlane(const struct FVector& Location, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C.GetDistanceFromPlane"));

	struct
	{
		struct FVector                 Location;
		float                          Distance;
	} params;

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

	struct
	{
		float                          WaterLevel;
	} params;


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

	struct
	{
		float                          Water_Amount;
	} params;

	params.Water_Amount = Water_Amount;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
