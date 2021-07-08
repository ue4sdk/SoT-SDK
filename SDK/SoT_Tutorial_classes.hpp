#pragma once

// Sea of Thieves (2) SDK

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


// Class Tutorial.ContextualTutorialComponent
// 0x0058 (0x0120 - 0x00C8)
class UContextualTutorialComponent : public UActorComponent
{
public:
	TArray<struct FContextualTutorialPromptDesc>       ContextualTutorialClasses;                                // 0x00C8(0x0010) (Edit, ZeroConstructor)
	TArray<class AActor*>                              SpawnedPromptActors;                                      // 0x00D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x38];                                      // 0x00E8(0x0038) MISSED OFFSET

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
	bool                                               IsEnabledByServer;                                        // 0x00C8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsInTutorialTale;                                         // 0x00C9(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.Tutorial2019Component"));
		return ptr;
	}


	void ReceiveTutorial2019BeginPlayOnServer();
	void ReceiveTutorial2019BeginPlayOnClient();
	void OnRep_IsEnabledByServer(bool OldIsEnabled);
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


// Class Tutorial.TutorialHelpersBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTutorialHelpersBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.TutorialHelpersBlueprintLibrary"));
		return ptr;
	}


	static void FirePromptCompleted(class UClass* AccessKey, class UObject* WorldContextObject);
};


// Class Tutorial.TutorialManager
// 0x0048 (0x0110 - 0x00C8)
class UTutorialManager : public UActorComponent
{
public:
	class UClass*                                      CompanyOnboardingStarterClass;                            // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MaidenVoyageStarterClass;                                 // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BeachNPCSpawnFlowStarterClass;                            // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SelectedTutorialClass;                                    // 0x00E0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UTutorialStarter*                            SelectedTutorial;                                         // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               HasEverPlayedFirstPersonAnimation;                        // 0x00F0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               HasStartedTutorial;                                       // 0x00F1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasReceivedEntitlements;                                  // 0x00F2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasPosessedPawn;                                          // 0x00F3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00F4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.TutorialManager"));
		return ptr;
	}


	void OnRep_SelectedTutorialClass();
};


// Class Tutorial.TutorialStarter
// 0x0038 (0x0060 - 0x0028)
class UTutorialStarter : public UObject
{
public:
	class AAthenaPlayerController*                     AthenaPlayerController;                                   // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldPlayIntroAnimatic;                                  // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldDisableAllIntroBehaviour;                           // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FFirstPersonAnimaticSettings                IntroAnimationSettings;                                   // 0x0034(0x002C) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.TutorialStarter"));
		return ptr;
	}

};


// Class Tutorial.BeachNPCSpawnFlowStarter
// 0x0000 (0x0060 - 0x0060)
class UBeachNPCSpawnFlowStarter : public UTutorialStarter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.BeachNPCSpawnFlowStarter"));
		return ptr;
	}

};


// Class Tutorial.CompanyOnboardingStarter
// 0x0000 (0x0060 - 0x0060)
class UCompanyOnboardingStarter : public UTutorialStarter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.CompanyOnboardingStarter"));
		return ptr;
	}


	bool HasPrerequisites();
};


// Class Tutorial.MaidenVoyageStarter
// 0x0000 (0x0060 - 0x0060)
class UMaidenVoyageStarter : public UTutorialStarter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.MaidenVoyageStarter"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
