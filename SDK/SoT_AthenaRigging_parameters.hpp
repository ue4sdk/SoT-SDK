#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaRigging_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaRigging.InstancedRopeComponent.SetUnderwater
struct UInstancedRopeComponent_SetUnderwater_Params
{
	bool                                               Underwater;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaRigging.InstancedRopeComponent.SetRopes
struct UInstancedRopeComponent_SetRopes_Params
{
	TArray<struct FInstancedRopeParams>                InRopes;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource
struct URiggingSystemComponent_SetSocketLookupSource_Params
{
	class AActor*                                      InSocketSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex
struct URiggingSystemComponent_ConvertLineToRopeIndex_Params
{
	struct FName                                       InLineGroupName;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InLineOffset;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaRigging.RopeInterface.SetRopeUVOffset
struct URopeInterface_SetRopeUVOffset_Params
{
	float                                              InUVOffset;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaRigging.RopeInterface.SetRopeEndpoints
struct URopeInterface_SetRopeEndpoints_Params
{
	struct FVector                                     InWorldSpaceStart;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InWorldSpaceEnd;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
