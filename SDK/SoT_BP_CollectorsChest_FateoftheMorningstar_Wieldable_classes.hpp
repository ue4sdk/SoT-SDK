#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CollectorsChest_FateoftheMorningstar_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CollectorsChest_FateoftheMorningstar_Wieldable.BP_CollectorsChest_FateoftheMorningstar_Wieldable_C
// 0x0029 (0x08A9 - 0x0880)
class ABP_CollectorsChest_FateoftheMorningstar_Wieldable_C : public ABP_BaseLockableCollectorsChest_Wieldable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem_Soul;                                      // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem_Closed;                                    // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem_CollectSoul;                               // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LockSocket;                                               // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SoulCollected;                                            // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CollectorsChest_FateoftheMorningstar_Wieldable.BP_CollectorsChest_FateoftheMorningstar_Wieldable_C"));
		return ptr;
	}


	void HasSouls(bool* Result);
	void CollectSouls();
	void UserConstructionScript();
	void BndEvt__OpenableItemComponent_K2Node_ComponentBoundEvent_15_OpenableOnClose__DelegateSignature();
	void BndEvt__OpenableItemComponent_K2Node_ComponentBoundEvent_34_OpenableOnOpen__DelegateSignature();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CollectorsChest_FateoftheMorningstar_Wieldable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
