// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AmmoChest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AmmoChest.BP_AmmoChest_C.GetObjectDisplayName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_AmmoChest_C::GetObjectDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.GetObjectDisplayName");

	ABP_AmmoChest_C_GetObjectDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_AmmoChest.BP_AmmoChest_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_AmmoChest_C::GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.GetClosestInteractionPoint");

	ABP_AmmoChest_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_AmmoChest.BP_AmmoChest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmmoChest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.UserConstructionScript");

	ABP_AmmoChest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoChest.BP_AmmoChest_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmmoChest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.ReceiveBeginPlay");

	ABP_AmmoChest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Client
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoChest_C::Blueprint_OnInteract_Client(class AActor** InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Client");

	ABP_AmmoChest_C_Blueprint_OnInteract_Client_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Server
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoChest_C::Blueprint_OnInteract_Server(class AActor** InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Server");

	ABP_AmmoChest_C_Blueprint_OnInteract_Server_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmmoChest.BP_AmmoChest_C.ExecuteUbergraph_BP_AmmoChest
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoChest_C::ExecuteUbergraph_BP_AmmoChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmmoChest.BP_AmmoChest_C.ExecuteUbergraph_BP_AmmoChest");

	ABP_AmmoChest_C_ExecuteUbergraph_BP_AmmoChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
