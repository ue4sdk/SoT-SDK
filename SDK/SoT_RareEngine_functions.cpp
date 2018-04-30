// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareEngine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            InThreshold                    (Parm, ZeroConstructor, IsPlainOldData)

void UHitchDiagnosisBlueprintFunctionLibrary::STATIC_SetHitchThreshold(int InThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold");

	UHitchDiagnosisBlueprintFunctionLibrary_SetHitchThreshold_Params params;
	params.InThreshold = InThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UHitchDiagnosisBlueprintFunctionLibrary::STATIC_GetMaxHitchNameThisFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame");

	UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchNameThisFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHitchDiagnosisBlueprintFunctionLibrary::STATIC_GetMaxHitchLengthThisFrameMs()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs");

	UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchLengthThisFrameMs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog
// (Final, Native, Static, Public, BlueprintCallable)

void UHitchDiagnosisBlueprintFunctionLibrary::STATIC_DumpThisFramesHitchesToLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog");

	UHitchDiagnosisBlueprintFunctionLibrary_DumpThisFramesHitchesToLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHitchDiagnosisBlueprintFunctionLibrary::STATIC_DidHitchOccurThisFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame");

	UHitchDiagnosisBlueprintFunctionLibrary_DidHitchOccurThisFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareEngine.StallDetector.Deactivate
// (Final, Native, Public, BlueprintCallable)

void UStallDetector::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.Deactivate");

	UStallDetector_Deactivate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareEngine.StallDetector.CreateStallDetector
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CreateActive                   (Parm, ZeroConstructor, IsPlainOldData)
// class UStallDetector*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStallDetector* UStallDetector::STATIC_CreateStallDetector(float Delay, bool CreateActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.CreateStallDetector");

	UStallDetector_CreateStallDetector_Params params;
	params.Delay = Delay;
	params.CreateActive = CreateActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RareEngine.StallDetector.Activate
// (Final, Native, Public, BlueprintCallable)

void UStallDetector::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.Activate");

	UStallDetector_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UStaticMesh*>     MeshFilter                     (ConstParm, Parm, ZeroConstructor)
// TArray<struct FStaticMeshComponentList> OutComponentLists              (Parm, OutParm, ZeroConstructor)
// class ULevel*                  RestrictToLevel                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UStaticMeshActorBlueprintLibrary::STATIC_FindAllStaticMeshComponents(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, class ULevel* RestrictToLevel, TArray<struct FStaticMeshComponentList>* OutComponentLists)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents");

	UStaticMeshActorBlueprintLibrary_FindAllStaticMeshComponents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MeshFilter = MeshFilter;
	params.RestrictToLevel = RestrictToLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutComponentLists != nullptr)
		*OutComponentLists = params.OutComponentLists;
}


// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UStaticMesh*>     MeshFilter                     (ConstParm, Parm, ZeroConstructor)
// TArray<struct FStaticMeshActorList> OutActorLists                  (Parm, OutParm, ZeroConstructor)
// class ULevel*                  RestrictToLevel                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UStaticMeshActorBlueprintLibrary::STATIC_FindAllStaticMeshActors(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, class ULevel* RestrictToLevel, TArray<struct FStaticMeshActorList>* OutActorLists)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors");

	UStaticMeshActorBlueprintLibrary_FindAllStaticMeshActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MeshFilter = MeshFilter;
	params.RestrictToLevel = RestrictToLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActorLists != nullptr)
		*OutActorLists = params.OutActorLists;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
