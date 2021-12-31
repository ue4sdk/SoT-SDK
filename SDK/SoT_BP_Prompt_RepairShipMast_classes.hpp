#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_RepairShipMast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C
// 0x01B0 (0x02C8 - 0x0118)
class UBP_Prompt_RepairShipMast_C : public UBP_PromptCoordinator_Base_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               State_ShipMastDamaged;                                    // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	FObjectMessagingHandle                             Handle_OnMastDamaged1;                                    // 0x0128(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_Complete;                                           // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	FPrioritisedPromptWithHandle                       Prompt_RepairShip;                                        // 0x0178(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	FObjectMessagingHandle                             Handle_CurrentShipChanged;                                // 0x01E0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	AShip*                                             CurrentShip;                                              // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	FObjectMessagingHandle                             Handle_OnMastDamaged2;                                    // 0x0230(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FObjectMessagingHandle                             Handle_OnMastDamaged3;                                    // 0x0278(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                NumMastsRegistered;                                       // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MastIndex;                                                // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_RepairShipMast.BP_Prompt_RepairShipMast_C"));
		return ptr;
	}


	void UnregisterDamageEventFromCurrentShip();
	void RegisterDamageEventWithCurrentShip();
	void Evaluate();
	void RegisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void OnCurrentShipChanged(const FEventCurrentShipChanged& Event);
	void OnShipMastDamaged(const FEventMastDamageLevelChanged& Event);
	void UnregisterCharacterEvents_Implementable(const FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void ExecuteUbergraph_BP_Prompt_RepairShipMast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
