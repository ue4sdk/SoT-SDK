#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TaleLockDelegateTrackerProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TaleLockDelegateTrackerProxy.BP_TaleLockDelegateTrackerProxy_C
// 0x0011 (0x04D1 - 0x04C0)
class ABP_TaleLockDelegateTrackerProxy_C : public ABP_TaleEventDispatcherProxy_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULockComponent*                              TargetLockComponent;                                      // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInitialised;                                            // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TaleLockDelegateTrackerProxy.BP_TaleLockDelegateTrackerProxy_C"));
		return ptr;
	}


	void Initialise(class ULockComponent* LockComponent);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Lock_Opened();
	void ExecuteUbergraph_BP_TaleLockDelegateTrackerProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
