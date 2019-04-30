// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_StatueLock_StarsOfAThief_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_StatueLock_StarsOfAThief.BP_StatueLock_StarsOfAThief_C.GetObjectDisplayName
// (HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_StatueLock_StarsOfAThief_C::GetObjectDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_StatueLock_StarsOfAThief.BP_StatueLock_StarsOfAThief_C.GetObjectDisplayName"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_StatueLock_StarsOfAThief.BP_StatueLock_StarsOfAThief_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_StatueLock_StarsOfAThief_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_StatueLock_StarsOfAThief.BP_StatueLock_StarsOfAThief_C.GetClosestInteractionPoint"));

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


// Function BP_StatueLock_StarsOfAThief.BP_StatueLock_StarsOfAThief_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_StatueLock_StarsOfAThief_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_StatueLock_StarsOfAThief.BP_StatueLock_StarsOfAThief_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_StatueLock_StarsOfAThief.BP_StatueLock_StarsOfAThief_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_StatueLock_StarsOfAThief_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_StatueLock_StarsOfAThief.BP_StatueLock_StarsOfAThief_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_StatueLock_StarsOfAThief.BP_StatueLock_StarsOfAThief_C.ExecuteUbergraph_BP_StatueLock_StarsOfAThief
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_StatueLock_StarsOfAThief_C::ExecuteUbergraph_BP_StatueLock_StarsOfAThief(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_StatueLock_StarsOfAThief.BP_StatueLock_StarsOfAThief_C.ExecuteUbergraph_BP_StatueLock_StarsOfAThief"));

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
