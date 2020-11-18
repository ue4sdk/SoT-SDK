#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EquipAndUseBanana_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C
// 0x0379 (0x0491 - 0x0118)
class UBP_Prompt_EquipAndUseBanana_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      Handle_EventWielded;                                      // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BananaWielded;                                            // 0x0168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0169(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt_EquipBanana;                                       // 0x0170(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_EatBanana;                                         // 0x01D8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BananaEaten;                                              // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt_Eat_Banana;                                        // 0x0228(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      PromptActor;                                              // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FObjectMessagingHandle                      Handle_OpenRadial;                                        // 0x0298(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               EquipmentRadialOpen;                                      // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt_OpenRadial;                                        // 0x02E8(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BananaStowed;                                             // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	struct FObjectMessagingHandle                      Handle_EventStowed;                                       // 0x0358(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                RequiredRadialID;                                         // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	struct FObjectMessagingHandle                      Handle_CloseRadial;                                       // 0x03A8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_Unwield;                                           // 0x03F0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      WieldedItemType;                                          // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldDisplayPrompts;                                     // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	struct FObjectMessagingHandle                      Handle_PlayerDied;                                        // 0x0448(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayerDied;                                               // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_EquipAndUseBanana.BP_Prompt_EquipAndUseBanana_C"));
		return ptr;
	}


	void OnPlayerDiedFunc();
	void SetShouldDisplayPrompts(bool InShouldDisplayPrompts);
	void Start();
	void Evaluate();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void OnWielded(const struct FEventObjectWielded& Event);
	void OnBananaUsed(const struct FEventOneShotUseTriggered& Event);
	void OnRadialOpen(const struct FShowRadialInventory& Event);
	void OnCloseRadial(const struct FHideRadialInventory& Event);
	void EventStartStow(const struct FAthena_FEventStartStow& Event);
	void OnPlayerDied(const struct FEventCharacterDead& Event);
	void ExecuteUbergraph_BP_Prompt_EquipAndUseBanana(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
