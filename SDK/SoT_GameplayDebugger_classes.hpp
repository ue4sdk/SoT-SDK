#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameplayDebugger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameplayDebugger.GameplayDebuggingComponent
// 0x0230 (0x07B0 - 0x0580)
class UGameplayDebuggingComponent : public UPrimitiveComponent
{
public:
	class FString                                      DebugComponentClassName;                                  // 0x0580(0x0010) (ZeroConstructor, Config, GlobalConfig)
	int                                                ShowExtendedInformatiomCounter;                           // 0x0590(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0594(0x0004) MISSED OFFSET
	TArray<int>                                        ReplicateViewDataCounters;                                // 0x0598(0x0010) (Net, ZeroConstructor)
	class FString                                      ControllerName;                                           // 0x05A8(0x0010) (Net, ZeroConstructor)
	class FString                                      PawnName;                                                 // 0x05B8(0x0010) (Net, ZeroConstructor)
	class FString                                      PawnClass;                                                // 0x05C8(0x0010) (Net, ZeroConstructor)
	class FString                                      DebugIcon;                                                // 0x05D8(0x0010) (Net, ZeroConstructor)
	class FString                                      MovementBaseInfo;                                         // 0x05E8(0x0010) (Net, ZeroConstructor)
	class FString                                      MovementModeInfo;                                         // 0x05F8(0x0010) (Net, ZeroConstructor)
	class FString                                      PathFollowingInfo;                                        // 0x0608(0x0010) (Net, ZeroConstructor)
	class FString                                      CurrentAITask;                                            // 0x0618(0x0010) (Net, ZeroConstructor)
	class FString                                      CurrentAIState;                                           // 0x0628(0x0010) (Net, ZeroConstructor)
	class FString                                      CurrentAIAssets;                                          // 0x0638(0x0010) (Net, ZeroConstructor)
	class FString                                      GameplayTasksState;                                       // 0x0648(0x0010) (Net, ZeroConstructor)
	class FString                                      NavDataInfo;                                              // 0x0658(0x0010) (Net, ZeroConstructor)
	class FString                                      AbilityInfo;                                              // 0x0668(0x0010) (Net, ZeroConstructor)
	class FString                                      MontageInfo;                                              // 0x0678(0x0010) (Net, ZeroConstructor)
	class FString                                      BrainComponentName;                                       // 0x0688(0x0010) (Net, ZeroConstructor)
	class FString                                      BrainComponentString;                                     // 0x0698(0x0010) (Net, ZeroConstructor)
	TArray<unsigned char>                              BlackboardRepData;                                        // 0x06A8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x06B8(0x0010) MISSED OFFSET
	TArray<struct FVector>                             PathPoints;                                               // 0x06C8(0x0010) (Net, ZeroConstructor)
	TArray<unsigned char>                              PathCorridorData;                                         // 0x06D8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x06E8(0x0010) MISSED OFFSET
	TArray<unsigned char>                              NavmeshRepData;                                           // 0x06F8(0x0010) (Net, ZeroConstructor)
	TArray<unsigned char>                              EQSRepData;                                               // 0x0708(0x0010) (Net, ZeroConstructor)
	struct FVector                                     SensingComponentLocation;                                 // 0x0718(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	int                                                NextPathPointIndex;                                       // 0x0724(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsUsingPathFollowing : 1;                                // 0x0728(0x0001) (Net)
	unsigned char                                      bIsUsingCharacter : 1;                                    // 0x0728(0x0001) (Net)
	unsigned char                                      bIsUsingBehaviorTree : 1;                                 // 0x0728(0x0001) (Net)
	unsigned char                                      bIsUsingAbilities : 1;                                    // 0x0728(0x0001) (Net)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0729(0x0007) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0730(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x78];                                      // 0x0738(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayDebugger.GameplayDebuggingComponent"));
		return ptr;
	}


	void ServerReplicateData(uint32_t InMessage, uint32_t DataView);
	void ServerDiscardNavmeshData();
	void ServerCollectNavmeshData(const struct FVector_NetQuantize10& TargetLocation);
	void OnRep_UpdateNavmesh();
	void OnRep_UpdateEQS();
	void OnRep_UpdateBlackboard();
	void OnRep_PathCorridorData();
	void OnCycleDetailsView();
	void ClientEnableTargetSelection(bool bEnable);
};


