#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_RepairShip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_RepairShip.BP_Prompt_RepairShip_C
// 0x0118 (0x0230 - 0x0118)
class UBP_Prompt_RepairShip_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               State_ShipDamaged;                                        // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FObjectMessagingHandle                      Handle_OnShipDamaged;                                     // 0x0128(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_Complete;                                           // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt_RepairShip;                                        // 0x0178(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_CurrentShipChanged;                                // 0x01E0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AShip*                                       CurrentShip;                                              // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_RepairShip.BP_Prompt_RepairShip_C"));
		return ptr;
	}


	void UnregisterDamageEventFromCurrentShip();
	void RegisterDamageEventWithCurrentShip();
	void Evaluate();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void OnCurrentShipChanged(const struct FEventCurrentShipChanged& Event);
	void OnShipDamaged(const struct FDamageZoneDamageLevelChanged& Event);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void ExecuteUbergraph_BP_Prompt_RepairShip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
