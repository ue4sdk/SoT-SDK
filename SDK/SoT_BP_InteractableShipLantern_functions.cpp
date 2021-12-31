// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_InteractableShipLantern_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_InteractableShipLantern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.UserConstructionScript"));

	ABP_InteractableShipLantern_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_InteractableShipLantern_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ReceiveBeginPlay"));

	ABP_InteractableShipLantern_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.LightStateChanged
// (Event, Public, BlueprintEvent)

void ABP_InteractableShipLantern_C::LightStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.LightStateChanged"));

	ABP_InteractableShipLantern_C_LightStateChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ExecuteUbergraph_BP_InteractableShipLantern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_InteractableShipLantern_C::ExecuteUbergraph_BP_InteractableShipLantern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_InteractableShipLantern.BP_InteractableShipLantern_C.ExecuteUbergraph_BP_InteractableShipLantern"));

	ABP_InteractableShipLantern_C_ExecuteUbergraph_BP_InteractableShipLantern_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
