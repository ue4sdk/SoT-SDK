#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tutorial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Tutorial.CompanyTutorialVoyageProgress
// 0x00B8 (0x00E0 - 0x0028)
class UCompanyTutorialVoyageProgress : public UObject
{
public:
	class UClass*                                      AssignedVoyageProposalDescClass;                          // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AssignedTaleRankDescClass;                                // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0038(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.CompanyTutorialVoyageProgress"));
		return ptr;
	}


	bool IsSameVoyage(const struct FText& VoyageName);
	void AssignVoyage(class UClass* VoyageProposalDescClass, class UClass* TaleRankDescClass);
};


// Class Tutorial.TutorialPromptAccessKey
// 0x0010 (0x0038 - 0x0028)
class UTutorialPromptAccessKey : public UObject
{
public:
	class FString                                      Key;                                                      // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.TutorialPromptAccessKey"));
		return ptr;
	}

};


// Class Tutorial.ContextualTutorialComponent
// 0x0068 (0x0130 - 0x00C8)
class UContextualTutorialComponent : public UActorComponent
{
public:
	TArray<struct FContextualTutorialPromptDesc>       ContextualTutorialClasses;                                // 0x00C8(0x0010) (Edit, ZeroConstructor)
	class FString                                      TheScope;                                                 // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<class AActor*>                              SpawnedPromptActors;                                      // 0x00E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x38];                                      // 0x00F8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.ContextualTutorialComponent"));
		return ptr;
	}

};


// Class Tutorial.OnboardingStatusInterface
// 0x0000 (0x0028 - 0x0028)
class UOnboardingStatusInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.OnboardingStatusInterface"));
		return ptr;
	}

};


// Class Tutorial.Tutorial2019Component
// 0x0008 (0x00D0 - 0x00C8)
class UTutorial2019Component : public UActorComponent
{
public:
	bool                                               HasEverPlayedWakeupAnimation;                             // 0x00C8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnabledByServer;                                        // 0x00C9(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsIntroEnabledByServer;                                   // 0x00CA(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsInTutorialTale;                                         // 0x00CB(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.Tutorial2019Component"));
		return ptr;
	}


	void ReceiveTutorial2019BeginPlayOnServer();
	void ReceiveTutorial2019BeginPlayOnClient();
	void ReceiveIntroBeginPlayOnServer();
	void ReceiveIntroBeginPlayOnClient();
	void OnRep_IsIntroEnabledByServer(bool OldIsIntroEnabled);
	void OnRep_IsEnabledByServer(bool OldIsEnabled);
	bool HasPrerequisites();
	void ForceDisableComponent_Blueprint();
	void BeginOnServer();
};


// Class Tutorial.Tutorial2019ContextualDelegatingComponent
// 0x0008 (0x00D8 - 0x00D0)
class UTutorial2019ContextualDelegatingComponent : public UTutorial2019Component
{
public:
	class UContextualTutorialComponent*                ContextualTutorialComponent;                              // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.Tutorial2019ContextualDelegatingComponent"));
		return ptr;
	}

};


// Class Tutorial.Tutorial2019FunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UTutorial2019FunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.Tutorial2019FunctionLibrary"));
		return ptr;
	}


	static struct FTeleportLocation GetNearestOnboardingSpawnPoint(class AActor* CharacterToTeleport);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
