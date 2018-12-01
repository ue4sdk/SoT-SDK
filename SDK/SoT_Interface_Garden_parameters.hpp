#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Interface_Garden_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interface_Garden.Interface_Garden_C.Set Garden Parameters
struct UInterface_Garden_C_Set_Garden_Parameters_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Int;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Instances_Created;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
