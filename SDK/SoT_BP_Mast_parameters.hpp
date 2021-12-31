#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Mast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Mast.BP_Mast_C.AttemptToAddDamageDecal
struct ABP_Mast_C_AttemptToAddDamageDecal_Params
{
	TEnumAsByte<ERepairableState>                      RepairableState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	UDecalComponent*                                   DecalComponent;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FTransform                                         RelativeTransform;                                        // (ConstParm, Parm, IsPlainOldData)
	UMaterialInterface*                                NewDecalMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mast.BP_Mast_C.IsMastVisuallyFractured
struct ABP_Mast_C_IsMastVisuallyFractured_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Mast.BP_Mast_C.Customise Static Mesh
struct ABP_Mast_C_Customise_Static_Mesh_Params
{
	UStaticMesh*                                       New_Static_Mesh;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Static_Mesh_Component;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mast.BP_Mast_C.Trim Array Func
struct ABP_Mast_C_Trim_Array_Func_Params
{
	TArray<UObject*>                                   TargetArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
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
	TArray<UActorComponent*>                           TargetArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
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
	UMastDescAsset*                                    MastDesc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mast.BP_Mast_C.OnMastMeshSwapRequested
struct ABP_Mast_C_OnMastMeshSwapRequested_Params
{
	UStaticMesh*                                       NewMeshBottom;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	UStaticMesh*                                       NewMeshTop;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature
struct ABP_Mast_C_BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature_Params
{
	TEnumAsByte<ERepairableState>                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERepairableState>                      PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	URepairableComponent*                              RepairableComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature
struct ABP_Mast_C_BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature_Params
{
	TEnumAsByte<ERepairableState>                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERepairableState>                      PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	URepairableComponent*                              RepairableComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature
struct ABP_Mast_C_BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature_Params
{
	TEnumAsByte<ERepairableState>                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERepairableState>                      PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	URepairableComponent*                              RepairableComponent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
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
