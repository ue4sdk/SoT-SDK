#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BaseLockableCollectorsChest_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C
// 0x0019 (0x0969 - 0x0950)
class ABP_BaseLockableCollectorsChest_Proxy_C : public ABP_CollectorsChest_Proxy_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             LockSocketsRoot;                                          // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULockComponent*                              Lock;                                                     // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Open_After_Unlock;                                        // 0x0968(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BaseLockableCollectorsChest_Proxy.BP_BaseLockableCollectorsChest_Proxy_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Lock_K2Node_ComponentBoundEvent_12_OnLockOpenedDelegate__DelegateSignature();
	void ExecuteUbergraph_BP_BaseLockableCollectorsChest_Proxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
