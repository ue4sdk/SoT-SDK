#pragma once

// Sea of Thieves (1.4) SDK

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
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc
struct UAIShipDebugFunctionLibrary_GenerateAIShipBattleDesc_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIShipServiceDataAsset*                     ServiceParams;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAIShipEncounterBattleDesc                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties
struct UCursedCrewCustomisationInterface_SetCursedCrewCustomisationProperties_Params
{
	struct FAIShipSailData                             SailData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
