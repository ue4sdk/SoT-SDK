#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CliffGenerator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CliffGenerator.BP_CliffGenerator_C.Draw_Debug_Numbers
struct ABP_CliffGenerator_C_Draw_Debug_Numbers_Params
{
	int                                                CurrentIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CliffGenerator.BP_CliffGenerator_C.Deform_Terrain
struct ABP_CliffGenerator_C_Deform_Terrain_Params
{
};

// Function BP_CliffGenerator.BP_CliffGenerator_C.Build_Element
struct ABP_CliffGenerator_C_Build_Element_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ElementMesh;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CliffGenerator.BP_CliffGenerator_C.UserConstructionScript
struct ABP_CliffGenerator_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
