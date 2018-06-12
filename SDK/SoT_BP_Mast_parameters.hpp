#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Mast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Mast.BP_Mast_C.Customise Static Mesh
struct ABP_Mast_C_Customise_Static_Mesh_Params
{
	class UStaticMesh*                                 New_Static_Mesh;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Static_Mesh_Component;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mast.BP_Mast_C.Trim Array Func
struct ABP_Mast_C_Trim_Array_Func_Params
{
	TArray<class UObject*>                             TargetArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mast.BP_Mast_C.Initialise Sail Parameters
struct ABP_Mast_C_Initialise_Sail_Parameters_Params
{
};

// Function BP_Mast.BP_Mast_C.Populate Lists of Yards and Sails
struct ABP_Mast_C_Populate_Lists_of_Yards_and_Sails_Params
{
};

// Function BP_Mast.BP_Mast_C.Cull Excess Components
struct ABP_Mast_C_Cull_Excess_Components_Params
{
	TArray<class UActorComponent*>                     TargetArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Mast.BP_Mast_C.Initialise Sails
struct ABP_Mast_C_Initialise_Sails_Params
{
};

// Function BP_Mast.BP_Mast_C.UserConstructionScript
struct ABP_Mast_C_UserConstructionScript_Params
{
};

// Function BP_Mast.BP_Mast_C.OnMastDescLoaded
struct ABP_Mast_C_OnMastDescLoaded_Params
{
	class UMastDescAsset**                             MastDesc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mast.BP_Mast_C.ExecuteUbergraph_BP_Mast
struct ABP_Mast_C_ExecuteUbergraph_BP_Mast_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
