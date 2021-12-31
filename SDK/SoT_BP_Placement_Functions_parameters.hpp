#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Placement_Functions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Placement_Functions.BP_Placement_Functions_C.GenerateRadialXYPositionsAroundPoint
struct UBP_Placement_Functions_C_GenerateRadialXYPositionsAroundPoint_Params
{
	FVector                                            Centre;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FVector>                                    Positions;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get First Valid Hit
struct UBP_Placement_Functions_C_Get_First_Valid_Hit_Params
{
	TArray<FHitResult>                                 Hits;                                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Valid_Hit;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FHitResult                                         Hit;                                                      // (Parm, OutParm)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Rotated Box Raycast
struct UBP_Placement_Functions_C_Generate_Random_Rotated_Box_Raycast_Params
{
	FRandomStream                                      Random;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	FVector                                            Centre;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FRotator                                           Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Raycast_Start;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector                                            Raycast_End;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Detonate Charge
struct UBP_Placement_Functions_C_Detonate_Charge_Params
{
	AActor*                                            Spawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius_Overlap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FLinearColor>                               Blast_Radii;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FLinearColor>                               Blast_Radii_Out;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Does A Delete B
struct UBP_Placement_Functions_C_Does_A_Delete_B_Params
{
	FString                                            A_String;                                                 // (Parm, ZeroConstructor)
	FString                                            B_String;                                                 // (Parm, ZeroConstructor)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Actor Placement Asset Type
struct UBP_Placement_Functions_C_Get_Actor_Placement_Asset_Type_Params
{
	AActor*                                            Input_Actor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Returning_Tag;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FString                                            Asset_Tag;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Actor Overlap
struct UBP_Placement_Functions_C_Check_Actor_Overlap_Params
{
	AActor*                                            Input_Actor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Delete_Actor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<AActor*>                                    Overlaps_to_Delete;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Mesh Instance Transform
struct UBP_Placement_Functions_C_Get_Mesh_Instance_Transform_Params
{
	FPlacementGardenSeed                               Selected_Mesh;                                            // (Parm)
	FRandomStream                                      Random;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	FVector                                            Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	FTransform                                         Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Mesh Probabilities
struct UBP_Placement_Functions_C_Normalise_Mesh_Probabilities_Params
{
	TArray<FPlacementGardenSeed>                       Charges;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Charge_Probabilities;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Mesh
struct UBP_Placement_Functions_C_Set_Mesh_Params
{
	TArray<FPlacementGardenSeed>                       Meshes;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Mesh_Probabilities;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Generator_Radius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Spawn_Clustering;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Spawn_Radius_Multiplier;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<UObject*>                                   Physical_Materials;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<FLinearColor>                               Mesh_Radii;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	FRandomStream                                      Random;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Spawn_Permission;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FTransform                                         Transform;                                                // (Parm, OutParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Mesh_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FPlacementGardenSeed                               Mesh;                                                     // (Parm, OutParm)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Charge
struct UBP_Placement_Functions_C_Set_Charge_Params
{
	TArray<FPlacementBombCharge>                       Charges;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Charge_Probabilities;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Generator_Radius;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Spawn_Clustering;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Box_Distribution;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<UObject*>                                   Physical_Materials;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<FLinearColor>                               Blast_Radii;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	FRandomStream                                      Random;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Spawn_Permission;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector                                            Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FPlacementBombCharge                               Charge;                                                   // (Parm, OutParm)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Surface Materials
struct UBP_Placement_Functions_C_Check_Surface_Materials_Params
{
	TArray<UObject*>                                   Physical_Materials;                                       // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	UObject*                                           Placement_Material;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Placement_Permission;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Slope
struct UBP_Placement_Functions_C_Check_Slope_Params
{
	FVector                                            Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FVector2D                                          Slope_Range;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Placement_Permission;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Height
struct UBP_Placement_Functions_C_Check_Height_Params
{
	FVector                                            Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	FVector2D                                          Height_Range;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Placement_Permission;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Radius Overlap
struct UBP_Placement_Functions_C_Check_Radius_Overlap_Params
{
	FVector                                            Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius_Overlap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FLinearColor>                               Blast_Radii;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Placement_Permission;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Spawn Properties
struct UBP_Placement_Functions_C_Set_Spawn_Properties_Params
{
	UObject*                                           Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Cast_Success;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Box Raycast
struct UBP_Placement_Functions_C_Generate_Random_Box_Raycast_Params
{
	FRandomStream                                      Random;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	FVector                                            Centre;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Raycast_Start;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector                                            Raycast_End;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Box Sample Count
struct UBP_Placement_Functions_C_Get_Box_Sample_Count_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Seed_Density;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Sample_Count;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Radial Raycast
struct UBP_Placement_Functions_C_Generate_Random_Radial_Raycast_Params
{
	FRandomStream                                      Random;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Centre;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Spawn_Clustering;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Spawn_Radius_Multiplier;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	FTransform                                         Actor_Transform;                                          // (Parm, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            Raycast_Start;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FVector                                            Raycast_End;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Calculate Index from Probabilities
struct UBP_Placement_Functions_C_Calculate_Index_from_Probabilities_Params
{
	float                                              Random_Float;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Charge_Probabilities;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Radial Sample Count
struct UBP_Placement_Functions_C_Get_Radial_Sample_Count_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Spawn_Sample_Density;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Sample_Count;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Charge Probabilities
struct UBP_Placement_Functions_C_Normalise_Charge_Probabilities_Params
{
	TArray<FPlacementBombCharge>                       Charges;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      Charge_Probabilities;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	UObject*                                           __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
