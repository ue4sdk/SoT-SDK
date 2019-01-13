#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CarouselCam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CarouselCam.BP_CarouselCam_C
// 0x028D (0x071D - 0x0490)
class ABP_CarouselCam_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             lockedIcon07;                                             // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             lockedIcon06;                                             // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             lockedIcon05;                                             // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             lockedIcon04;                                             // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             lockedIcon03;                                             // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             lockedIcon02;                                             // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             lockedIcon01;                                             // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             lockedIcon00;                                             // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         charLight_floor_Select_SpotL;                             // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         charLight_rear_Select_SpotL;                              // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         charLight_left_Select_SpotL;                              // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         charLight_right_Select_SpotL;                             // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         charLight_right_Far_SpotL;                                // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         charLight_rear_Far_SpotL;                                 // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         charLight_floor_Far_SpotL;                                // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         charLight_left_Far_SpotL;                                 // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         charLight_floor_HighL_SpotL;                              // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         charLight_rear_HighL_SpotL;                               // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         charLight_left_HighL_SpotL;                               // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         charLight_right_HighL_SpotL;                              // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Lights;                                                   // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        _camAim;                                                  // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    camAimRot;                                                // 0x0558(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	class UCurveFloat*                                 camSpeed;                                                 // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              initTime;                                                 // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Timespan;                                                 // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currTime;                                                 // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camAimRotZ;                                               // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              rotPerChar;                                               // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeSpan;                                              // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              rotOverTime;                                              // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               rotMatch;                                                 // 0x058C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	class UCurveFloat*                                 camZoom;                                                  // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              selectedZoomDist;                                         // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              zoomResult;                                               // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     initCamLoc;                                               // 0x05A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              startZoomDist;                                            // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camAimRot_1;                                              // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camAimRot_delta;                                          // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camRotationFactor;                                        // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rotPerChar_userSet;                                       // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              endZoomDist;                                              // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              highlightZoomDist;                                        // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IdleTime;                                                 // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxIdleTime;                                              // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               idleStatus;                                               // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05D1(0x0003) MISSED OFFSET
	int                                                sectorID;                                                 // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              sectorOffset;                                             // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lightFadeScale;                                           // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ULightComponent*>                     highLLightSet;                                            // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      highLLightIntensity;                                      // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ULightComponent*>                     selectLightSet;                                           // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      selectLightIntensity;                                     // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              LightIntensity;                                           // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              sectorRemainder;                                          // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                lastSectorID;                                             // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x062C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 lightFade;                                                // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               rotSnapDone;                                              // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0639(0x0007) MISSED OFFSET
	class UCurveFloat*                                 HighLight_camFOV;                                         // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                HighLight_camRot;                                         // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                HighLight_camLoc;                                         // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              highlightZoomHeight;                                      // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ZoomTime;                                                 // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                select_camZoomRot;                                        // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Select_camZoomFOV;                                        // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                select_camZoomLoc;                                        // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                camRot;                                                   // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                CamLoc;                                                   // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 camFOV;                                                   // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     currCamLoc;                                               // 0x0690(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camRotSnapFactor;                                         // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UDecalComponent*>                     lockIcons;                                                // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstance*                           MI_lockIcon;                                              // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DM_lockIcon00;                                            // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DM_lockIcon01;                                            // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DM_lockIcon02;                                            // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DM_lockIcon03;                                            // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DM_lockIcon04;                                            // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DM_lockIcon05;                                            // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DM_lockIcon06;                                            // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DM_lockIcon07;                                            // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DM_lockIcon_Set;                                          // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                RGB;                                                      // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxLockIconOpacity;                                       // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IconFadeDone;                                             // 0x071C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_CarouselCam.BP_CarouselCam_C");
		return ptr;
	}


	void resetLockIconVis();
	void fadeLockIcon(int CharID, bool* IconFadeDone);
	void toggleLockIcon(int CharID);
	void resetCamLoc();
	void initLights();
	void camAnimViaCurves(class UCameraComponent* Camera, class UCurveVector* Location, class UCurveVector* Rotation, class UCurveFloat* FOV, float Time, bool Reverse, float PlayRate, bool* done, float* DeltaTime, struct FVector* cameraLoc);
	void setLightSector(int sectorID, struct FRotator* Rotator);
	void lightSwitch(bool onLights, bool offLights, float Timespan, TArray<class ULightComponent*>* LightSet, TArray<float>* LightSetIntensity);
	void getSectorID(int* sectorID, float* Remainder);
	void getCamIdleTime(float Time, float* IdleTime, float* MaxIdleTime, bool* idleStatus);
	void getCamRotDelta(float* rotDelta);
	void zeroTest(float Float, bool* Result);
	void zoomCam(float Time, bool zoomInTrigger, bool zoomOutTrigger, bool selectedZoomTrigger, bool* zoomInDone, bool* zoomOutDone);
	void getCamLoc(class USceneComponent* CameraRef, struct FVector* CamLoc);
	void matchRotPerChar(bool* rotMatch);
	void set_timeSpan(float StartTime, float* Timespan);
	void matchTimespan(bool* timesup);
	void set_camAimRot(float YawValue, float Timespan, bool Continuous, float* ResultYawValue, bool* rotSnapDone);
	void get_camAimRot(struct FRotator* Rotation);
	void set_maxTimespan(float* cameraMoveTime);
	void Reset(bool lockIconVis, bool Continuous, bool Stop, float* initTime);
	void moveCam(float Time, bool rotTrigger, float rotFactor, bool Continuous, bool rotSnap, bool Mouse, int* sectorID, bool* atDefaultZoom, bool* rotSnapDone, struct FRotator* sectorRotator);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_CarouselCam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
