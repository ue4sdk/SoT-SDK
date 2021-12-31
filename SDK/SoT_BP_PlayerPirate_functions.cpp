// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PlayerPirate_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerPirate.BP_PlayerPirate_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_PlayerPirate_C::GetPxActorCapacityForPhysXAggregate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.GetPxActorCapacityForPhysXAggregate"));

	ABP_PlayerPirate_C_GetPxActorCapacityForPhysXAggregate_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.TattoGlowDynamicMaterials
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UMeshComponent*                Mesh                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_C::TattoGlowDynamicMaterials(UMeshComponent* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.TattoGlowDynamicMaterials"));

	ABP_PlayerPirate_C_TattoGlowDynamicMaterials_Params params;
	params.Mesh = Mesh;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.GetMouthPosition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector ABP_PlayerPirate_C::GetMouthPosition()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.GetMouthPosition"));

	ABP_PlayerPirate_C_GetMouthPosition_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPirate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.UserConstructionScript"));

	ABP_PlayerPirate_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.Update Athena Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AAthenaCharacter*              AthenaCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_C::Update_Athena_Character(AAthenaCharacter* AthenaCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.Update Athena Character"));

	ABP_PlayerPirate_C_Update_Athena_Character_Params params;
	params.AthenaCharacter = AthenaCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanRotationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotationSpeed                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_C::CapstanRotationSpeed(float RotationSpeed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanRotationSpeed"));

	ABP_PlayerPirate_C_CapstanRotationSpeed_Params params;
	params.RotationSpeed = RotationSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.DockingInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FBP_Docking                    Docking                        (Parm)

void ABP_PlayerPirate_C::DockingInterface(const FBP_Docking& Docking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.DockingInterface"));

	ABP_PlayerPirate_C_DockingInterface_Params params;
	params.Docking = Docking;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanForce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          IndividualForce                (Parm, ZeroConstructor, IsPlainOldData)
// FTransform                     LH_IK                          (Parm, IsPlainOldData)
// FTransform                     RH_IK                          (Parm, IsPlainOldData)
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_C::CapstanForce(float IndividualForce, const FTransform& LH_IK, const FTransform& RH_IK, AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.CapstanForce"));

	ABP_PlayerPirate_C_CapstanForce_Params params;
	params.IndividualForce = IndividualForce;
	params.LH_IK = LH_IK;
	params.RH_IK = RH_IK;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Transform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// FTransform                     TransformUpdate                (Parm, IsPlainOldData)

void ABP_PlayerPirate_C::IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const FTransform& TransformUpdate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Transform"));

	ABP_PlayerPirate_C_IK_Limb_Update_Transform_Params params;
	params.LimbId = LimbId;
	params.TransformUpdate = TransformUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Blend Timing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendIn                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOut                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_C::IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Blend Timing"));

	ABP_PlayerPirate_C_IK_Limb_Blend_Timing_Params params;
	params.LimbId = LimbId;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Strength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationStrength               (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationStrength               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_C::IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Update Strength"));

	ABP_PlayerPirate_C_IK_Limb_Update_Strength_Params params;
	params.LimbId = LimbId;
	params.LocationStrength = LocationStrength;
	params.RotationStrength = RotationStrength;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELimbIKSpace>      CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_C::IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Active"));

	ABP_PlayerPirate_C_IK_Limb_Active_Params params;
	params.LimbId = LimbId;
	params.Active = Active;
	params.CoordinateSpace = CoordinateSpace;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Stretch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ArmStretch                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpineStretch                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          LegStretch                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_C::IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.IK Limb Stretch"));

	ABP_PlayerPirate_C_IK_Limb_Stretch_Params params;
	params.ArmStretch = ArmStretch;
	params.SpineStretch = SpineStretch;
	params.LegStretch = LegStretch;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PlayerPirate_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.ReceiveBeginPlay"));

	ABP_PlayerPirate_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.TriggerTattooGlow
// (Event, Public, BlueprintEvent)

void ABP_PlayerPirate_C::TriggerTattooGlow()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.TriggerTattooGlow"));

	ABP_PlayerPirate_C_TriggerTattooGlow_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.ScaleMesh
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           FirstPersonMesh                (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           ThirdPersonMesh                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_C::ScaleMesh(const FVector& Scale, UPrimitiveComponent* FirstPersonMesh, UPrimitiveComponent* ThirdPersonMesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.ScaleMesh"));

	ABP_PlayerPirate_C_ScaleMesh_Params params;
	params.Scale = Scale;
	params.FirstPersonMesh = FirstPersonMesh;
	params.ThirdPersonMesh = ThirdPersonMesh;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.SkipToNextMesh
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_PlayerPirate_C::SkipToNextMesh()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.SkipToNextMesh"));

	ABP_PlayerPirate_C_SkipToNextMesh_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.SetWieldedItemMesh
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// AWieldableItem*                Wieldable_Item_Ref             (Parm, ZeroConstructor, IsPlainOldData)
// UStaticMesh*                   StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData)
// USkeletalMesh*                 SkeletalMesh                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           WieldItem                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<UStaticMesh*>           StaticMeshArray                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<USkeletalMesh*>         SkeletalMeshArray              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FVector                        ItemScale                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseItemScale                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_C::SetWieldedItemMesh(AWieldableItem* Wieldable_Item_Ref, UStaticMesh* StaticMesh, USkeletalMesh* SkeletalMesh, bool WieldItem, const FVector& ItemScale, bool UseItemScale, TArray<UStaticMesh*>* StaticMeshArray, TArray<USkeletalMesh*>* SkeletalMeshArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.SetWieldedItemMesh"));

	ABP_PlayerPirate_C_SetWieldedItemMesh_Params params;
	params.Wieldable_Item_Ref = Wieldable_Item_Ref;
	params.StaticMesh = StaticMesh;
	params.SkeletalMesh = SkeletalMesh;
	params.WieldItem = WieldItem;
	params.ItemScale = ItemScale;
	params.UseItemScale = UseItemScale;

	UObject::ProcessEvent(fn, &params);

	if (StaticMeshArray != nullptr)
		*StaticMeshArray = params.StaticMeshArray;
	if (SkeletalMeshArray != nullptr)
		*SkeletalMeshArray = params.SkeletalMeshArray;
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.IncreaseWieldedObjectScale
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        ItemScaleIncrement             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_C::IncreaseWieldedObjectScale(const FVector& ItemScaleIncrement)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.IncreaseWieldedObjectScale"));

	ABP_PlayerPirate_C_IncreaseWieldedObjectScale_Params params;
	params.ItemScaleIncrement = ItemScaleIncrement;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerPirate.BP_PlayerPirate_C.ExecuteUbergraph_BP_PlayerPirate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerPirate_C::ExecuteUbergraph_BP_PlayerPirate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PlayerPirate.BP_PlayerPirate_C.ExecuteUbergraph_BP_PlayerPirate"));

	ABP_PlayerPirate_C_ExecuteUbergraph_BP_PlayerPirate_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
