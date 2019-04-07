// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Innkeeper_RevengeOfTheMorningstar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Innkeeper_RevengeOfTheMorningstar.BP_Innkeeper_RevengeOfTheMorningstar_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_Innkeeper_RevengeOfTheMorningstar_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Innkeeper_RevengeOfTheMorningstar.BP_Innkeeper_RevengeOfTheMorningstar_C.GetClosestInteractionPoint"));

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


// Function BP_Innkeeper_RevengeOfTheMorningstar.BP_Innkeeper_RevengeOfTheMorningstar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Innkeeper_RevengeOfTheMorningstar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Innkeeper_RevengeOfTheMorningstar.BP_Innkeeper_RevengeOfTheMorningstar_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Innkeeper_RevengeOfTheMorningstar.BP_Innkeeper_RevengeOfTheMorningstar_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Innkeeper_RevengeOfTheMorningstar_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Innkeeper_RevengeOfTheMorningstar.BP_Innkeeper_RevengeOfTheMorningstar_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Innkeeper_RevengeOfTheMorningstar.BP_Innkeeper_RevengeOfTheMorningstar_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Innkeeper_RevengeOfTheMorningstar_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Innkeeper_RevengeOfTheMorningstar.BP_Innkeeper_RevengeOfTheMorningstar_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Innkeeper_RevengeOfTheMorningstar.BP_Innkeeper_RevengeOfTheMorningstar_C.ExecuteUbergraph_BP_Innkeeper_RevengeOfTheMorningstar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Innkeeper_RevengeOfTheMorningstar_C::ExecuteUbergraph_BP_Innkeeper_RevengeOfTheMorningstar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Innkeeper_RevengeOfTheMorningstar.BP_Innkeeper_RevengeOfTheMorningstar_C.ExecuteUbergraph_BP_Innkeeper_RevengeOfTheMorningstar"));

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
