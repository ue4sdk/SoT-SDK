// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BaseLockableCollectorsChest_Proxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseLockableCollectorsChest_Proxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BaseLockableCollectorsChest_Proxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.BndEvt__Lock_K2Node_ComponentBoundEvent_12_OnLockOpenedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_BaseLockableCollectorsChest_Proxy_C::BndEvt__Lock_K2Node_ComponentBoundEvent_12_OnLockOpenedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.BndEvt__Lock_K2Node_ComponentBoundEvent_12_OnLockOpenedDelegate__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.ExecuteUbergraph_BP_BaseLockableCollectorsChest_Proxy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseLockableCollectorsChest_Proxy_C::ExecuteUbergraph_BP_BaseLockableCollectorsChest_Proxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C.ExecuteUbergraph_BP_BaseLockableCollectorsChest_Proxy"));

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
