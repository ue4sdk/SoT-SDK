#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Repair.ERepairableState
enum class ERepairableState : uint8_t
{
	ERepairableState__NeverDamaged = 0,
	ERepairableState__Repairable   = 1,
	ERepairableState__Repairing    = 2,
	ERepairableState__Repaired     = 3,
	ERepairableState__UndoingRepair = 4,
	ERepairableState__ERepairableState_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
