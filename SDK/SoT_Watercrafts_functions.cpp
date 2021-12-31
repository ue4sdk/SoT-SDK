// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Watercrafts_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Watercrafts.FakeShip.OnAttachedItemEndPlay
// (Final, Native, Private)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void AFakeShip::OnAttachedItemEndPlay(AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Watercrafts.FakeShip.OnAttachedItemEndPlay"));

	AFakeShip_OnAttachedItemEndPlay_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnRep_CurrentWatercraft
// (Final, Native, Private)
// Parameters:
// AActor*                        PreviousWatercraft             (Parm, ZeroConstructor, IsPlainOldData)

void UItemProxyWatercraftTrackerComponent::OnRep_CurrentWatercraft(AActor* PreviousWatercraft)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnRep_CurrentWatercraft"));

	UItemProxyWatercraftTrackerComponent_OnRep_CurrentWatercraft_Params params;
	params.PreviousWatercraft = PreviousWatercraft;

	UObject::ProcessEvent(fn, &params);
}


// Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnCurrentWatercraftDestroyed
// (Final, Native, Private)
// Parameters:
// AActor*                        DestroyedWatercraft            (Parm, ZeroConstructor, IsPlainOldData)

void UItemProxyWatercraftTrackerComponent::OnCurrentWatercraftDestroyed(AActor* DestroyedWatercraft)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Watercrafts.ItemProxyWatercraftTrackerComponent.OnCurrentWatercraftDestroyed"));

	UItemProxyWatercraftTrackerComponent_OnCurrentWatercraftDestroyed_Params params;
	params.DestroyedWatercraft = DestroyedWatercraft;

	UObject::ProcessEvent(fn, &params);
}


// Function Watercrafts.Watercraft.OnRigidBodyWake
// (Final, Native, Protected)
// Parameters:
// FName                          InBoneName                     (Parm, ZeroConstructor, IsPlainOldData)

void AWatercraft::OnRigidBodyWake(const FName& InBoneName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Watercrafts.Watercraft.OnRigidBodyWake"));

	AWatercraft_OnRigidBodyWake_Params params;
	params.InBoneName = InBoneName;

	UObject::ProcessEvent(fn, &params);
}


// Function Watercrafts.Watercraft.OnRigidBodySleep
// (Final, Native, Protected)
// Parameters:
// FName                          InBoneName                     (Parm, ZeroConstructor, IsPlainOldData)

void AWatercraft::OnRigidBodySleep(const FName& InBoneName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Watercrafts.Watercraft.OnRigidBodySleep"));

	AWatercraft_OnRigidBodySleep_Params params;
	params.InBoneName = InBoneName;

	UObject::ProcessEvent(fn, &params);
}


// Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<UChildActorComponent*>  InAlwaysEnabledInteractables   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ARowboat::SetAlwaysEnabledInteractables(TArray<UChildActorComponent*> InAlwaysEnabledInteractables)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables"));

	ARowboat_SetAlwaysEnabledInteractables_Params params;
	params.InAlwaysEnabledInteractables = InAlwaysEnabledInteractables;

	UObject::ProcessEvent(fn, &params);
}


// Function Watercrafts.Rowboat.OnRep_IsSinking
// (Final, Native, Private)

void ARowboat::OnRep_IsSinking()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Watercrafts.Rowboat.OnRep_IsSinking"));

	ARowboat_OnRep_IsSinking_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        WatercraftClass                (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FRotator                       Rotation                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// AWatercraft*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AWatercraft* UWatercraftBlueprintFunctionLibrary::SpawnWatercraft(UObject* WorldContextObject, UClass* WatercraftClass, const FVector& Location, const FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft"));

	UWatercraftBlueprintFunctionLibrary_SpawnWatercraft_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WatercraftClass = WatercraftClass;
	params.Location = Location;
	params.Rotation = Rotation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Watercrafts.WatercraftTrackerComponent.OnWatercraftDestroyed
// (Final, Native, Private)
// Parameters:
// AActor*                        WatercraftActor                (Parm, ZeroConstructor, IsPlainOldData)

void UWatercraftTrackerComponent::OnWatercraftDestroyed(AActor* WatercraftActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Watercrafts.WatercraftTrackerComponent.OnWatercraftDestroyed"));

	UWatercraftTrackerComponent_OnWatercraftDestroyed_Params params;
	params.WatercraftActor = WatercraftActor;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
