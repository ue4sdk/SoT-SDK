#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameplayTasks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTaskOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayTasks.GameplayTaskOwnerInterface"));
		return ptr;
	}

};


// Class GameplayTasks.GameplayTask
// 0x0030 (0x0058 - 0x0028)
class UGameplayTask : public UObject
{
public:
	FName                                              InstanceName;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayTasks.GameplayTask"));
		return ptr;
	}


	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};


// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0040 (0x0098 - 0x0058)
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	FScriptMulticastDelegate                           Success;                                                  // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	FScriptMulticastDelegate                           DidNotSpawn;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET
	UClass*                                            ClassToSpawn;                                             // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayTasks.GameplayTask_SpawnActor"));
		return ptr;
	}


	static UGameplayTask_SpawnActor* SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const FVector& SpawnLocation, const FRotator& SpawnRotation, UClass* Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor);
	bool BeginSpawningActor(UObject* WorldContextObject, AActor** SpawnedActor);
};


// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0018 (0x0070 - 0x0058)
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	FScriptMulticastDelegate                           OnFinish;                                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayTasks.GameplayTask_WaitDelay"));
		return ptr;
	}


	static UGameplayTask_WaitDelay* TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time);
	void TaskDelayDelegate__DelegateSignature();
};


// Class GameplayTasks.GameplayTaskResource
// 0x0010 (0x0038 - 0x0028)
class UGameplayTaskResource : public UObject
{
public:
	int                                                ManualResourceID;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	unsigned char                                      bManuallySetID : 1;                                       // 0x0030(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayTasks.GameplayTaskResource"));
		return ptr;
	}

};


// Class GameplayTasks.GameplayTasksComponent
// 0x0060 (0x0128 - 0x00C8)
class UGameplayTasksComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<UGameplayTask*>                             SimulatedTasks;                                           // 0x00D0(0x0010) (Net, ZeroConstructor)
	TArray<UGameplayTask*>                             TaskPriorityQueue;                                        // 0x00E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00F0(0x0028) MISSED OFFSET
	FScriptMulticastDelegate                           OnClaimedResourcesChange;                                 // 0x0118(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayTasks.GameplayTasksComponent"));
		return ptr;
	}


	void OnRep_SimulatedTasks();
	static TEnumAsByte<EGameplayTaskRunResult> K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, UGameplayTask* Task, unsigned char Priority, TArray<UClass*> AdditionalRequiredResources, TArray<UClass*> AdditionalClaimedResources);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
