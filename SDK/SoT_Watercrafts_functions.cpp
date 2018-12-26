// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Watercrafts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Watercrafts.Watercraft.OnRigidBodyWake
// (Final, Native, Protected)
// Parameters:
// struct FName                   InBoneName                     (Parm, ZeroConstructor, IsPlainOldData)

void AWatercraft::OnRigidBodyWake(const struct FName& InBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.Watercraft.OnRigidBodyWake");

	struct
	{
		struct FName                   InBoneName;
	} params;

	params.InBoneName = InBoneName;

	UObject::ProcessEvent(fn, &params);
}


// Function Watercrafts.Watercraft.OnRigidBodySleep
// (Final, Native, Protected)
// Parameters:
// struct FName                   InBoneName                     (Parm, ZeroConstructor, IsPlainOldData)

void AWatercraft::OnRigidBodySleep(const struct FName& InBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.Watercraft.OnRigidBodySleep");

	struct
	{
		struct FName                   InBoneName;
	} params;

	params.InBoneName = InBoneName;

	UObject::ProcessEvent(fn, &params);
}


// Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UChildActorComponent*> InAlwaysEnabledInteractables   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ARowboat::SetAlwaysEnabledInteractables(TArray<class UChildActorComponent*> InAlwaysEnabledInteractables)
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.Rowboat.SetAlwaysEnabledInteractables");

	struct
	{
		TArray<class UChildActorComponent*> InAlwaysEnabledInteractables;
	} params;

	params.InAlwaysEnabledInteractables = InAlwaysEnabledInteractables;

	UObject::ProcessEvent(fn, &params);
}


// Function Watercrafts.Rowboat.OnRep_IsSinking
// (Final, Native, Private)

void ARowboat::OnRep_IsSinking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.Rowboat.OnRep_IsSinking");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WatercraftClass                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AWatercraft*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWatercraft* UWatercraftBlueprintFunctionLibrary::SpawnWatercraft(class UObject* WorldContextObject, class UClass* WatercraftClass, const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.WatercraftBlueprintFunctionLibrary.SpawnWatercraft");

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  WatercraftClass;
		struct FVector                 Location;
		struct FRotator                Rotation;
		class AWatercraft*             ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.WatercraftClass = WatercraftClass;
	params.Location = Location;
	params.Rotation = Rotation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Watercrafts.WatercraftBlueprintFunctionLibrary.IsCharacterOnWatercraft
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAthenaCharacter*        AthenaCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWatercraftBlueprintFunctionLibrary::IsCharacterOnWatercraft(class AAthenaCharacter* AthenaCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Watercrafts.WatercraftBlueprintFunctionLibrary.IsCharacterOnWatercraft");

	struct
	{
		class AAthenaCharacter*        AthenaCharacter;
		bool                           ReturnValue;
	} params;

	params.AthenaCharacter = AthenaCharacter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
