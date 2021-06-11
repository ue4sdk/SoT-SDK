// Sea of Thieves (2.1) SDK

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
// TArray<struct FActiveStatusEffect> AddedEffects                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<struct FActiveStatusEffect> RemovedEffects                 (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ULightWeightStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.LightWeightStatusEffectManagerComponent.MultiCast_ApplyOneShotStatus"));

	struct
	{
		TArray<struct FActiveStatusEffect> AddedEffects;
		TArray<struct FActiveStatusEffect> RemovedEffects;
	} params;

	params.AddedEffects = AddedEffects;
	params.RemovedEffects = RemovedEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Recipient                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FStatus                 Status                         (ConstParm, Parm, OutParm, ReferenceParm)

void UStatusEffectHelperFunctionLibrary::ApplyOneShotStatus(class AActor* Recipient, const struct FStatus& Status)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectHelperFunctionLibrary.ApplyOneShotStatus"));

	struct
	{
		class AActor*                  Recipient;
		struct FStatus                 Status;
	} params;

	params.Recipient = Recipient;
	params.Status = Status;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
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
// TArray<struct FActiveStatusEffect> AddedEffects                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// TArray<struct FActiveStatusEffect> RemovedEffects                 (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UStatusEffectManagerComponent::MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectManagerComponent.MultiCast_ApplyOneShotStatus"));

	struct
	{
		TArray<struct FActiveStatusEffect> AddedEffects;
		TArray<struct FActiveStatusEffect> RemovedEffects;
	} params;

	params.AddedEffects = AddedEffects;
	params.RemovedEffects = RemovedEffects;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectVolumeComponent::UnaffectActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectVolumeComponent.UnaffectActor"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectVolumeComponent::OnParentComponentEndOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentEndOverlap"));

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params;

	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap
// (Final, Native, Private, HasOutParms)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void UStatusEffectVolumeComponent::OnParentComponentBeginOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectVolumeComponent.OnParentComponentBeginOverlap"));

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

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
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffectVolumeComponent::AffectActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StatusEffects.StatusEffectVolumeComponent.AffectActor"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
