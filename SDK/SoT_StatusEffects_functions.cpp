// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StatusEffects_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatusEffects.StatusEffectOverlapZone.OnStatusDelayEnd
// (Final, Native, Private)
// Parameters:
// int                            InStatusIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        ActorRef                       (Parm, ZeroConstructor, IsPlainOldData)

void AStatusEffectOverlapZone::OnStatusDelayEnd(int InStatusIndex, AActor* ActorRef)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectOverlapZone.OnStatusDelayEnd"));

	AStatusEffectOverlapZone_OnStatusDelayEnd_Params params;
	params.InStatusIndex = InStatusIndex;
	params.ActorRef = ActorRef;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour
// (Final, Native, Private)

void UDebugStatusEffectOverlapZoneVisualizerComponent::OnRep_SetDebugDrawColour()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_SetDebugDrawColour"));

	UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_SetDebugDrawColour_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions
// (Final, Native, Private)

void UDebugStatusEffectOverlapZoneVisualizerComponent::OnRep_DebugBoxDimensions()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent.OnRep_DebugBoxDimensions"));

	UDebugStatusEffectOverlapZoneVisualizerComponent_OnRep_DebugBoxDimensions_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<FActiveStatusEffect>    OldEffects                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULightWeightStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<FActiveStatusEffect> OldEffects)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.LightWeightStatusEffectManagerComponent.OnRep_ActiveEffects"));

	ULightWeightStatusEffectManagerComponent_OnRep_ActiveEffects_Params params;
	params.OldEffects = OldEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<FActiveStatusEffect>    AddedEffects                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<FActiveStatusEffect>    RemovedEffects                 (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ULightWeightStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<FActiveStatusEffect> AddedEffects, TArray<FActiveStatusEffect> RemovedEffects)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus"));

	ULightWeightStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params params;
	params.AddedEffects = AddedEffects;
	params.RemovedEffects = RemovedEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// AActor*                        Recipient                      (Parm, ZeroConstructor, IsPlainOldData)
// FStatus                        Status                         (ConstParm, Parm, OutParm, ReferenceParm)

void UStatusEffectHelperFunctionLibrary::ApplyOneShotStatus(AActor* Recipient, const FStatus& Status)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus"));

	UStatusEffectHelperFunctionLibrary_ApplyOneShotStatus_Params params;
	params.Recipient = Recipient;
	params.Status = Status;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<FActiveStatusEffect>    OldEffects                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UStatusEffectManagerComponent::OnRep_ActiveEffects(TArray<FActiveStatusEffect> OldEffects)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectManagerComponent.OnRep_ActiveEffects"));

	UStatusEffectManagerComponent_OnRep_ActiveEffects_Params params;
	params.OldEffects = OldEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// TArray<FActiveStatusEffect>    AddedEffects                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<FActiveStatusEffect>    RemovedEffects                 (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<FActiveStatusEffect> AddedEffects, TArray<FActiveStatusEffect> RemovedEffects)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus"));

	UStatusEffectManagerComponent_MultiCast_ApplyOneShotStatus_Params params;
	params.AddedEffects = AddedEffects;
	params.RemovedEffects = RemovedEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectVolumeComponent::UnaffectActor(AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor"));

	UStatusEffectVolumeComponent_UnaffectActor_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap
// (Final, Native, Private)
// Parameters:
// AActor*                        OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectVolumeComponent::OnParentComponentEndOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap"));

	UStatusEffectVolumeComponent_OnParentComponentEndOverlap_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// AActor*                        OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// FHitResult                     SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void UStatusEffectVolumeComponent::OnParentComponentBeginOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap"));

	UStatusEffectVolumeComponent_OnParentComponentBeginOverlap_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectVolumeComponent.AffectActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectVolumeComponent::AffectActor(AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectVolumeComponent.AffectActor"));

	UStatusEffectVolumeComponent_AffectActor_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
