// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShip_ServingHatch_Left_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_MediumShip_ServingHatch_Left_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.GetClosestInteractionPoint"));

	ABP_MediumShip_ServingHatch_Left_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	UObject::ProcessEvent(fn, &params);

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MediumShip_ServingHatch_Left_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.UserConstructionScript"));

	ABP_MediumShip_ServingHatch_Left_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.OnAnimationStarted
// (Event, Protected, BlueprintEvent)

void ABP_MediumShip_ServingHatch_Left_C::OnAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.OnAnimationStarted"));

	ABP_MediumShip_ServingHatch_Left_C_OnAnimationStarted_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.OnAnimationCompleted
// (Event, Protected, BlueprintEvent)

void ABP_MediumShip_ServingHatch_Left_C::OnAnimationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.OnAnimationCompleted"));

	ABP_MediumShip_ServingHatch_Left_C_OnAnimationCompleted_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.ExecuteUbergraph_BP_MediumShip_ServingHatch_Left
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MediumShip_ServingHatch_Left_C::ExecuteUbergraph_BP_MediumShip_ServingHatch_Left(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.ExecuteUbergraph_BP_MediumShip_ServingHatch_Left"));

	ABP_MediumShip_ServingHatch_Left_C_ExecuteUbergraph_BP_MediumShip_ServingHatch_Left_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
