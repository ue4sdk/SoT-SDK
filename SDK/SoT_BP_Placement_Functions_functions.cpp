// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Placement_Functions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Placement_Functions.BP_Placement_Functions_C.GenerateRadialXYPositionsAroundPoint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        Centre                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Segments                       (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FVector>                Positions                      (Parm, OutParm, ZeroConstructor)

void UBP_Placement_Functions_C::GenerateRadialXYPositionsAroundPoint(const FVector& Centre, float Radius, int Segments, UObject* __WorldContext, TArray<FVector>* Positions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.GenerateRadialXYPositionsAroundPoint"));

	UBP_Placement_Functions_C_GenerateRadialXYPositionsAroundPoint_Params params;
	params.Centre = Centre;
	params.Radius = Radius;
	params.Segments = Segments;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Positions != nullptr)
		*Positions = params.Positions;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get First Valid Hit
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<FHitResult>             Hits                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Valid_Hit                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FHitResult                     Hit                            (Parm, OutParm)

void UBP_Placement_Functions_C::Get_First_Valid_Hit(UObject* __WorldContext, TArray<FHitResult>* Hits, bool* Is_Valid_Hit, FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get First Valid Hit"));

	UBP_Placement_Functions_C_Get_First_Valid_Hit_Params params;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Hits != nullptr)
		*Hits = params.Hits;
	if (Is_Valid_Hit != nullptr)
		*Is_Valid_Hit = params.Is_Valid_Hit;
	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Rotated Box Raycast
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FRandomStream                  Random                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FVector                        Centre                         (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Extent                         (Parm, ZeroConstructor, IsPlainOldData)
// FRotator                       Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Raycast_Start                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        Raycast_End                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Generate_Random_Rotated_Box_Raycast(const FVector& Centre, const FVector& Extent, const FRotator& Rotation, UObject* __WorldContext, FRandomStream* Random, FVector* Raycast_Start, FVector* Raycast_End)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Rotated Box Raycast"));

	UBP_Placement_Functions_C_Generate_Random_Rotated_Box_Raycast_Params params;
	params.Centre = Centre;
	params.Extent = Extent;
	params.Rotation = Rotation;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Random != nullptr)
		*Random = params.Random;
	if (Raycast_Start != nullptr)
		*Raycast_Start = params.Raycast_Start;
	if (Raycast_End != nullptr)
		*Raycast_End = params.Raycast_End;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Detonate Charge
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// AActor*                        Spawn                          (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius_Overlap                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FLinearColor>           Blast_Radii                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FLinearColor>           Blast_Radii_Out                (Parm, OutParm, ZeroConstructor)

void UBP_Placement_Functions_C::Detonate_Charge(AActor* Spawn, const FVector& Position, float Radius, float Radius_Overlap, int Seed, UObject* __WorldContext, TArray<FLinearColor>* Blast_Radii, TArray<FLinearColor>* Blast_Radii_Out)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Detonate Charge"));

	UBP_Placement_Functions_C_Detonate_Charge_Params params;
	params.Spawn = Spawn;
	params.Position = Position;
	params.Radius = Radius;
	params.Radius_Overlap = Radius_Overlap;
	params.Seed = Seed;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Blast_Radii != nullptr)
		*Blast_Radii = params.Blast_Radii;
	if (Blast_Radii_Out != nullptr)
		*Blast_Radii_Out = params.Blast_Radii_Out;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Does A Delete B
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FString                        A_String                       (Parm, ZeroConstructor)
// FString                        B_String                       (Parm, ZeroConstructor)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Does_A_Delete_B(const FString& A_String, const FString& B_String, UObject* __WorldContext, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Does A Delete B"));

	UBP_Placement_Functions_C_Does_A_Delete_B_Params params;
	params.A_String = A_String;
	params.B_String = B_String;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Actor Placement Asset Type
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// AActor*                        Input_Actor                    (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Returning_Tag                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FString                        Asset_Tag                      (Parm, OutParm, ZeroConstructor)

