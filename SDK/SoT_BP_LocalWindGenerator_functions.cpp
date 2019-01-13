// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LocalWindGenerator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.StopReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LocalWindGenerator_C::StopReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.StopReaction");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ApplyDisturbanceAtCurrentTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTme                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocalWindGenerator_C::ApplyDisturbanceAtCurrentTime(float DeltaTme)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ApplyDisturbanceAtCurrentTime");

	struct
	{
		float                          DeltaTme;
	} params;

	params.DeltaTme = DeltaTme;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.StartReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_LocalWindGenerator_C::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.StartReaction");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LocalWindGenerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocalWindGenerator_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ExecuteUbergraph_BP_LocalWindGenerator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LocalWindGenerator_C::ExecuteUbergraph_BP_LocalWindGenerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LocalWindGenerator.BP_LocalWindGenerator_C.ExecuteUbergraph_BP_LocalWindGenerator");

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
