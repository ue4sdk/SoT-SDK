// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_TaleLockDelegateTrackerProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shroudbreaker_TaleLockDelegateTrackerProxy.BP_Shroudbreaker_TaleLockDelegateTrackerProxy_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULockComponent*          LockComponent                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shroudbreaker_TaleLockDelegateTrackerProxy_C::Initialise(class ULockComponent* LockComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_TaleLockDelegateTrackerProxy.BP_Shroudbreaker_TaleLockDelegateTrackerProxy_C.Initialise"));

	struct
	{
		class ULockComponent*          LockComponent;
	} params;

	params.LockComponent = LockComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_TaleLockDelegateTrackerProxy.BP_Shroudbreaker_TaleLockDelegateTrackerProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_TaleLockDelegateTrackerProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_TaleLockDelegateTrackerProxy.BP_Shroudbreaker_TaleLockDelegateTrackerProxy_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_TaleLockDelegateTrackerProxy.BP_Shroudbreaker_TaleLockDelegateTrackerProxy_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Shroudbreaker_TaleLockDelegateTrackerProxy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_TaleLockDelegateTrackerProxy.BP_Shroudbreaker_TaleLockDelegateTrackerProxy_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_TaleLockDelegateTrackerProxy.BP_Shroudbreaker_TaleLockDelegateTrackerProxy_C.Lock Opened
// (BlueprintCallable, BlueprintEvent)

void ABP_Shroudbreaker_TaleLockDelegateTrackerProxy_C::Lock_Opened()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_TaleLockDelegateTrackerProxy.BP_Shroudbreaker_TaleLockDelegateTrackerProxy_C.Lock Opened"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_TaleLockDelegateTrackerProxy.BP_Shroudbreaker_TaleLockDelegateTrackerProxy_C.ExecuteUbergraph_BP_Shroudbreaker_TaleLockDelegateTrackerProxy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Shroudbreaker_TaleLockDelegateTrackerProxy_C::ExecuteUbergraph_BP_Shroudbreaker_TaleLockDelegateTrackerProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_TaleLockDelegateTrackerProxy.BP_Shroudbreaker_TaleLockDelegateTrackerProxy_C.ExecuteUbergraph_BP_Shroudbreaker_TaleLockDelegateTrackerProxy"));

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