void UBP_Placement_Functions_C::Get_Actor_Placement_Asset_Type(AActor* Input_Actor, UObject* __WorldContext, bool* Returning_Tag, FString* Asset_Tag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Actor Placement Asset Type"));

	UBP_Placement_Functions_C_Get_Actor_Placement_Asset_Type_Params params;
	params.Input_Actor = Input_Actor;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Returning_Tag != nullptr)
		*Returning_Tag = params.Returning_Tag;
	if (Asset_Tag != nullptr)
		*Asset_Tag = params.Asset_Tag;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Actor Overlap
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// AActor*                        Input_Actor                    (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Delete_Actor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<AActor*>                Overlaps_to_Delete             (Parm, OutParm, ZeroConstructor)

void UBP_Placement_Functions_C::Check_Actor_Overlap(AActor* Input_Actor, UObject* __WorldContext, bool* Delete_Actor, TArray<AActor*>* Overlaps_to_Delete)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Actor Overlap"));

	UBP_Placement_Functions_C_Check_Actor_Overlap_Params params;
	params.Input_Actor = Input_Actor;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Delete_Actor != nullptr)
		*Delete_Actor = params.Delete_Actor;
	if (Overlaps_to_Delete != nullptr)
		*Overlaps_to_Delete = params.Overlaps_to_Delete;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Mesh Instance Transform
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FPlacementGardenSeed           Selected_Mesh                  (Parm)
// FRandomStream                  Random                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FVector                        Location                       (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// FTransform                     Transform                      (Parm, OutParm, IsPlainOldData)

