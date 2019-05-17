// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TaleEventDispatcherProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TaleEventDispatcherProxy.BP_TaleEventDispatcherProxy_C.Broadcast
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TaleEventDispatcherProxy_C::Broadcast()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TaleEventDispatcherProxy.BP_TaleEventDispatcherProxy_C.Broadcast"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TaleEventDispatcherProxy.BP_TaleEventDispatcherProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TaleEventDispatcherProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TaleEventDispatcherProxy.BP_TaleEventDispatcherProxy_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TaleEventDispatcherProxy.BP_TaleEventDispatcherProxy_C.BroadcastToListeners__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TaleEventDispatcherProxy_C::BroadcastToListeners__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TaleEventDispatcherProxy.BP_TaleEventDispatcherProxy_C.BroadcastToListeners__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
