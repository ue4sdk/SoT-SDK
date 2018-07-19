#pragma once

// Sea of Thieves (1.1.6) SDK

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

// Function AIShips.AIShipEncounterTriggerSphere.OnExitZone
struct AAIShipEncounterTriggerSphere_OnExitZone_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AIShips.AIShipEncounterTriggerSphere.OnEnterZone
struct AAIShipEncounterTriggerSphere_OnEnterZone_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
