// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Tavern_B_AudioLayer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Tavern_B_AudioLayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.UserConstructionScript");

	ABP_Tavern_B_AudioLayer_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Tavern_B_AudioLayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveBeginPlay");

	ABP_Tavern_B_AudioLayer_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tavern_B_AudioLayer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ReceiveEndPlay");

	ABP_Tavern_B_AudioLayer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ExecuteUbergraph_BP_Tavern_B_AudioLayer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tavern_B_AudioLayer_C::ExecuteUbergraph_BP_Tavern_B_AudioLayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C.ExecuteUbergraph_BP_Tavern_B_AudioLayer");

	ABP_Tavern_B_AudioLayer_C_ExecuteUbergraph_BP_Tavern_B_AudioLayer_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
