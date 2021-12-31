#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Describables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Describables.DescribableComponent.SetTooltipActive
struct UDescribableComponent_SetTooltipActive_Params
{
	bool                                               IsActive;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Describables.DescribableComponent.OnRep_TooltipActive
struct UDescribableComponent_OnRep_TooltipActive_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
