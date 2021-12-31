#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_RepairShip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.UnregisterDamageEventFromCurrentShip
struct UBP_Prompt_RepairShip_C_UnregisterDamageEventFromCurrentShip_Params
{
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.RegisterDamageEventWithCurrentShip
struct UBP_Prompt_RepairShip_C_RegisterDamageEventWithCurrentShip_Params
{
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.Evaluate
struct UBP_Prompt_RepairShip_C_Evaluate_Params
{
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.RegisterCharacterEvents_Implementable
struct UBP_Prompt_RepairShip_C_RegisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.OnCurrentShipChanged
struct UBP_Prompt_RepairShip_C_OnCurrentShipChanged_Params
{
	FEventCurrentShipChanged                           Event;                                                    // (Parm)
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.OnShipDamaged
struct UBP_Prompt_RepairShip_C_OnShipDamaged_Params
{
	FDamageZoneDamageLevelChanged                      Event;                                                    // (Parm)
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.UnregisterCharacterEvents_Implementable
struct UBP_Prompt_RepairShip_C_UnregisterCharacterEvents_Implementable_Params
{
	FObjectMessagingDispatcherHandle                   CharacterDispatcher;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BP_Prompt_RepairShip.BP_Prompt_RepairShip_C.ExecuteUbergraph_BP_Prompt_RepairShip
struct UBP_Prompt_RepairShip_C_ExecuteUbergraph_BP_Prompt_RepairShip_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
