#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Entry.Entry_C.ReceiveBeginPlay
struct AEntry_C_ReceiveBeginPlay_Params
{
};

// Function Entry.Entry_C.ExecuteUbergraph_Entry
struct AEntry_C_ExecuteUbergraph_Entry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
