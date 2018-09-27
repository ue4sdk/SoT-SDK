// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Audio_Play_Wwise_Event_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Audio_Play_Wwise_Event_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.UserConstructionScript");

	ABP_Audio_Play_Wwise_Event_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Audio_Play_Wwise_Event_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.ReceiveBeginPlay");

	ABP_Audio_Play_Wwise_Event_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.ExecuteUbergraph_BP_Audio_Play_Wwise_Event
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Audio_Play_Wwise_Event_C::ExecuteUbergraph_BP_Audio_Play_Wwise_Event(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C.ExecuteUbergraph_BP_Audio_Play_Wwise_Event");

	ABP_Audio_Play_Wwise_Event_C_ExecuteUbergraph_BP_Audio_Play_Wwise_Event_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
