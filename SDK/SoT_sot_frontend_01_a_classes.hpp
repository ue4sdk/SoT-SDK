#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass sot_frontend_01_a.sot_frontend_01_a_C
// 0x0080 (0x0518 - 0x0498)
class Asot_frontend_01_a_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPirateSelector*                             PirateUI;                                                 // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ZoomIn;                                                   // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Rotation;                                                 // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Selected;                                                 // 0x04AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04AB(0x0001) MISSED OFFSET
	float                                              initTime;                                                 // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              rotFactor;                                                // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ZoomOut;                                                  // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               initHighlight;                                            // 0x04B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04B6(0x0002) MISSED OFFSET
	int                                                charSlotID;                                               // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	TArray<class ABP_PirateGenerator_LineUp_C*>        pirateLineUpRef;                                          // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                lastCharSlotID;                                           // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               zoomOutDone;                                              // 0x04D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               zoomDone;                                                 // 0x04D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x04D6(0x0002) MISSED OFFSET
	class UBP_Anim_CharacterSelect_C*                  pirateLineUpAnimgraph;                                    // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     selectedPirateLoc;                                        // 0x04E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    selectedPirateRot;                                        // 0x04EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PiratesInitialized;                                       // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PirateSelected;                                           // 0x04F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mouseDown;                                                // 0x04FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mouseDragging;                                            // 0x04FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mouseStartX;                                              // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_CarouselCam_C*                           BP_CarouselCam_C_2_ExecuteUbergraph_sot_frontend_01_a_RefProperty;// 0x0500(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               MatineeActor_PirateSelect_ExecuteUbergraph_sot_frontend_01_a_RefProperty;// 0x0508(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_CarouselCam_C*                           BP_CarouselCam_C_2_UniqueObjectNameForCooking_232772163_RefProperty;// 0x0510(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass sot_frontend_01_a.sot_frontend_01_a_C");
		return ptr;
	}


	void Get_Pirate_Selector_Component(class UPirateSelector** PirateSelectorComponent);
	void GetFrontendCameraComponent(class UFrontendCameraComponent** Camera_Component);
	void ResetLineUpPirates();
	void RefreshCharSlotStatus();
	void SetCharSlotId(int NewCharSlotID);
	void PirateHighlight(float Time);
	void GetSelectedPirate(class ABP_PirateGenerator_LineUp_C** Item);
	void GetPirateLineup(class ABP_PirateGenerator_LineUpUI_C** Item);
	void InpActEvt_FrontendTavernSelect_UniqueObjectNameForCooking_1729007687(const struct FKey& Key);
	void InpActEvt_FrontendTavernNextPage_UniqueObjectNameForCooking_1729007686(const struct FKey& Key);
	void K2Node_MatineeController_5_Stop();
	void K2Node_MatineeController_5_Pause();
	void K2Node_MatineeController_5_Start();
	void K2Node_MatineeController_5_Finished();
	void InpActEvt_FrontendTavernChangeProfile_UniqueObjectNameForCooking_1729007685(const struct FKey& Key);
	void InpActEvt_FrontendTavernFavourite_UniqueObjectNameForCooking_1729007684(const struct FKey& Key);
	void InpActEvt_FrontendTavernQuitGame_UniqueObjectNameForCooking_1729007683(const struct FKey& Key);
	void InpAxisEvt_FrontendTavernRotate_K2Node_InputAxisEvent_22(float AxisValue);
	void ReceiveBeginPlay();
	void BeginCelebration();
	void pirateSelectCam();
	void showShipSelectPirate();
	void reinstateSelectedPirateLoc();
	void StartGeneratingPirates();
	void SelectionCancelled();
	void SelectPirateButtonPressed();
	void RefreshPiratesButtonPressed();
	void FavoritePirateButtonPressed();
	void ReceiveTick(float DeltaSeconds);
	void PiratesInitializedEvent();
	void StartPirateCreationAnimation();
	void OnLeavingSelectionState();
	void ExecuteUbergraph_sot_frontend_01_a(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
