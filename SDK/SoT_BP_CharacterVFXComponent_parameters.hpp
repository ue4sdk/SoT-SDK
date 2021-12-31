#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CharacterVFXComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.GetWindService
struct UBP_CharacterVFXComponent_C_GetWindService_Params
{
	UObject*                                           WindInterface;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_DebugTick
struct UBP_CharacterVFXComponent_C_WindVFX_DebugTick_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Destroy
struct UBP_CharacterVFXComponent_C_WindVFX_Destroy_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Create
struct UBP_CharacterVFXComponent_C_WindVFX_Create_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Deactivate
struct UBP_CharacterVFXComponent_C_WindVFX_Deactivate_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play View Under Water FX
struct UBP_CharacterVFXComponent_C_Play_View_Under_Water_FX_Params
{
	FEventPlayerViewUnderWaterStateChanged             Event;                                                    // (Parm)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Falling Splash
struct UBP_CharacterVFXComponent_C_Play_Falling_Splash_Params
{
	float                                              FallingSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Foot Splash
struct UBP_CharacterVFXComponent_C_Play_Foot_Splash_Params
{
	FVector                                            Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveEndPlay
struct UBP_CharacterVFXComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveBeginPlay
struct UBP_CharacterVFXComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.PlayerViewUnderWaterEvent
struct UBP_CharacterVFXComponent_C_PlayerViewUnderWaterEvent_Params
{
	FEventPlayerViewUnderWaterStateChanged             Event;                                                    // (Parm)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.FallingIntoWaterEvent
struct UBP_CharacterVFXComponent_C_FallingIntoWaterEvent_Params
{
	FAthena_FFallingIntoWaterEvent                     Event;                                                    // (Parm)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WaterStateChanged
struct UBP_CharacterVFXComponent_C_WaterStateChanged_Params
{
	FEventPlayerViewUnderWaterStateChanged             Under_water_state_changed;                                // (Parm)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.On Foot Enter Water
struct UBP_CharacterVFXComponent_C_On_Foot_Enter_Water_Params
{
	FEventCharacterFootEnterWater                      Enter_Water;                                              // (Parm)
};

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ExecuteUbergraph_BP_CharacterVFXComponent
struct UBP_CharacterVFXComponent_C_ExecuteUbergraph_BP_CharacterVFXComponent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
