// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaterVolume_Optimized_parameters.hpp"

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

	ABP_WaterVolume_Optimized_C_CollectRippleGenerators_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WaterVolume_Optimized_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.UserConstructionScript"));

	ABP_WaterVolume_Optimized_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_WaterVolume_Optimized_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveBeginPlay"));

	ABP_WaterVolume_Optimized_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaterVolume_Optimized_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveActorBeginOverlap"));

	ABP_WaterVolume_Optimized_C_ReceiveActorBeginOverlap_Params params;
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

	ABP_WaterVolume_Optimized_C_ReceiveActorEndOverlap_Params params;
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

	ABP_WaterVolume_Optimized_C_ExecuteUbergraph_BP_WaterVolume_Optimized_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
