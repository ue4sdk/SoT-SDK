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


// Class Tutorial.ContextualTutorialComponent
// 0x0020 (0x00F0 - 0x00D0)
class UContextualTutorialComponent : public UActorComponent
{
public:
	TArray<class UClass*>                              PromptActorClasses;                                       // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<class AActor*>                              PromptActors;                                             // 0x00E0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.ContextualTutorialComponent"));
		return ptr;
	}

};


// Class Tutorial.Tutorial2019Component
// 0x0008 (0x00D8 - 0x00D0)
class UTutorial2019Component : public UActorComponent
{
public:
	bool                                               IsEnabledByServer;                                        // 0x00D0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsInTutorialTale;                                         // 0x00D1(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00D2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tutorial.Tutorial2019Component"));
		return ptr;
	}


	void ReceiveTutorial2019BeginPlayOnServer();
	void ReceiveTutorial2019BeginPlayOnClient();
	void OnRep_IsEnabledByServer(bool OldIsEnabled);
	void ForceDisableComponent_Blueprint();
};


// Class Tutorial.Tutorial2019ContextualDelegatingComponent
// 0x0008 (0x00E0 - 0x00D8)
class UTutorial2019ContextualDelegatingComponent : public UTutorial2019Component
{
public:
	class UContextualTutorialComponent*                ContextualTutorialComponent;                              // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

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
