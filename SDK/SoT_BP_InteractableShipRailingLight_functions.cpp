// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_InteractableShipRailingLight_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_InteractableShipRailingLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.UserConstructionScript");

	ABP_InteractableShipRailingLight_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.LightStateChanged
// (Event, Public, BlueprintEvent)

void ABP_InteractableShipRailingLight_C::LightStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.LightStateChanged");

	ABP_InteractableShipRailingLight_C_LightStateChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_InteractableShipRailingLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.ReceiveBeginPlay");

	ABP_InteractableShipRailingLight_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.FlameStateChanged
// (Event, Public, BlueprintEvent)

void ABP_InteractableShipRailingLight_C::FlameStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.FlameStateChanged");

	ABP_InteractableShipRailingLight_C_FlameStateChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.ExecuteUbergraph_BP_InteractableShipRailingLight
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InteractableShipRailingLight_C::ExecuteUbergraph_BP_InteractableShipRailingLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InteractableShipRailingLight.BP_InteractableShipRailingLight_C.ExecuteUbergraph_BP_InteractableShipRailingLight");

	ABP_InteractableShipRailingLight_C_ExecuteUbergraph_BP_InteractableShipRailingLight_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
