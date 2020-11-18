#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_EquipAndUseBanana_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C
// 0x0069 (0x0501 - 0x0498)
class ABP_PromptActor_EquipAndUseBanana_C : public ABP_PromptActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Prompt_EquipAndUseBanana_C*              BananaPrompt;                                             // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    BroadcastToListeners;                                     // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FObjectMessagingHandle                      NewVar_1;                                                 // 0x04B8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DisplayPrompts;                                           // 0x0500(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptActor_EquipAndUseBanana.BP_PromptActor_EquipAndUseBanana_C"));
		return ptr;
	}


	void UpdatePromptVisibility();
	void OnRep_DisplayPrompts();
	void SetDisplayPrompts(bool InDisplayPrompts);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnBananaUsed(const struct FEventHealthChanged& Event);
	void ExecuteUbergraph_BP_PromptActor_EquipAndUseBanana(int EntryPoint);
	void BroadcastToListeners__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
