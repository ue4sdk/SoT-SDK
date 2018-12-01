// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Goldhoarder_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Goldhoarder.BP_Goldhoarder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Goldhoarder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Goldhoarder.BP_Goldhoarder_C.UserConstructionScript");

	ABP_Goldhoarder_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Goldhoarder.BP_Goldhoarder_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Goldhoarder_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Goldhoarder.BP_Goldhoarder_C.ReceiveBeginPlay");

	ABP_Goldhoarder_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Goldhoarder.BP_Goldhoarder_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Goldhoarder_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Goldhoarder.BP_Goldhoarder_C.ReceiveTick");

	ABP_Goldhoarder_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Goldhoarder.BP_Goldhoarder_C.ExecuteUbergraph_BP_Goldhoarder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Goldhoarder_C::ExecuteUbergraph_BP_Goldhoarder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Goldhoarder.BP_Goldhoarder_C.ExecuteUbergraph_BP_Goldhoarder");

	ABP_Goldhoarder_C_ExecuteUbergraph_BP_Goldhoarder_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
