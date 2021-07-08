// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameplayTasks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameplayTasks.GameplayTask.ReadyForActivation
// (Final, Native, Public, BlueprintCallable)

void UGameplayTask::ReadyForActivation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask.ReadyForActivation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGameplayTask::GenericGameplayTaskDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayTasks.GameplayTask.EndTask
// (Final, Native, Public, BlueprintCallable)

void UGameplayTask::EndTask()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask.EndTask"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                SpawnRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSpawnOnlyOnAuthority          (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_SpawnActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor"));

	struct
	{
		TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;
		struct FVector                 SpawnLocation;
		struct FRotator                SpawnRotation;
		class UClass*                  Class;
		bool                           bSpawnOnlyOnAuthority;
		class UGameplayTask_SpawnActor* ReturnValue;
	} params;

	params.TaskOwner = TaskOwner;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.Class = Class;
	params.bSpawnOnlyOnAuthority = bSpawnOnlyOnAuthority;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  SpawnedActor;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  SpawnedActor;
		bool                           ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;

	UObject::ProcessEvent(fn, &params);

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_WaitDelay* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay"));

	struct
	{
		TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;
		float                          Time;
		class UGameplayTask_WaitDelay* ReturnValue;
	} params;

	params.TaskOwner = TaskOwner;
	params.Time = Time;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
// (Final, Native, Public)

void UGameplayTasksComponent::OnRep_SimulatedTasks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner                      (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask*           Task                           (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          AdditionalRequiredResources    (Parm, ZeroConstructor)
// TArray<class UClass*>          AdditionalClaimedResources     (Parm, ZeroConstructor)
// TEnumAsByte<EGameplayTaskRunResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EGameplayTaskRunResult> UGameplayTasksComponent::K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask"));

	struct
	{
		TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;
		class UGameplayTask*           Task;
		unsigned char                  Priority;
		TArray<class UClass*>          AdditionalRequiredResources;
		TArray<class UClass*>          AdditionalClaimedResources;
		TEnumAsByte<EGameplayTaskRunResult> ReturnValue;
	} params;

	params.TaskOwner = TaskOwner;
	params.Task = Task;
	params.Priority = Priority;
	params.AdditionalRequiredResources = AdditionalRequiredResources;
	params.AdditionalClaimedResources = AdditionalClaimedResources;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
