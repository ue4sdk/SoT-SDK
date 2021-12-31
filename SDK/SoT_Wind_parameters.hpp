#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Wind_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Wind.WindZoneInterface.GetWindZoneParams
struct UWindZoneInterface_GetWindZoneParams_Params
{
	FWindZoneParams                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Wind.WindZoneInterface.GetWindZoneLocation
struct UWindZoneInterface_GetWindZoneLocation_Params
{
	FVector2D                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wind.WindZoneInterface.GetTurbulence
struct UWindZoneInterface_GetTurbulence_Params
{
	FVector                                            Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FWindZoneTurbulence                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Wind.WindInterface.UnregisterWindZone
struct UWindInterface_UnregisterWindZone_Params
{
	TScriptInterface<class UWindZoneInterface>         InWindZone;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wind.WindInterface.TriggerChange
struct UWindInterface_TriggerChange_Params
{
	bool                                               ChangeInstantly;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wind.WindInterface.SetParams
struct UWindInterface_SetParams_Params
{
	FWindServiceParams                                 Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Wind.WindInterface.SetGlobalWindVector
struct UWindInterface_SetGlobalWindVector_Params
{
	FVector                                            InWindVector;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Wind.WindInterface.SetGlobalWindMagnitude
struct UWindInterface_SetGlobalWindMagnitude_Params
{
	float                                              InWindMagnitude;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wind.WindInterface.SetGlobalWindDirection
struct UWindInterface_SetGlobalWindDirection_Params
{
	FVector                                            InWindDirection;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Wind.WindInterface.SetGlobalWindAngle
struct UWindInterface_SetGlobalWindAngle_Params
{
	float                                              InAngle;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wind.WindInterface.SetCustomMode
struct UWindInterface_SetCustomMode_Params
{
	bool                                               InCustomMode;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wind.WindInterface.RegisterWindZone
struct UWindInterface_RegisterWindZone_Params
{
	TScriptInterface<class UWindZoneInterface>         InWindZone;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wind.WindInterface.GetWindZoneAtLocation
struct UWindInterface_GetWindZoneAtLocation_Params
{
	FVector                                            SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TScriptInterface<class UWindZoneInterface>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wind.WindInterface.GetWindVector
struct UWindInterface_GetWindVector_Params
{
	FVector                                            SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wind.WindInterface.GetWindMagnitude
struct UWindInterface_GetWindMagnitude_Params
{
	FVector                                            SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wind.WindInterface.GetWindDirection
struct UWindInterface_GetWindDirection_Params
{
	FVector                                            SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wind.WindInterface.GetWindAngle
struct UWindInterface_GetWindAngle_Params
{
	FVector                                            SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wind.WindInterface.GetTurbulenceForTrees
struct UWindInterface_GetTurbulenceForTrees_Params
{
	FVector                                            SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FWindZoneTurbulence                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Wind.WindInterface.GetTurbulence
struct UWindInterface_GetTurbulence_Params
{
	FVector                                            SamplePosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FWindZoneTurbulence                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Wind.WindInterface.GetMaxWindMagnitude
struct UWindInterface_GetMaxWindMagnitude_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wind.WindFunctions.SetDefaultWindBlowingNorth
struct UWindFunctions_SetDefaultWindBlowingNorth_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wind.WindFunctions.GetWindAtLocation
struct UWindFunctions_GetWindAtLocation_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            WorldPosition;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wind.WindService.OnRep_WindMagnitude
struct AWindService_OnRep_WindMagnitude_Params
{
};

// Function Wind.WindService.OnRep_WindAngle
struct AWindService_OnRep_WindAngle_Params
{
};

// Function Wind.WindService.GetWindParams
struct AWindService_GetWindParams_Params
{
	FWindServiceParams                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual
struct UWindServiceParamsFunctionLibrary_AreWindServiceParamsEqual_Params
{
	FWindServiceParams                                 Params1;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	FWindServiceParams                                 Params2;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
