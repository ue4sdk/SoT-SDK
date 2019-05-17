// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CollectorsChest_FateofTheMorningstar_Proxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.HasSouls
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CollectorsChest_FateofTheMorningstar_Proxy_C::HasSouls(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.HasSouls"));

	struct
	{
		bool                           Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.FreeSouls
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CollectorsChest_FateofTheMorningstar_Proxy_C::FreeSouls()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.FreeSouls"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CollectorsChest_FateofTheMorningstar_Proxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.BndEvt__OpenableItemComponent_K2Node_ComponentBoundEvent_48_OpenableOnOpen__DelegateSignature
// (BlueprintEvent)

void ABP_CollectorsChest_FateofTheMorningstar_Proxy_C::BndEvt__OpenableItemComponent_K2Node_ComponentBoundEvent_48_OpenableOnOpen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.BndEvt__OpenableItemComponent_K2Node_ComponentBoundEvent_48_OpenableOnOpen__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.BndEvt__OpenableItemComponent_K2Node_ComponentBoundEvent_51_OpenableOnClose__DelegateSignature
// (BlueprintEvent)

void ABP_CollectorsChest_FateofTheMorningstar_Proxy_C::BndEvt__OpenableItemComponent_K2Node_ComponentBoundEvent_51_OpenableOnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.BndEvt__OpenableItemComponent_K2Node_ComponentBoundEvent_51_OpenableOnClose__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_CollectorsChest_FateofTheMorningstar_Proxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.ExecuteUbergraph_BP_CollectorsChest_FateofTheMorningstar_Proxy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CollectorsChest_FateofTheMorningstar_Proxy_C::ExecuteUbergraph_BP_CollectorsChest_FateofTheMorningstar_Proxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C.ExecuteUbergraph_BP_CollectorsChest_FateofTheMorningstar_Proxy"));

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
