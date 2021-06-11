// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_WindowHatch_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_SmallShip_WindowHatch_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.GetClosestInteractionPoint"));

	struct
	{
		struct FVector                 ReferencePosition;
		float                          OutInteractionPointRadius;
		struct FVector                 ReturnValue;
	} params;

	params.ReferencePosition = ReferencePosition;

	UObject::ProcessEvent(fn, &params);

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SmallShip_WindowHatch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationStarted
// (Event, Protected, BlueprintEvent)

void ABP_SmallShip_WindowHatch_C::OnAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationStarted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationCompleted
// (Event, Protected, BlueprintEvent)

void ABP_SmallShip_WindowHatch_C::OnAnimationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.OnAnimationCompleted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.ExecuteUbergraph_BP_SmallShip_WindowHatch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallShip_WindowHatch_C::ExecuteUbergraph_BP_SmallShip_WindowHatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallShip_WindowHatch.BP_SmallShip_WindowHatch_C.ExecuteUbergraph_BP_SmallShip_WindowHatch"));

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
