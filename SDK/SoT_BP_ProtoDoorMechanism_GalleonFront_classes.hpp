#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ProtoDoorMechanism_GalleonFront_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C
// 0x0041 (0x0709 - 0x06C8)
class ABP_ProtoDoorMechanism_GalleonFront_C : public ADoorMechanism
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             OpenJumpToLocation;                                       // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             ClosedJumpToLocation;                                     // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             OpenKnockbackDirection;                                   // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             ClosedKnockbackDirection;                                 // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        InteractionPoint;                                         // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               OpenVolume;                                               // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               ClosedVolume;                                             // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableJumpToLocation;                                     // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProtoDoorMechanism_GalleonFront.BP_ProtoDoorMechanism_GalleonFront_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Blueprint_OnStarted();
	void Blueprint_OnStopped();
	void BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonFront(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
