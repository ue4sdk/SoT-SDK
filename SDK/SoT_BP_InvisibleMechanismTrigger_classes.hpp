#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_InvisibleMechanismTrigger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C
// 0x0024 (0x0484 - 0x0460)
class ABP_InvisibleMechanismTrigger_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMechanismTriggerComponent*                  MechanismTrigger;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDeactivate;                                           // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	float                                              AutoDeactivateDelay;                                      // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                DeactivateTimerHandle;                                    // 0x0480(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C"));
		return ptr;
	}


	void RefreshDeactivationTimer();
	void UserConstructionScript();
	void BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_9_OnMechanismTriggerStateChangedDelegate__DelegateSignature(const TScriptInterface<class UMechanismTriggerInterface>& Trigger, TEnumAsByte<EMechanismTriggerState> PreviousState, TEnumAsByte<EMechanismTriggerState> NewState, class AActor* Instigator);
	void AutoDeactivateEvent();
	void BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_57_OnMechanismResetDelegate__DelegateSignature(const TScriptInterface<class UMechanismResetInterface>& Mechanism);
	void ExecuteUbergraph_BP_InvisibleMechanismTrigger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
