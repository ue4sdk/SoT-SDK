// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Wayfinder_MultiTargetCompass_Wieldable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.CalculateDesiredYaw
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FRotator                CompassRotation                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_Wayfinder_MultiTargetCompass_Wieldable_C::CalculateDesiredYaw(const struct FRotator& CompassRotation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.CalculateDesiredYaw"));

	struct
	{
		struct FRotator                CompassRotation;
		float                          ReturnValue;
	} params;

	params.CompassRotation = CompassRotation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.RemoveTargetImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wayfinder_MultiTargetCompass_Wieldable_C::RemoveTargetImpl(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.RemoveTargetImpl"));

	struct
	{
		class AActor*                  Target;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.AddTargetImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wayfinder_MultiTargetCompass_Wieldable_C::AddTargetImpl(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.AddTargetImpl"));

	struct
	{
		class AActor*                  NewTarget;
	} params;

	params.NewTarget = NewTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.GetTargetLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WielderLocation                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wayfinder_MultiTargetCompass_Wieldable_C::GetTargetLocation(const struct FVector& WielderLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.GetTargetLocation"));

	struct
	{
		struct FVector                 WielderLocation;
	} params;

	params.WielderLocation = WielderLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Wayfinder_MultiTargetCompass_Wieldable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wayfinder_MultiTargetCompass_Wieldable_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Wayfinder_MultiTargetCompass_Wieldable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.ExecuteUbergraph_BP_Wayfinder_MultiTargetCompass_Wieldable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wayfinder_MultiTargetCompass_Wieldable_C::ExecuteUbergraph_BP_Wayfinder_MultiTargetCompass_Wieldable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wayfinder_MultiTargetCompass_Wieldable.BP_Wayfinder_MultiTargetCompass_Wieldable_C.ExecuteUbergraph_BP_Wayfinder_MultiTargetCompass_Wieldable"));

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
