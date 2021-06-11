// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Mast_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Mast.BP_Mast_C.AttemptToAddDamageDecal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ERepairableState>  RepairableState                (Parm, ZeroConstructor, IsPlainOldData)
// class UDecalComponent*         DecalComponent                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              RelativeTransform              (ConstParm, Parm, IsPlainOldData)
// class UMaterialInterface*      NewDecalMaterial               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::AttemptToAddDamageDecal(TEnumAsByte<ERepairableState> RepairableState, const struct FTransform& RelativeTransform, class UMaterialInterface* NewDecalMaterial, class UDecalComponent** DecalComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.AttemptToAddDamageDecal"));

	struct
	{
		TEnumAsByte<ERepairableState>  RepairableState;
		class UDecalComponent*         DecalComponent;
		struct FTransform              RelativeTransform;
		class UMaterialInterface*      NewDecalMaterial;
	} params;

	params.RepairableState = RepairableState;
	params.RelativeTransform = RelativeTransform;
	params.NewDecalMaterial = NewDecalMaterial;

	UObject::ProcessEvent(fn, &params);

	if (DecalComponent != nullptr)
		*DecalComponent = params.DecalComponent;
}


// Function BP_Mast.BP_Mast_C.IsMastVisuallyFractured
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Mast_C::IsMastVisuallyFractured()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.IsMastVisuallyFractured"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Mast.BP_Mast_C.Customise Static Mesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             New_Static_Mesh                (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    Static_Mesh_Component          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::Customise_Static_Mesh(class UStaticMesh* New_Static_Mesh, class UStaticMeshComponent* Static_Mesh_Component)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.Customise Static Mesh"));

	struct
	{
		class UStaticMesh*             New_Static_Mesh;
		class UStaticMeshComponent*    Static_Mesh_Component;
	} params;

	params.New_Static_Mesh = New_Static_Mesh;
	params.Static_Mesh_Component = Static_Mesh_Component;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.Trim Array Func
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::Trim_Array_Func(int Size, TArray<class UObject*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.Trim Array Func"));

	struct
	{
		TArray<class UObject*>         TargetArray;
		int                            Size;
	} params;

	params.Size = Size;

	UObject::ProcessEvent(fn, &params);

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function BP_Mast.BP_Mast_C.Initialise Sail Parameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Mast_C::Initialise_Sail_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.Initialise Sail Parameters"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.Populate Lists of Yards and Sails
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Mast_C::Populate_Lists_of_Yards_and_Sails()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.Populate Lists of Yards and Sails"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.Cull Excess Components
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorComponent*> TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Mast_C::Cull_Excess_Components(TArray<class UActorComponent*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.Cull Excess Components"));

	struct
	{
		TArray<class UActorComponent*> TargetArray;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function BP_Mast.BP_Mast_C.Initialise Sails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Mast_C::Initialise_Sails()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.Initialise Sails"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Mast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.OnMastDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMastDescAsset*          MastDesc                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::OnMastDescLoaded(class UMastDescAsset* MastDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.OnMastDescLoaded"));

	struct
	{
		class UMastDescAsset*          MastDesc;
	} params;

	params.MastDesc = MastDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.OnMastMeshSwapRequested
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMeshBottom                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             NewMeshTop                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::OnMastMeshSwapRequested(class UStaticMesh* NewMeshBottom, class UStaticMesh* NewMeshTop)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.OnMastMeshSwapRequested"));

	struct
	{
		class UStaticMesh*             NewMeshBottom;
		class UStaticMesh*             NewMeshTop;
	} params;

	params.NewMeshBottom = NewMeshBottom;
	params.NewMeshTop = NewMeshTop;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ERepairableState>  State                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERepairableState>  PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)
// class URepairableComponent*    RepairableComponent            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<ERepairableState> State, TEnumAsByte<ERepairableState> PreviousState, class URepairableComponent* RepairableComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature"));

	struct
	{
		TEnumAsByte<ERepairableState>  State;
		TEnumAsByte<ERepairableState>  PreviousState;
		class URepairableComponent*    RepairableComponent;
	} params;

	params.State = State;
	params.PreviousState = PreviousState;
	params.RepairableComponent = RepairableComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ERepairableState>  State                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERepairableState>  PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)
// class URepairableComponent*    RepairableComponent            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<ERepairableState> State, TEnumAsByte<ERepairableState> PreviousState, class URepairableComponent* RepairableComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature"));

	struct
	{
		TEnumAsByte<ERepairableState>  State;
		TEnumAsByte<ERepairableState>  PreviousState;
		class URepairableComponent*    RepairableComponent;
	} params;

	params.State = State;
	params.PreviousState = PreviousState;
	params.RepairableComponent = RepairableComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ERepairableState>  State                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERepairableState>  PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)
// class URepairableComponent*    RepairableComponent            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<ERepairableState> State, TEnumAsByte<ERepairableState> PreviousState, class URepairableComponent* RepairableComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature"));

	struct
	{
		TEnumAsByte<ERepairableState>  State;
		TEnumAsByte<ERepairableState>  PreviousState;
		class URepairableComponent*    RepairableComponent;
	} params;

	params.State = State;
	params.PreviousState = PreviousState;
	params.RepairableComponent = RepairableComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.ExecuteUbergraph_BP_Mast
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::ExecuteUbergraph_BP_Mast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.ExecuteUbergraph_BP_Mast"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
