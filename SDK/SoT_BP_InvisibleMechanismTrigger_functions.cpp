// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_InvisibleMechanismTrigger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C.RefreshDeactivationTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_InvisibleMechanismTrigger_C::RefreshDeactivationTimer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C.RefreshDeactivationTimer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_InvisibleMechanismTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C.BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_9_OnMechanismTriggerStateChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class UMechanismTriggerInterface> Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMechanismTriggerState> PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMechanismTriggerState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InvisibleMechanismTrigger_C::BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_9_OnMechanismTriggerStateChangedDelegate__DelegateSignature(const TScriptInterface<class UMechanismTriggerInterface>& Trigger, TEnumAsByte<EMechanismTriggerState> PreviousState, TEnumAsByte<EMechanismTriggerState> NewState, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C.BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_9_OnMechanismTriggerStateChangedDelegate__DelegateSignature"));

	struct
	{
		TScriptInterface<class UMechanismTriggerInterface> Trigger;
		TEnumAsByte<EMechanismTriggerState> PreviousState;
		TEnumAsByte<EMechanismTriggerState> NewState;
		class AActor*                  Instigator;
	} params;

	params.Trigger = Trigger;
	params.PreviousState = PreviousState;
	params.NewState = NewState;
	params.Instigator = Instigator;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C.AutoDeactivateEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_InvisibleMechanismTrigger_C::AutoDeactivateEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C.AutoDeactivateEvent"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C.BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_57_OnMechanismResetDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TScriptInterface<class UMechanismResetInterface> Mechanism                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InvisibleMechanismTrigger_C::BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_57_OnMechanismResetDelegate__DelegateSignature(const TScriptInterface<class UMechanismResetInterface>& Mechanism)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C.BndEvt__MechanismTrigger_K2Node_ComponentBoundEvent_57_OnMechanismResetDelegate__DelegateSignature"));

	struct
	{
		TScriptInterface<class UMechanismResetInterface> Mechanism;
	} params;

	params.Mechanism = Mechanism;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C.ExecuteUbergraph_BP_InvisibleMechanismTrigger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InvisibleMechanismTrigger_C::ExecuteUbergraph_BP_InvisibleMechanismTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InvisibleMechanismTrigger.BP_InvisibleMechanismTrigger_C.ExecuteUbergraph_BP_InvisibleMechanismTrigger"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
