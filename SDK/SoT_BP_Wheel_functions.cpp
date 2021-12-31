// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Wheel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Wheel.BP_Wheel_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDockableInfo                  ReturnValue                    (Parm, OutParm, ReturnParm)

FDockableInfo ABP_Wheel_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.GetDockableInfo"));

	ABP_Wheel_C_GetDockableInfo_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Wheel.BP_Wheel_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector ABP_Wheel_C::GetClosestInteractionPoint(const FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.GetClosestInteractionPoint"));

	ABP_Wheel_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	UObject::ProcessEvent(fn, &params);

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_Wheel.BP_Wheel_C.GetWheelMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// USkeletalMeshComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

USkeletalMeshComponent* ABP_Wheel_C::GetWheelMesh()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.GetWheelMesh"));

	ABP_Wheel_C_GetWheelMesh_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Wheel.BP_Wheel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Wheel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.UserConstructionScript"));

	ABP_Wheel_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wheel.BP_Wheel_C.Receive Animation State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FRotator                       WheelRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          WheelAnimationTime             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWheel>            EWheel                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          WheelRate                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::Receive_Animation_State(const FRotator& WheelRotation, float WheelAnimationTime, TEnumAsByte<EWheel> EWheel, float Direction, float WheelRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.Receive Animation State"));

	ABP_Wheel_C_Receive_Animation_State_Params params;
	params.WheelRotation = WheelRotation;
	params.WheelAnimationTime = WheelAnimationTime;
	params.EWheel = EWheel;
	params.Direction = Direction;
	params.WheelRate = WheelRate;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wheel.BP_Wheel_C.StickInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StickInputX                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::StickInput(float StickInputX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.StickInput"));

	ABP_Wheel_C_StickInput_Params params;
	params.StickInputX = StickInputX;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wheel.BP_Wheel_C.Update Athena Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AAthenaCharacter*              AthenaCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::Update_Athena_Character(AAthenaCharacter* AthenaCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.Update Athena Character"));

	ABP_Wheel_C_Update_Athena_Character_Params params;
	params.AthenaCharacter = AthenaCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wheel.BP_Wheel_C.CapstanRotationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotationSpeed                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::CapstanRotationSpeed(float RotationSpeed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.CapstanRotationSpeed"));

	ABP_Wheel_C_CapstanRotationSpeed_Params params;
	params.RotationSpeed = RotationSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wheel.BP_Wheel_C.DockingInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FBP_Docking                    Docking                        (Parm)

void ABP_Wheel_C::DockingInterface(const FBP_Docking& Docking)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.DockingInterface"));

	ABP_Wheel_C_DockingInterface_Params params;
	params.Docking = Docking;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wheel.BP_Wheel_C.CapstanForce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          IndividualForce                (Parm, ZeroConstructor, IsPlainOldData)
// FTransform                     LH_IK                          (Parm, IsPlainOldData)
// FTransform                     RH_IK                          (Parm, IsPlainOldData)
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::CapstanForce(float IndividualForce, const FTransform& LH_IK, const FTransform& RH_IK, AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.CapstanForce"));

	ABP_Wheel_C_CapstanForce_Params params;
	params.IndividualForce = IndividualForce;
	params.LH_IK = LH_IK;
	params.RH_IK = RH_IK;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wheel.BP_Wheel_C.IK Limb Update Transform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// FTransform                     TransformUpdate                (Parm, IsPlainOldData)

void ABP_Wheel_C::IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const FTransform& TransformUpdate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.IK Limb Update Transform"));

	ABP_Wheel_C_IK_Limb_Update_Transform_Params params;
	params.LimbId = LimbId;
	params.TransformUpdate = TransformUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wheel.BP_Wheel_C.IK Limb Blend Timing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendIn                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOut                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.IK Limb Blend Timing"));

	ABP_Wheel_C_IK_Limb_Blend_Timing_Params params;
	params.LimbId = LimbId;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wheel.BP_Wheel_C.IK Limb Update Strength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationStrength               (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationStrength               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.IK Limb Update Strength"));

	ABP_Wheel_C_IK_Limb_Update_Strength_Params params;
	params.LimbId = LimbId;
	params.LocationStrength = LocationStrength;
	params.RotationStrength = RotationStrength;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wheel.BP_Wheel_C.IK Limb Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELimbIKSpace>      CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.IK Limb Active"));

	ABP_Wheel_C_IK_Limb_Active_Params params;
	params.LimbId = LimbId;
	params.Active = Active;
	params.CoordinateSpace = CoordinateSpace;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wheel.BP_Wheel_C.IK Limb Stretch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ArmStretch                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpineStretch                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          LegStretch                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.IK Limb Stretch"));

	ABP_Wheel_C_IK_Limb_Stretch_Params params;
	params.ArmStretch = ArmStretch;
	params.SpineStretch = SpineStretch;
	params.LegStretch = LegStretch;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wheel.BP_Wheel_C.RequestStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// AActor*                        Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::RequestStateChange(AActor* Controller)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.RequestStateChange"));

	ABP_Wheel_C_RequestStateChange_Params params;
	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wheel.BP_Wheel_C.ExecuteUbergraph_BP_Wheel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wheel_C::ExecuteUbergraph_BP_Wheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wheel.BP_Wheel_C.ExecuteUbergraph_BP_Wheel"));

	ABP_Wheel_C_ExecuteUbergraph_BP_Wheel_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