// Class GameplayDebugger.GameplayDebuggingHUDComponent
// 0x00F0 (0x04C0 - 0x03D0)
class AGameplayDebuggingHUDComponent : public AActor
{
public:
	float                                              MenuStartX;                                               // 0x03D0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MenuStartY;                                               // 0x03D4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DebugInfoStartX;                                          // 0x03D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DebugInfoStartY;                                          // 0x03DC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UCanvas*                                     Canvas;                                                   // 0x03E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APlayerController*                           PlayerOwner;                                              // 0x03E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x03F0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayDebugger.GameplayDebuggingHUDComponent"));
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggerSettings
// 0x0080 (0x00A8 - 0x0028)
class UGameplayDebuggerSettings : public UObject
{
public:
	struct FGDTCustomViewNames                         CustomViewNames;                                          // 0x0028(0x0050) (Edit, Config)
	bool                                               OverHead;                                                 // 0x0078(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               Basic;                                                    // 0x0079(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               BehaviorTree;                                             // 0x007A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EQS;                                                      // 0x007B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableEQSOnHUD;                                           // 0x007C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	int                                                ActiveEQSIndex;                                           // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               Perception;                                               // 0x0084(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView1;                                                // 0x0085(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView2;                                                // 0x0086(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView3;                                                // 0x0087(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView4;                                                // 0x0088(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView5;                                                // 0x0089(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1E];                                      // 0x008A(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayDebugger.GameplayDebuggerSettings"));
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggingControllerComponent
// 0x02A0 (0x0368 - 0x00C8)
class UGameplayDebuggingControllerComponent : public UActorComponent
{
public:
	class AGameplayDebuggingHUDComponent*              OnDebugAIHUD;                                             // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      DebugAITargetActor;                                       // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UInputComponent*                             AIDebugViewInputComponent;                                // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UInputComponent*                             DebugCameraInputComponent;                                // 0x00E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00E8(0x0028) MISSED OFFSET
	struct FInputChord                                 ActivationKey;                                            // 0x0110(0x0028) (Config)
	struct FInputChord                                 CategoryZeroBind;                                         // 0x0138(0x0028) (Config)
	struct FInputChord                                 CategoryOneBind;                                          // 0x0160(0x0028) (Config)
	struct FInputChord                                 CategoryTwoBind;                                          // 0x0188(0x0028) (Config)
	struct FInputChord                                 CategoryThreeBind;                                        // 0x01B0(0x0028) (Config)
	struct FInputChord                                 CategoryFourBind;                                         // 0x01D8(0x0028) (Config)
	struct FInputChord                                 CategoryFiveBind;                                         // 0x0200(0x0028) (Config)
	struct FInputChord                                 CategorySixBind;                                          // 0x0228(0x0028) (Config)
	struct FInputChord                                 CategorySevenBind;                                        // 0x0250(0x0028) (Config)
	struct FInputChord                                 CategoryEightBind;                                        // 0x0278(0x0028) (Config)
	struct FInputChord                                 CategoryNineBind;                                         // 0x02A0(0x0028) (Config)
	struct FInputChord                                 CycleDetailsViewBind;                                     // 0x02C8(0x0028) (Config)
	struct FInputChord                                 DebugCameraBind;                                          // 0x02F0(0x0028) (Config)
	struct FInputChord                                 OnScreenDebugMessagesBind;                                // 0x0318(0x0028) (Config)
	struct FInputChord                                 GameHUDBind;                                              // 0x0340(0x0028) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayDebugger.GameplayDebuggingControllerComponent"));
		return ptr;
	}

};


// Class GameplayDebugger.GaneplayDebuggerProxyHUD
// 0x0030 (0x04F8 - 0x04C8)
class AGaneplayDebuggerProxyHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x04C8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayDebugger.GaneplayDebuggerProxyHUD"));
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggingReplicator
// 0x00B0 (0x0480 - 0x03D0)
class AGameplayDebuggingReplicator : public AActor
{
public:
	class FString                                      DebugComponentClassName;                                  // 0x03D0(0x0010) (ZeroConstructor, Config)
	class FString                                      DebugComponentHUDClassName;                               // 0x03E0(0x0010) (ZeroConstructor, Config)
	class FString                                      DebugComponentControllerClassName;                        // 0x03F0(0x0010) (ZeroConstructor, Config)
	int                                                MaxEQSQueries;                                            // 0x0400(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	class UGameplayDebuggingComponent*                 DebugComponent;                                           // 0x0408(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class APlayerController*                           LocalPlayerOwner;                                         // 0x0410(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      LastSelectedActorToDebug;                                 // 0x0418(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsGlobalInWorld;                                         // 0x0420(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoActivate;                                            // 0x0421(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               OverHead;                                                 // 0x0422(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Basic;                                                    // 0x0423(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BehaviorTree;                                             // 0x0424(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               EQS;                                                      // 0x0425(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               EnableEQSOnHUD;                                           // 0x0426(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0427(0x0001) MISSED OFFSET
	int                                                ActiveEQSIndex;                                           // 0x0428(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Perception;                                               // 0x042C(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView1;                                                // 0x042D(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView2;                                                // 0x042E(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView3;                                                // 0x042F(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView4;                                                // 0x0430(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView5;                                                // 0x0431(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4E];                                      // 0x0432(0x004E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayDebugger.GameplayDebuggingReplicator"));
		return ptr;
	}


	void ServerSetActorToDebug(class AActor* InActor);
	void ServerReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView);
	void OnRep_AutoActivate();
	void ClientReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView);
	void ClientEnableTargetSelection(bool bEnable, class APlayerController* Context);
	void ClientAutoActivate();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
