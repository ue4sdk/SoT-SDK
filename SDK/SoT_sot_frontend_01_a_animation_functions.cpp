// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_animation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.OnReturnToPirateSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_animation_C::OnReturnToPirateSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.OnReturnToPirateSelection");

	Asot_frontend_01_a_animation_C_OnReturnToPirateSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetPirateSelector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPirateSelector*         PirateSelectorComponent        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_animation_C::GetPirateSelector(class UPirateSelector** PirateSelectorComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetPirateSelector");

	Asot_frontend_01_a_animation_C_GetPirateSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PirateSelectorComponent != nullptr)
		*PirateSelectorComponent = params.PirateSelectorComponent;
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetFrontendCameraComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFrontendCameraComponent* Frontend_Camera_Component      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_animation_C::GetFrontendCameraComponent(class UFrontendCameraComponent** Frontend_Camera_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetFrontendCameraComponent");

	Asot_frontend_01_a_animation_C_GetFrontendCameraComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Frontend_Camera_Component != nullptr)
		*Frontend_Camera_Component = params.Frontend_Camera_Component;
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.goToShipSelCam
// (Public, BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_animation_C::goToShipSelCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.goToShipSelCam");

	Asot_frontend_01_a_animation_C_goToShipSelCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Asot_frontend_01_a_animation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ReceiveBeginPlay");

	Asot_frontend_01_a_animation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ShipSelect
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_animation_C::ShipSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ShipSelect");

	Asot_frontend_01_a_animation_C_ShipSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GenerateShipSelectionPirate
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_animation_C::GenerateShipSelectionPirate()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GenerateShipSelectionPirate");

	Asot_frontend_01_a_animation_C_GenerateShipSelectionPirate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.HideShipSelectionPirate
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_animation_C::HideShipSelectionPirate()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.HideShipSelectionPirate");

	Asot_frontend_01_a_animation_C_HideShipSelectionPirate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ExecuteUbergraph_sot_frontend_01_a_animation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_animation_C::ExecuteUbergraph_sot_frontend_01_a_animation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ExecuteUbergraph_sot_frontend_01_a_animation");

	Asot_frontend_01_a_animation_C_ExecuteUbergraph_sot_frontend_01_a_animation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
