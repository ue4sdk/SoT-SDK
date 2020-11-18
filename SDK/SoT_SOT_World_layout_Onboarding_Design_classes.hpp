#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SOT_World_layout_Onboarding_Design_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SOT_World_layout_Onboarding_Design.SOT_World_layout_Onboarding_Design_C
// 0x00A8 (0x0510 - 0x0468)
class ASOT_World_layout_Onboarding_Design_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       Onboarding_And;                                           // 0x0470(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Onboarding_Present;                                       // 0x04A8(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasFinishedMaidenVoyage;                                  // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldTimeLerp;                                           // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04E2(0x0002) MISSED OFFSET
	float                                              ElapsedLerpTime;                                          // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalLerpTime;                                            // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SunsetEnabled;                                            // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04ED(0x0003) MISSED OFFSET
	class ATriggerSphere*                              EndTrigger_ExecuteUbergraph_SOT_World_layout_Onboarding_Design_RefProperty;// 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_MaidenVoyage_EndMusicZone_C*             BP_MaidenVoyage_EndMusicZone_254_ExecuteUbergraph_SOT_World_layout_Onboarding_Design_RefProperty;// 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_MaidenVoyage_AnimatedPlayerShip_C*       BP_MaidenVoyage_AnimatedPlayerShip_53_ExecuteUbergraph_SOT_World_layout_Onboarding_Design_RefProperty;// 0x0500(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_LightingController_C*                    BP_LightingController_UniqueObjectNameForCooking_1001897709_RefProperty;// 0x0508(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SOT_World_layout_Onboarding_Design.SOT_World_layout_Onboarding_Design_C"));
		return ptr;
	}


	void ChangeTimeOfDay();
	void Hide_Player_UI();
	void Disable_Wind_VFX();
	void QuitGame();
	void DisablePlayerInput();
	void DisableShipInteractions();
	void ShowThirdPersonPlayer();
	void ReceiveBeginPlay();
	void OnEndTriggerOverlapForCinematic(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_SOT_World_layout_Onboarding_Design(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
