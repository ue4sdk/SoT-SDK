#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_MaidenVoyage_UseIslandCannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C
// 0x0472 (0x058A - 0x0118)
class UBP_Prompt_MaidenVoyage_UseIslandCannon_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               State_CannonFired;                                        // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_DockWithCannon;                                     // 0x0121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_BallsInInventory;                                   // 0x0122(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_LoadCannon;                                         // 0x0123(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_UseCannon;                                          // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               State_AimedCannon;                                        // 0x0125(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0126(0x0002) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt_FireCannon;                                        // 0x0128(0x0068) (Edit, BlueprintVisible)
	struct FPrioritisedPromptWithHandle                Prompt_UseCannon;                                         // 0x0190(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_LoadCannon;                                        // 0x01F8(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_AimCannon;                                         // 0x0260(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrioritisedPromptWithHandle                Prompt_GetBalls;                                          // 0x02C8(0x0068) (Edit, BlueprintVisible)
	struct FObjectMessagingHandle                      Handle_GetBalls;                                          // 0x0330(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_FireCannon;                                        // 0x0378(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_UseItem;                                           // 0x03C0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_LoadCannon;                                        // 0x0408(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_DockWithCannon;                                    // 0x0450(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      RequiredInput;                                            // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WieldedItemType;                                          // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Sword_WieldedItemType;                                    // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FObjectMessagingHandle                      Handle_AimCannonYaw;                                      // 0x04B0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_UndockWithCannon;                                  // 0x04F8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Handle_AimCannonPitch;                                    // 0x0540(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BlockEvaluation;                                          // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisplayedAimPrompt;                                       // 0x0589(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_MaidenVoyage_UseIslandCannon.BP_Prompt_MaidenVoyage_UseIslandCannon_C"));
		return ptr;
	}


	void OnCannonFiredFunc(const struct FEventCannonFired& EventCannonFired);
	void OnLoadCannonFunc();
	void OnLeaveCannonFunc(const struct FEventPlayerReliquishedControlOfControllable& EventPlayerReliquishedControlOfControllable);
	void OnDockWithCannonFunc(const struct FEventPlayerTakenControlOfControllable& EventPlayerTakenControlOfControllable);
	void OnWieldFunc(const struct FEventObjectWielded& EventObjectWielded);
	void PostInitialize();
	void Evaluate();
	void UnregisterHandles();
	void RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher);
	void OnWield(const struct FEventObjectWielded& Event);
	void OnCannonFired(const struct FEventCannonFired& Event);
	void OnLoadCannon(const struct FEventLoadableObjectLoaded& Event);
	void OnDockWithCannon(const struct FEventPlayerTakenControlOfControllable& Event);
	void OnLeaveCannon(const struct FEventPlayerReliquishedControlOfControllable& Event);
	void ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
