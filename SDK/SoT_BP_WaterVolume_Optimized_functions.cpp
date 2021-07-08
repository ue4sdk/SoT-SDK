// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaterVolume_Optimized_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.CollectRippleGenerators
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WaterVolume_Optimized_C::CollectRippleGenerators()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.CollectRippleGenerators"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WaterVolume_Optimized_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_WaterVolume_Optimized_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaterVolume_Optimized_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveActorBeginOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params;

	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaterVolume_Optimized_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveActorEndOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params;

	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ExecuteUbergraph_BP_WaterVolume_Optimized
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaterVolume_Optimized_C::ExecuteUbergraph_BP_WaterVolume_Optimized(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ExecuteUbergraph_BP_WaterVolume_Optimized"));

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
