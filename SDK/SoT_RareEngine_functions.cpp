// Sea of Thieves (2) SDK

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

void UHitchDiagnosisBlueprintFunctionLibrary::SetHitchThreshold(int InThreshold)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold"));

	UHitchDiagnosisBlueprintFunctionLibrary_SetHitchThreshold_Params params;
	params.InThreshold = InThreshold;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FString                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

FString UHitchDiagnosisBlueprintFunctionLibrary::GetMaxHitchNameThisFrame()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame"));

	UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchNameThisFrame_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHitchDiagnosisBlueprintFunctionLibrary::GetMaxHitchLengthThisFrameMs()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs"));

	UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchLengthThisFrameMs_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog
// (Final, Native, Static, Public, BlueprintCallable)

void UHitchDiagnosisBlueprintFunctionLibrary::DumpThisFramesHitchesToLog()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog"));

	UHitchDiagnosisBlueprintFunctionLibrary_DumpThisFramesHitchesToLog_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHitchDiagnosisBlueprintFunctionLibrary::DidHitchOccurThisFrame()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame"));

	UHitchDiagnosisBlueprintFunctionLibrary_DidHitchOccurThisFrame_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareEngine.StallDetector.Deactivate
// (Final, Native, Public, BlueprintCallable)

void UStallDetector::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.StallDetector.Deactivate"));

	UStallDetector_Deactivate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function RareEngine.StallDetector.CreateStallDetector
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CreateActive                   (Parm, ZeroConstructor, IsPlainOldData)
// UStallDetector*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UStallDetector* UStallDetector::CreateStallDetector(float Delay, bool CreateActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.StallDetector.CreateStallDetector"));

	UStallDetector_CreateStallDetector_Params params;
	params.Delay = Delay;
	params.CreateActive = CreateActive;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareEngine.StallDetector.Activate
// (Final, Native, Public, BlueprintCallable)

void UStallDetector::Activate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.StallDetector.Activate"));

	UStallDetector_Activate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<UStaticMesh*>           MeshFilter                     (ConstParm, Parm, ZeroConstructor)
// TArray<FStaticMeshComponentList> OutComponentLists              (Parm, OutParm, ZeroConstructor)
// ULevel*                        RestrictToLevel                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UStaticMeshActorBlueprintLibrary::FindAllStaticMeshComponents(UObject* WorldContextObject, TArray<UStaticMesh*> MeshFilter, ULevel* RestrictToLevel, TArray<FStaticMeshComponentList>* OutComponentLists)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents"));

	UStaticMeshActorBlueprintLibrary_FindAllStaticMeshComponents_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MeshFilter = MeshFilter;
	params.RestrictToLevel = RestrictToLevel;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutComponentLists != nullptr)
		*OutComponentLists = params.OutComponentLists;
}


// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<UStaticMesh*>           MeshFilter                     (ConstParm, Parm, ZeroConstructor)
// TArray<FStaticMeshActorList>   OutActorLists                  (Parm, OutParm, ZeroConstructor)
// ULevel*                        RestrictToLevel                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UStaticMeshActorBlueprintLibrary::FindAllStaticMeshActors(UObject* WorldContextObject, TArray<UStaticMesh*> MeshFilter, ULevel* RestrictToLevel, TArray<FStaticMeshActorList>* OutActorLists)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors"));

	UStaticMeshActorBlueprintLibrary_FindAllStaticMeshActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MeshFilter = MeshFilter;
	params.RestrictToLevel = RestrictToLevel;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutActorLists != nullptr)
		*OutActorLists = params.OutActorLists;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
