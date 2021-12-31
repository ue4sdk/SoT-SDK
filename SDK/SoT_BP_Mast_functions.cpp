// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Mast_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Mast.BP_Mast_C.AttemptToAddDamageDecal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ERepairableState>  RepairableState                (Parm, ZeroConstructor, IsPlainOldData)
// UDecalComponent*               DecalComponent                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FTransform                     RelativeTransform              (ConstParm, Parm, IsPlainOldData)
// UMaterialInterface*            NewDecalMaterial               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::AttemptToAddDamageDecal(TEnumAsByte<ERepairableState> RepairableState, const FTransform& RelativeTransform, UMaterialInterface* NewDecalMaterial, UDecalComponent** DecalComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.AttemptToAddDamageDecal"));

	ABP_Mast_C_AttemptToAddDamageDecal_Params params;
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

	ABP_Mast_C_IsMastVisuallyFractured_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Mast.BP_Mast_C.Customise Static Mesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UStaticMesh*                   New_Static_Mesh                (Parm, ZeroConstructor, IsPlainOldData)
// UStaticMeshComponent*          Static_Mesh_Component          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::Customise_Static_Mesh(UStaticMesh* New_Static_Mesh, UStaticMeshComponent* Static_Mesh_Component)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.Customise Static Mesh"));

	ABP_Mast_C_Customise_Static_Mesh_Params params;
	params.New_Static_Mesh = New_Static_Mesh;
	params.Static_Mesh_Component = Static_Mesh_Component;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.Trim Array Func
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<UObject*>               TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::Trim_Array_Func(int Size, TArray<UObject*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.Trim Array Func"));

	ABP_Mast_C_Trim_Array_Func_Params params;
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

	ABP_Mast_C_Initialise_Sail_Parameters_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.Populate Lists of Yards and Sails
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Mast_C::Populate_Lists_of_Yards_and_Sails()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.Populate Lists of Yards and Sails"));

	ABP_Mast_C_Populate_Lists_of_Yards_and_Sails_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.Cull Excess Components
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<UActorComponent*>       TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Mast_C::Cull_Excess_Components(TArray<UActorComponent*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.Cull Excess Components"));

	ABP_Mast_C_Cull_Excess_Components_Params params;

	UObject::ProcessEvent(fn, &params);

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function BP_Mast.BP_Mast_C.Initialise Sails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Mast_C::Initialise_Sails()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.Initialise Sails"));

	ABP_Mast_C_Initialise_Sails_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Mast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.UserConstructionScript"));

	ABP_Mast_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.OnMastDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// UMastDescAsset*                MastDesc                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::OnMastDescLoaded(UMastDescAsset* MastDesc)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.OnMastDescLoaded"));

	ABP_Mast_C_OnMastDescLoaded_Params params;
	params.MastDesc = MastDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.OnMastMeshSwapRequested
// (Event, Protected, BlueprintEvent)
// Parameters:
// UStaticMesh*                   NewMeshBottom                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// UStaticMesh*                   NewMeshTop                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::OnMastMeshSwapRequested(UStaticMesh* NewMeshBottom, UStaticMesh* NewMeshTop)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.OnMastMeshSwapRequested"));

	ABP_Mast_C_OnMastMeshSwapRequested_Params params;
	params.NewMeshBottom = NewMeshBottom;
	params.NewMeshTop = NewMeshTop;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ERepairableState>  State                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERepairableState>  PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)
// URepairableComponent*          RepairableComponent            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<ERepairableState> State, TEnumAsByte<ERepairableState> PreviousState, URepairableComponent* RepairableComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature"));

	ABP_Mast_C_BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature_Params params;
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
// URepairableComponent*          RepairableComponent            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<ERepairableState> State, TEnumAsByte<ERepairableState> PreviousState, URepairableComponent* RepairableComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature"));

	ABP_Mast_C_BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature_Params params;
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
// URepairableComponent*          RepairableComponent            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Mast_C::BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<ERepairableState> State, TEnumAsByte<ERepairableState> PreviousState, URepairableComponent* RepairableComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Mast.BP_Mast_C.BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature"));

	ABP_Mast_C_BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature_Params params;
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

	ABP_Mast_C_ExecuteUbergraph_BP_Mast_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
