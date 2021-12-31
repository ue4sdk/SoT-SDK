#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PiratePreview_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PiratePreview.BP_PiratePreview_C
// 0x00D8 (0x0890 - 0x07B8)
class ABP_PiratePreview_C : public APiratePreviewActor
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x07B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UArrowComponent*                                   Camera_SideView;                                          // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Camera_ProfileImage;                                      // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Head_old;                                                 // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Camera_Hat;                                               // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Camera_Gloves;                                            // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Camera_Boots;                                             // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Camera_PegLeg;                                            // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Camera_Hook;                                              // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Camera_Glove;                                             // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Camera_Torso;                                             // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Camera_Mid;                                               // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Camera_Legs;                                              // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Camera_Feet;                                              // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Camera_Head;                                              // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UArrowComponent*                                   Camera_Default;                                           // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              ChildActor;                                               // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USkeletalMeshComponent*                            HiddenDftMesh;                                            // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USkeletalMeshComponent*                            PirateMesh;                                               // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCameraComponent*                                  Camera;                                                   // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USceneComponent*                                   DefaultSceneRoot;                                         // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FScriptMulticastDelegate                           PreviewBusy;                                              // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	FScriptMulticastDelegate                           PreviewReady;                                             // 0x0870(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	FScriptMulticastDelegate                           PreviewShutdown;                                          // 0x0880(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PiratePreview.BP_PiratePreview_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PreviewBusy_Event(const FPiratePreviewBusyEvent& Data);
	void PreviewReady_Event(const FPiratePreviewReadyEvent& Data);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_PiratePreview(int EntryPoint);
	void PreviewShutdown__DelegateSignature(const FPiratePreviewShutdownEvent& Data);
	void PreviewReady__DelegateSignature(const FPiratePreviewReadyEvent& Data);
	void PreviewBusy__DelegateSignature(const FPiratePreviewBusyEvent& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
