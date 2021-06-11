// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AmmoChest_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmmoChest.BP_AmmoChest_C.GetObjectDisplayName"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_AmmoChest.BP_AmmoChest_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_AmmoChest_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmmoChest.BP_AmmoChest_C.GetClosestInteractionPoint"));

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


// Function BP_AmmoChest.BP_AmmoChest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmmoChest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmmoChest.BP_AmmoChest_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AmmoChest.BP_AmmoChest_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmmoChest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmmoChest.BP_AmmoChest_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Client
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoChest_C::Blueprint_OnInteract_Client(class AActor* InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Client"));

	struct
	{
		class AActor*                  InInteractor;
	} params;

	params.InInteractor = InInteractor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Server
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoChest_C::Blueprint_OnInteract_Server(class AActor* InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmmoChest.BP_AmmoChest_C.Blueprint_OnInteract_Server"));

	struct
	{
		class AActor*                  InInteractor;
	} params;

	params.InInteractor = InInteractor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AmmoChest.BP_AmmoChest_C.ExecuteUbergraph_BP_AmmoChest
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmmoChest_C::ExecuteUbergraph_BP_AmmoChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AmmoChest.BP_AmmoChest_C.ExecuteUbergraph_BP_AmmoChest"));

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
