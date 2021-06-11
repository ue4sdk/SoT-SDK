#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PrioritisedPrompts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PrioritisedPrompts.BasePromptCoordinator
// 0x00D0 (0x00F8 - 0x0028)
class UBasePromptCoordinator : public UObject
{
public:
	class AAthenaPlayerController*                     PlayerController;                                         // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	class UPrioritisedPromptsManager*                  PrioritisedPromptsManager;                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  CharacterWithRegisteredEvents;                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA8];                                      // 0x0050(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrioritisedPrompts.BasePromptCoordinator"));
		return ptr;
	}


	void UpdateVisiblePrompt();
	void UnregisterOtherEvents_Implementable();
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void Uninitialize_Implementable();
	void Uninitialize();
	void Start();
	void SetPromptAs(const struct FPrioritisedPromptWithHandle& Prompt);
	void RegisterOtherEvents_Implementable();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void OnControllerEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void MarkAsComplete_Implementable();
	static struct FPromptEvaluation MakeShowPrompt(const struct FPrioritisedPromptWithHandle& Prompt);
	static struct FPromptEvaluation MakeHideCurrentPrompts();
	static struct FPromptEvaluation MakeCompleteCoordinator();
	void Initialize(class AAthenaPlayerController* PlayerController, class UPrioritisedPromptsManager* PrioritisedPromptsManager);
	bool GetCompleted();
	struct FPromptEvaluation EvaluatePromptDisplayState();
	void DismissAllPrompts();
};


// Class PrioritisedPrompts.GetPromptsLocalService
// 0x0018 (0x0040 - 0x0028)
class UGetPromptsLocalService : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    Loaded;                                                   // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UObject*                                     WorldContextObject;                                       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrioritisedPrompts.GetPromptsLocalService"));
		return ptr;
	}


	static class UGetPromptsLocalService* GetPromptsLocalService(class UObject* WorldContextObject);
};


// Class PrioritisedPrompts.PrioritisedPromptsManager
// 0x0040 (0x0068 - 0x0028)
class UPrioritisedPromptsManager : public UObject
{
public:
	TArray<struct FPrioritisedPromptWithHandle>        AllPrompts;                                               // 0x0028(0x0010) (ZeroConstructor)
	class APlayerController*                           PlayerController;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrioritisedPrompts.PrioritisedPromptsManager"));
		return ptr;
	}

};


// Class PrioritisedPrompts.PromptCounterAccessKey
// 0x0010 (0x0038 - 0x0028)
class UPromptCounterAccessKey : public UObject
{
public:
	class FString                                      Key;                                                      // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrioritisedPrompts.PromptCounterAccessKey"));
		return ptr;
	}

};


// Class PrioritisedPrompts.PromptsLocalServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UPromptsLocalServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrioritisedPrompts.PromptsLocalServiceInterface"));
		return ptr;
	}


	void IncrementCountForKey(class UClass* AccessKey);
	int GetCountForKey(class UClass* AccessKey);
};


// Class PrioritisedPrompts.PromptsLocalService
// 0x0070 (0x0098 - 0x0028)
class UPromptsLocalService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrioritisedPrompts.PromptsLocalService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
