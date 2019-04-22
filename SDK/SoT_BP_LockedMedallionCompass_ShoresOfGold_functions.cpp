// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LockedMedallionCompass_ShoresOfGold_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LockedMedallionCompass_ShoresOfGold.BP_LockedMedallionCompass_ShoresOfGold_C.GetObjectDisplayName
// (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_LockedMedallionCompass_ShoresOfGold_C::GetObjectDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LockedMedallionCompass_ShoresOfGold.BP_LockedMedallionCompass_ShoresOfGold_C.GetObjectDisplayName"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_LockedMedallionCompass_ShoresOfGold.BP_LockedMedallionCompass_ShoresOfGold_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_LockedMedallionCompass_ShoresOfGold_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LockedMedallionCompass_ShoresOfGold.BP_LockedMedallionCompass_ShoresOfGold_C.GetClosestInteractionPoint"));

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


// Function BP_LockedMedallionCompass_ShoresOfGold.BP_LockedMedallionCompass_ShoresOfGold_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LockedMedallionCompass_ShoresOfGold_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LockedMedallionCompass_ShoresOfGold.BP_LockedMedallionCompass_ShoresOfGold_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LockedMedallionCompass_ShoresOfGold.BP_LockedMedallionCompass_ShoresOfGold_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_LockedMedallionCompass_ShoresOfGold_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LockedMedallionCompass_ShoresOfGold.BP_LockedMedallionCompass_ShoresOfGold_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LockedMedallionCompass_ShoresOfGold.BP_LockedMedallionCompass_ShoresOfGold_C.ExecuteUbergraph_BP_LockedMedallionCompass_ShoresOfGold
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LockedMedallionCompass_ShoresOfGold_C::ExecuteUbergraph_BP_LockedMedallionCompass_ShoresOfGold(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LockedMedallionCompass_ShoresOfGold.BP_LockedMedallionCompass_ShoresOfGold_C.ExecuteUbergraph_BP_LockedMedallionCompass_ShoresOfGold"));

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
