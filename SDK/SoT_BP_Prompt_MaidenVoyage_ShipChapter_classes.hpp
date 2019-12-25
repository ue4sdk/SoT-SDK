#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_MaidenVoyage_ShipChapter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_MaidenVoyage_ShipChapter.BP_Prompt_MaidenVoyage_ShipChapter_C
// 0x1010 (0x1128 - 0x0118)
class UBP_Prompt_MaidenVoyage_ShipChapter_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FPrioritisedPromptWithHandle                Prompt_BoardShip;                                         // 0x0120(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_UseSailRope1;                                      // 0x0188(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_RaiseMast;                                         // 0x01F0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_EquipWood;                                         // 0x0258(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_GetWood;                                           // 0x02C0(0x0068) (Edit, BlueprintVisible)
	struct FPrioritisedPromptWithHandle                Prompt_UseWood1;                                          // 0x0328(0x0068) (Edit, BlueprintVisible)
	struct FPrioritisedPromptWithHandle                Prompt_EquipBucket;                                       // 0x0390(0x0068) (Edit, BlueprintVisible)
	struct FPrioritisedPromptWithHandle                Prompt_RaiseAnchor;                                       // 0x03F8(0x0068) (Edit, BlueprintVisible)
	struct FPrioritisedPromptWithHandle                Prompt_UseSailRope2;                                      // 0x0460(0x0068) (Edit, BlueprintVisible)
	struct FPrioritisedPromptWithHandle                Prompt_UseSailRopeAgain;                                  // 0x04C8(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_OpenRadial;                                        // 0x0530(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_EmptyBucket;                                       // 0x0598(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_ScoopWater;                                        // 0x0600(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_Use_Wood_3;                                        // 0x0668(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_Use_Wood_2;                                        // 0x06D0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_UseWheelToSteer;                                   // 0x0738(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_LowerSail;                                         // 0x07A0(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_DockWithAnchor;                                    // 0x0808(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_CentreWheel;                                       // 0x0870(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      RequiredInput;                                            // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WieldedBucketItemType;                                    // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WieldedWoodItemTpe;                                       // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FObjectMessagingHandle                      Handle_OnShip;                                            // 0x08F0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_RelinquishSailRope;                                // 0x0938(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_UseSailRope1;                                      // 0x0980(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_MastRaised;                                        // 0x09C8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_WoodStowed;                                        // 0x0A10(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_ShowRadial;                                        // 0x0A58(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_WoodEquipped;                                      // 0x0AA0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_MastRepaired1;                                     // 0x0AE8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_MastRepaired2;                                     // 0x0B30(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_MastRepaired3;                                     // 0x0B78(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_BucketEquipped;                                    // 0x0BC0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_WaterInBucket;                                     // 0x0C08(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_WaterOffShip;                                      // 0x0C50(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_DockWithAnchor;                                    // 0x0C98(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_ReleaseAnchor;                                     // 0x0CE0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_AnchorRaised;                                      // 0x0D28(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_UsedSailRope2;                                     // 0x0D70(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_SailsLowered;                                      // 0x0DB8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_UseWheel;                                          // 0x0E00(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_CentreWheel;                                       // 0x0E48(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_OnShip;                                             // 0x0E90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_UsedSailRope1;                                      // 0x0E91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_MastRaised;                                         // 0x0E92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_RadialOpen;                                         // 0x0E93(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_WoodAcquired;                                       // 0x0E94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_WoodEquipped;                                       // 0x0E95(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_MastRepaired1;                                      // 0x0E96(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_MastRepaired2;                                      // 0x0E97(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_MastRepaired3;                                      // 0x0E98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_BucketEquipped;                                     // 0x0E99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_WaterBailedFromShip;                                // 0x0E9A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_WaterOffShip;                                       // 0x0E9B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_AnchorRaised;                                       // 0x0E9C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_UsedSailRope2;                                      // 0x0E9D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_SailsLowered;                                       // 0x0E9E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_UsedWheel;                                          // 0x0E9F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_AnchorUsed;                                         // 0x0EA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_WheelCentered;                                      // 0x0EA1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0EA2(0x0002) MISSED OFFSET
	int                                                NumRepairs;                                               // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumSailsUsed;                                             // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RequiredRadialID;                                         // 0x0EAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MastRepairSequenceComplete;                               // 0x0EB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BailWaterSequenceComplete;                                // 0x0EB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SetSailSequenceComplete;                                  // 0x0EB2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0EB3(0x0005) MISSED OFFSET
	struct FObjectMessagingHandle                      Handle_MastFallen;                                        // 0x0EB8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_HideRadial;                                        // 0x0F00(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_BucketStowed;                                      // 0x0F48(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_CapstanReleased;                                   // 0x0F90(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_SailsRaised;                                       // 0x0FD8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShouldDisplayPrompts;                                     // 0x1020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamageWarningShown;                                       // 0x1021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x1022(0x0006) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt_ShipCanBeDamaged;                                  // 0x1028(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_ShipSunk;                                          // 0x1090(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               State_ShipSunk;                                           // 0x10D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerOnShip;                                             // 0x10D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x10DA(0x0006) MISSED OFFSET
	struct FObjectMessagingHandle                      Handle_OffShip;                                           // 0x10E0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_MaidenVoyage_ShipChapter.BP_Prompt_MaidenVoyage_ShipChapter_C"));
		return ptr;
	}


	void OnWheelCentredFunc();
	void OnPlayerUseWheelFunc(const struct FEventPlayerTakenControlOfControllable& EventPlayerTakenControlOfControllable);
	void OnPlayerRaisedSailsFunc();
	void OnPlayerLowerSailsFunc();
	void OnCapstanRaisedFunc();
	void OnDockWithCapstanFunc();
	void OnPlayerScoopWaterFunc(const struct FEventWaterAmountChanged& EventWaterAmountChanged);
	void OnBucketWieldFunc(const struct FEventObjectWielded& EventObjectWielded);
	void OnHideInventoryFunc();
	void OnShowInventoryFunc(const struct FShowRadialInventory& ShowRadialInventory);
	void OnMastFallenFunc();
	void OnMastRaisedFunc();
	void OnRelinquishSailRopeFunc(const struct FEventPlayerReliquishedControlOfControllable& EventPlayerReliquishedControlOfControllable);
	void OnUseSailRope1Func(const struct FEventPlayerTakenControlOfControllable& EventPlayerTakenControlOfControllable);
	void OnReleaseCapstanFunc();
	void OnWoodStowedFunc(const struct FEventObjectStowed& EventObjectStowed);
	void OnWoodWieldFunc(const struct FEventObjectWielded& EventObjectWielded);
	void OnPlayerBoardShipFunc();
	void SetStateShipSunk(bool InShipSunk);
	void IncrementNumRepairs(int InNumRepairs);
	void SetStateOnShip(bool InStateOnShip);
	void SetShouldDisplayPrompts(bool InShouldDisplayPrompts);
	void BucketThrowImpact(bool WaterOffShip);
	void WaterAmountChanged();
	void Evaluate();
	void PostInitialize();
	void UnregisterHandles_Copy();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void OnPlayerLeaveShip(const struct FEventExitedShip& Event);
	void OnPlayerBoadShip(const struct FEventEnteredShip& Event);
	void OnRelinquishSailRope(const struct FEventPlayerReliquishedControlOfControllable& Event);
	void OnUseSailRope1(const struct FEventPlayerTakenControlOfControllable& Event);
	void OnMastFallen(const struct FMastReachedFallenPositionEvent& Event);
	void OnMastRaised(const struct FMastReachedUprightPositionEvent& Event);
	void OnWoodStowed(const struct FEventObjectStowed& Event);
	void OnWoodWield(const struct FEventObjectWielded& Event);
	void OnPlayerScoopWater(const struct FEventWaterAmountChanged& Event);
	void OnPlayerRaisedSails(const struct FEventSailFullyRaised& Event);
	void OnPlayerLowerSails(const struct FEventSailFullyLowered& Event);
	void OnPlayerUseWheel(const struct FEventPlayerTakenControlOfControllable& Event);
	void OnBucketWield(const struct FEventObjectWielded& NewParam);
	void OnDockWithCapstan(const struct FEventPlayerCapstanUsageStart& Event);
	void OnCaptanRaised(const struct FEventCapstanFullyRaised& Event);
	void OnWheelCentered(const struct FEventWheelCentered& Event);
	void OnHideInventory(const struct FHideRadialInventory& Event);
	void OnShowInventory(const struct FShowRadialInventory& Event);
	void OnReleaseCapstan(const struct FEventCapstanReleased& Event);
	void ExecuteUbergraph_BP_Prompt_MaidenVoyage_ShipChapter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
