// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DecalGlowWithWind_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.ApplyDisturbanceAtCurrentTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DecalGlowWithWind_C::ApplyDisturbanceAtCurrentTime(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.ApplyDisturbanceAtCurrentTime");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.StartGlowEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DecalGlowWithWind_C::StartGlowEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.StartGlowEffect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.StartReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DecalGlowWithWind_C::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.StartReaction");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.StopReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DecalGlowWithWind_C::StopReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.StopReaction");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.CollectDecalMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DecalGlowWithWind_C::CollectDecalMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.CollectDecalMaterials");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DecalGlowWithWind_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_DecalGlowWithWind_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DecalGlowWithWind_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.ExecuteUbergraph_BP_DecalGlowWithWind
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DecalGlowWithWind_C::ExecuteUbergraph_BP_DecalGlowWithWind(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlowWithWind.BP_DecalGlowWithWind_C.ExecuteUbergraph_BP_DecalGlowWithWind");

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
