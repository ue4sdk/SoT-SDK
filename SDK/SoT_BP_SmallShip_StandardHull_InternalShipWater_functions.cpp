// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_StandardHull_InternalShipWater_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetLineIntersectionFromPlane
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LineStart                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LineEnd                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Intersect                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 IntersectionPoint              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShip_StandardHull_InternalShipWater_C::GetLineIntersectionFromPlane(const struct FVector& LineStart, const struct FVector& LineEnd, bool* Intersect, struct FVector* IntersectionPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetLineIntersectionFromPlane");

	ABP_SmallShip_StandardHull_InternalShipWater_C_GetLineIntersectionFromPlane_Params params;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;

	UObject::ProcessEvent(fn, &params);

	if (Intersect != nullptr)
		*Intersect = params.Intersect;
	if (IntersectionPoint != nullptr)
		*IntersectionPoint = params.IntersectionPoint;
}


// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetWaterLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WaterLevel                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShip_StandardHull_InternalShipWater_C::GetWaterLevel(float* WaterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetWaterLevel");

	ABP_SmallShip_StandardHull_InternalShipWater_C_GetWaterLevel_Params params;

	UObject::ProcessEvent(fn, &params);

	if (WaterLevel != nullptr)
		*WaterLevel = params.WaterLevel;
}


// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetDistanceFromPlane
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShip_StandardHull_InternalShipWater_C::GetDistanceFromPlane(const struct FVector& Location, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.GetDistanceFromPlane");

	ABP_SmallShip_StandardHull_InternalShipWater_C_GetDistanceFromPlane_Params params;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SmallShip_StandardHull_InternalShipWater_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.UserConstructionScript");

	ABP_SmallShip_StandardHull_InternalShipWater_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.AddWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Water_Amount                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShip_StandardHull_InternalShipWater_C::AddWater(float Water_Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.AddWater");

	ABP_SmallShip_StandardHull_InternalShipWater_C_AddWater_Params params;
	params.Water_Amount = Water_Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_SmallShip_StandardHull_InternalShipWater_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.ReceiveBeginPlay");

	ABP_SmallShip_StandardHull_InternalShipWater_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.ExecuteUbergraph_BP_SmallShip_StandardHull_InternalShipWater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShip_StandardHull_InternalShipWater_C::ExecuteUbergraph_BP_SmallShip_StandardHull_InternalShipWater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C.ExecuteUbergraph_BP_SmallShip_StandardHull_InternalShipWater");

	ABP_SmallShip_StandardHull_InternalShipWater_C_ExecuteUbergraph_BP_SmallShip_StandardHull_InternalShipWater_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
