// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TaleDistanceTrackerProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TrackedTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetOrigin                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          TriggerDistance                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TaleDistanceTrackerProxy_C::Initialise(class AActor* TrackedTarget, const struct FVector& TargetOrigin, float TriggerDistance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C.Initialise"));

	struct
	{
		class AActor*                  TrackedTarget;
		struct FVector                 TargetOrigin;
		float                          TriggerDistance;
	} params;

	params.TrackedTarget = TrackedTarget;
	params.TargetOrigin = TargetOrigin;
	params.TriggerDistance = TriggerDistance;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C.GetDistance
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorA                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorB                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceMagnitude              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TaleDistanceTrackerProxy_C::GetDistance(class AActor* ActorA, const struct FVector& ActorB, float* DistanceMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C.GetDistance"));

	struct
	{
		class AActor*                  ActorA;
		struct FVector                 ActorB;
		float                          DistanceMagnitude;
	} params;

	params.ActorA = ActorA;
	params.ActorB = ActorB;

	UObject::ProcessEvent(fn, &params);

	if (DistanceMagnitude != nullptr)
		*DistanceMagnitude = params.DistanceMagnitude;
}


// Function BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TaleDistanceTrackerProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TaleDistanceTrackerProxy_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C.ExecuteUbergraph_BP_TaleDistanceTrackerProxy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TaleDistanceTrackerProxy_C::ExecuteUbergraph_BP_TaleDistanceTrackerProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C.ExecuteUbergraph_BP_TaleDistanceTrackerProxy"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C.OnDistanceTravelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TaleDistanceTrackerProxy_C::OnDistanceTravelled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TaleDistanceTrackerProxy.BP_TaleDistanceTrackerProxy_C.OnDistanceTravelled__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
