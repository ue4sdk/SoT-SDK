// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StatusEffects_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatusEffects.StatusEffectOverlapZone.OnStatusDelayEnd
// (Final, Native, Private)
// Parameters:
// int                            InStatusIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorRef                       (Parm, ZeroConstructor, IsPlainOldData)

void AStatusEffectOverlapZone::OnStatusDelayEnd(int InStatusIndex, class AActor* ActorRef)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectOverlapZone.OnStatusDelayEnd"));

	struct
	{
		int                            InStatusIndex;
		class AActor*                  ActorRef;
	} params;

	params.InStatusIndex = InStatusIndex;
	params.ActorRef = ActorRef;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour
// (Final, Native, Private)

void UDebugStatusEffectOverlapZoneVisualizerComponent::OnRep_SetDebugDrawColour()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions
// (Final, Native, Private)

void UDebugStatusEffectOverlapZoneVisualizerComponent::OnRep_DebugBoxDimensions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FActiveStatusEffect> OldEffects                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULightWeightStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects"));

	struct
	{
		TArray<struct FActiveStatusEffect> OldEffects;
	} params;

	params.OldEffects = OldEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<struct FActiveStatusEffect> ActivatedEffects               (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ULightWeightStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> ActivatedEffects)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus"));

	struct
	{
		TArray<struct FActiveStatusEffect> ActivatedEffects;
	} params;

	params.ActivatedEffects = ActivatedEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FActiveStatusEffect> OldEffects                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects"));

	struct
	{
		TArray<struct FActiveStatusEffect> OldEffects;
	} params;

	params.OldEffects = OldEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<struct FActiveStatusEffect> ActivatedEffects               (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> ActivatedEffects)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus"));

	struct
	{
		TArray<struct FActiveStatusEffect> ActivatedEffects;
	} params;

	params.ActivatedEffects = ActivatedEffects;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
