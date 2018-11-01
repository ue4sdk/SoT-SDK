// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwrightShady_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShipwrightShady.BP_ShipwrightShady_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipwrightShady_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipwrightShady.BP_ShipwrightShady_C.UserConstructionScript");

	ABP_ShipwrightShady_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ShipwrightShady.BP_ShipwrightShady_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ShipwrightShady_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipwrightShady.BP_ShipwrightShady_C.ReceiveBeginPlay");

	ABP_ShipwrightShady_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ShipwrightShady.BP_ShipwrightShady_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipwrightShady_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipwrightShady.BP_ShipwrightShady_C.ReceiveEndPlay");

	ABP_ShipwrightShady_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ShipwrightShady.BP_ShipwrightShady_C.ExecuteUbergraph_BP_ShipwrightShady
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ShipwrightShady_C::ExecuteUbergraph_BP_ShipwrightShady(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipwrightShady.BP_ShipwrightShady_C.ExecuteUbergraph_BP_ShipwrightShady");

	ABP_ShipwrightShady_C_ExecuteUbergraph_BP_ShipwrightShady_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
