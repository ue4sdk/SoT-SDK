#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Placement_Functions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Placement_Functions.BP_Placement_Functions_C
// 0x0000 (0x0028 - 0x0028)
class UBP_Placement_Functions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Placement_Functions.BP_Placement_Functions_C"));
		return ptr;
	}


	static void GenerateRadialXYPositionsAroundPoint(const FVector& Centre, float Radius, int Segments, UObject* __WorldContext, TArray<FVector>* Positions);
	static void Get_First_Valid_Hit(UObject* __WorldContext, TArray<FHitResult>* Hits, bool* Is_Valid_Hit, FHitResult* Hit);
	static void Generate_Random_Rotated_Box_Raycast(const FVector& Centre, const FVector& Extent, const FRotator& Rotation, UObject* __WorldContext, FRandomStream* Random, FVector* Raycast_Start, FVector* Raycast_End);
	static void Detonate_Charge(AActor* Spawn, const FVector& Position, float Radius, float Radius_Overlap, int Seed, UObject* __WorldContext, TArray<FLinearColor>* Blast_Radii, TArray<FLinearColor>* Blast_Radii_Out);
	static void Does_A_Delete_B(const FString& A_String, const FString& B_String, UObject* __WorldContext, bool* Return);
	static void Get_Actor_Placement_Asset_Type(AActor* Input_Actor, UObject* __WorldContext, bool* Returning_Tag, FString* Asset_Tag);
	static void Check_Actor_Overlap(AActor* Input_Actor, UObject* __WorldContext, bool* Delete_Actor, TArray<AActor*>* Overlaps_to_Delete);
	static void Get_Mesh_Instance_Transform(const FPlacementGardenSeed& Selected_Mesh, const FVector& Location, const FVector& Normal, UObject* __WorldContext, FRandomStream* Random, FTransform* Transform);
	static void Normalise_Mesh_Probabilities(UObject* __WorldContext, TArray<FPlacementGardenSeed>* Charges, TArray<float>* Charge_Probabilities);
	static void Set_Mesh(float Generator_Radius, float Spawn_Clustering, float Spawn_Radius_Multiplier, AActor* Actor, UObject* __WorldContext, TArray<FPlacementGardenSeed>* Meshes, TArray<float>* Mesh_Probabilities, TArray<UObject*>* Physical_Materials, TArray<FLinearColor>* Mesh_Radii, FRandomStream* Random, bool* Spawn_Permission, FTransform* Transform, float* Radius, int* Mesh_Index, FPlacementGardenSeed* Mesh);
	static void Set_Charge(float Generator_Radius, float Spawn_Clustering, bool Box_Distribution, AActor* Actor, UObject* __WorldContext, TArray<FPlacementBombCharge>* Charges, TArray<float>* Charge_Probabilities, TArray<UObject*>* Physical_Materials, TArray<FLinearColor>* Blast_Radii, FRandomStream* Random, bool* Spawn_Permission, FVector* Position, float* Radius, FPlacementBombCharge* Charge);
	static void Check_Surface_Materials(UObject* Placement_Material, UObject* __WorldContext, TArray<UObject*>* Physical_Materials, bool* Placement_Permission);
	static void Check_Slope(const FVector& Normal, const FVector2D& Slope_Range, UObject* __WorldContext, bool* Placement_Permission);
	static void Check_Height(const FVector& Position, const FVector2D& Height_Range, UObject* __WorldContext, bool* Placement_Permission);
	static void Check_Radius_Overlap(const FVector& Position, float Radius, float Radius_Overlap, UObject* __WorldContext, TArray<FLinearColor>* Blast_Radii, bool* Placement_Permission);
	static void Set_Spawn_Properties(UObject* Object, int Seed, float Radius, UObject* __WorldContext, bool* Cast_Success);
	static void Generate_Random_Box_Raycast(const FVector& Centre, const FVector& Extent, UObject* __WorldContext, FRandomStream* Random, FVector* Raycast_Start, FVector* Raycast_End);
	static void Get_Box_Sample_Count(AActor* Actor, float Seed_Density, UObject* __WorldContext, int* Sample_Count);
	static void Generate_Random_Radial_Raycast(float Radius, const FVector& Centre, float Spawn_Clustering, float Spawn_Radius_Multiplier, const FTransform& Actor_Transform, UObject* __WorldContext, FRandomStream* Random, FVector* Raycast_Start, FVector* Raycast_End);
	static void Calculate_Index_from_Probabilities(float Random_Float, UObject* __WorldContext, TArray<float>* Charge_Probabilities, int* Index);
	static void Get_Radial_Sample_Count(float Radius, float Spawn_Sample_Density, UObject* __WorldContext, int* Sample_Count);
	static void Normalise_Charge_Probabilities(UObject* __WorldContext, TArray<FPlacementBombCharge>* Charges, TArray<float>* Charge_Probabilities);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
