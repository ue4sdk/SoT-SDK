// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShip_CageLatch_03_a_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_LargeShip_CageLatch_03_a_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.GetClosestInteractionPoint"));

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


// Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LargeShip_CageLatch_03_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.OnAnimationStarted
// (Event, Protected, BlueprintEvent)

void ABP_LargeShip_CageLatch_03_a_C::OnAnimationStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.OnAnimationStarted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.OnAnimationCompleted
// (Event, Protected, BlueprintEvent)

void ABP_LargeShip_CageLatch_03_a_C::OnAnimationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.OnAnimationCompleted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.ExecuteUbergraph_BP_LargeShip_CageLatch_03_a
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LargeShip_CageLatch_03_a_C::ExecuteUbergraph_BP_LargeShip_CageLatch_03_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.ExecuteUbergraph_BP_LargeShip_CageLatch_03_a"));

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
