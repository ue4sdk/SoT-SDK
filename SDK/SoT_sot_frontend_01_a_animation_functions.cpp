// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_animation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.OnReturnToPirateSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_animation_C::OnReturnToPirateSelection()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.OnReturnToPirateSelection"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetPirateSelector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPirateSelector*         PirateSelectorComponent        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_animation_C::GetPirateSelector(class UPirateSelector** PirateSelectorComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetPirateSelector"));

	struct
	{
		class UPirateSelector*         PirateSelectorComponent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PirateSelectorComponent != nullptr)
		*PirateSelectorComponent = params.PirateSelectorComponent;
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetFrontendCameraComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFrontendCameraComponent* Frontend_Camera_Component      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_animation_C::GetFrontendCameraComponent(class UFrontendCameraComponent** Frontend_Camera_Component)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetFrontendCameraComponent"));

	struct
	{
		class UFrontendCameraComponent* Frontend_Camera_Component;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Frontend_Camera_Component != nullptr)
		*Frontend_Camera_Component = params.Frontend_Camera_Component;
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.goToShipSelCam
// (Public, BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_animation_C::goToShipSelCam()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.goToShipSelCam"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Asot_frontend_01_a_animation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ShipSelect
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_animation_C::ShipSelect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ShipSelect"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GenerateShipSelectionPirate
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_animation_C::GenerateShipSelectionPirate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GenerateShipSelectionPirate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.HideShipSelectionPirate
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_animation_C::HideShipSelectionPirate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.HideShipSelectionPirate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ExecuteUbergraph_sot_frontend_01_a_animation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_animation_C::ExecuteUbergraph_sot_frontend_01_a_animation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ExecuteUbergraph_sot_frontend_01_a_animation"));

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
