#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CollectorsChest_FateofTheMorningstar_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C
// 0x006F (0x09D8 - 0x0969)
class ABP_CollectorsChest_FateofTheMorningstar_Proxy_C : public ABP_BaseLockableCollectorsChest_Proxy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0969(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem_CollectSoul;                               // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem_Soul;                                      // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem_Closed;                                    // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      SoulCollectedEventHandle;                                 // 0x0990(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CollectorsChest_FateofTheMorningstar_Proxy.BP_CollectorsChest_FateofTheMorningstar_Proxy_C"));
		return ptr;
	}


	void HasSouls(bool* Result);
	void FreeSouls();
	void UserConstructionScript();
	void BndEvt__OpenableItemComponent_K2Node_ComponentBoundEvent_48_OpenableOnOpen__DelegateSignature();
	void BndEvt__OpenableItemComponent_K2Node_ComponentBoundEvent_51_OpenableOnClose__DelegateSignature();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CollectorsChest_FateofTheMorningstar_Proxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
