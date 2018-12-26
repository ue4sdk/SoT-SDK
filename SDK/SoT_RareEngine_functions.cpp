// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareEngine_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold");

	struct
	{
		int                            InThreshold;
	} params;

	params.InThreshold = InThreshold;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UHitchDiagnosisBlueprintFunctionLibrary::GetMaxHitchNameThisFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame");

	struct
	{
		class FString                  ReturnValue;
	} params;


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
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog
// (Final, Native, Static, Public, BlueprintCallable)

void UHitchDiagnosisBlueprintFunctionLibrary::DumpThisFramesHitchesToLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHitchDiagnosisBlueprintFunctionLibrary::DidHitchOccurThisFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareEngine.StallDetector.Deactivate
// (Final, Native, Public, BlueprintCallable)

void UStallDetector::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.Deactivate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RareEngine.StallDetector.CreateStallDetector
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CreateActive                   (Parm, ZeroConstructor, IsPlainOldData)
// class UStallDetector*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStallDetector* UStallDetector::CreateStallDetector(float Delay, bool CreateActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.CreateStallDetector");

	struct
	{
		float                          Delay;
		bool                           CreateActive;
		class UStallDetector*          ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.StallDetector.Activate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UStaticMesh*>     MeshFilter                     (ConstParm, Parm, ZeroConstructor)
// TArray<struct FStaticMeshComponentList> OutComponentLists              (Parm, OutParm, ZeroConstructor)
// class ULevel*                  RestrictToLevel                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UStaticMeshActorBlueprintLibrary::FindAllStaticMeshComponents(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, class ULevel* RestrictToLevel, TArray<struct FStaticMeshComponentList>* OutComponentLists)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents");

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<class UStaticMesh*>     MeshFilter;
		TArray<struct FStaticMeshComponentList> OutComponentLists;
		class ULevel*                  RestrictToLevel;
	} params;

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
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UStaticMesh*>     MeshFilter                     (ConstParm, Parm, ZeroConstructor)
// TArray<struct FStaticMeshActorList> OutActorLists                  (Parm, OutParm, ZeroConstructor)
// class ULevel*                  RestrictToLevel                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UStaticMeshActorBlueprintLibrary::FindAllStaticMeshActors(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, class ULevel* RestrictToLevel, TArray<struct FStaticMeshActorList>* OutActorLists)
{
	static auto fn = UObject::FindObject<UFunction>("Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors");

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<class UStaticMesh*>     MeshFilter;
		TArray<struct FStaticMeshActorList> OutActorLists;
		class ULevel*                  RestrictToLevel;
	} params;

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
