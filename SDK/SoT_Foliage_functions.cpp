// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Foliage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// UStaticMesh*                   StaticMesh                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FVector                        CenterPosition                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFoliageStatistics::FoliageOverlappingSphereCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, const FVector& CenterPosition, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount"));

	UFoliageStatistics_FoliageOverlappingSphereCount_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StaticMesh = StaticMesh;
	params.CenterPosition = CenterPosition;
	params.Radius = Radius;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// UStaticMesh*                   StaticMesh                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FBox                           Box                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFoliageStatistics::FoliageOverlappingBoxCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, const FBox& Box)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount"));

	UFoliageStatistics_FoliageOverlappingBoxCount_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StaticMesh = StaticMesh;
	params.Box = Box;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// (Final, Native, Protected, HasOutParms)
// Parameters:
// AActor*                        Other                          (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// FHitResult                     OverlapInfo                    (ConstParm, Parm, OutParm, ReferenceParm)

void AInteractiveFoliageActor::CapsuleTouched(AActor* Other, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Foliage.InteractiveFoliageActor.CapsuleTouched"));

	AInteractiveFoliageActor_CapsuleTouched_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.OverlapInfo = OverlapInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function Foliage.ProceduralFoliageSpawner.Simulate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumSteps                       (Parm, ZeroConstructor, IsPlainOldData)

void UProceduralFoliageSpawner::Simulate(int NumSteps)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Foliage.ProceduralFoliageSpawner.Simulate"));

	UProceduralFoliageSpawner_Simulate_Params params;
	params.NumSteps = NumSteps;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
