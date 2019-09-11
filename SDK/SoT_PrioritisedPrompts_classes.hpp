#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0030 (0x0058 - 0x0028)
class UBasePromptCoordinator : public UObject
{
public:
	class AAthenaPlayerController*                     PlayerController;                                         // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPrioritisedPromptsManager*                  PrioritisedPromptsManager;                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrioritisedPrompts.BasePromptCoordinator"));
		return ptr;
	}


	void Uninitialize_Implementable();
	void Uninitialize();
	void Start();
	void SetPromptAs(const struct FPrioritisedPromptWithHandle& Prompt);
	void Initialize(class AAthenaPlayerController* PlayerController, class UPrioritisedPromptsManager* PrioritisedPromptsManager);
	void DismissAllPrompts();
};


// Class PrioritisedPrompts.PrioritisedPromptsManager
// 0x0020 (0x0048 - 0x0028)
class UPrioritisedPromptsManager : public UObject
{
public:
	TArray<struct FPrioritisedPromptWithHandle>        AllPrompts;                                               // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PrioritisedPrompts.PrioritisedPromptsManager"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