void UBP_Placement_Functions_C::Get_Mesh_Instance_Transform(const FPlacementGardenSeed& Selected_Mesh, const FVector& Location, const FVector& Normal, UObject* __WorldContext, FRandomStream* Random, FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Mesh Instance Transform"));

	UBP_Placement_Functions_C_Get_Mesh_Instance_Transform_Params params;
	params.Selected_Mesh = Selected_Mesh;
	params.Location = Location;
	params.Normal = Normal;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Random != nullptr)
		*Random = params.Random;
	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Mesh Probabilities
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<FPlacementGardenSeed>   Charges                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Charge_Probabilities           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Normalise_Mesh_Probabilities(UObject* __WorldContext, TArray<FPlacementGardenSeed>* Charges, TArray<float>* Charge_Probabilities)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Mesh Probabilities"));

	UBP_Placement_Functions_C_Normalise_Mesh_Probabilities_Params params;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Charges != nullptr)
		*Charges = params.Charges;
	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Mesh
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<FPlacementGardenSeed>   Meshes                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Mesh_Probabilities             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Generator_Radius               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spawn_Clustering               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spawn_Radius_Multiplier        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<UObject*>               Physical_Materials             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<FLinearColor>           Mesh_Radii                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FRandomStream                  Random                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Spawn_Permission               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FTransform                     Transform                      (Parm, OutParm, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Mesh_Index                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FPlacementGardenSeed           Mesh                           (Parm, OutParm)

void UBP_Placement_Functions_C::Set_Mesh(float Generator_Radius, float Spawn_Clustering, float Spawn_Radius_Multiplier, AActor* Actor, UObject* __WorldContext, TArray<FPlacementGardenSeed>* Meshes, TArray<float>* Mesh_Probabilities, TArray<UObject*>* Physical_Materials, TArray<FLinearColor>* Mesh_Radii, FRandomStream* Random, bool* Spawn_Permission, FTransform* Transform, float* Radius, int* Mesh_Index, FPlacementGardenSeed* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Set Mesh"));

	UBP_Placement_Functions_C_Set_Mesh_Params params;
	params.Generator_Radius = Generator_Radius;
	params.Spawn_Clustering = Spawn_Clustering;
	params.Spawn_Radius_Multiplier = Spawn_Radius_Multiplier;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Meshes != nullptr)
		*Meshes = params.Meshes;
	if (Mesh_Probabilities != nullptr)
		*Mesh_Probabilities = params.Mesh_Probabilities;
	if (Physical_Materials != nullptr)
		*Physical_Materials = params.Physical_Materials;
	if (Mesh_Radii != nullptr)
		*Mesh_Radii = params.Mesh_Radii;
	if (Random != nullptr)
		*Random = params.Random;
	if (Spawn_Permission != nullptr)
		*Spawn_Permission = params.Spawn_Permission;
	if (Transform != nullptr)
		*Transform = params.Transform;
	if (Radius != nullptr)
		*Radius = params.Radius;
	if (Mesh_Index != nullptr)
		*Mesh_Index = params.Mesh_Index;
	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Charge
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<FPlacementBombCharge>   Charges                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Charge_Probabilities           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Generator_Radius               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spawn_Clustering               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Box_Distribution               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<UObject*>               Physical_Materials             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<FLinearColor>           Blast_Radii                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FRandomStream                  Random                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Spawn_Permission               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FPlacementBombCharge           Charge                         (Parm, OutParm)

void UBP_Placement_Functions_C::Set_Charge(float Generator_Radius, float Spawn_Clustering, bool Box_Distribution, AActor* Actor, UObject* __WorldContext, TArray<FPlacementBombCharge>* Charges, TArray<float>* Charge_Probabilities, TArray<UObject*>* Physical_Materials, TArray<FLinearColor>* Blast_Radii, FRandomStream* Random, bool* Spawn_Permission, FVector* Position, float* Radius, FPlacementBombCharge* Charge)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Set Charge"));

	UBP_Placement_Functions_C_Set_Charge_Params params;
	params.Generator_Radius = Generator_Radius;
	params.Spawn_Clustering = Spawn_Clustering;
	params.Box_Distribution = Box_Distribution;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Charges != nullptr)
		*Charges = params.Charges;
	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
	if (Physical_Materials != nullptr)
		*Physical_Materials = params.Physical_Materials;
	if (Blast_Radii != nullptr)
		*Blast_Radii = params.Blast_Radii;
	if (Random != nullptr)
		*Random = params.Random;
	if (Spawn_Permission != nullptr)
		*Spawn_Permission = params.Spawn_Permission;
	if (Position != nullptr)
		*Position = params.Position;
	if (Radius != nullptr)
		*Radius = params.Radius;
	if (Charge != nullptr)
		*Charge = params.Charge;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Surface Materials
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<UObject*>               Physical_Materials             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// UObject*                       Placement_Material             (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Placement_Permission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Check_Surface_Materials(UObject* Placement_Material, UObject* __WorldContext, TArray<UObject*>* Physical_Materials, bool* Placement_Permission)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Surface Materials"));

	UBP_Placement_Functions_C_Check_Surface_Materials_Params params;
	params.Placement_Material = Placement_Material;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Physical_Materials != nullptr)
		*Physical_Materials = params.Physical_Materials;
	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Slope
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// FVector                        Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// FVector2D                      Slope_Range                    (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Placement_Permission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Check_Slope(const FVector& Normal, const FVector2D& Slope_Range, UObject* __WorldContext, bool* Placement_Permission)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Slope"));

	UBP_Placement_Functions_C_Check_Slope_Params params;
	params.Normal = Normal;
	params.Slope_Range = Slope_Range;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Height
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// FVector                        Position                       (Parm, ZeroConstructor, IsPlainOldData)
// FVector2D                      Height_Range                   (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Placement_Permission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Check_Height(const FVector& Position, const FVector2D& Height_Range, UObject* __WorldContext, bool* Placement_Permission)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Height"));

	UBP_Placement_Functions_C_Check_Height_Params params;
	params.Position = Position;
	params.Height_Range = Height_Range;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Check Radius Overlap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// FVector                        Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius_Overlap                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FLinearColor>           Blast_Radii                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Placement_Permission           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Check_Radius_Overlap(const FVector& Position, float Radius, float Radius_Overlap, UObject* __WorldContext, TArray<FLinearColor>* Blast_Radii, bool* Placement_Permission)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Check Radius Overlap"));

	UBP_Placement_Functions_C_Check_Radius_Overlap_Params params;
	params.Position = Position;
	params.Radius = Radius;
	params.Radius_Overlap = Radius_Overlap;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Blast_Radii != nullptr)
		*Blast_Radii = params.Blast_Radii;
	if (Placement_Permission != nullptr)
		*Placement_Permission = params.Placement_Permission;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Set Spawn Properties
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// UObject*                       Object                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Cast_Success                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Set_Spawn_Properties(UObject* Object, int Seed, float Radius, UObject* __WorldContext, bool* Cast_Success)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Set Spawn Properties"));

	UBP_Placement_Functions_C_Set_Spawn_Properties_Params params;
	params.Object = Object;
	params.Seed = Seed;
	params.Radius = Radius;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Cast_Success != nullptr)
		*Cast_Success = params.Cast_Success;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Box Raycast
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FRandomStream                  Random                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FVector                        Centre                         (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Extent                         (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Raycast_Start                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        Raycast_End                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Generate_Random_Box_Raycast(const FVector& Centre, const FVector& Extent, UObject* __WorldContext, FRandomStream* Random, FVector* Raycast_Start, FVector* Raycast_End)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Box Raycast"));

	UBP_Placement_Functions_C_Generate_Random_Box_Raycast_Params params;
	params.Centre = Centre;
	params.Extent = Extent;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Random != nullptr)
		*Random = params.Random;
	if (Raycast_Start != nullptr)
		*Raycast_Start = params.Raycast_Start;
	if (Raycast_End != nullptr)
		*Raycast_End = params.Raycast_End;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Box Sample Count
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Seed_Density                   (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Sample_Count                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Get_Box_Sample_Count(AActor* Actor, float Seed_Density, UObject* __WorldContext, int* Sample_Count)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Box Sample Count"));

	UBP_Placement_Functions_C_Get_Box_Sample_Count_Params params;
	params.Actor = Actor;
	params.Seed_Density = Seed_Density;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Sample_Count != nullptr)
		*Sample_Count = params.Sample_Count;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Radial Raycast
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FRandomStream                  Random                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Centre                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spawn_Clustering               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spawn_Radius_Multiplier        (Parm, ZeroConstructor, IsPlainOldData)
// FTransform                     Actor_Transform                (Parm, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Raycast_Start                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        Raycast_End                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Generate_Random_Radial_Raycast(float Radius, const FVector& Centre, float Spawn_Clustering, float Spawn_Radius_Multiplier, const FTransform& Actor_Transform, UObject* __WorldContext, FRandomStream* Random, FVector* Raycast_Start, FVector* Raycast_End)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Generate Random Radial Raycast"));

	UBP_Placement_Functions_C_Generate_Random_Radial_Raycast_Params params;
	params.Radius = Radius;
	params.Centre = Centre;
	params.Spawn_Clustering = Spawn_Clustering;
	params.Spawn_Radius_Multiplier = Spawn_Radius_Multiplier;
	params.Actor_Transform = Actor_Transform;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Random != nullptr)
		*Random = params.Random;
	if (Raycast_Start != nullptr)
		*Raycast_Start = params.Raycast_Start;
	if (Raycast_End != nullptr)
		*Raycast_End = params.Raycast_End;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Calculate Index from Probabilities
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Random_Float                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  Charge_Probabilities           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Calculate_Index_from_Probabilities(float Random_Float, UObject* __WorldContext, TArray<float>* Charge_Probabilities, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Calculate Index from Probabilities"));

	UBP_Placement_Functions_C_Calculate_Index_from_Probabilities_Params params;
	params.Random_Float = Random_Float;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Get Radial Sample Count
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Spawn_Sample_Density           (Parm, ZeroConstructor, IsPlainOldData)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Sample_Count                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Get_Radial_Sample_Count(float Radius, float Spawn_Sample_Density, UObject* __WorldContext, int* Sample_Count)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Get Radial Sample Count"));

	UBP_Placement_Functions_C_Get_Radial_Sample_Count_Params params;
	params.Radius = Radius;
	params.Spawn_Sample_Density = Spawn_Sample_Density;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Sample_Count != nullptr)
		*Sample_Count = params.Sample_Count;
}


// Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Charge Probabilities
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<FPlacementBombCharge>   Charges                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  Charge_Probabilities           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// UObject*                       __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Placement_Functions_C::Normalise_Charge_Probabilities(UObject* __WorldContext, TArray<FPlacementBombCharge>* Charges, TArray<float>* Charge_Probabilities)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Placement_Functions.BP_Placement_Functions_C.Normalise Charge Probabilities"));

	UBP_Placement_Functions_C_Normalise_Charge_Probabilities_Params params;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Charges != nullptr)
		*Charges = params.Charges;
	if (Charge_Probabilities != nullptr)
		*Charge_Probabilities = params.Charge_Probabilities;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
