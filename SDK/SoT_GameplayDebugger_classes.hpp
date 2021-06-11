#pragma once

// Sea of Thieves (2.1) SDK

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
// 0x0230 (0x0780 - 0x0550)
class UGameplayDebuggingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0550(0x0008) MISSED OFFSET
	class FString                                      DebugComponentClassName;                                  // 0x0558(0x0010) (ZeroConstructor, Config, GlobalConfig)
	int                                                ShowExtendedInformatiomCounter;                           // 0x0568(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x056C(0x0004) MISSED OFFSET
	TArray<int>                                        ReplicateViewDataCounters;                                // 0x0570(0x0010) (Net, ZeroConstructor)
	class FString                                      ControllerName;                                           // 0x0580(0x0010) (Net, ZeroConstructor)
	class FString                                      PawnName;                                                 // 0x0590(0x0010) (Net, ZeroConstructor)
	class FString                                      PawnClass;                                                // 0x05A0(0x0010) (Net, ZeroConstructor)
	class FString                                      DebugIcon;                                                // 0x05B0(0x0010) (Net, ZeroConstructor)
	class FString                                      MovementBaseInfo;                                         // 0x05C0(0x0010) (Net, ZeroConstructor)
	class FString                                      MovementModeInfo;                                         // 0x05D0(0x0010) (Net, ZeroConstructor)
	class FString                                      PathFollowingInfo;                                        // 0x05E0(0x0010) (Net, ZeroConstructor)
	class FString                                      CurrentAITask;                                            // 0x05F0(0x0010) (Net, ZeroConstructor)
	class FString                                      CurrentAIState;                                           // 0x0600(0x0010) (Net, ZeroConstructor)
	class FString                                      CurrentAIAssets;                                          // 0x0610(0x0010) (Net, ZeroConstructor)
	class FString                                      GameplayTasksState;                                       // 0x0620(0x0010) (Net, ZeroConstructor)
	class FString                                      NavDataInfo;                                              // 0x0630(0x0010) (Net, ZeroConstructor)
	class FString                                      AbilityInfo;                                              // 0x0640(0x0010) (Net, ZeroConstructor)
	class FString                                      MontageInfo;                                              // 0x0650(0x0010) (Net, ZeroConstructor)
	class FString                                      BrainComponentName;                                       // 0x0660(0x0010) (Net, ZeroConstructor)
	class FString                                      BrainComponentString;                                     // 0x0670(0x0010) (Net, ZeroConstructor)
	TArray<unsigned char>                              BlackboardRepData;                                        // 0x0680(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0690(0x0010) MISSED OFFSET
	TArray<struct FVector>                             PathPoints;                                               // 0x06A0(0x0010) (Net, ZeroConstructor)
	TArray<unsigned char>                              PathCorridorData;                                         // 0x06B0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x06C0(0x0010) MISSED OFFSET
	TArray<unsigned char>                              NavmeshRepData;                                           // 0x06D0(0x0010) (Net, ZeroConstructor)
	TArray<unsigned char>                              EQSRepData;                                               // 0x06E0(0x0010) (Net, ZeroConstructor)
	struct FVector                                     SensingComponentLocation;                                 // 0x06F0(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	int                                                NextPathPointIndex;                                       // 0x06FC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsUsingPathFollowing : 1;                                // 0x0700(0x0001) (Net)
	unsigned char                                      bIsUsingCharacter : 1;                                    // 0x0700(0x0001) (Net)
	unsigned char                                      bIsUsingBehaviorTree : 1;                                 // 0x0700(0x0001) (Net)
	unsigned char                                      bIsUsingAbilities : 1;                                    // 0x0700(0x0001) (Net)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0701(0x0007) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0708(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x70];                                      // 0x0710(0x0070) MISSED OFFSET

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
// 0x00F0 (0x0520 - 0x0430)
class AGameplayDebuggingHUDComponent : public AActor
{
public:
	float                                              MenuStartX;                                               // 0x0430(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MenuStartY;                                               // 0x0434(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DebugInfoStartX;                                          // 0x0438(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DebugInfoStartY;                                          // 0x043C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UCanvas*                                     Canvas;                                                   // 0x0440(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APlayerController*                           PlayerOwner;                                              // 0x0448(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0450(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayDebugger.GameplayDebuggingHUDComponent"));
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggerSettings
// 0x00B0 (0x00D8 - 0x0028)
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
	unsigned char                                      UnknownData01[0x4E];                                      // 0x008A(0x004E) MISSED OFFSET

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
// 0x0030 (0x0558 - 0x0528)
class AGaneplayDebuggerProxyHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0528(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameplayDebugger.GaneplayDebuggerProxyHUD"));
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggingReplicator
// 0x00E0 (0x0510 - 0x0430)
class AGameplayDebuggingReplicator : public AActor
{
public:
	class FString                                      DebugComponentClassName;                                  // 0x0430(0x0010) (ZeroConstructor, Config)
	class FString                                      DebugComponentHUDClassName;                               // 0x0440(0x0010) (ZeroConstructor, Config)
	class FString                                      DebugComponentControllerClassName;                        // 0x0450(0x0010) (ZeroConstructor, Config)
	int                                                MaxEQSQueries;                                            // 0x0460(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	class UGameplayDebuggingComponent*                 DebugComponent;                                           // 0x0468(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class APlayerController*                           LocalPlayerOwner;                                         // 0x0470(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      LastSelectedActorToDebug;                                 // 0x0478(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsGlobalInWorld;                                         // 0x0480(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoActivate;                                            // 0x0481(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               OverHead;                                                 // 0x0482(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Basic;                                                    // 0x0483(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BehaviorTree;                                             // 0x0484(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               EQS;                                                      // 0x0485(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               EnableEQSOnHUD;                                           // 0x0486(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0487(0x0001) MISSED OFFSET
	int                                                ActiveEQSIndex;                                           // 0x0488(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Perception;                                               // 0x048C(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView1;                                                // 0x048D(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView2;                                                // 0x048E(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView3;                                                // 0x048F(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView4;                                                // 0x0490(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView5;                                                // 0x0491(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7E];                                      // 0x0492(0x007E) MISSED OFFSET

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
