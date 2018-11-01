// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Base_Capstan_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Base_Capstan.BP_Base_Capstan_C.GetArms
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class ACapstanArm*>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ACapstanArm*> ABP_Base_Capstan_C::GetArms()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.GetArms");

	ABP_Base_Capstan_C_GetArms_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Base_Capstan.BP_Base_Capstan_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Base_Capstan_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.UserConstructionScript");

	ABP_Base_Capstan_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Base_Capstan.BP_Base_Capstan_C.Update Athena Character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAthenaCharacter*        AthenaCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_Capstan_C::Update_Athena_Character(class AAthenaCharacter* AthenaCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.Update Athena Character");

	ABP_Base_Capstan_C_Update_Athena_Character_Params params;
	params.AthenaCharacter = AthenaCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanRotationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RotationSpeed                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_Capstan_C::CapstanRotationSpeed(float RotationSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanRotationSpeed");

	ABP_Base_Capstan_C_CapstanRotationSpeed_Params params;
	params.RotationSpeed = RotationSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Base_Capstan.BP_Base_Capstan_C.DockingInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBP_Docking             Docking                        (Parm)

void ABP_Base_Capstan_C::DockingInterface(const struct FBP_Docking& Docking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.DockingInterface");

	ABP_Base_Capstan_C_DockingInterface_Params params;
	params.Docking = Docking;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanForce
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          IndividualForce                (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              LH_IK                          (Parm, IsPlainOldData)
// struct FTransform              RH_IK                          (Parm, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_Capstan_C::CapstanForce(float IndividualForce, const struct FTransform& LH_IK, const struct FTransform& RH_IK, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.CapstanForce");

	ABP_Base_Capstan_C_CapstanForce_Params params;
	params.IndividualForce = IndividualForce;
	params.LH_IK = LH_IK;
	params.RH_IK = RH_IK;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Transform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              TransformUpdate                (Parm, IsPlainOldData)

void ABP_Base_Capstan_C::IK_Limb_Update_Transform(TEnumAsByte<EIKLimbName> LimbId, const struct FTransform& TransformUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Transform");

	ABP_Base_Capstan_C_IK_Limb_Update_Transform_Params params;
	params.LimbId = LimbId;
	params.TransformUpdate = TransformUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Blend Timing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendIn                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOut                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_Capstan_C::IK_Limb_Blend_Timing(TEnumAsByte<EIKLimbName> LimbId, float BlendIn, float BlendOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Blend Timing");

	ABP_Base_Capstan_C_IK_Limb_Blend_Timing_Params params;
	params.LimbId = LimbId;
	params.BlendIn = BlendIn;
	params.BlendOut = BlendOut;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Strength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationStrength               (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotationStrength               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_Capstan_C::IK_Limb_Update_Strength(TEnumAsByte<EIKLimbName> LimbId, float LocationStrength, float RotationStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Update Strength");

	ABP_Base_Capstan_C_IK_Limb_Update_Strength_Params params;
	params.LimbId = LimbId;
	params.LocationStrength = LocationStrength;
	params.RotationStrength = RotationStrength;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Active
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIKLimbName>       LimbId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELimbIKSpace>      CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_Capstan_C::IK_Limb_Active(TEnumAsByte<EIKLimbName> LimbId, bool Active, TEnumAsByte<ELimbIKSpace> CoordinateSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Active");

	ABP_Base_Capstan_C_IK_Limb_Active_Params params;
	params.LimbId = LimbId;
	params.Active = Active;
	params.CoordinateSpace = CoordinateSpace;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Stretch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ArmStretch                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpineStretch                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          LegStretch                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_Capstan_C::IK_Limb_Stretch(float ArmStretch, float SpineStretch, float LegStretch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.IK Limb Stretch");

	ABP_Base_Capstan_C_IK_Limb_Stretch_Params params;
	params.ArmStretch = ArmStretch;
	params.SpineStretch = SpineStretch;
	params.LegStretch = LegStretch;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Base_Capstan.BP_Base_Capstan_C.OnCapstanDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCapstanDescAsset*       CapstanDesc                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_Capstan_C::OnCapstanDescLoaded(class UCapstanDescAsset* CapstanDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.OnCapstanDescLoaded");

	ABP_Base_Capstan_C_OnCapstanDescLoaded_Params params;
	params.CapstanDesc = CapstanDesc;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Base_Capstan.BP_Base_Capstan_C.ExecuteUbergraph_BP_Base_Capstan
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_Capstan_C::ExecuteUbergraph_BP_Base_Capstan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_Capstan.BP_Base_Capstan_C.ExecuteUbergraph_BP_Base_Capstan");

	ABP_Base_Capstan_C_ExecuteUbergraph_BP_Base_Capstan_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
