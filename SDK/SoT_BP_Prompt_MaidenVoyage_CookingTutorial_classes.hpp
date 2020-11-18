#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_MaidenVoyage_CookingTutorial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C
// 0x00D1 (0x01E9 - 0x0118)
class UBP_Prompt_MaidenVoyage_CookingTutorial_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               State_HoldingRawFood;                                     // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt_CookFood;                                          // 0x0128(0x0068) (Edit, BlueprintVisible)
	struct FObjectMessagingHandle                      Handle_CookFood;                                          // 0x0190(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     FoodType;                                                 // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      NewVar_1;                                                 // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasDisplayed;                                             // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_MaidenVoyage_CookingTutorial.BP_Prompt_MaidenVoyage_CookingTutorial_C"));
		return ptr;
	}


	void OnHoldRawFoodFunc(const struct FEventObjectWielded& EventObjectWielded);
	void Evaluate();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void OnHoldRawFood(const struct FEventObjectWielded& Event);
	void ExecuteUbergraph_BP_Prompt_MaidenVoyage_CookingTutorial(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
