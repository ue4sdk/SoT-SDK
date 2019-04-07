#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_OnShip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C
// 0x00F9 (0x0599 - 0x04A0)
class ABP_Shroudbreaker_OnShip_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMusicZoneComponent*                         MusicZone;                                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      ActivateShroudbreakerHandle;                              // 0x04B8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      DeactivateShroudbreakerHandle;                            // 0x0500(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      ShipDestroyedHandle;                                      // 0x0548(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      ParentShipActor;                                          // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               MusicZoneActive;                                          // 0x0598(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Shroudbreaker_OnShip.BP_Shroudbreaker_OnShip_C"));
		return ptr;
	}


	void OnRep_MusicZoneActive();
	void UnregisterShipEvent(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle);
	void GetObjMsgDispatcher(struct FObjectMessagingDispatcherHandle* Dispatcher, bool* Success);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnShroudbreakerActivated(const struct FShroudBreakerActivatedEvent& Ev);
	void OnShroudbreakerDeactivated(const struct FShroudBreakerDeactivatedEvent& Ev);
	void OnShipDestroyed(const struct FEventShipDestroyed& Ev);
	void ExecuteUbergraph_BP_Shroudbreaker_OnShip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
