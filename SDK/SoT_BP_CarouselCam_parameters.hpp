#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CarouselCam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CarouselCam.BP_CarouselCam_C.resetLockIconVis
struct ABP_CarouselCam_C_resetLockIconVis_Params
{
};

// Function BP_CarouselCam.BP_CarouselCam_C.fadeLockIcon
struct ABP_CarouselCam_C_fadeLockIcon_Params
{
	int                                                CharID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IconFadeDone;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.toggleLockIcon
struct ABP_CarouselCam_C_toggleLockIcon_Params
{
	int                                                CharID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.resetCamLoc
struct ABP_CarouselCam_C_resetCamLoc_Params
{
};

// Function BP_CarouselCam.BP_CarouselCam_C.initLights
struct ABP_CarouselCam_C_initLights_Params
{
};

// Function BP_CarouselCam.BP_CarouselCam_C.camAnimViaCurves
struct ABP_CarouselCam_C_camAnimViaCurves_Params
{
	class UCameraComponent*                            Camera;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FOV;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reverse;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               done;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     cameraLoc;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.setLightSector
struct ABP_CarouselCam_C_setLightSector_Params
{
	int                                                sectorID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.lightSwitch
struct ABP_CarouselCam_C_lightSwitch_Params
{
	bool                                               onLights;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               offLights;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timespan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ULightComponent*>                     LightSet;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      LightSetIntensity;                                        // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CarouselCam.BP_CarouselCam_C.getSectorID
struct ABP_CarouselCam_C_getSectorID_Params
{
	int                                                sectorID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Remainder;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.getCamIdleTime
struct ABP_CarouselCam_C_getCamIdleTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              IdleTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              MaxIdleTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               idleStatus;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.getCamRotDelta
struct ABP_CarouselCam_C_getCamRotDelta_Params
{
	float                                              rotDelta;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.zeroTest
struct ABP_CarouselCam_C_zeroTest_Params
{
	float                                              Float;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.zoomCam
struct ABP_CarouselCam_C_zoomCam_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               zoomInTrigger;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               zoomOutTrigger;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               selectedZoomTrigger;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               zoomInDone;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               zoomOutDone;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.getCamLoc
struct ABP_CarouselCam_C_getCamLoc_Params
{
	class USceneComponent*                             CameraRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CamLoc;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.matchRotPerChar
struct ABP_CarouselCam_C_matchRotPerChar_Params
{
	bool                                               rotMatch;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.set_timeSpan
struct ABP_CarouselCam_C_set_timeSpan_Params
{
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timespan;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.matchTimespan
struct ABP_CarouselCam_C_matchTimespan_Params
{
	bool                                               timesup;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.set_camAimRot
struct ABP_CarouselCam_C_set_camAimRot_Params
{
	float                                              YawValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timespan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Continuous;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ResultYawValue;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               rotSnapDone;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.get_camAimRot
struct ABP_CarouselCam_C_get_camAimRot_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.set_maxTimespan
struct ABP_CarouselCam_C_set_maxTimespan_Params
{
	float                                              cameraMoveTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.Reset
struct ABP_CarouselCam_C_Reset_Params
{
	bool                                               lockIconVis;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Continuous;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Stop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              initTime;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.moveCam
struct ABP_CarouselCam_C_moveCam_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               rotTrigger;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              rotFactor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Continuous;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               rotSnap;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Mouse;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sectorID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               atDefaultZoom;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               rotSnapDone;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    sectorRotator;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.UserConstructionScript
struct ABP_CarouselCam_C_UserConstructionScript_Params
{
};

// Function BP_CarouselCam.BP_CarouselCam_C.ReceiveBeginPlay
struct ABP_CarouselCam_C_ReceiveBeginPlay_Params
{
};

// Function BP_CarouselCam.BP_CarouselCam_C.ReceiveTick
struct ABP_CarouselCam_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CarouselCam.BP_CarouselCam_C.ExecuteUbergraph_BP_CarouselCam
struct ABP_CarouselCam_C_ExecuteUbergraph_BP_CarouselCam_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
