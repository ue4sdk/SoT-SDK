// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CapstanArm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CapstanArm.BP_CapstanArm_C.GetLookAtPosBasisSpace
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector ABP_CapstanArm_C::GetLookAtPosBasisSpace()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CapstanArm.BP_CapstanArm_C.GetLookAtPosBasisSpace"));

	ABP_CapstanArm_C_GetLookAtPosBasisSpace_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CapstanArm.BP_CapstanArm_C.GetFrontFacingVector
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector ABP_CapstanArm_C::GetFrontFacingVector()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CapstanArm.BP_CapstanArm_C.GetFrontFacingVector"));

	ABP_CapstanArm_C_GetFrontFacingVector_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CapstanArm.BP_CapstanArm_C.DoesRequireFacingFront
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CapstanArm_C::DoesRequireFacingFront()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CapstanArm.BP_CapstanArm_C.DoesRequireFacingFront"));

	ABP_CapstanArm_C_DoesRequireFacingFront_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CapstanArm.BP_CapstanArm_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDockableInfo                  ReturnValue                    (Parm, OutParm, ReturnParm)

FDockableInfo ABP_CapstanArm_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CapstanArm.BP_CapstanArm_C.GetDockableInfo"));

	ABP_CapstanArm_C_GetDockableInfo_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CapstanArm.BP_CapstanArm_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector ABP_CapstanArm_C::GetClosestInteractionPoint(const FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CapstanArm.BP_CapstanArm_C.GetClosestInteractionPoint"));

	ABP_CapstanArm_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	UObject::ProcessEvent(fn, &params);

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_CapstanArm.BP_CapstanArm_C.GetLookAtPos
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector ABP_CapstanArm_C::GetLookAtPos()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CapstanArm.BP_CapstanArm_C.GetLookAtPos"));

	ABP_CapstanArm_C_GetLookAtPos_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CapstanArm.BP_CapstanArm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CapstanArm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CapstanArm.BP_CapstanArm_C.UserConstructionScript"));

	ABP_CapstanArm_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
