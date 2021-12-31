#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIShips_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew
struct UAIShipDebugFunctionLibrary_RequestAIShipForCrew_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FGuid                                              CrewId;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc
struct UAIShipDebugFunctionLibrary_GenerateAIShipBattleDesc_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UAIShipServiceDataAsset*                           ServiceParams;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	FAIShipEncounterBattleDesc                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AIShips.AthenaAIShipController.ApplyControllerParams
struct AAthenaAIShipController_ApplyControllerParams_Params
{
	UAthenaAIControllerParamsDataAsset*                ParamsAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	APawn*                                             InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties
struct UCursedCrewCustomisationInterface_SetCursedCrewCustomisationProperties_Params
{
	FAIShipSailData                                    SailData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
