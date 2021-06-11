#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActorBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActorBase.BP_PromptActorBase_C
// 0x0038 (0x0468 - 0x0430)
class ABP_PromptActorBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCompleted;                                              // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	TArray<class UBP_PromptCoordinator_Base_C*>        PromptCoordinators;                                       // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnComplete;                                               // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptActorBase.BP_PromptActorBase_C"));
		return ptr;
	}


	void UninitializePrompt(class UBP_PromptCoordinator_Base_C* PromptCoordinator);
	void UninitializeAllPrompts();
	void CheckAllPromptsComplete(bool* AllCompleted);
	void Complete();
	void GetMyClass(class UClass** Class);
	void GetAthenaPlayerController(class AAthenaPlayerController** AthenaPlayerController);
	void UserConstructionScript();
	void Add_Prompt_Coordinator(class UBP_PromptCoordinator_Base_C* Prompt_Coordinator);
	void On_Prompt_Complete();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PromptActorBase(int EntryPoint);
	void OnComplete__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
