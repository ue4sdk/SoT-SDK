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
// 0x0020 (0x04C8 - 0x04A8)
class ABP_InvisibleMechanismTrigger_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMechanismTriggerComponent*                  MechanismTrigger;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDeactivate;                                           // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	float                                              AutoDeactivateDelay;                                      // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C"));
		return ptr;
	}


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
