#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_MaidenVoyage_ShipChapter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C
// 0x0228 (0x06C0 - 0x0498)
class ABP_PromptActor_MaidenVoyage_ShipChapter_C : public ABP_PromptActorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Prompt_MaidenVoyage_ShipChapter_C*       PromptCoordinator_ShipChapter;                            // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WieldedItemType;                                          // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RequiredInput;                                            // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPrioritisedPromptWithHandle                Prompt_EquipItem;                                         // 0x04B8(0x0068) (Edit, BlueprintVisible)
	struct FPrioritisedPromptWithHandle                Prompt_UseItem;                                           // 0x0520(0x0068) (Edit, BlueprintVisible)
	struct FObjectMessagingHandle                      ShipHandle;                                               // 0x0588(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEventWaterAmountChanged                    Event;                                                    // 0x05D0(0x0004) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                               WaterThrowEvent;                                          // 0x05D4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05D5(0x0003) MISSED OFFSET
	struct FObjectMessagingHandle                      BucketthrowHandle;                                        // 0x05D8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DisplayPrompts;                                           // 0x0620(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	struct FObjectMessagingHandle                      RepairHandle;                                             // 0x0628(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                NumRepairs;                                               // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0674(0x0004) MISSED OFFSET
	struct FObjectMessagingHandle                      ShipSunkHandle;                                           // 0x0678(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PromptActor_MaidenVoyage_ShipChapter.BP_PromptActor_MaidenVoyage_ShipChapter_C"));
		return ptr;
	}


	void OnRep_DisplayPrompts();
	void SetDisplayPrompts(bool InDisplayPrompts);
	void NewFunction_1();
	void OnRep_WaterThrowEvent();
	void OnRep_Event();
	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void CustomEvent_1(const struct FOnLiquidProjectileImpactEvent& Event);
	void WaterAmountChanged();
	void WaterProjectileOffShip();
	void WaterProjectileOnShip();
	void SetStateNotOnShip();
	void IncrementNumRepairs();
	void OnShipSunk(const struct FEventShipBecameUseless& Event);
	void SetShipSunk();
	void RegisterMastRepairEvents(class AShip* Ship);
	void OnRepair1(int DamageLevel);
	void OnRepair2(int DamageLevel);
	void OnRepair3(int DamageLevel);
	void ExecuteUbergraph_BP_PromptActor_MaidenVoyage_ShipChapter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
