#pragma once

// Sea of Thieves (1.0.5) SDK

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
// 0x0230 (0x08A0 - 0x0670)
class UGameplayDebuggingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x0670(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingComponent");
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
// 0x00F0 (0x0560 - 0x0470)
class AGameplayDebuggingHUDComponent : public AActor
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0470(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingHUDComponent");
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggerSettings
// 0x00B0 (0x00D8 - 0x0028)
class UGameplayDebuggerSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FGDTCustomViewNames                         CustomViewNames;                                          // 0x01E3(0x0050) (Edit, Config)
	bool                                               OverHead;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               Basic;                                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               BehaviorTree;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EQS;                                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableEQSOnHUD;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                ActiveEQSIndex;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               Perception;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView1;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView2;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView3;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView4;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggerSettings");
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggingControllerComponent
// 0x02A0 (0x0370 - 0x00D0)
class UGameplayDebuggingControllerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class AGameplayDebuggingHUDComponent*              OnDebugAIHUD;                                             // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      DebugAITargetActor;                                       // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UInputComponent*                             AIDebugViewInputComponent;                                // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UInputComponent*                             DebugCameraInputComponent;                                // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FInputChord                                 ActivationKey;                                            // 0x01E3(0x0028) (Config)
	struct FInputChord                                 CategoryZeroBind;                                         // 0x01E3(0x0028) (Config)
	struct FInputChord                                 CategoryOneBind;                                          // 0x01E3(0x0028) (Config)
	struct FInputChord                                 CategoryTwoBind;                                          // 0x01E3(0x0028) (Config)
	struct FInputChord                                 CategoryThreeBind;                                        // 0x01E3(0x0028) (Config)
	struct FInputChord                                 CategoryFourBind;                                         // 0x01E3(0x0028) (Config)
	struct FInputChord                                 CategoryFiveBind;                                         // 0x01E3(0x0028) (Config)
	struct FInputChord                                 CategorySixBind;                                          // 0x01E3(0x0028) (Config)
	struct FInputChord                                 CategorySevenBind;                                        // 0x01E3(0x0028) (Config)
	struct FInputChord                                 CategoryEightBind;                                        // 0x01E3(0x0028) (Config)
	struct FInputChord                                 CategoryNineBind;                                         // 0x01E3(0x0028) (Config)
	struct FInputChord                                 CycleDetailsViewBind;                                     // 0x01E3(0x0028) (Config)
	struct FInputChord                                 DebugCameraBind;                                          // 0x01E3(0x0028) (Config)
	struct FInputChord                                 OnScreenDebugMessagesBind;                                // 0x01E3(0x0028) (Config)
	struct FInputChord                                 GameHUDBind;                                              // 0x01E3(0x0028) (Config)
	unsigned char                                      UnknownData01[0x165];                                     // 0x020B(0x0165) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingControllerComponent");
		return ptr;
	}

};


// Class GameplayDebugger.GaneplayDebuggerProxyHUD
// 0x0030 (0x0598 - 0x0568)
class AGaneplayDebuggerProxyHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0568(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GaneplayDebuggerProxyHUD");
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggingReplicator
// 0x00F8 (0x0568 - 0x0470)
class AGameplayDebuggingReplicator : public AActor
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0470(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingReplicator");
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
