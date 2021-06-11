// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CollectorsChest_Proxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.OnRep_HideWaterOcclusionVolume
// (BlueprintCallable, BlueprintEvent)

void ABP_CollectorsChest_Proxy_C::OnRep_HideWaterOcclusionVolume()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.OnRep_HideWaterOcclusionVolume"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.IsAttachedToShip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CollectorsChest_Proxy_C::IsAttachedToShip()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.IsAttachedToShip"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_CollectorsChest_Proxy_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.GetClosestInteractionPoint"));

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


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CollectorsChest_Proxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_CollectorsChest_Proxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CollectorsChest_Proxy_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ItemDropped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventWieldableItemDropped EventParam                     (Parm)

void ABP_CollectorsChest_Proxy_C::ItemDropped(const struct FEventWieldableItemDropped& EventParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ItemDropped"));

	struct
	{
		struct FEventWieldableItemDropped EventParam;
	} params;

	params.EventParam = EventParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ExecuteUbergraph_BP_CollectorsChest_Proxy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CollectorsChest_Proxy_C::ExecuteUbergraph_BP_CollectorsChest_Proxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_Proxy.BP_CollectorsChest_Proxy_C.ExecuteUbergraph_BP_CollectorsChest_Proxy"));

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
