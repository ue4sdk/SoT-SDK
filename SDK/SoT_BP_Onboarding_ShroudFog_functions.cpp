// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Onboarding_ShroudFog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.OnRep_ShroudPartingTriggered
// (BlueprintCallable, BlueprintEvent)

void ABP_Onboarding_ShroudFog_C::OnRep_ShroudPartingTriggered()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.OnRep_ShroudPartingTriggered"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Onboarding_ShroudFog_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.ShroudAnimation__FinishedFunc
// (BlueprintEvent)

void ABP_Onboarding_ShroudFog_C::ShroudAnimation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.ShroudAnimation__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.ShroudAnimation__UpdateFunc
// (BlueprintEvent)

void ABP_Onboarding_ShroudFog_C::ShroudAnimation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.ShroudAnimation__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Onboarding_ShroudFog_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Onboarding_ShroudFog_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.OpenShroud
// (BlueprintCallable, BlueprintEvent)

void ABP_Onboarding_ShroudFog_C::OpenShroud()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.OpenShroud"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.StartShroudParting
// (BlueprintCallable, BlueprintEvent)

void ABP_Onboarding_ShroudFog_C::StartShroudParting()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.StartShroudParting"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.ExecuteUbergraph_BP_Onboarding_ShroudFog
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Onboarding_ShroudFog_C::ExecuteUbergraph_BP_Onboarding_ShroudFog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C.ExecuteUbergraph_BP_Onboarding_ShroudFog"));

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
