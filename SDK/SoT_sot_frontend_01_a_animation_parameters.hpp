#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_animation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.OnReturnToPirateSelection
struct Asot_frontend_01_a_animation_C_OnReturnToPirateSelection_Params
{
};

// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetPirateSelector
struct Asot_frontend_01_a_animation_C_GetPirateSelector_Params
{
	class UPirateSelector*                             PirateSelectorComponent;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GetFrontendCameraComponent
struct Asot_frontend_01_a_animation_C_GetFrontendCameraComponent_Params
{
	class UFrontendCameraComponent*                    Frontend_Camera_Component;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.goToShipSelCam
struct Asot_frontend_01_a_animation_C_goToShipSelCam_Params
{
};

// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ReceiveBeginPlay
struct Asot_frontend_01_a_animation_C_ReceiveBeginPlay_Params
{
};

// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ShipSelect
struct Asot_frontend_01_a_animation_C_ShipSelect_Params
{
};

// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.GenerateShipSelectionPirate
struct Asot_frontend_01_a_animation_C_GenerateShipSelectionPirate_Params
{
};

// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.HideShipSelectionPirate
struct Asot_frontend_01_a_animation_C_HideShipSelectionPirate_Params
{
};

// Function sot_frontend_01_a_animation.sot_frontend_01_a_animation_C.ExecuteUbergraph_sot_frontend_01_a_animation
struct Asot_frontend_01_a_animation_C_ExecuteUbergraph_sot_frontend_01_a_animation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
