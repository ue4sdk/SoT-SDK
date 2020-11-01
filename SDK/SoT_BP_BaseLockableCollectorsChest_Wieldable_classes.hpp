#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BaseLockableCollectorsChest_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseLockableCollectorsChest_Wieldable.BP_BaseLockableCollectorsChest_Wieldable_C
// 0x0018 (0x08B0 - 0x0898)
class ABP_BaseLockableCollectorsChest_Wieldable_C : public ABP_CollectorsChest_Wieldable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             LockSocketsRoot;                                          // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULockComponent*                              Lock;                                                     // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BaseLockableCollectorsChest_Wieldable.BP_BaseLockableCollectorsChest_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BaseLockableCollectorsChest_Wieldable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
