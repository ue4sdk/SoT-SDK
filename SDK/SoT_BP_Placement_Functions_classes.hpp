#pragma once

// Sea of Thieves (1.1.1) SDK

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
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Placement_Functions.BP_Placement_Functions_C");
		return ptr;
	}


	void STATIC_GenerateRadialXYPositionsAroundPoint(const struct FVector& Centre, float Radius, int Segments, class UObject* __WorldContext, TArray<struct FVector>* Positions);
	void STATIC_Get_First_Valid_Hit(class UObject* __WorldContext, TArray<struct FHitResult>* Hits, bool* Is_Valid_Hit, struct FHitResult* Hit);
	void STATIC_Generate_Random_Rotated_Box_Raycast(const struct FVector& Centre, const struct FVector& Extent, const struct FRotator& Rotation, class UObject* __WorldContext, struct FRandomStream* Random, struct FVector* Raycast_Start, struct FVector* Raycast_End);
	void STATIC_Detonate_Charge(class AActor* Spawn, const struct FVector& Position, float Radius, float Radius_Overlap, int Seed, class UObject* __WorldContext, TArray<struct FLinearColor>* Blast_Radii, TArray<struct FLinearColor>* Blast_Radii_Out);
	void STATIC_Does_A_Delete_B(const class FString& A_String, const class FString& B_String, class UObject* __WorldContext, bool* Return);
	void STATIC_Get_Actor_Placement_Asset_Type(class AActor* Input_Actor, class UObject* __WorldContext, bool* Returning_Tag, class FString* Asset_Tag);
	void STATIC_Check_Actor_Overlap(class AActor* Input_Actor, class UObject* __WorldContext, bool* Delete_Actor, TArray<class AActor*>* Overlaps_to_Delete);
	void STATIC_Get_Mesh_Instance_Transform(const struct FPlacementGardenSeed& Selected_Mesh, const struct FVector& Location, const struct FVector& Normal, class UObject* __WorldContext, struct FRandomStream* Random, struct FTransform* Transform);
	void STATIC_Normalise_Mesh_Probabilities(class UObject* __WorldContext, TArray<struct FPlacementGardenSeed>* Charges, TArray<float>* Charge_Probabilities);
	void STATIC_Set_Mesh(float Generator_Radius, float Spawn_Clustering, float Spawn_Radius_Multiplier, class AActor* Actor, class UObject* __WorldContext, TArray<struct FPlacementGardenSeed>* Meshes, TArray<float>* Mesh_Probabilities, TArray<class UObject*>* Physical_Materials, TArray<struct FLinearColor>* Mesh_Radii, struct FRandomStream* Random, bool* Spawn_Permission, struct FTransform* Transform, float* Radius, int* Mesh_Index, struct FPlacementGardenSeed* Mesh);
	void STATIC_Set_Charge(float Generator_Radius, float Spawn_Clustering, bool Box_Distribution, class AActor* Actor, class UObject* __WorldContext, TArray<struct FPlacementBombCharge>* Charges, TArray<float>* Charge_Probabilities, TArray<class UObject*>* Physical_Materials, TArray<struct FLinearColor>* Blast_Radii, struct FRandomStream* Random, bool* Spawn_Permission, struct FVector* Position, float* Radius, struct FPlacementBombCharge* Charge);
	void STATIC_Check_Surface_Materials(class UObject* Placement_Material, class UObject* __WorldContext, TArray<class UObject*>* Physical_Materials, bool* Placement_Permission);
	void STATIC_Check_Slope(const struct FVector& Normal, const struct FVector2D& Slope_Range, class UObject* __WorldContext, bool* Placement_Permission);
	void STATIC_Check_Height(const struct FVector& Position, const struct FVector2D& Height_Range, class UObject* __WorldContext, bool* Placement_Permission);
	void STATIC_Check_Radius_Overlap(const struct FVector& Position, float Radius, float Radius_Overlap, class UObject* __WorldContext, TArray<struct FLinearColor>* Blast_Radii, bool* Placement_Permission);
	void STATIC_Set_Spawn_Properties(class UObject* Object, int Seed, float Radius, class UObject* __WorldContext, bool* Cast_Success);
	void STATIC_Generate_Random_Box_Raycast(const struct FVector& Centre, const struct FVector& Extent, class UObject* __WorldContext, struct FRandomStream* Random, struct FVector* Raycast_Start, struct FVector* Raycast_End);
	void STATIC_Get_Box_Sample_Count(class AActor* Actor, float Seed_Density, class UObject* __WorldContext, int* Sample_Count);
	void STATIC_Generate_Random_Radial_Raycast(float Radius, const struct FVector& Centre, float Spawn_Clustering, float Spawn_Radius_Multiplier, const struct FTransform& Actor_Transform, class UObject* __WorldContext, struct FRandomStream* Random, struct FVector* Raycast_Start, struct FVector* Raycast_End);
	void STATIC_Calculate_Index_from_Probabilities(float Random_Float, class UObject* __WorldContext, TArray<float>* Charge_Probabilities, int* Index);
	void STATIC_Get_Radial_Sample_Count(float Radius, float Spawn_Sample_Density, class UObject* __WorldContext, int* Sample_Count);
	void STATIC_Normalise_Charge_Probabilities(class UObject* __WorldContext, TArray<struct FPlacementBombCharge>* Charges, TArray<float>* Charge_Probabilities);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
