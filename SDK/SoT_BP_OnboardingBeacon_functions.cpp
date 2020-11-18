// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_OnboardingBeacon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OnboardingBeacon.BP_OnboardingBeacon_C.SetActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OnboardingBeacon_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_OnboardingBeacon.BP_OnboardingBeacon_C.SetActive"));

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_OnboardingBeacon.BP_OnboardingBeacon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OnboardingBeacon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_OnboardingBeacon.BP_OnboardingBeacon_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_OnboardingBeacon.BP_OnboardingBeacon_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_OnboardingBeacon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_OnboardingBeacon.BP_OnboardingBeacon_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_OnboardingBeacon.BP_OnboardingBeacon_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OnboardingBeacon_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_OnboardingBeacon.BP_OnboardingBeacon_C.ReceiveActorBeginOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params;

	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_OnboardingBeacon.BP_OnboardingBeacon_C.SetActiveState
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OnboardingBeacon_C::SetActiveState(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_OnboardingBeacon.BP_OnboardingBeacon_C.SetActiveState"));

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_OnboardingBeacon.BP_OnboardingBeacon_C.ExecuteUbergraph_BP_OnboardingBeacon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OnboardingBeacon_C::ExecuteUbergraph_BP_OnboardingBeacon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_OnboardingBeacon.BP_OnboardingBeacon_C.ExecuteUbergraph_BP_OnboardingBeacon"));

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
