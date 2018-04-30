#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Athena_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Athena.PrimaryItemUsePressedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UPrimaryItemUsePressedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PrimaryItemUsePressedNotificationInputId");
		return ptr;
	}

};


// Class Athena.SecondaryItemUsePressedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class USecondaryItemUsePressedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SecondaryItemUsePressedNotificationInputId");
		return ptr;
	}

};


// Class Athena.InteractableBase
// 0x0028 (0x0498 - 0x0470)
class AInteractableBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0470(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractableBase");
		return ptr;
	}

};


// Class Athena.ControllableObject
// 0x0120 (0x05B8 - 0x0498)
class AControllableObject : public AInteractableBase
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0498(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControllableObject");
		return ptr;
	}


	void TakenControlImpl(class AActor* Controller);
	void SetCanInteract(bool InCanInteract);
	void RelinquishedControlImpl(class AActor* Controller);
	class AActor* GetControllingActor();
	bool CanInteractImpl(class AActor* InCharacter);
};


// Class Athena.SailManipulator
// 0x01D0 (0x0788 - 0x05B8)
class ASailManipulator : public AControllableObject
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x05B8(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SailManipulator");
		return ptr;
	}


	void SetRopeDeltaOffset(float InRopeDeltaOffset);
	void SetMastSocketId(const struct FSocketId& InMastSocketId);
	void SetMast(class AMast* InMast);
	void RotateTowardsLocation(const struct FVector& TargetLocation);
	void OnRep_PendingBoundMast();
	void HandleBoundMastEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void HandleBoundMastDestroyed();
	float GetRopeUVOffset();
	class AMast* GetMast();
};


// Class Athena.SailHoist
// 0x0068 (0x07F0 - 0x0788)
class ASailHoist : public ASailManipulator
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0788(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SailHoist");
		return ptr;
	}

};


// Class Athena.Mast
// 0x0280 (0x06F0 - 0x0470)
class AMast : public AActor
{
public:
	unsigned char                                      UnknownData00[0x280];                                     // 0x0470(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Mast");
		return ptr;
	}


	void UpdateSailsLoweredBasedOnIntent(float LoweredIntent);
	void UpdateSailsBasedOnIntent(float AngleIntent, float LoweredIntent);
	void UpdateSailsAngleBasedOnIntent(float AngleIntent);
	void OnMastDescLoaded(class UMastDescAsset* MastDesc);
	void OnLoweredProportionChange(float LoweredProportion, float DeltaTime);
	void OnAngleChanged(float Angle, float DeltaTime);
	float GetSailTurnRate();
	TArray<class ASail*> GetSails();
	float GetSailMovementRate();
	float GetSailLoweredProportion();
	float GetSailAngleRatio();
	struct FTransform GetMastAngleBoneTransform();
	struct FVector GetLookAtPos();
	void FinaliseSails(TArray<class ASail*> InSails);
};


// Class Athena.SailAngle
// 0x0080 (0x0808 - 0x0788)
class ASailAngle : public ASailManipulator
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0788(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SailAngle");
		return ptr;
	}

};


// Class Athena.AchievementDefinitionDataAsset
// 0x0010 (0x0038 - 0x0028)
class UAchievementDefinitionDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AchievementDefinitionDataAsset");
		return ptr;
	}

};


// Class Athena.ActionRulesBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UActionRulesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ActionRulesBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_AddOneShotUseActionRule(class UClass* StartInput, class AActor* Item);
	void STATIC_AddHoldToUseActionRule(class UClass* StartInput, class UClass* EndInput, class AActor* Item);
};


// Class Athena.ActionRulesComponent
// 0x0010 (0x00E0 - 0x00D0)
class UActionRulesComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ActionRulesComponent");
		return ptr;
	}

};


// Class Athena.ActionRulesInteractableComponent
// 0x0008 (0x0110 - 0x0108)
class UActionRulesInteractableComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData00[0xDB];                                      // 0x0108(0x00DB) MISSED OFFSET
	class UActionRulesComponent*                       ActionRulesComponent;                                     // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ActionRulesInteractableComponent");
		return ptr;
	}

};


// Class Athena.WieldableInteractableComponent
// 0x0008 (0x0118 - 0x0110)
class UWieldableInteractableComponent : public UActionRulesInteractableComponent
{
public:
	unsigned char                                      UnknownData00[0xD3];                                      // 0x0110(0x00D3) MISSED OFFSET
	class AWieldableItem*                              WieldableItem;                                            // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableInteractableComponent");
		return ptr;
	}

};


// Class Athena.ActionRuleTestActor
// 0x0000 (0x0470 - 0x0470)
class AActionRuleTestActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ActionRuleTestActor");
		return ptr;
	}

};


// Class Athena.ActorCoherentViewComponent
// 0x00A8 (0x0420 - 0x0378)
class UActorCoherentViewComponent : public UCoherentUIGTComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0378(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ActorCoherentViewComponent");
		return ptr;
	}


	void ReadyForBindingsEventReceived();
};


// Class Athena.ActorFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UActorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ActorFunctionLibrary");
		return ptr;
	}


	void STATIC_TestSetNetCullDistance(class AActor* Actor, float InDistance);
	void STATIC_TestSetActorRoleAutonomousProxy(class AActor* Actor);
	bool STATIC_IsParentActorInChildActorComponentHierarchy(class AActor* ChildActor, class AActor* TestParentActor);
	bool STATIC_IsDependentActorSpawnAckedOnClient(class AActor* RealViewer, class AActor* DependencyActor);
	bool STATIC_IsActorTickFunctionRegistered(class AActor* Actor);
	struct FTransform STATIC_GetTransformOfActorRelativeToAnother(class AActor* TargetActor, class AActor* RelativeToActor);
	int STATIC_GetActorNetGuidValue(class AActor* Actor);
	class AActor* STATIC_FindActorByNetGuidValue(class UObject* WorldContext, int NetGuidValue);
	class AActor* STATIC_FindActorByName(class UObject* WorldContext, const class FString& ActorName);
	class AActor* STATIC_FindActorByClass(class UObject* WorldContext, class UClass* Class);
	TArray<class AActor*> STATIC_FilterActorArrayByInterface(TArray<class AActor*> Actors, class UClass* InterfaceToTest);
	class AActor* STATIC_ClosestActorToPoint(TArray<class AActor*> Actors, const struct FVector& Position);
};


// Class Athena.ActorInWaterInterface
// 0x0000 (0x0028 - 0x0028)
class UActorInWaterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ActorInWaterInterface");
		return ptr;
	}

};


// Class Athena.ActorRelevancyTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UActorRelevancyTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ActorRelevancyTestFunctions");
		return ptr;
	}


	void STATIC_WaitForActorToBeAckedForPlayerId(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* Actor, int ClientId, int SplitScreenIndex);
	void STATIC_WaitForActorToBeAckedForPlayerController(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* Actor, class APlayerController* PlayerController);
	bool STATIC_IsActorAckedForPlayer(class APlayerController* PlayerController, class AActor* Actor);
};


// Class Athena.AgitatedAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UAgitatedAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AgitatedAIStrategyId");
		return ptr;
	}

};


// Class Athena.AICharacterAudioComponent
// 0x0000 (0x0310 - 0x0310)
class UAICharacterAudioComponent : public UWwiseEmitterComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AICharacterAudioComponent");
		return ptr;
	}

};


// Class Athena.KrakenAICharacterAudioComponentParams
// 0x0020 (0x0048 - 0x0028)
class UKrakenAICharacterAudioComponentParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseEvent*                                 PlayKrakenAmbience;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopKrakenAmbience;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayKrakenTell;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayKrakenTellCooldownMax;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAICharacterAudioComponentParams");
		return ptr;
	}

};


// Class Athena.KrakenAICharacterAudioComponent
// 0x0030 (0x0340 - 0x0310)
class UKrakenAICharacterAudioComponent : public UAICharacterAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0310(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAICharacterAudioComponent");
		return ptr;
	}

};


// Class Athena.KrakenShipWrappingTentacleAIAudioComponentParams
// 0x0030 (0x0058 - 0x0028)
class UKrakenShipWrappingTentacleAIAudioComponentParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseEvent*                                 PlayWrapping;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopWrapping;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 PlayWrappedLoop;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopWrappedLoop;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 PlayUnwrapping;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenShipWrappingTentacleAIAudioComponentParams");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_None
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_None : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_None");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_Idle
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_Idle : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_Idle");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_IdleActive
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_IdleActive : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_IdleActive");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_SuckingTell
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_SuckingTell : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_SuckingTell");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_Sucking
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_Sucking : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_Sucking");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_Holding
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_Holding : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_Holding");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_HoldingWaterDunk
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_HoldingWaterDunk : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_HoldingWaterDunk");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_HoldingPowerSlam
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_HoldingPowerSlam : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_HoldingPowerSlam");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_HoldingExpose
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_HoldingExpose : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_HoldingExpose");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_HoldingDisorientate
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_HoldingDisorientate : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_HoldingDisorientate");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_Ingesting
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_Ingesting : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_Ingesting");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_Ingesting_SwallowTarget
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_Ingesting_SwallowTarget : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_Ingesting_SwallowTarget");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_Ingesting_RegurgitateTarget
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_Ingesting_RegurgitateTarget : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_Ingesting_RegurgitateTarget");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_Throwing
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_Throwing : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_Throwing");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_Despawning_Defeated
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_Despawning_Defeated : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_Despawning_Defeated");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_Despawning
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_Despawning : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_Despawning");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleState_Despawning_Panic
// 0x0000 (0x0028 - 0x0028)
class UKrakenAnimatedTentacleState_Despawning_Panic : public UKrakenAnimatedTentacleState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleState_Despawning_Panic");
		return ptr;
	}

};


// Class Athena.KrakenShipWrappingTentacleAIAudioComponent
// 0x0070 (0x0380 - 0x0310)
class UKrakenShipWrappingTentacleAIAudioComponent : public UAICharacterAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0310(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenShipWrappingTentacleAIAudioComponent");
		return ptr;
	}

};


// Class Athena.KrakenTentacleAIAudioComponentParams
// 0x0088 (0x00B0 - 0x0028)
class UKrakenTentacleAIAudioComponentParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     TentacleEmitterPool;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     MouthEmitterPool;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayKrakenTentacleEmerge;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayKrakenTentacleSubmerge;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayKrakenTentacleSuckTell;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopKrakenTentacleSuckTell;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayKrakenTentacleSuck;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopKrakenTentacleSuck;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayKrakenTentacleMouthAmbience;                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopKrakenTentacleMouthAmbience;                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayPlayerInAirWind;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopPlayerInAirWind;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayKrakenCatchPlayer;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayKrakenSpitPlayer;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       KrakenSuckFactorRtpc;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayKrakenTentacleWrapTell;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenTentacleAIAudioComponentParams");
		return ptr;
	}

};


// Class Athena.KrakenTentacleAIAudioComponent
// 0x0270 (0x0580 - 0x0310)
class UKrakenTentacleAIAudioComponent : public UAICharacterAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x270];                                     // 0x0310(0x0270) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenTentacleAIAudioComponent");
		return ptr;
	}

};


// Class Athena.SharkAICharacterAudioComponentParams
// 0x0048 (0x0070 - 0x0028)
class USharkAICharacterAudioComponentParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseEvent*                                 PlaySharkAttackTellLoop;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopSharkAttackTellLoop;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlaySharkDeath;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlaySharkHit;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlaySharkFinLoop;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopSharkFinLoop;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SharkFinUnderwaterSwitchGroup;                            // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SharkFinUnderwaterSwitchAboveWater;                       // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SharkAICharacterAudioComponentParams");
		return ptr;
	}

};


// Class Athena.SharkAICharacterAudioComponent
// 0x0130 (0x0440 - 0x0310)
class USharkAICharacterAudioComponent : public UAICharacterAudioComponent
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0310(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SharkAICharacterAudioComponent");
		return ptr;
	}

};


// Class Athena.SkeletonAICharacterAudioComponentParams
// 0x0030 (0x0058 - 0x0028)
class USkeletonAICharacterAudioComponentParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseEvent*                                 PlayAiStrategyPursuitAndAttackLoop;                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopAiStrategyPursuitAndAttackLoop;                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSkeletonAICharacterAudioStrategyAudioEvents> StrategyAudioEvents;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SkeletonAICharacterAudioComponentParams");
		return ptr;
	}

};


// Class Athena.CharacterAudioFootfallControllerParams
// 0x00A8 (0x00D0 - 0x0028)
class UCharacterAudioFootfallControllerParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       PlayerSpeedRtpcName;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayerSpeedRtpcValue;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayerSpeedRtpcValue;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       WadingRtpcName;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinWadingWwiseRtpcValue;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWadingWwiseRtpcValue;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FootstepSquelchRtpcName;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerPerspectiveRtpcName;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerPerspectiveRtpcValue;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemotePlayerPerspectiveRtpcValue;                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 FootfallEvent;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 FootfallPacingEvent;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CharacterCleanLandEvent;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CharacterJumpEvent;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CharacterSplashEvent;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     FootfallsPool;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       VerticalSpeedRtpcName;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinVerticalSpeedRtpcValue;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxVerticalSpeedRtpcValue;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BrokenLegSwitchGroup;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BrokenLegSwitchBroken;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FootwareCategorySwitchGroup;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FootwareCategoryBoots;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FootwareCategoryBarefoot;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterAudioFootfallControllerParams");
		return ptr;
	}

};


// Class Athena.SkeletonAICharacterAudioComponent
// 0x00C0 (0x03D0 - 0x0310)
class USkeletonAICharacterAudioComponent : public UAICharacterAudioComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0310(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SkeletonAICharacterAudioComponent");
		return ptr;
	}

};


// Class Athena.AICharacterEngageEnemyMethod
// 0x0000 (0x0028 - 0x0028)
class UAICharacterEngageEnemyMethod : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AICharacterEngageEnemyMethod");
		return ptr;
	}

};


// Class Athena.InteractableAICharacterEngageEnemyMethod
// 0x0000 (0x0028 - 0x0028)
class UInteractableAICharacterEngageEnemyMethod : public UAICharacterEngageEnemyMethod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractableAICharacterEngageEnemyMethod");
		return ptr;
	}

};


// Class Athena.LongRangeGunAICharacterEngageEnemyMethod
// 0x0000 (0x0028 - 0x0028)
class ULongRangeGunAICharacterEngageEnemyMethod : public UAICharacterEngageEnemyMethod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LongRangeGunAICharacterEngageEnemyMethod");
		return ptr;
	}

};


// Class Athena.ShortRangeGunAICharacterEngageEnemyMethod
// 0x0000 (0x0028 - 0x0028)
class UShortRangeGunAICharacterEngageEnemyMethod : public UAICharacterEngageEnemyMethod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShortRangeGunAICharacterEngageEnemyMethod");
		return ptr;
	}

};


// Class Athena.MeleeWeaponAICharacterEngageEnemyMethod
// 0x0000 (0x0028 - 0x0028)
class UMeleeWeaponAICharacterEngageEnemyMethod : public UAICharacterEngageEnemyMethod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MeleeWeaponAICharacterEngageEnemyMethod");
		return ptr;
	}

};


// Class Athena.AICharacterPartsDesc
// 0x0010 (0x0038 - 0x0028)
class UAICharacterPartsDesc : public UAIPartsDesc
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AICharacterPartsDesc");
		return ptr;
	}

};


// Class Athena.AICharacterRecoverMethod
// 0x0000 (0x0028 - 0x0028)
class UAICharacterRecoverMethod : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AICharacterRecoverMethod");
		return ptr;
	}

};


// Class Athena.FleeAICharacterRecoverMethod
// 0x0000 (0x0028 - 0x0028)
class UFleeAICharacterRecoverMethod : public UAICharacterRecoverMethod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FleeAICharacterRecoverMethod");
		return ptr;
	}

};


// Class Athena.HealAICharacterRecoverMethod
// 0x0000 (0x0028 - 0x0028)
class UHealAICharacterRecoverMethod : public UAICharacterRecoverMethod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HealAICharacterRecoverMethod");
		return ptr;
	}

};


// Class Athena.AIKnockbackActionStateId
// 0x0000 (0x0028 - 0x0028)
class UAIKnockbackActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AIKnockbackActionStateId");
		return ptr;
	}

};


// Class Athena.AILocomotionCompositeInputHandler
// 0x0098 (0x0170 - 0x00D8)
class UAILocomotionCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x00D8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AILocomotionCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnSecondaryItemUseReleased();
	TEnumAsByte<EInputHandlerResult> OnSecondaryItemUsePressed();
	TEnumAsByte<EInputHandlerResult> OnQuickSwitchWeapon();
	TEnumAsByte<EInputHandlerResult> OnQuickSwitchSecondaryWeapon();
	TEnumAsByte<EInputHandlerResult> OnQuickSwitchPrimaryWeapon();
	TEnumAsByte<EInputHandlerResult> OnPrimaryItemUseReleased();
	TEnumAsByte<EInputHandlerResult> OnPrimaryItemUsePressed();
};


// Class Athena.AIPartCustomizationInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPartCustomizationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AIPartCustomizationInterface");
		return ptr;
	}

};


// Class Athena.AIPartsRetrievalComponent
// 0x0098 (0x0168 - 0x00D0)
class UAIPartsRetrievalComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UAIPartsCategory*                            PartsCategory;                                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FReplicatedAIPartsData                      ReplicatedAIPartsData;                                    // 0x01E3(0x0010) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AIPartsRetrievalComponent");
		return ptr;
	}


	void RequestNewAIParts(class UAIPartsCategory* AssignedPartsCategory, int TeamColorIndex);
	void OnRep_ReplicatedAIPartsData();
};


// Class Athena.AIProximityPlayerTracker
// 0x0188 (0x01B0 - 0x0028)
class UAIProximityPlayerTracker : public UAIPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0028(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AIProximityPlayerTracker");
		return ptr;
	}

};


// Class Athena.AIQuickDeathInterface
// 0x0000 (0x0028 - 0x0028)
class UAIQuickDeathInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AIQuickDeathInterface");
		return ptr;
	}

};


// Class Athena.AISpawnActionStateId
// 0x0000 (0x0028 - 0x0028)
class UAISpawnActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AISpawnActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoAISpawnActionState(class AActor* InCharacter);
};


// Class Athena.AmmoInterface
// 0x0000 (0x0028 - 0x0028)
class UAmmoInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AmmoInterface");
		return ptr;
	}

};


// Class Athena.ShipDynamicsProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UShipDynamicsProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipDynamicsProviderInterface");
		return ptr;
	}

};


// Class Athena.Anchor
// 0x0038 (0x04A8 - 0x0470)
class AAnchor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0470(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Anchor");
		return ptr;
	}


	void SetAnchorLoweredProportion(float InLoweredProportion);
};


// Class Athena.AnimatedStepsComponent
// 0x0028 (0x00F8 - 0x00D0)
class UAnimatedStepsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UPoseableSkeletalMeshComponent*              Mesh;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UBoxComponent*>                       Boxes;                                                    // 0x01E3(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient)
	TArray<struct FVector>                             BoxOrigins;                                               // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AnimatedStepsComponent");
		return ptr;
	}


	void StartOpening();
	void OpenImmediate();
	void Close();
};


// Class Athena.AnimNotify_AthenaPlayParticleEffect
// 0x0030 (0x0060 - 0x0030)
class UAnimNotify_AthenaPlayParticleEffect : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	class UObject*                                     PSTemplate;                                               // 0x01E3(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x01E3(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x01E3(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x01E3(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Attached : 1;                                             // 0x01E3(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      OwnerOnlySee : 1;                                         // 0x01E3(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      OwnerNoSee : 1;                                           // 0x01E3(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      OwnedByWorld : 1;                                         // 0x01E3(0x0001) (Edit, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AnimNotify_AthenaPlayParticleEffect");
		return ptr;
	}

};


// Class Athena.AnimNotify_WieldableAnimationInterruptPoint
// 0x0000 (0x0030 - 0x0030)
class UAnimNotify_WieldableAnimationInterruptPoint : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AnimNotify_WieldableAnimationInterruptPoint");
		return ptr;
	}

};


// Class Athena.AnimNotifyAdditionalEventsWwiseEmitterComponent
// 0x0010 (0x0350 - 0x0340)
class UAnimNotifyAdditionalEventsWwiseEmitterComponent : public UAnimNotifyWwiseEmitterComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0340(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AnimNotifyAdditionalEventsWwiseEmitterComponent");
		return ptr;
	}

};


// Class Athena.AssetListDataAsset
// 0x0010 (0x0038 - 0x0028)
class UAssetListDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AssetListDataAsset");
		return ptr;
	}

};


// Class Athena.ShipServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UShipServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipServiceInterface");
		return ptr;
	}


	class AShip* GetShipForCrew(const struct FGuid& CrewId);
	struct FGuid GetCrewFromShip(class AShip* Ship);
};


// Class Athena.AthenaAIInteractableComponent
// 0x0080 (0x0168 - 0x00E8)
class UAthenaAIInteractableComponent : public UAIInteractableComponent
{
public:
	unsigned char                                      UnknownData00[0xFB];                                      // 0x00E8(0x00FB) MISSED OFFSET
	struct FVector                                     InteractableRelativeVectorToSpawnPos;                     // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TriggerSphereCentreOffset;                                // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TriggerSphereRadiusOffset;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAIInteractableComponent");
		return ptr;
	}


	float GetTriggerRegionRadius();
	struct FVector GetTriggerRegionCenterPoint();
};


// Class Athena.CategoryBase
// 0x0050 (0x0078 - 0x0028)
class UCategoryBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x01E3(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       UniqueTextIdentifier;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CategoryBase");
		return ptr;
	}

};


// Class Athena.QuickCycleToBucketNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickCycleToBucketNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickCycleToBucketNotificationInputId");
		return ptr;
	}

};


// Class Athena.QuickCycleToCompassNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickCycleToCompassNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickCycleToCompassNotificationInputId");
		return ptr;
	}

};


// Class Athena.QuickCycleToPocketWatchNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickCycleToPocketWatchNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickCycleToPocketWatchNotificationInputId");
		return ptr;
	}

};


// Class Athena.QuickCycleToInstrumentNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickCycleToInstrumentNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickCycleToInstrumentNotificationInputId");
		return ptr;
	}

};


// Class Athena.QuickCycleToLanternNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickCycleToLanternNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickCycleToLanternNotificationInputId");
		return ptr;
	}

};


// Class Athena.QuickCycleToTankardNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickCycleToTankardNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickCycleToTankardNotificationInputId");
		return ptr;
	}

};


// Class Athena.QuickCycleToFruitNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickCycleToFruitNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickCycleToFruitNotificationInputId");
		return ptr;
	}

};


// Class Athena.QuickCycleToCannonballNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickCycleToCannonballNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickCycleToCannonballNotificationInputId");
		return ptr;
	}

};


// Class Athena.QuickCycleToWoodPlankNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickCycleToWoodPlankNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickCycleToWoodPlankNotificationInputId");
		return ptr;
	}

};


// Class Athena.QuickCycleToSpyglassNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickCycleToSpyglassNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickCycleToSpyglassNotificationInputId");
		return ptr;
	}

};


// Class Athena.QuickCycleToShovelNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickCycleToShovelNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickCycleToShovelNotificationInputId");
		return ptr;
	}

};


// Class Athena.QuickSwitchWeaponNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickSwitchWeaponNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickSwitchWeaponNotificationInputId");
		return ptr;
	}

};


// Class Athena.ItemCategory
// 0x0008 (0x0080 - 0x0078)
class UItemCategory : public UCategoryBase
{
public:
	unsigned char                                      UnknownData00[0x16B];                                     // 0x0078(0x016B) MISSED OFFSET
	class UClass*                                      NotificationInputId;                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemCategory");
		return ptr;
	}

};


// Class Athena.WeaponItemCategory
// 0x0000 (0x0080 - 0x0080)
class UWeaponItemCategory : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WeaponItemCategory");
		return ptr;
	}

};


// Class Athena.SwordItemCategory
// 0x0000 (0x0080 - 0x0080)
class USwordItemCategory : public UWeaponItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SwordItemCategory");
		return ptr;
	}

};


// Class Athena.BlunderbussItemCategory
// 0x0000 (0x0080 - 0x0080)
class UBlunderbussItemCategory : public UWeaponItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BlunderbussItemCategory");
		return ptr;
	}

};


// Class Athena.EyeOfReachItemCategory
// 0x0000 (0x0080 - 0x0080)
class UEyeOfReachItemCategory : public UWeaponItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EyeOfReachItemCategory");
		return ptr;
	}

};


// Class Athena.FlintlockItemCategory
// 0x0000 (0x0080 - 0x0080)
class UFlintlockItemCategory : public UWeaponItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FlintlockItemCategory");
		return ptr;
	}

};


// Class Athena.UnarmedCombatItemCategory
// 0x0000 (0x0080 - 0x0080)
class UUnarmedCombatItemCategory : public UWeaponItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UnarmedCombatItemCategory");
		return ptr;
	}

};


// Class Athena.InstrumentItemCategory
// 0x0000 (0x0080 - 0x0080)
class UInstrumentItemCategory : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InstrumentItemCategory");
		return ptr;
	}

};


// Class Athena.ConcertinaItemCategory
// 0x0000 (0x0080 - 0x0080)
class UConcertinaItemCategory : public UInstrumentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ConcertinaItemCategory");
		return ptr;
	}

};


// Class Athena.DrumItemCategory
// 0x0000 (0x0080 - 0x0080)
class UDrumItemCategory : public UInstrumentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DrumItemCategory");
		return ptr;
	}

};


// Class Athena.HurdyGurdyItemCategory
// 0x0000 (0x0080 - 0x0080)
class UHurdyGurdyItemCategory : public UInstrumentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HurdyGurdyItemCategory");
		return ptr;
	}

};


// Class Athena.EquipmentItemCategory
// 0x0000 (0x0080 - 0x0080)
class UEquipmentItemCategory : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EquipmentItemCategory");
		return ptr;
	}

};


// Class Athena.BucketItemCategory
// 0x0000 (0x0080 - 0x0080)
class UBucketItemCategory : public UEquipmentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BucketItemCategory");
		return ptr;
	}

};


// Class Athena.CannonballItemCategory
// 0x0000 (0x0080 - 0x0080)
class UCannonballItemCategory : public UEquipmentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CannonballItemCategory");
		return ptr;
	}

};


// Class Athena.CompassItemCategory
// 0x0000 (0x0080 - 0x0080)
class UCompassItemCategory : public UEquipmentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CompassItemCategory");
		return ptr;
	}

};


// Class Athena.FruitItemCategory
// 0x0000 (0x0080 - 0x0080)
class UFruitItemCategory : public UEquipmentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FruitItemCategory");
		return ptr;
	}

};


// Class Athena.LanternItemCategory
// 0x0000 (0x0080 - 0x0080)
class ULanternItemCategory : public UEquipmentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LanternItemCategory");
		return ptr;
	}

};


// Class Athena.PocketWatchItemCategory
// 0x0000 (0x0080 - 0x0080)
class UPocketWatchItemCategory : public UEquipmentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PocketWatchItemCategory");
		return ptr;
	}

};


// Class Athena.ShovelItemCategory
// 0x0000 (0x0080 - 0x0080)
class UShovelItemCategory : public UEquipmentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShovelItemCategory");
		return ptr;
	}

};


// Class Athena.SpyglassItemCategory
// 0x0000 (0x0080 - 0x0080)
class USpyglassItemCategory : public UEquipmentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SpyglassItemCategory");
		return ptr;
	}

};


// Class Athena.TankardItemCategory
// 0x0000 (0x0080 - 0x0080)
class UTankardItemCategory : public UEquipmentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TankardItemCategory");
		return ptr;
	}

};


// Class Athena.WoodPlankItemCategory
// 0x0000 (0x0080 - 0x0080)
class UWoodPlankItemCategory : public UEquipmentItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WoodPlankItemCategory");
		return ptr;
	}

};


// Class Athena.InvalidItemCategory
// 0x0000 (0x0080 - 0x0080)
class UInvalidItemCategory : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InvalidItemCategory");
		return ptr;
	}

};


// Class Athena.DefaultItemCategory
// 0x0000 (0x0080 - 0x0080)
class UDefaultItemCategory : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DefaultItemCategory");
		return ptr;
	}

};


// Class Athena.BootyCategory
// 0x0000 (0x0080 - 0x0080)
class UBootyCategory : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BootyCategory");
		return ptr;
	}

};


// Class Athena.AthenaAIItemParamsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UAthenaAIItemParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAIItemParamsDataAsset");
		return ptr;
	}

};


// Class Athena.AthenaAITeamsServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAITeamsServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAITeamsServiceInterface");
		return ptr;
	}

};


// Class Athena.AthenaAITeamsService
// 0x0098 (0x00C0 - 0x0028)
class UAthenaAITeamsService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAITeamsService");
		return ptr;
	}

};


// Class Athena.AthenaAnimationCapstanBlueprintFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaAnimationCapstanBlueprintFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAnimationCapstanBlueprintFunctions");
		return ptr;
	}


	void STATIC_SetAnimationRemapSpeed(float Speed, struct FAthenaAnimationCapstan* Capstan);
	TEnumAsByte<EAthenaAnimationCapstanState> STATIC_GetCapstanState(const struct FAthenaAnimationCapstan& Capstan);
	float STATIC_GetAngularVelocityWanted(const struct FAthenaAnimationCapstan& Capstan);
};


// Class Athena.AthenaAnimationLODInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaAnimationLODInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAnimationLODInterface");
		return ptr;
	}


	void SetIKState(TEnumAsByte<EIKState> NewState);
	void SetIKSolverType(TEnumAsByte<EIKSolverType> NewState);
	void SetIKFootplantState(TEnumAsByte<EIKFootPlantingState> NewState);
};


// Class Athena.WieldableItemAnimationStoreId
// 0x0000 (0x0028 - 0x0028)
class UWieldableItemAnimationStoreId : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableItemAnimationStoreId");
		return ptr;
	}

};


// Class Athena.CharacterAnimationInterface
// 0x0000 (0x0028 - 0x0028)
class UCharacterAnimationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterAnimationInterface");
		return ptr;
	}


	void UnbindFromCharacter(class AAthenaCharacter* Character);
	void OnImpact(const struct FVector& ImpactLocation, const struct FVector& ImpactNormal, const struct FVector& ImpactVelocity, TEnumAsByte<ECharacterHitReactionAnimType> HitReactionAnimType);
	void LoadCharacterAnimations(class UClass* AnimDataId);
	void BindThirdPersonToCharacter(class AAthenaCharacter* Character, class UClass* AnimDataId);
	void BindFirstPersonToCharacter(class AAthenaCharacter* Character, class UClass* AnimDataId);
};


// Class Athena.AthenaAnimationLocomotionComponentFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaAnimationLocomotionComponentFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAnimationLocomotionComponentFunctions");
		return ptr;
	}


	void STATIC_MarkRunStopComplete(struct FAthenaAnimationLocomotion* Locomotion);
	float STATIC_GetWantedMovementSpeed(const struct FAthenaAnimationLocomotion& Locomotion);
	struct FVector STATIC_GetVelocity(const struct FAthenaAnimationLocomotion& Locomotion);
	bool STATIC_GetTurningLeft(const struct FAthenaAnimationLocomotion& Locomotion);
	bool STATIC_GetTurningActive(const struct FAthenaAnimationLocomotion& Locomotion);
	bool STATIC_GetRunStopWanted(const struct FAthenaAnimationLocomotion& Locomotion);
	bool STATIC_GetIsUnderwaterSwimming(const struct FAthenaAnimationLocomotion& Locomotion);
	bool STATIC_GetIsSwimming(const struct FAthenaAnimationLocomotion& Locomotion);
	float STATIC_GetCurrentYaw(const struct FAthenaAnimationLocomotion& Locomotion);
	float STATIC_GetCurrentDirection(const struct FAthenaAnimationLocomotion& Locomotion);
	bool STATIC_GetCharacterMoving(const struct FAthenaAnimationLocomotion& Locomotion);
	float STATIC_GetBlendedTurnRate(const struct FAthenaAnimationLocomotion& Locomotion);
};


// Class Athena.InventoryItemInterface
// 0x0000 (0x0028 - 0x0028)
class UInventoryItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InventoryItemInterface");
		return ptr;
	}


	void SetItemType(TEnumAsByte<EItemType> InType);
	void OnAddedToInventory();
	TEnumAsByte<EItemType> GetItemType();
	class FString GetIconURL();
	float GetIconScale();
	float GetIconRotation();
};


// Class Athena.WielderAnimationInterface
// 0x0000 (0x0028 - 0x0028)
class UWielderAnimationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WielderAnimationInterface");
		return ptr;
	}


	void SetItemVisibility(const TScriptInterface<class UWieldableInterface>& Item, bool Visibility);
	void ItemWielded(const TScriptInterface<class UWieldableInterface>& Item, struct FWieldAnimationParams* AnimParams);
	void ItemStowed(const TScriptInterface<class UWieldableInterface>& Item, bool FastStow);
	class UPrimitiveComponent* GetWieldedItemMesh(const TScriptInterface<class UWieldableInterface>& Item);
	void DetachWieldedItem(const TScriptInterface<class UWieldableInterface>& Item);
	void AttachWieldedItem(const TScriptInterface<class UWieldableInterface>& Item, const struct FWieldAnimationParams& AnimParams);
};


// Class Athena.AthenaAnimationInstance
// 0x1710 (0x1B50 - 0x0440)
class UAthenaAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x1710];                                    // 0x0440(0x1710) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAnimationInstance");
		return ptr;
	}


	bool SpawnCosmeticItem(class AAthenaCharacter* Owner, class UClass* ObjectToSpawn, TEnumAsByte<EWieldAnimationLocation> SpawnLocation, TEnumAsByte<EWieldAnimationGraph> Animgraph);
	void SetWieldedItemContinuousIsAlternate(bool IsAlternate);
	void SetLoadedItemAllAnimations(const struct FAthenaAnimationCoreObjectAnimations& AllAnimationSet);
	void SetControllableSocketGroupCharacterSize(TEnumAsByte<EAthenaAnimationSocketGroupCharacterSize> InGroup);
	void SetControllableSocketGroup(TEnumAsByte<EAthenaAnimationSocketGroup> InGroup);
	class UBlendSpace1D* PickItemOneShotSequencePitchOverride();
	class UAnimSequence* PickItemOneShotSequence();
	bool NotRunningOnServer();
	TArray<struct FAthenaAnimationLoadObjectsWrapper> LoadAllItemAnimations(class AAthenaCharacter* Owner, class UScriptStruct* DestinationStruct, class UClass* CharacterType);
	void LeftItemBlockingFeedbackState();
	bool InMeleeBlock();
	bool InMeleeAttack();
	bool GetWantsToReenterItemBlockingFeedback();
	TEnumAsByte<EWieldableItemComplexOneShotAnimType> GetMeleeStrikeType();
	struct FAthenaAnimationLocomotion GetLocomotion();
	struct FWieldAnimationParams GetLoadedItemWieldedParams();
	bool GetLoadedItemSecondaryPitchOverride();
	struct FAthenaAnimationObjectActionContinuousStruct GetLoadedItemSecondaryContinuousAnimationsMain();
	struct FTransform GetLoadedItemRightHandOffset();
	bool GetLoadedItemPrimaryPitchOverride();
	struct FAthenaAnimationObjectActionContinuousStruct GetLoadedItemPrimaryContinuousAnimationsMain();
	struct FAthenaAnimationObjectMeleeV2 GetLoadedItemMeleeAnimationsV2();
	struct FAthenaAnimationObjectLocomotionAnimations GetLoadedItemLocomotionAnimations();
	struct FTransform GetLoadedItemLeftHandOffset();
	struct FAthenaAnimationObjectJumpingAnimations GetLoadedItemJumpingAnimations();
	bool GetLoadedItemIsRangedWeapon();
	struct FAthenaAnimationObjectIdleAnimations GetLoadedItemIdleAnimations();
	class UAnimSequence* GetLoadedItemHandAdditiveOverlayAnimation();
	struct FAthenaAnimationObjectFacial GetLoadedItemFacialAnimations();
	struct FAthenaAnimationObjectEquipAnimations GetLoadedItemEquippingAnimations();
	struct FAthenaAnimationCoreObjectAnimations GetLoadedItemAllAnimations();
	bool GetItemUsePitchOverride();
	class UBlendSpace* GetItemMeleeDodgeBlendspace();
	struct FAthenaAnimationObjectActionContinuousStructPitchOverride GetItemContinuousStructurePitchOverride(TEnumAsByte<EContinuousUseID> ContinuousUseID, TEnumAsByte<EContinuousUseOverride> Override);
	struct FAthenaAnimationObjectActionContinuousStruct GetItemContinuousStructure(TEnumAsByte<EContinuousUseID> ContinuousUseID, TEnumAsByte<EContinuousUseOverride> Override);
	class UAnimSequence* GetItemComplexOneShotSequence(TEnumAsByte<EComplexOneShotSubState> ComplexOneShotSubState);
	float GetItemComplexOneShotPlaySpeed(class UAnimSequence* AnimSequence, TEnumAsByte<EComplexOneShotSubState> ComplexOneShotSubState);
	TEnumAsByte<EItemBlockingSubState> GetItemBlockingSubState();
	class UAnimSequence* GetItemBlockingMainOutOfAnimation();
	class UAnimSequence* GetItemBlockingMainIntoAnimation();
	class UBlendSpace* GetItemBlockingMainBlendspace();
	class UAnimSequence* GetItemBlockingFeedbackSequence();
	bool GetInDockingTransition();
	class AActor* GetCurrentEqippedItem();
	TEnumAsByte<EAthenaAnimationSocketGroupCharacterSize> GetControllableSocketGroupCharacterSize();
	TEnumAsByte<EAthenaAnimationSocketGroup> GetControllableSocketGroup();
	float GetAnimationLength(class UAnimSequence* Animation);
	void EnteredItemBlockingFeedbackState();
	bool DestroyCosmeticItem(TEnumAsByte<EWieldAnimationLocation> SpawnLocation);
};


// Class Athena.CameraFunctionLib
// 0x0000 (0x0028 - 0x0028)
class UCameraFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CameraFunctionLib");
		return ptr;
	}


	void STATIC_UpdateCameraAdditiveType(TEnumAsByte<ECameraLookatAnimationType> EnumControllableType, float CameraAdditiveBlendValue, float CameraYawAngle, float CameraPitchAngle, float MinPitchAngle, float MaxPitchAngle, float MaxYawAngle, float MinYawAngle, float* IsCameraAdditive, float* CameraPitchTime, float* CameraYawTime);
};


// Class Athena.FirstPersonAnimationInstance
// 0x0030 (0x1B80 - 0x1B50)
class UFirstPersonAnimationInstance : public UAthenaAnimationInstance
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x1B50(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FirstPersonAnimationInstance");
		return ptr;
	}


	void LoadSpecificItemAnimations(TArray<struct FAthenaAnimationLoadObjectsWrapper> AllItemData, class UClass* ItemId);
};


// Class Athena.ThirdPersonAnimationInstance
// 0x0F00 (0x2A50 - 0x1B50)
class UThirdPersonAnimationInstance : public UAthenaAnimationInstance
{
public:
	unsigned char                                      UnknownData00[0xF00];                                     // 0x1B50(0x0F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ThirdPersonAnimationInstance");
		return ptr;
	}


	void UpdateSkeletonFleeingAnimations(class UClass* ObjectID);
	void UpdatePitchOverrideAnimation(bool IsPrimary);
	float UpdateAISpawnAnimation(class AAthenaCharacter* Owner, class UClass* ObjectID, bool OnLand, bool QuickSpawn);
	void TriggerSensingAnimation(TEnumAsByte<ESkeletonSensingState> NewSensingState);
	void StopMeleeStanceChange();
	void StartMeleeStanceChange();
	void SetLocomotionTypeActive(TEnumAsByte<ELocomotionType> LocomotionType, bool Active);
	bool SelectSkeletonFleeingVariationAnimation();
	void OnEventAllocateShopInteractionAnimations(class AAthenaCharacter* Owner, bool Active, TEnumAsByte<EInteractionObject> Type);
	void LoadSpecificItemAnimations(TArray<struct FAthenaAnimationLoadObjectsWrapper> AllItemData, class UClass* ItemId);
	float GetTargetingPitch();
	TEnumAsByte<ELocomotionType> GetCurrentLocomotionType();
	float GetCharacterPitch();
	class UAnimSequence* GetAIKnockbackAnimation();
	void AllocateNewRandomContinuousEmote(bool IsSlotA);
};


// Class Athena.MockThirdPersonAnimationInstance
// 0x0000 (0x2A50 - 0x2A50)
class UMockThirdPersonAnimationInstance : public UThirdPersonAnimationInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MockThirdPersonAnimationInstance");
		return ptr;
	}

};


// Class Athena.AthenaAnimationInstanceTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaAnimationInstanceTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAnimationInstanceTestFunctions");
		return ptr;
	}


	bool STATIC_IsStateActiveOnAnimationInstance(class UAthenaAnimationInstance* AnimationInstance, const struct FName& InStatePathName);
	TArray<struct FName> STATIC_GetActiveStatesOnAnimationInstance(class UAthenaAnimationInstance* AnimationInstance);
};


// Class Athena.AthenaAnimationJumpingBlueprintFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaAnimationJumpingBlueprintFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAnimationJumpingBlueprintFunctions");
		return ptr;
	}


	void STATIC_SetMaxJumpSequence(int NewMaxJumpSequence, struct FAthenaAnimationJumping* Jumping);
	void STATIC_SetJumpCompleted(struct FAthenaAnimationJumping* Jumping);
	bool STATIC_IsHeavyLanding(const struct FAthenaAnimationJumping& Jumping);
	float STATIC_GetPreImpactTime(const struct FAthenaAnimationJumping& Jumping);
	int STATIC_GetLandingSequence(const struct FAthenaAnimationJumping& Jumping);
	int STATIC_GetJumpSequence(const struct FAthenaAnimationJumping& Jumping);
	TEnumAsByte<EAthenaAnimationJumpingState> STATIC_GetJumpingState(const struct FAthenaAnimationJumping& Jumping);
};


// Class Athena.AthenaAnimationLadderBlueprintFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaAnimationLadderBlueprintFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAnimationLadderBlueprintFunctions");
		return ptr;
	}


	void STATIC_SetClimbOnComplete(struct FAthenaAnimationLadder* Ladder);
	void STATIC_SetClimbOffComplete(struct FAthenaAnimationLadder* Ladder);
	float STATIC_GetPlayerIntent(const struct FAthenaAnimationLadder& Ladder);
	TEnumAsByte<EAthenaAnimationLadderState> STATIC_GetLadderState(const struct FAthenaAnimationLadder& Ladder);
	float STATIC_GetClimbDistance(const struct FAthenaAnimationLadder& Ladder);
};


// Class Athena.AthenaAnimationMountedWeaponBlueprintFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaAnimationMountedWeaponBlueprintFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAnimationMountedWeaponBlueprintFunctions");
		return ptr;
	}


	void STATIC_SetFireFinished(struct FAthenaAnimationMountedWeapon* MountedWeapon);
};


// Class Athena.AthenaAnimationWheelBlueprintFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaAnimationWheelBlueprintFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAnimationWheelBlueprintFunctions");
		return ptr;
	}


	float STATIC_GetWheelTime(const struct FAthenaAnimationWheel& Wheel);
	float STATIC_GetWheelDirection(const struct FAthenaAnimationWheel& Wheel);
	TEnumAsByte<EWheelAnimationType> STATIC_GetWheelAnimationType(const struct FAthenaAnimationWheel& Wheel);
	bool STATIC_GetRightWheelArmDown(const struct FAthenaAnimationWheel& Wheel);
	struct FSocketId STATIC_GetRightHandSocket(const struct FAthenaAnimationWheel& Wheel, class UAthenaAnimationInstance* Owner);
	float STATIC_GetRightFingerAlpha(const struct FAthenaAnimationWheel& Wheel);
	bool STATIC_GetLeftWheelArmDown(const struct FAthenaAnimationWheel& Wheel);
	struct FSocketId STATIC_GetLeftHandSocket(const struct FAthenaAnimationWheel& Wheel, class UAthenaAnimationInstance* Owner);
	float STATIC_GetLeftFingerAlpha(const struct FAthenaAnimationWheel& Wheel);
	float STATIC_GetFullBodyAlpha(const struct FAthenaAnimationWheel& Wheel);
};


// Class Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaAnimationWieldedItemAnimationOverlayFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAnimationWieldedItemAnimationOverlayFunctions");
		return ptr;
	}


	void STATIC_UpdateThirdPersonArmOverlayFlags(class UAthenaAnimationInstance* Owner, const class FString& SourceString, const struct FAthenaAnimationLocomotion& Locomotion);
	void STATIC_UpdateFirstPersonArmOverlayFlags(class UAthenaAnimationInstance* Owner, const class FString& SourceString, const struct FAthenaAnimationLocomotion& Locomotion);
	void STATIC_UpdateAnimOverlayParameters(class UAthenaAnimationInstance* Owner, TEnumAsByte<EArmOverlayState> ArmOverlayState, bool ThirdPersonAnimgraph);
	bool STATIC_StopFacialAnimationMontage(class UAthenaAnimationInstance* Owner, class UAnimMontage* MontageToStop, float BlendTime, TEnumAsByte<EFacialPriority> Priority);
	bool STATIC_PlayNewFacialAnimation(class UAthenaAnimationInstance* Owner, class UAnimMontage* MontageToPlay, float MontagePlayRate, TEnumAsByte<EFacialPriority> Priority);
	bool STATIC_JumpToFacialAnimationMontageSection(class UAthenaAnimationInstance* Owner, class UAnimMontage* PlayingMontage, const struct FName& MontageSection, TEnumAsByte<EFacialPriority> Priority);
};


// Class Athena.AthenaAnimationWieldedItemFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaAnimationWieldedItemFunctions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAnimationWieldedItemFunctions");
		return ptr;
	}


	class UBlendSpace* STATIC_GetIntoContinuousUseSwimmingAnimationBlendSpace(class UAthenaAnimationInstance* AnimInstance, TEnumAsByte<EContinuousUseOverride> Override);
	class UAnimSequenceBase* STATIC_GetIntoContinuousUseAnimationSequence(class UAthenaAnimationInstance* AnimInstance, TEnumAsByte<EContinuousUseOverride> Override);
};


// Class Athena.AthenaAssetSettings
// 0x00C0 (0x00E8 - 0x0028)
class UAthenaAssetSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FStringAssetReference>               AlwaysLoadedServerOnlyBlueprints;                         // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               AlwaysLoadedServerOnlyAssets;                             // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               PreFrontendLoadedBlueprints;                              // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               PreFrontendLoadedAssets;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               PreFrontendLoadedClientOnlyBlueprints;                    // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               PreFrontendLoadedClientOnlyAssets;                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               PreGameLoadedBlueprints;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               PreGameLoadedAssets;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               PreGameLoadedClientOnlyBlueprints;                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               PreGameLoadedClientOnlyAssets;                            // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class FString>                              PhysicsAuditBlueprintExceptions;                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAssetSettings");
		return ptr;
	}

};


// Class Athena.AthenaCameraComponent
// 0x0070 (0x08C0 - 0x0850)
class UAthenaCameraComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0850(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCameraComponent");
		return ptr;
	}


	bool GetIsUnderwater();
	void Activate(bool bReset);
};


// Class Athena.LookAtOffsetComponent
// 0x00F0 (0x01C0 - 0x00D0)
class ULookAtOffsetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x00D0(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LookAtOffsetComponent");
		return ptr;
	}


	struct FLookAtOffset GetLookAtOffset();
};


// Class Athena.CharacterInterface
// 0x0000 (0x0028 - 0x0028)
class UCharacterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterInterface");
		return ptr;
	}


	struct FVector GetMouthPosition();
};


// Class Athena.CharacterFootImpactMeshInterface
// 0x0000 (0x0028 - 0x0028)
class UCharacterFootImpactMeshInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterFootImpactMeshInterface");
		return ptr;
	}


	class USkeletalMeshComponent* GetFootImpactSkeletonMeshComponent();
};


// Class Athena.CharacterInertInterface
// 0x0000 (0x0028 - 0x0028)
class UCharacterInertInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterInertInterface");
		return ptr;
	}


	bool SetInert();
	bool IsInert();
	bool ClearInert();
};


// Class Athena.ObscuredVisionInterface
// 0x0000 (0x0028 - 0x0028)
class UObscuredVisionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ObscuredVisionInterface");
		return ptr;
	}

};


// Class Athena.ControllerInterface
// 0x0000 (0x0028 - 0x0028)
class UControllerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControllerInterface");
		return ptr;
	}


	void EndControl();
};


// Class Athena.LoadableItemInterface
// 0x0000 (0x0028 - 0x0028)
class ULoadableItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LoadableItemInterface");
		return ptr;
	}


	bool CanBeUnloaded();
	bool CanBeLoaded();
};


// Class Athena.PlayerPrivilegeInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerPrivilegeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerPrivilegeInterface");
		return ptr;
	}

};


// Class Athena.InventoryManipulatorInterface
// 0x0000 (0x0028 - 0x0028)
class UInventoryManipulatorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InventoryManipulatorInterface");
		return ptr;
	}


	TEnumAsByte<EWieldItemReturnCode> WieldItemByActor(class AActor* Item, bool UnwieldFast);
	void ToggleWieldItem();
	bool RemoveItem(class AItemInfo* Item);
	void QuickSelectItemOfType(TEnumAsByte<EItemType> ItemType, int TypedItemIndex);
	void QuickSelectItemOfCategory(class UClass* Category, int IndexIntoCategory);
	void QuickSelectItem(int ItemIndex);
	bool PickUpItem(class AItemInfo* Item, bool AndWield);
	int GetNumberOfItemsOfItemCategory(class UClass* ItemSlot);
	TArray<class UClass*> GetItems();
	int GetCurrentItemIndex();
	TEnumAsByte<EDropItemReturnCode> DropWieldedItem();
	void CycleItemUp();
	void CycleItemType(TEnumAsByte<EItemType> ItemType);
	void CycleItemDown();
	void CycleItemCategory(class UClass* Category);
	bool ConsumeItem(class AItemInfo* Item);
	TEnumAsByte<EDropItemReturnCode> CanDropWieldedItem();
	TEnumAsByte<ECanAddItemQueryResult> CanAddItemOfItemCategory(class UClass* ItemSlot);
	bool AddItemOfSubclass(class UClass* InItem);
	bool AddItem(class AItemInfo* Item);
};


// Class Athena.WieldedItemInterface
// 0x0000 (0x0028 - 0x0028)
class UWieldedItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldedItemInterface");
		return ptr;
	}


	TEnumAsByte<EWieldItemReturnCode> WieldItem(const TScriptInterface<class UWieldableInterface>& Item, bool Fast);
	void UnstashItem(TEnumAsByte<EStashReason> Reason);
	void StashItem(TEnumAsByte<EStashReason> Reason);
	void SlowStashItem(TEnumAsByte<EStashReason> Reason);
	TScriptInterface<class UWieldableInterface> GetWieldedItemIfNotStashed();
	TScriptInterface<class UWieldableInterface> GetWieldedItem();
};


// Class Athena.CloudDomeInterface
// 0x0000 (0x0028 - 0x0028)
class UCloudDomeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CloudDomeInterface");
		return ptr;
	}


	void UpdateCloudMeshes(struct FCloudVisualParameters* CloudVisualParametersIn, TArray<struct FTiledCloudProperties>* CloudTileIn, TArray<struct FRenderedCloudProperties>* RenderedCloudsIn, TArray<struct FCloudTypeDefinition>* CloudMeshesIn, TArray<struct FCloudTypeNormalizedWeight>* NormalizedCloudWeightsIn);
	struct FVector GetCloudDomePosition();
};


// Class Athena.CloudDome
// 0x02E0 (0x0750 - 0x0470)
class ACloudDome : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2E0];                                     // 0x0470(0x02E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CloudDome");
		return ptr;
	}

};


// Class Athena.TelemetrySubjectInterface
// 0x0000 (0x0028 - 0x0028)
class UTelemetrySubjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TelemetrySubjectInterface");
		return ptr;
	}

};


// Class Athena.AthenaCharacter
// 0x05A0 (0x0C00 - 0x0660)
class AAthenaCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x5A0];                                     // 0x0660(0x05A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCharacter");
		return ptr;
	}


	TEnumAsByte<EWieldItemReturnCode> WieldItem(const TScriptInterface<class UWieldableInterface>& Item, bool Fast);
	bool UseItem(class UClass* NotificationInputId);
	void UnforceWaterHeight();
	void SetIgnoreReplicationRotationOnly(bool InIgnoreReplicationRotationOnly);
	void ReceiveRestart();
	void PickUpItem(class AItemInfo* ItemInfo, bool AndWield);
	void Kill(TEnumAsByte<ECharacterDeathType> DeathType);
	bool IsInWater();
	bool IsInteractionValid(class AActor* InInteractable);
	bool IsDead();
	bool IsCurrentItemReadyForAI(class UClass* NotificationInputId);
	void InteractWith(class AActor* InInteractable, class UClass* NotificationInputId);
	void Interact(class AActor* InInteractable);
	bool HasValidWaterHeight();
	void HandleCharacterMovementUpdated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	float GetYawOnMovingBase();
	float GetWaterLevelRelativeToCharacterBasePosition();
	struct FWaterInformation GetWaterInformation();
	float GetWaterHeight();
	float GetViewPitch();
	bool GetValidWaterHeightAtomic(float* OutWaterHeight);
	class USkeletalMeshComponent* GetThirdPersonMeshComponent();
	class UCharacterInputBinder* GetInputBinder();
	bool GetIgnoreReplicationRotationOnly();
	class AActor* GetFocusedInteractable();
	struct FCollisionResponseContainer GetFloorSweepCollisionResponseContainer();
	class USkeletalMeshComponent* GetFirstPersonMeshComponent();
	class AActor* GetCurrentShipAsActor();
	class AShip* GetCurrentShip();
	struct FTransform GetCharacterTransform();
	struct FRotator GetCharacterRotation();
	void GenerateNewRandomAnimationSeed();
	void ForceWaterHeight(float WaterHeight, class UClass* WaterId);
	void CureAllAilings();
	void CreateProjectileTraceHitVolume();
	bool CanInteractWith(class AActor* InInteractable, class UClass* NotificationInputId);
	void CalculateWaterHeight();
	bool AllAnimationsLoaded();
};


// Class Athena.AttitudeSource
// 0x0000 (0x0028 - 0x0028)
class UAttitudeSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AttitudeSource");
		return ptr;
	}

};


// Class Athena.DelayedMeshCharacterInterface
// 0x0000 (0x0028 - 0x0028)
class UDelayedMeshCharacterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DelayedMeshCharacterInterface");
		return ptr;
	}

};


// Class Athena.DamagerType
// 0x0000 (0x0028 - 0x0028)
class UDamagerType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DamagerType");
		return ptr;
	}

};


// Class Athena.DamageInstigatorInterface
// 0x0000 (0x0028 - 0x0028)
class UDamageInstigatorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DamageInstigatorInterface");
		return ptr;
	}


	bool CanDamageActor(class AActor* DamageRecipient);
};


// Class Athena.Company
// 0x00E0 (0x0108 - 0x0028)
class UCompany : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x01E3(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       UniqueTextIdentifier;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EBootyTypes>>                   BootyBought;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       MapsDiscoveredBackgroundImage;                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FStringAssetReference>               MapsDiscoveredImages;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FText                                       VoyageAudioSwitchName;                                    // 0x01E3(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x20];                                      // 0x01F3(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Company");
		return ptr;
	}

};


// Class Athena.EntitlementDesc
// 0x00B0 (0x00D8 - 0x0028)
class UEntitlementDesc : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x01E3(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       Description;                                              // 0x01E3(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FStringAssetReference                       IconPath;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       IconInvPath;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       IconPrvPath;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      Category;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EntitlementDesc");
		return ptr;
	}

};


// Class Athena.ItemDesc
// 0x0048 (0x0120 - 0x00D8)
class UItemDesc : public UEntitlementDesc
{
public:
	unsigned char                                      UnknownData00[0x10B];                                     // 0x00D8(0x010B) MISSED OFFSET
	struct FStringClassReference                       InstanceClassType;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      CanBeAddedToLoadout : 1;                                  // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      IsTransient : 1;                                          // 0x01E3(0x0001) (Edit, DisableEditOnInstance)
	class FString                                      PreviousItem;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      NextItem;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       IconRadPath;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemDesc");
		return ptr;
	}

};


// Class Athena.ItemWithoutIconsDesc
// 0x0000 (0x0120 - 0x0120)
class UItemWithoutIconsDesc : public UItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemWithoutIconsDesc");
		return ptr;
	}

};


// Class Athena.NamedObjectInterface
// 0x0000 (0x0028 - 0x0028)
class UNamedObjectInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NamedObjectInterface");
		return ptr;
	}


	struct FText GetObjectDisplayName();
};


// Class Athena.ItemInfo
// 0x0048 (0x04B8 - 0x0470)
class AItemInfo : public AActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0470(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemInfo");
		return ptr;
	}


	class UClass* GetItemType();
	class UClass* GetItemCategory();
	class AActor* GetItem();
	class AWieldableItem* GetAsWieldable();
	class AWieldableItem* CreateWieldableItem(class AActor* InNewOwner, const struct FTransform& InTransform);
	class AItemProxy* CreateProxyItem(const struct FTransform& InTransform, TEnumAsByte<EItemLifetimeManagement> LifetimeManagement);
};


// Class Athena.ImpactProjectileId
// 0x0000 (0x0028 - 0x0028)
class UImpactProjectileId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactProjectileId");
		return ptr;
	}

};


// Class Athena.ProjectileWeaponFiringIntentionInterface
// 0x0000 (0x0028 - 0x0028)
class UProjectileWeaponFiringIntentionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ProjectileWeaponFiringIntentionInterface");
		return ptr;
	}

};


// Class Athena.TrackedActorInterface
// 0x0000 (0x0028 - 0x0028)
class UTrackedActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TrackedActorInterface");
		return ptr;
	}

};


// Class Athena.AthenaAICharacter
// 0x0390 (0x0F90 - 0x0C00)
class AAthenaAICharacter : public AAthenaCharacter
{
public:
	unsigned char                                      UnknownData00[0x390];                                     // 0x0C00(0x0390) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAICharacter");
		return ptr;
	}


	void SetTargetActorToFace(class AActor* InActor);
	void SetRegion(const struct FName& InRegion);
	void SetOverrideShotHitChance(bool Enabled, float HitChance);
	void SetOverrideCannonShotHitChance(bool Enabled, float HitChance);
	void SetLoadout(TAssetPtr<class ULoadoutAsset> InLoadout);
	void SetAIStrategy(class UClass* InStrategy);
	void OnRep_CurrentAIStrategy(class UClass* OldAIStrategy);
	struct FName GetRegion();
	class UClass* GetAIStrategy();
};


// Class Athena.AthenaCharacterMock
// 0x0080 (0x0C80 - 0x0C00)
class AAthenaCharacterMock : public AAthenaCharacter
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0C00(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCharacterMock");
		return ptr;
	}

};


// Class Athena.DeferredSpawnInterface
// 0x0000 (0x0028 - 0x0028)
class UDeferredSpawnInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DeferredSpawnInterface");
		return ptr;
	}

};


// Class Athena.PlayerCharacterInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerCharacterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerCharacterInterface");
		return ptr;
	}


	class USceneComponent* GetFirstPersonWwiseEmitterOwner();
	void ExecuteRumbleProfile(const struct FName& RumbleTag);
};


// Class Athena.SwimAttackableInterface
// 0x0000 (0x0028 - 0x0028)
class USwimAttackableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SwimAttackableInterface");
		return ptr;
	}

};


// Class Athena.PlayerManagerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerManagerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerManagerServiceInterface");
		return ptr;
	}


	class AAthenaPlayerCharacter* GetPlayerCharacterFromPlayerState(class AAthenaPlayerState* PlayerState);
	int GetNumPlayers();
	int GetNumActiveLocalPlayers();
	class AAthenaPlayerCharacter* GetFirstLocalPlayer();
	TArray<struct FWeakActorHandle> GetAllPlayerControllersWeakActorHandle();
	TArray<class AAthenaPlayerCharacter*> GetAllActivePlayers();
	TArray<class AAthenaPlayerCharacter*> GetActiveLocalPlayers();
};


// Class Athena.ObjectMeshRetrievalInterface
// 0x0000 (0x0028 - 0x0028)
class UObjectMeshRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ObjectMeshRetrievalInterface");
		return ptr;
	}

};


// Class Athena.WieldableInterface
// 0x0000 (0x0028 - 0x0028)
class UWieldableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableInterface");
		return ptr;
	}


	class AItemInfo* GetItemInfo();
	class UClass* GetAnimationKey();
	class AActor* GetActor();
};


// Class Athena.ItemLoadoutViewInterface
// 0x0000 (0x0028 - 0x0028)
class UItemLoadoutViewInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemLoadoutViewInterface");
		return ptr;
	}


	bool HasCapacity(class UClass* InItemCategory);
	TArray<class UClass*> GetWeaponsLoadout();
	int GetNumItems(class UClass* InItemCategory);
	int GetNumCategories();
	TArray<class AItemInfo*> GetItems(class UClass* InItemCategory);
	struct FItemLoadout GetItemLoadout();
	class AItemInfo* GetItemByIndex(class UClass* InItemCategory, int Index);
	class AItemInfo* GetItem(class UClass* InItemCategory);
	TArray<class UClass*> GetCategories();
	int GetCapacity(class UClass* InItemCategory);
	TArray<class AItemInfo*> GetAllItems();
};


// Class Athena.RadialInventoryInterface
// 0x0000 (0x0028 - 0x0028)
class URadialInventoryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RadialInventoryInterface");
		return ptr;
	}


	void ResetRadialInventory();
	void OnRadialInventoryInput(const struct FVector2D& InputVector);
	bool IsFullyOpened();
	int GetNumSlots();
	int GetMaxNumOfPages();
	class AActor* GetLastSelectedItem();
	void DeactivateRadialInventory();
	void ConfirmRadialFullyOpened();
	void ActivateRadialInventory(TEnumAsByte<ERadialMenuInputModality> InputModality);
};


// Class Athena.WieldableItemSetInterface
// 0x0000 (0x0028 - 0x0028)
class UWieldableItemSetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableItemSetInterface");
		return ptr;
	}


	bool RemoveItem(class AActor* Item);
	class UClass* GetSlotForItem(int Index);
	int GetNumItemsOfType(class UClass* Type);
	int GetNumItems();
	TArray<class AActor*> GetItemsOfCategory(class UClass* ItemCategory);
	int GetItemIndexInCategorySet(class AActor* Item, class UClass* ItemCategory);
	int GetItemIndex(class AActor* Item);
	class AActor* GetItemFromSlot(class UClass* ItemCategory);
	class AActor* GetItem(int Index);
	bool ContainsItemOfType(class UClass* ItemType);
	bool Contains(class AActor* Item);
	bool AddItemToSlot(class AActor* Item, class UClass* ItemCategory);
	bool AddItem(class AActor* Item);
};


// Class Athena.RadialInventoryComponent
// 0x02E8 (0x03B8 - 0x00D0)
class URadialInventoryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	int                                                RadialIdentifier;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadialIconScale;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   RadialIconOffset;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UWieldableItemSetInterface> WieldableItemSetInterface;                                // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UInventoryManipulatorInterface> InventoryManipulatorInterface;                            // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      LastSelectedItem;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              RemappedRadialSlots;                                      // 0x01E3(0x0010) (ZeroConstructor)
	class AAthenaPlayerController*                     CachedController;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInputBinder*                                RadialInputBinder;                                        // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1CD];                                     // 0x01EB(0x01CD) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RadialInventoryComponent");
		return ptr;
	}


	void SetDefaultRemappingPolicy();
	void ResetRadialInventory();
	void OnRadialInventoryInput(const struct FVector2D& InputVector);
	bool IsHUDScriptingReady();
	bool IsFullyOpened();
	int GetSelectedRadialInventorySlot();
	int GetNumSlots();
	int GetMaxNumOfPages();
	class AActor* GetLastSelectedItem();
	TEnumAsByte<ERadialMenuInputModality> GetInputModality();
	class UInputBinder* GetInputBinder();
	void DeactivateRadialInventory();
	void ConfirmRadialFullyOpened();
	void ActivateRadialInventory(TEnumAsByte<ERadialMenuInputModality> InputModality);
};


// Class Athena.PhrasesRadialComponent
// 0x0050 (0x0408 - 0x03B8)
class UPhrasesRadialComponent : public URadialInventoryComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03B8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PhrasesRadialComponent");
		return ptr;
	}


	int GetNumSlots();
	class AActor* GetLastSelectedItem();
	void DeactivateRadialInventory();
};


// Class Athena.PhrasesRadialDataAsset
// 0x0010 (0x0038 - 0x0028)
class UPhrasesRadialDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PhrasesRadialDataAsset");
		return ptr;
	}

};


// Class Athena.RadialPhrasesAdjusterInterface
// 0x0000 (0x0028 - 0x0028)
class URadialPhrasesAdjusterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RadialPhrasesAdjusterInterface");
		return ptr;
	}


	class UPhrasesRadialDataAsset* GetRadialPhrases();
};


// Class Athena.TelemetryDescriptorInterface
// 0x0000 (0x0028 - 0x0028)
class UTelemetryDescriptorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TelemetryDescriptorInterface");
		return ptr;
	}

};


// Class Athena.WieldableItem
// 0x0350 (0x07C0 - 0x0470)
class AWieldableItem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x350];                                     // 0x0470(0x0350) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableItem");
		return ptr;
	}


	void SetItemWwiseSwitch(const struct FName& SwitchGroup, const struct FName& SwitchOption);
	void SetItemWwiseRTPC(float Value, struct FName* RTPCName);
	void PostItemWwiseEvent(class UWwiseEvent* Event);
	void OnWielderHasLandedFromJumpBPImpl();
	bool IsUnderwater();
	class AAthenaCharacter* GetWielderCharacter();
	class AActor* GetWielder();
	TEnumAsByte<EWieldableItemSize> GetWieldableItemSize();
	class AActor* GetLastKnownWielder();
	struct FWwiseEmitter GetItemSfxEmitter();
	bool GetIsFirstPerson();
};


// Class Athena.RadialCompositeInputHandler
// 0x0090 (0x0168 - 0x00D8)
class URadialCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00D8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RadialCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnRadialY(float Value);
	TEnumAsByte<EInputHandlerResult> OnRadialX(float Value);
	void HandleAxisChange(float Value);
	TEnumAsByte<EInputHandlerResult> HandleAnalogInputsIfBlocking(float Value);
};


// Class Athena.RadialInventorySelectorInterface
// 0x0000 (0x0028 - 0x0028)
class URadialInventorySelectorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RadialInventorySelectorInterface");
		return ptr;
	}

};


// Class Athena.CloudDomeServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UCloudDomeServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CloudDomeServiceInterface");
		return ptr;
	}


	void UnregisterCloudDomeFromService(const TScriptInterface<class UCloudDomeInterface>& CloudDome);
	void RegisterCloudDomeWithService(const TScriptInterface<class UCloudDomeInterface>& CloudDome);
	int GetNumberOfCloudDomes();
	TScriptInterface<class UCloudDomeInterface> GetCloudDome(int CloudDomeIndex);
	class ACloudDome* GetActualCloudDome(int CloudDomeIndex);
};


// Class Athena.VoyageParticipantInterface
// 0x0000 (0x0028 - 0x0028)
class UVoyageParticipantInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageParticipantInterface");
		return ptr;
	}

};


// Class Athena.AthenaPlayerCharacter
// 0x0600 (0x1200 - 0x0C00)
class AAthenaPlayerCharacter : public AAthenaCharacter
{
public:
	unsigned char                                      UnknownData00[0x600];                                     // 0x0C00(0x0600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaPlayerCharacter");
		return ptr;
	}


	void WalkActivate();
	bool UseItem(class UClass* NotificationInputId);
	void SprintActivate();
	void OnWieldedItem();
	void OnRep_ReplicatedIsSprinting();
	void OnRep_OverridePirateDescSeed();
	void OnMeshSet();
	void Multicast_OnKrakenTentacleDeath(int RemainingTentacles);
	bool IsSprintEnabled();
	bool IsInteractionValid(class AActor* InInteractable);
	bool HasMeshSet();
	bool HasFinishedSpawning();
	struct FVector GetPawnViewLocation();
	struct FName GetLocalPlayerWorldRegionName();
	bool GetIsSprinting();
	bool GetIsDigitallyWalking();
	class AActor* GetFocusedInteractable();
	struct FVector GetFirstPersonMeshOffset();
	TEnumAsByte<EShipRegion> GetCurrentShipRegion();
	void ClientAddPlayerAsFriend(class AAthenaPlayerCharacter* PlayerToAddAsFriend);
	bool AllAnimationsLoaded();
};


// Class Athena.AthenaGhostPlayerCharacter
// 0x00A0 (0x12A0 - 0x1200)
class AAthenaGhostPlayerCharacter : public AAthenaPlayerCharacter
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x1200(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGhostPlayerCharacter");
		return ptr;
	}

};


// Class Athena.AthenaGhostPlayerCharacterMock
// 0x0000 (0x12A0 - 0x12A0)
class AAthenaGhostPlayerCharacterMock : public AAthenaGhostPlayerCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGhostPlayerCharacterMock");
		return ptr;
	}

};


// Class Athena.VoyageParticipantComponent
// 0x01F8 (0x02C8 - 0x00D0)
class UVoyageParticipantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FVoyageParticipantView                      View;                                                     // 0x01E3(0x00A0) (Net)
	unsigned char                                      UnknownData01[0x45];                                      // 0x0283(0x0045) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageParticipantComponent");
		return ptr;
	}


	void OnRep_View();
};


// Class Athena.AthenaPlayerCharacterMock
// 0x0000 (0x1200 - 0x1200)
class AAthenaPlayerCharacterMock : public AAthenaPlayerCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaPlayerCharacterMock");
		return ptr;
	}

};


// Class Athena.AthenaPlayerCharacterUnitTestMock
// 0x00D0 (0x12D0 - 0x1200)
class AAthenaPlayerCharacterUnitTestMock : public AAthenaPlayerCharacterMock
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x1200(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaPlayerCharacterUnitTestMock");
		return ptr;
	}

};


// Class Athena.AthenaPlayerCharacterUnitTestMockWithTestInputHandler
// 0x0000 (0x12D0 - 0x12D0)
class AAthenaPlayerCharacterUnitTestMockWithTestInputHandler : public AAthenaPlayerCharacterUnitTestMock
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaPlayerCharacterUnitTestMockWithTestInputHandler");
		return ptr;
	}

};


// Class Athena.TestObscuredVisionActor
// 0x0010 (0x12E0 - 0x12D0)
class ATestObscuredVisionActor : public AAthenaPlayerCharacterUnitTestMock
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x12D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestObscuredVisionActor");
		return ptr;
	}

};


// Class Athena.AthenaPlayerCharacterWithTestInputHandler
// 0x0000 (0x1200 - 0x1200)
class AAthenaPlayerCharacterWithTestInputHandler : public AAthenaPlayerCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaPlayerCharacterWithTestInputHandler");
		return ptr;
	}

};


// Class Athena.InventoryCharacterMock
// 0x0000 (0x0C00 - 0x0C00)
class AInventoryCharacterMock : public AAthenaCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InventoryCharacterMock");
		return ptr;
	}

};


// Class Athena.AthenaCharacterDockingFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaCharacterDockingFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCharacterDockingFunctions");
		return ptr;
	}


	void STATIC_StartDockingCharacterWithActor(class AAthenaCharacter* Owner, class AActor* Target, float DockDuration, struct FDocker* Docker);
};


// Class Athena.AthenaCharacterDodgeComponent
// 0x0020 (0x00F0 - 0x00D0)
class UAthenaCharacterDodgeComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FAthenaCharacterDodgeParams                 Params;                                                   // 0x01E3(0x0010) (Edit)
	class AAthenaCharacter*                            Character;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCharacterDodgeComponent");
		return ptr;
	}


	void Server_RequestDodge(const struct FVector& Direction);
	void Multicast_CharacterDodge(const struct FVector& Direction);
};


// Class Athena.AthenaCharacterFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaCharacterFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCharacterFunctions");
		return ptr;
	}


	bool STATIC_TeleportPlayerToLocation(class AAthenaCharacter* Character, const struct FTeleportLocation& Where);
	struct FTeleportLocation STATIC_GetTeleportLocationForPlayer(class AAthenaCharacter* Player);
	bool STATIC_AllAnimationsLoadedForCharacter(class AAthenaCharacter* Character);
};


// Class Athena.KnockbackInterface
// 0x0000 (0x0028 - 0x0028)
class UKnockbackInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KnockbackInterface");
		return ptr;
	}

};


// Class Athena.AthenaCharacterKnockbackComponent
// 0x0068 (0x0138 - 0x00D0)
class UAthenaCharacterKnockbackComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	bool                                               Disabled;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            Character;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCharacterKnockbackComponent");
		return ptr;
	}


	void SetDisabled(bool IsDisabled);
	void KnockBack(const struct FKnockBackInfo& KnockBackInfo, const struct FVector& Direction, float NoWaterDragDuration, class UClass* DamagerType);
	void Client_PlayerKnockBackRPC(const struct FKnockBackInfo& KnockBackInfo, const struct FVector& Direction, float NoWaterDragDuration);
};


// Class Athena.AthenaCharacterKnockbackComponentMock
// 0x0000 (0x0138 - 0x0138)
class UAthenaCharacterKnockbackComponentMock : public UAthenaCharacterKnockbackComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCharacterKnockbackComponentMock");
		return ptr;
	}

};


// Class Athena.AthenaCharacterMovementCheatDetectionSettings
// 0x0008 (0x0030 - 0x0028)
class UAthenaCharacterMovementCheatDetectionSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              MinLifetime;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCharacterMovementCheatDetectionSettings");
		return ptr;
	}

};


// Class Athena.AthenaCharacterMovementUnderwater
// 0x0120 (0x0148 - 0x0028)
class UAthenaCharacterMovementUnderwater : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               bSphere;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HalfHeight;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PenResolveInflation;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PullBackDistance;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FanOutAngle;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFanOutScalar;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           FanOutNumSteps;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleBobSpeed;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleBobDuration;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CollisionProfileName;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 VelocityToAngle;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           MaxExpectedHits;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDrawDebugCapsule;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCharacterMovementUnderwater");
		return ptr;
	}

};


// Class Athena.LocalDisturbanceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULocalDisturbanceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LocalDisturbanceFunctionLibrary");
		return ptr;
	}


	void STATIC_SetWindowSize(class UObject* WorldContextObject, const struct FVector2D& WindowSize);
	void STATIC_SetBlendValues(class UObject* WorldContextObject, const struct FVector4& BlendValues);
	void STATIC_AddDisturbance(class UObject* WorldContextObject, const struct FVector& Position, const struct FVector& Velocity, float Size, float GrassCutScale);
};


// Class Athena.AthenaCharacterMovementComponent
// 0x0230 (0x0760 - 0x0530)
class UAthenaCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x0530(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCharacterMovementComponent");
		return ptr;
	}


	void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	void SetErrorOnResolvePenetration(bool ErrorOnResolve);
	bool HasValidAckedMoveClientOnly();
	float GetTimestampOfMostRecentPredictedMoveClientOnly();
	float GetTimestampOfLastAckedMoveClientOnly();
	float GetTerminalVelocity();
	TEnumAsByte<EMovementMode> GetMovementMode();
	float GetMaxSprintSpeed();
	float GetMaxMoveSpeedScalar();
	void FindCurrentFloor();
};


// Class Athena.AthenaAICharacterMovementComponent
// 0x0200 (0x0960 - 0x0760)
class UAthenaAICharacterMovementComponent : public UAthenaCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0760(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaAICharacterMovementComponent");
		return ptr;
	}

};


// Class Athena.AthenaPlayerCharacterMovementComponent
// 0x00D0 (0x0830 - 0x0760)
class UAthenaPlayerCharacterMovementComponent : public UAthenaCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0760(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaPlayerCharacterMovementComponent");
		return ptr;
	}


	void RestoreAudioStateAfterFallDamage();
};


// Class Athena.MockAthenaPlayerCharacterMovementComponent
// 0x0000 (0x0830 - 0x0830)
class UMockAthenaPlayerCharacterMovementComponent : public UAthenaPlayerCharacterMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MockAthenaPlayerCharacterMovementComponent");
		return ptr;
	}

};


// Class Athena.AthenaCharacterMovementSettings
// 0x0020 (0x0048 - 0x0028)
class UAthenaCharacterMovementSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FNetPositionErrorTolerance                  StandardError;                                            // 0x01E3(0x0008) (Edit, Config)
	struct FNetPositionErrorTolerance                  SwimmingError;                                            // 0x01E3(0x0008) (Edit, Config)
	float                                              SwimmingClientTrustThreshold;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxSwimmingTimeStep;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxSwimmingIterations;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCharacterMovementSettings");
		return ptr;
	}

};


// Class Athena.AthenaCharacterStateManagerComponent
// 0x0028 (0x00F8 - 0x00D0)
class UAthenaCharacterStateManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCharacterStateManagerComponent");
		return ptr;
	}

};


// Class Athena.AthenaCharacterTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaCharacterTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCharacterTestFunctions");
		return ptr;
	}


	void STATIC_WaitUntilFullySpawned(class AAthenaCharacter* Target, const struct FLatentActionInfo& LatentInfo);
	void STATIC_WaitUntilDocked(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AAthenaCharacter* AthenaCharacter);
	void STATIC_WaitForTeleport(class UObject* WorldContextObject, class AAthenaCharacter* AthenaCharacter, const struct FLatentActionInfo& LatentInfo);
	void STATIC_WaitForMovementMode(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AAthenaCharacter* AthenaCharacter, TEnumAsByte<EMovementMode> WantedMovementMode, int NumFramesInMovementMode);
	void STATIC_WaitForCustomMovementMode(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AAthenaCharacter* AthenaCharacter, unsigned char CustomMovementMode, int NumFramesInMovementMode);
	void STATIC_TestRadialHandleNotificationInput(class AAthenaCharacter* AthenaCharacter, class UClass* Id);
	void STATIC_TestRadialHandleAnalogInput(class AAthenaCharacter* AthenaCharacter, class UClass* Id, float Value);
	void STATIC_TestAthenaCharacterHandleNotificationInput(class AAthenaCharacter* AthenaCharacter, class UClass* Id);
	void STATIC_TestAthenaCharacterHandleAnalogInput(class AAthenaCharacter* AthenaCharacter, class UClass* Id, float Value);
	void STATIC_TeleportToPosition(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AAthenaCharacter* AthenaCharacter, class USceneComponent* TeleportBase, const struct FVector& Position, const struct FRotator& Rotation, int StreamOutLevel, int StreamInLevel);
	void STATIC_SimulateButtonPress(class APlayerController* PlayerController, const struct FKey& Button);
	class UCharacterInputBinder* STATIC_SetupInputBinder(class AAthenaCharacter* Character);
	void STATIC_SetupCharacterForMPTesting(class UObject* WorldContextObject, class AAthenaCharacter* AthenaCharacter);
	class AAthenaCharacter* STATIC_SetupAthenaCharacterForInteractionTestByIndex(class UObject* WorldContextObject, int PlayerIndex);
	class AAthenaCharacter* STATIC_SetupAthenaCharacterForInteractionTest(class UObject* WorldContextObject, class AAthenaCharacter* AthenaCharacter);
	void STATIC_SendCharacterMoveInput(class AAthenaCharacter* Character, const struct FVector2D& Movement);
	bool STATIC_HasAnyoneGotInputBindings(class UObject* WorldContextObject);
	class AAthenaPlayerCharacter* STATIC_GetLocalAthenaCharacter(class UObject* WorldContextObject, int PlayerIndex);
	class AAthenaPlayerCharacter* STATIC_GetClientPlayerCharacter(class UObject* WorldContextObject, int ClientId, int SplitScreenIndex);
	class AAthenaCharacter* STATIC_GetClientCharacter(class UObject* WorldContextObject, int ClientId, int SplitScreenIndex);
	void STATIC_ForceInteract(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AAthenaCharacter* AthenaCharacter, class AActor* Interactable, bool WaitUntilFullyDocked);
	class AItemInfo* STATIC_CreateAndEquipItemDesc(class AAthenaCharacter* Character, class UClass* ItemDesc);
	class AItemInfo* STATIC_CreateAndAddItemDescToInventory(class AAthenaCharacter* Character, class UClass* ItemDesc);
	void STATIC_ClearInputBindings(class UObject* WorldContextObject);
	void STATIC_ClearCharacterInteractionPolicies(class UObject* WorldContextObject);
};


// Class Athena.ShipCategory
// 0x0000 (0x0028 - 0x0028)
class UShipCategory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCategory");
		return ptr;
	}

};


// Class Athena.ShipSize
// 0x0000 (0x0028 - 0x0028)
class UShipSize : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipSize");
		return ptr;
	}

};


// Class Athena.ShipType
// 0x0000 (0x0028 - 0x0028)
class UShipType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipType");
		return ptr;
	}

};


// Class Athena.AthenaCheatManager
// 0x0018 (0x0090 - 0x0078)
class UAthenaCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x16B];                                     // 0x0078(0x016B) MISSED OFFSET
	class ACinematicCameraController*                  CinematicCameraController;                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      CinematicCameraControllerClass;                           // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaCheatManager");
		return ptr;
	}


	void WindTriggerChange(int ChangeInstantly);
	void WindSetVector(float X, float Y);
	void WindSetMagnitude(float Magnitude);
	void WindSetDirection(float X, float Y);
	void WindReloadParams();
	void WindPrintDirection();
	void WindEnableDebug();
	void WindDisableDebug();
	void WindAlignWithCamera();
	void Walk();
	void VomitWithType(const struct FName& VomitType, float Duration);
	void Vomit();
	void UnlockAllEntitlements(int TrueFalse);
	void TriggerRewardNotification(struct FName* Identifier);
	void TriggerLandmarkReaction(int ActionType);
	void TriggerEmblemUnlockedMessage(const class FString& EmblemFriendlyName);
	void TriggerControllerConnectionChange(bool IsConnect, int UserId, int ControllerId);
	void ToggleVideprinter(const class FString& Id);
	void ToggleThirdPerson();
	void ToggleFastShipControls();
	void ToggleDrawShipSpeed();
	void ToggleDisplayCannonAISpawnerZones();
	void ToggleDebugFlying();
	void ToggleDeathCamera();
	void ToggleCinematicCamera();
	void ToggleAttributeOverride();
	void TestCrashDumpCreationOnRunnableThread();
	void TestCrashDumpCreationOnMainThread();
	void TeleportToShip();
	void TeleportToPlayerStart();
	void TeleportToNearestTreasureLocation();
	void TeleportToLocation(float LocationX, float LocationY, float LocationZ);
	void TeleportToHideout();
	void TeleportShip(float X, float Y, float Z);
	void TeleportPlayerToSafety();
	void TeleportPlayerToKraken();
	void TeleportOutOfHideout();
	void TeleportCrewToShip(const class FString& CrewId);
	void TeleportCrewToSafeSpawnLocationFromRemoteActor(const class FString& ActorIdString, const class FString& CrewId);
	void TeleportCrewToSafeSpawnLocation(const class FString& CrewId);
	void TeleportCrewMemberToShip(const class FString& ActorIdString);
	void TeleportAllPlayersToShip();
	void TeleportAllPlayersToPlayerStart();
	void TeleportAllCrewsToCrewSpawnLocations();
	void TeleportActorToTeleportLocationActor(const class FString& ControllerActorIdString, const class FString& TeleportLocationActorIdString);
	void TeleportActorToLocation(const class FString& ActorIdString, float LocationX, float LocationY, float LocationZ, float Yaw);
	void TeleportActorToIsland(const class FString& ActorIdString, const class FString& IslandName);
	void TeleportActorToActorWithOffset(const class FString& ActorIdString, const class FString& DestinationActorIdString, float OffsetX, float OffsetY, float OffsetZ);
	void SuperSailor();
	void StartVoyage(const class FString& SourceAssetName);
	void StartDemoSession();
	void StartAllCrewVoyages();
	void SpinShip(float YawSpdInDegreesPerSecond);
	void SpawnTreasureChestOfType(class FString* ChestTypeString);
	void SpawnTreasureArtifact(const class FString& TypeString);
	void SpawnTinySharkAtCurrentLocation();
	void SpawnStrongholdKey();
	void SpawnSmallShipAtIsland(const class FString& IslandName);
	void SpawnSmallShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw);
	void SpawnShipwreck(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ);
	void SpawnShipInFrontOfNearestAIInteractable(float XProportion, float YProportion, float Yaw);
	void SpawnShipFromDesc(const class FString& InShipDescAssetString, float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw);
	void SpawnShipAtIsland(const class FString& IslandName);
	void SpawnShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw);
	void SpawnNumberOfAI(const class FString& AITypeString, int NumToSpawn);
	void SpawnMessageInABottle(const class FString& MessageInABottleTypeString);
	void SpawnMermaid();
	void SpawnMerchantFauna(const class FString& FaunaTypeString);
	void SpawnMerchantCrate(const class FString& MerchantCrateTypeString);
	void SpawnMerchantCargo(const class FString& MerchantCargoTypeString);
	void SpawnKrakenAtCurrentLocationWithNumTentacles(uint32_t NumTentacles);
	void SpawnKrakenAtCurrentLocation();
	void SpawnKraken();
	void SpawnBountyReward(const class FString& BountyTypeString);
	void SpawnBarrelGroup();
	void SpawnAINoTrigger(const class FString& AIDescString);
	void SpawnAIBySpawner();
	void SpawnAIAtLocationDelayed(const class FString& AITypeString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay);
	void SpawnAIAtCurrentLocationDelayed(const class FString& AITypeString, float Delay);
	void SpawnAI(const class FString& AIDescString);
	void SlowMotionOverride(bool InValue);
	void SinkShipWithKeelOverIndex(int KeelOverConfigIndex);
	void SinkShipByActorId(const class FString& ShipActorIdString);
	void SinkShip();
	void SinkAllBarrels();
	void ShowRandomCrewMemberGamerCard();
	void ShowAllItemsInRadialInventory();
	void ShipUpdateMassProperies();
	void SetWheelAngle(float Angle);
	void SetWeaponsLockedOut(bool WeaponsLockedOut);
	void SetWaveFlag(int InFlag);
	void SetWaterWaveParams(float Amplitude, float WaveLength, float PropagationSpeed);
	void SetVoiceChatEndpointXAudio2();
	void SetVoiceChatEndpointWwise();
	void SetUnattenuatedChatMixingMethodToUseWwise();
	void SetUnattenuatedChatMixingMethodToUsePlatform();
	void SetTimeScalar(float TimeScalar);
	void SetTimeHoursAndMinutes(int Hours, int Minutes);
	void SetTime(int Hours);
	void SetShipYaw(float Yaw);
	void SetShipBuoyancyBlend(float UnaryBlend);
	void SetSailLoweredProportions(float Proportion);
	void SetSailAngles(float Angle);
	void SetPreventLeakingOnAllDamageZones(bool PreventLeaking);
	void SetPlayerVisibleToAI();
	void SetPlayerInvisibleToAI();
	void SetPhotoMode(bool Enabled);
	void SetNonCrewChatSpatialisation(bool Enabled);
	void SetIdleDisconnectEnabled(bool Enabled);
	void SetGrogSecondary(bool InValue);
	void SetFOV(float InNewFOV);
	void SetDebugCameraUseProjectileCollisionChannel(bool bUseProjectileChannel);
	void SetDeathPenaltyRespawnTimer(float InSpawnTimer);
	void SetCapstanPosition(float Position);
	void SetAITeamAttitude(const class FString& TeamAString, const class FString& TeamBString, const class FString& AttitudeString);
	void SendStatEvent(const class FString& StatName, uint64_t StatValue);
	void SendRewardRequestEvent(const class FString& CompanyNameAndRewardIdSeparatedByColon);
	void SailShip();
	void RewindPhysicsSceneBy(float SecondsToRewindBy);
	void RestockIslandBarrels();
	void RestockAllReplenishables();
	void RespawnAllIslandItemSpawners();
	void ResetStats();
	void ResetMouseDelta();
	void ResetDemoSession(bool StartNewSession);
	void ResetAITeamAttitudes();
	void ReplenishShip();
	void ReplaceShipWithSmallShip(const class FString& ShipActorIdConsoleString);
	void RenameTreasure(const class FString& InVendorName);
	void RemoveItemInSlot(int SlotIndex);
	void PushShip(float FwdSpdInMetersPerSecond);
	void PullLatestEmblemProgress();
	void PrintTime();
	void PrintAllNetworkActors();
	void OverrideShipPartFromCatalogue(const class FString& InShipActorIdConsoleString, int InCataloguePartIndex, int InCataloguePartCustomisationIndex);
	void OpenSkeletonFortDoor();
	void MessageBoxOnGraphicsThreadTest();
	void MakeSharksBrainDead();
	void LogShipHierarchy();
	void LogServerShipHierarchy();
	void LogAITeamAttitudes();
	void LocallyUnBreakLeg();
	void LaunchPlayer(float Velocity, float Angle);
	void KrakenAnimatedTentacleThrowPlayer();
	void KrakenAnimatedTentacleTakeDamage(float Damage);
	void KrakenAnimatedTentacleSwallowPlayer();
	void KrakenAnimatedTentacleSuckPlayer();
	void KrakenAnimatedTentaclePowerSlamPlayer();
	void KrakenAnimatedTentacleKill();
	void KrakenAnimatedTentacleIngestPlayer();
	void KrakenAnimatedTentacleDropPlayer();
	void KrakenAnimatedTentacleDespawn();
	void KrakenAnimatedTentacleDefeat();
	void KrakenAnimatedTentacleChangePlayerHoldState(const class FString& HoldState);
	void KillPlayer();
	void KillCrew(const class FString& CrewId);
	void KillAllPlayers();
	void KillAllCrews();
	void IPGOverride(const struct FName& BodyShape, float Distance);
	void IPGLoad(const class FString& path);
	void InfiniteGunAmmo(bool Enabled);
	void IncrementTime(int Hours, int Minutes);
	void HealthReset();
	void HealthAdjust(float Amount);
	void God();
	void GenerateShipwrecks();
	void ForceOpenShop();
	void ForceCloseShop();
	void Fly();
	void FloodShipWithKeelOverIndex(float NormalisedWaterAmount, int KeelOverConfigIndex);
	void FloodShip(float NormalisedWaterAmount);
	void EquipPirateTitle(const class FString& PirateTitleType);
	void EquipCompassInLoadout();
	void EndDemoSession();
	void EnableVoiceChatMeteringForOutgoingSignals(bool Enabled);
	void EnableVoiceChatMeteringForIncomingSignals(bool Enabled);
	void EnableNTP(bool Enable);
	void EnableMermaidSpawning(int Enable);
	void EnableMermaidDeletion(int Enable);
	void EnableHeadphoneMixing(bool Enabled);
	void EnableCinematicCamera();
	void EnableBeaconOnAllMermaids(int Enable);
	void DrawVideprinter(const class FString& Id, bool Active);
	void DrawTreasureDebug(int Enabled);
	void DrawTemporaryLandmarkDebug(bool Enabled);
	void DrawShipwreckDebugBeacons(bool bEnabled);
	void DrawNearbyAISpawnPointsRanged(float Range);
	void DrawNearbyAISpawnPoints();
	void DisplaySingleEmblemProgress(const class FString& StatName);
	void DisplayServersideHitsAtPlayerPosWithDefaults();
	void DisplayServersideHitsAtPlayerPos(uint32_t NumSamplesPerDimension, float DistanceBetweenSamples, float TestHeight);
	void DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled);
	void DisplayLandmarkValidTreasureLocationsForPlayer();
	void DisplayLandmarkRegions();
	void DisplayLandmarkNames();
	void DisplayFallDamageDebug(int Enable);
	void DisplayDrunkenness(bool Flag);
	void DisableCinematicCamera();
	void DestroyTinyShark();
	void DestroyShip(const class FString& ShipActorIdConsoleString);
	void DestroyMyShip();
	void DestroyKraken();
	void DestroyAllTreasureChests();
	void DestroyAllShips();
	void DespawnNumberOfAI(const class FString& AITypeString, int NumToDespawn);
	void DespawnFirstAI();
	void DespawnAI(const class FString& AITypeString);
	void DeleteVoyageHistory();
	void DeleteAllMermaids();
	void DebugIslandDelta();
	void DamageShipFromRemoteActor(const class FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ);
	void DamageShip(float Strength);
	void DamagePlayerFromRemoteActor(const class FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ);
	void DamagePlayer(float Strength);
	void CureAllAilings();
	void CompleteVoyage();
	void CompleteActiveQuests();
	void CloseSkeletonFortDoor();
	void ClearVoiceChatMeters();
	void ClearSlowMotionOverride();
	void ClearShipRestockingTimeouts();
	void ClearGrogSecondary();
	void ClearAllItemsInInventory();
	void CheckLandmarkValidTreasureLocationsAtPlayerPos();
	void CheckLandmarkRelativeToIslandCalculation();
	void CancelVoyage();
	void CancelAllCrewVoyages();
	void BreakLeg();
	void ApplyVenomWithParams(float InitialDamage, float DamagePerSecond, float DamageOverTimeDuration);
	void ApplyVenom();
	void ApplyDamageToAllDamageZones(float Damage);
	void AddShipToCrew(const class FString& ActorIdString, const class FString& CrewId);
	void AddPlayerToCrew(const class FString& ActorIdString, const class FString& CrewId);
	void AddDrunkenness(int DrunkennessType, float DrunkennessChange);
	void ActivateSkellyFort(const class FString& FortName);
};


// Class Athena.AthenaDebugMenuComponent
// 0x0000 (0x0118 - 0x0118)
class UAthenaDebugMenuComponent : public UDebugMenuComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaDebugMenuComponent");
		return ptr;
	}

};


// Class Athena.AthenaGameEngine
// 0x0028 (0x0B00 - 0x0AD8)
class UAthenaGameEngine : public URareGameEngine
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0AD8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGameEngine");
		return ptr;
	}

};


// Class Athena.AthenaGameEngineSettingsInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaGameEngineSettingsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGameEngineSettingsInterface");
		return ptr;
	}

};


// Class Athena.AthenaGameEngineSettings
// 0x0020 (0x0048 - 0x0028)
class UAthenaGameEngineSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGameEngineSettings");
		return ptr;
	}

};


// Class Athena.AthenaGameEngineSettingsUWP
// 0x0010 (0x0058 - 0x0048)
class UAthenaGameEngineSettingsUWP : public UAthenaGameEngineSettings
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGameEngineSettingsUWP");
		return ptr;
	}

};


// Class Athena.AthenaLocalPlayerRetrievalInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaLocalPlayerRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaLocalPlayerRetrievalInterface");
		return ptr;
	}

};


// Class Athena.UserGameSettingsRetrievalInterface
// 0x0000 (0x0028 - 0x0028)
class UUserGameSettingsRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UserGameSettingsRetrievalInterface");
		return ptr;
	}

};


// Class Athena.TelemetryDispatcherRetrievalInterface
// 0x0000 (0x0028 - 0x0028)
class UTelemetryDispatcherRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TelemetryDispatcherRetrievalInterface");
		return ptr;
	}

};


// Class Athena.AthenaGameInstance
// 0x0388 (0x0410 - 0x0088)
class UAthenaGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x15B];                                     // 0x0088(0x015B) MISSED OFFSET
	class UAthenaLocalPlayerManager*                   AthenaLocalPlayerManager;                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAthenaLocalPlayerReengage*                  AthenaLocalPlayerReengage;                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAthenaServerIdentityManager*                AthenaServerIdentityManager;                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UVoiceChatRenderer*                          VoiceChatRenderer;                                        // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGameServiceCoordinator                     ServiceCoordinator;                                       // 0x01E3(0x0010)
	unsigned char                                      UnknownData01[0x21D];                                     // 0x01F3(0x021D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGameInstance");
		return ptr;
	}

};


// Class Athena.HideoutServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UHideoutServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HideoutServiceInterface");
		return ptr;
	}

};


// Class Athena.AthenaGameMode
// 0x03C8 (0x0930 - 0x0568)
class AAthenaGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x3C8];                                     // 0x0568(0x03C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGameMode");
		return ptr;
	}


	void SetStorageContainerRefreshInterval(float InRefreshInterval);
	void SetRespawnTimer(float InRespawnTimer);
	void ResetStorageContainers();
	void RequestDemoSessionReset(class AAthenaPlayerController* AthenaPlayerController, bool InStartNewSession);
	bool IsPlayerOnGhostShip(class APawn* PlayerPawn);
};


// Class Athena.OnlineAthenaGameMode
// 0x0128 (0x0A58 - 0x0930)
class AOnlineAthenaGameMode : public AAthenaGameMode
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0930(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OnlineAthenaGameMode");
		return ptr;
	}

};


// Class Athena.TestAthenaGameMode
// 0x0008 (0x0938 - 0x0930)
class ATestAthenaGameMode : public AAthenaGameMode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0930(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestAthenaGameMode");
		return ptr;
	}

};


// Class Athena.TestAthenaGameModeWithHUD
// 0x0000 (0x0938 - 0x0938)
class ATestAthenaGameModeWithHUD : public ATestAthenaGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestAthenaGameModeWithHUD");
		return ptr;
	}

};


// Class Athena.TestInventoryAthenaGameMode
// 0x0000 (0x0930 - 0x0930)
class ATestInventoryAthenaGameMode : public AAthenaGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestInventoryAthenaGameMode");
		return ptr;
	}

};


// Class Athena.AthenaGameplayDebuggingComponent
// 0x0020 (0x08C0 - 0x08A0)
class UAthenaGameplayDebuggingComponent : public UGameplayDebuggingComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x08A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGameplayDebuggingComponent");
		return ptr;
	}

};


// Class Athena.AthenaGameplayDebuggingHUDComponent
// 0x0000 (0x0560 - 0x0560)
class AAthenaGameplayDebuggingHUDComponent : public AGameplayDebuggingHUDComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGameplayDebuggingHUDComponent");
		return ptr;
	}

};


// Class Athena.AthenaGameSettings
// 0x04C8 (0x04F0 - 0x0028)
class UAthenaGameSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FVector                                     DirectionNorth;                                           // 0x01E3(0x000C) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                NumberOfDaysInEachMonth;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<class FString>                              CompassDirectionLocTags;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      EntryMap;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      FrontendMap;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      InGameMap;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      OverrideServerURL;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      DiscoveryServiceUrl;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	float                                              LoadLevelTimeoutTime;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              ServiceBridgeConnectTimeout;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TAssetPtr<class UClass>                            VoiceChatRendererClass;                                   // 0x01E3(0x0020) (Edit, Config)
	struct FStringAssetReference                       CinematicCameraControllerClass;                           // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       CinematicCameraSpectatorPawnClass;                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       MaterialTranslationTableFileLocation;                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       MaterialAudioTableFileLocation;                           // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       MaterialVFXTableFileLocation;                             // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       ShipAssetClassDatabaseFileLocation;                       // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AIPersistentPartsServiceAssetClassFileLocation;           // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AIPartsServiceAssetClassFileLocation;                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AIEncounterServiceAssetClassFileLocation;                 // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AIEncounterGenerationServiceAssetClassFileLocation;       // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       DebugMenuFileLocation;                                    // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       ShantyTableFileLocation;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       SpawnLocationKeywordPriorityListLocation;                 // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       CrewSpawnLocationVariablesListAsset;                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       IslandDataFileLocation;                                   // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       SkellyFortDataFileLocation;                               // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       ProjectileServiceDataFileLocation;                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       HoleDataFileLocation;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       QuestsConfigAsset;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       MigrationUIContentsFileLocation;                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       InventoryRemappingAssetLocation;                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AllSeasDataAssetLocation;                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      InventoryDefaultItemURL;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TEnumAsByte<ECollisionChannel>                     ProjectileCollisionChannel;                               // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ThrowableCollisionChannel;                                // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     NameplateCollisionChannel;                                // 0x01E3(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CheatFlyingSpeedSlow;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CheatFlyingSpeedDefault;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CheatFlyingSpeedFast;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CheatFlyingAcceleration;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       DeathCostPenaltyId;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FEncounterServiceParams                     EncounterServiceParams;                                   // 0x01E3(0x0018) (Edit, Config)
	struct FWindServiceParams                          WindParams;                                               // 0x01E3(0x0024) (Edit, Config)
	struct FCrewServiceParams                          CrewServiceParams;                                        // 0x01E3(0x0040) (Edit, Config)
	struct FSharedShovelParams                         SharedShovelParams;                                       // 0x01E3(0x0050) (Edit, Config)
	struct FMermaidServiceParams                       MermaidServiceParams;                                     // 0x01E3(0x0064) (Edit, Config)
	struct FMakeFriendsEmoteParams                     MakeFriendsEmoteParams;                                   // 0x01E3(0x000C) (Edit, Config)
	struct FMermaidRespawnConfig                       MermaidRespawnConfiguration;                              // 0x01E3(0x001C) (Edit, Config)
	struct FCharacterSocketCollisionServiceParams      CharacterSocketCollisionServiceParams;                    // 0x01E3(0x0008) (Edit, Config)
	struct FAthenaAICharacterParams                    AAthenaAICharacterParams;                                 // 0x01E3(0x0008) (Edit, Config)
	int                                                AssumedMaxFPSOnServer;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       WwiseObjectUnderwaterStateSwitchGroup;                    // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       WwiseObjectUnderwaterSwitchDefaultState;                  // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       WwiseObjectUnderwaterSwitchUnderwaterState;               // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       IslandTypeStateGroup;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       IslandTypeOutpost;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StormQuantisePrecision;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FItemProxyTTLParams                         ItemProxyTTLParams;                                       // 0x01E3(0x0008) (Edit, Config, DisableEditOnInstance)
	struct FStringAssetReference                       ShipLiveryCatalogueDataAssetLocation;                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       ShipPartsCatalogueDataAssetLocation;                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       EmblemDefinitionAssetListLocation;                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       RewardDefinitionAssetListLocation;                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       CatalogListDataAssetLocation;                             // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       KrakenTentacleClassLocation;                              // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       KrakenShipTentacleClassLocation;                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       KrakenServiceParamsDataAssetLocation;                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       TinySharkServiceParamsDataAssetLocation;                  // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       CompanyLevelSettingsAssetLocation;                        // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       ClientCompanySettingsAssetLocation;                       // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       AchievementDefinitionDataAssetLocation;                   // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       CategoryDefaults;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       CoherentUIGTAssetRootLocation;                            // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       CoherentUIGTPersistentDataAssetLocation;                  // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	float                                              InteractionTimeThreshold;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x309];                                     // 0x01E7(0x0309) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGameSettings");
		return ptr;
	}

};


// Class Athena.AthenaGameUserSettings
// 0x0028 (0x00A0 - 0x0078)
class UAthenaGameUserSettings : public UGameUserSettings
{
public:
	unsigned char                                      UnknownData00[0x16B];                                     // 0x0078(0x016B) MISSED OFFSET
	int                                                MaxVerticalResolution;                                    // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxFPS;                                                   // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                VSync;                                                    // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                LightingDetail;                                           // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ModelDetail;                                              // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShadowDetail;                                             // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                TextureDetail;                                            // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                WaterDetail;                                              // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               SmoothFPS;                                                // 0x01E3(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowPerformanceCounters;                                  // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGameUserSettings");
		return ptr;
	}

};


// Class Athena.AthenaGameViewportClient
// 0x0008 (0x0370 - 0x0368)
class UAthenaGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGameViewportClient");
		return ptr;
	}

};


// Class Athena.AthenaInputSettings
// 0x0080 (0x00A8 - 0x0028)
class UAthenaInputSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FName>                               AllowedInvertedYAxis;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               AllowedInvertedXAxis;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               AllowedInvertedCombinedAxis;                              // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	float                                              RadialSelectionTimeout;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RadialSelectionMagnitudeThreshold;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              TimeToBlockInputsAfterRadialDeactivation;                 // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinDeflectionToBlockInputsAfterRadialDeactivation;        // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MinRadialSectorUnselectableFraction;                      // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRadialSectorUnselectableFraction;                      // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RadialActivationThreshold;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              RadialFastItemSwitchGracePeriod;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FActionMappingKeyLookupFallback>     ActionMappingKeyLookupFallbacks;                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FVirtualActionBindingDefinition>     VirtualActionBindingDefinitions;                          // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaInputSettings");
		return ptr;
	}

};


// Class Athena.AthenaLocalPlayer
// 0x0030 (0x0230 - 0x0200)
class UAthenaLocalPlayer : public ULocalPlayer
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0200(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaLocalPlayer");
		return ptr;
	}

};


// Class Athena.AthenaLocalPlayerInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaLocalPlayerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaLocalPlayerInterface");
		return ptr;
	}

};


// Class Athena.LoginOptionsProviderInterface
// 0x0000 (0x0028 - 0x0028)
class ULoginOptionsProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LoginOptionsProviderInterface");
		return ptr;
	}

};


// Class Athena.AthenaLocalPlayerManager
// 0x02A8 (0x02D0 - 0x0028)
class UAthenaLocalPlayerManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0028(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaLocalPlayerManager");
		return ptr;
	}

};


// Class Athena.AthenaLocalPlayerReengage
// 0x0120 (0x0148 - 0x0028)
class UAthenaLocalPlayerReengage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0028(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaLocalPlayerReengage");
		return ptr;
	}

};


// Class Athena.AthenaPlayerCameraManager
// 0x0020 (0x1C90 - 0x1C70)
class AAthenaPlayerCameraManager : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x1C70(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaPlayerCameraManager");
		return ptr;
	}

};


// Class Athena.AthenaPlayerCharacterTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaPlayerCharacterTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaPlayerCharacterTestFunctions");
		return ptr;
	}


	void STATIC_ForceShipRegion(class AAthenaPlayerCharacter* AthenaPlayerCharacter, TEnumAsByte<EShipRegion> ShipRegion);
	void STATIC_ForceReCalculateShipRegion(class AAthenaPlayerCharacter* AthenaPlayerCharacter);
};


// Class Athena.PirateIdentityInterface
// 0x0000 (0x0028 - 0x0028)
class UPirateIdentityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PirateIdentityInterface");
		return ptr;
	}

};


// Class Athena.ControllableInterface
// 0x0000 (0x0028 - 0x0028)
class UControllableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControllableInterface");
		return ptr;
	}


	void TakenControl(class AActor* Controller);
	void RequestStateChange(class AActor* Controller);
	void RequestRelinquishControl();
	void RelinquishedController(class AActor* Controller);
};


// Class Athena.MountedWeaponInterface
// 0x0000 (0x0028 - 0x0028)
class UMountedWeaponInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MountedWeaponInterface");
		return ptr;
	}


	float GetYaw();
	float GetPitch();
};


// Class Athena.ShipPartDescAsset
// 0x0000 (0x0028 - 0x0028)
class UShipPartDescAsset : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipPartDescAsset");
		return ptr;
	}

};


// Class Athena.CannonDescAsset
// 0x0010 (0x0038 - 0x0028)
class UCannonDescAsset : public UShipPartDescAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CannonDescAsset");
		return ptr;
	}

};


// Class Athena.LaunchableProjectile
// 0x00F8 (0x0568 - 0x0470)
class ALaunchableProjectile : public AActor
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0470(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LaunchableProjectile");
		return ptr;
	}


	bool TrailSfxIsActive();
	bool TrailIsActive();
	void OnStop(const struct FHitResult& Result);
	void OnReachedDeepWater();
	void OnImpactEffects(const struct FHitResult& Result);
	void OnImpact(const struct FHitResult& Result);
	void OnExitWater();
	void OnEnterWater();
	void LaunchWithOffset(const struct FVector& LaunchVelocity, const struct FVector& SpawnLaunchOffset);
	bool IsInWater();
};


// Class Athena.CannonProjectile
// 0x0018 (0x0580 - 0x0568)
class ACannonProjectile : public ALaunchableProjectile
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0568(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CannonProjectile");
		return ptr;
	}

};


// Class Athena.ShipPartCustomizationComponent
// 0x0000 (0x00D0 - 0x00D0)
class UShipPartCustomizationComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipPartCustomizationComponent");
		return ptr;
	}

};


// Class Athena.ReplicatedShipPartCustomizationComponent
// 0x0040 (0x0110 - 0x00D0)
class UReplicatedShipPartCustomizationComponent : public UShipPartCustomizationComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FPartDesc                                   PartDesc;                                                 // 0x01E3(0x0020) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ReplicatedShipPartCustomizationComponent");
		return ptr;
	}


	void OnReplicate_PartDesc();
};


// Class Athena.Cannon
// 0x0448 (0x0A00 - 0x05B8)
class ACannon : public AControllableObject
{
public:
	unsigned char                                      UnknownData00[0x448];                                     // 0x05B8(0x0448) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Cannon");
		return ptr;
	}


	void Server_RequestAim(float NewPitch, float NewYaw);
	void Server_Fire(float InPitch, float InYaw);
	void OnRep_ServerYaw();
	void OnRep_ServerPitch();
	void OnCannonDescLoaded(class UCannonDescAsset* CannonDesc);
	void Multicast_OnPlayerUnloaded(class AActor* UnloadedPlayer);
	void Multicast_OnPlayerLoaded(class AActor* LoadedPlayer);
	void Multicast_FireProjectile(class AActor* InInstigator, const struct FVector& AuthoritySpawnLocation, const struct FVector& LaunchVelocity);
	void Multicast_FirePlayer(class AActor* InInstigator, bool InstigatorWasControllingActor);
	bool IsReadyToFire();
	void HandleYawInput(float YawInput);
	void HandlePitchInput(float PitchInput);
	float GetNormalisedYawRate();
	float GetNormalisedPitchRate();
	void ForceAimCannon(float Pitch, float Yaw);
	void Fire();
};


// Class Athena.PlayerTelemetryComponent
// 0x0798 (0x0868 - 0x00D0)
class UPlayerTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              HeartbeatInterval;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x681];                                     // 0x01E7(0x0681) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerTelemetryComponent");
		return ptr;
	}

};


// Class Athena.EncounterListenerInterface
// 0x0000 (0x0028 - 0x0028)
class UEncounterListenerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EncounterListenerInterface");
		return ptr;
	}

};


// Class Athena.HUDProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UHUDProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HUDProviderInterface");
		return ptr;
	}

};


// Class Athena.AthenaPlayerController
// 0x09A8 (0x1108 - 0x0760)
class AAthenaPlayerController : public ATestablePlayerController
{
public:
	unsigned char                                      UnknownData00[0x9A8];                                     // 0x0760(0x09A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaPlayerController");
		return ptr;
	}


	void Server_ReportPlayerDelta(const struct FVector& InVector);
	void Server_ExecuteCommand(const class FString& Command);
	bool GetPlayerStreamingReferenceLocation(struct FVector* Location);
	class UAthenaCheatManager* GetAthenaCheatManager();
	void EOS(const class FString& Command);
	void AddYawRotationInput(float Input, TEnumAsByte<ELookAtRotationType> RotationType);
	void AddPitchRotationInput(float Input, TEnumAsByte<ELookAtRotationType> RotationType);
};


// Class Athena.OnlineAthenaPlayerController
// 0x0040 (0x1148 - 0x1108)
class AOnlineAthenaPlayerController : public AAthenaPlayerController
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x1108(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OnlineAthenaPlayerController");
		return ptr;
	}


	void ModifyActiveState(bool IsActive);
};


// Class Athena.TestOnlineAthenaPlayerControllerNoEvents
// 0x0000 (0x1148 - 0x1148)
class ATestOnlineAthenaPlayerControllerNoEvents : public AOnlineAthenaPlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestOnlineAthenaPlayerControllerNoEvents");
		return ptr;
	}

};


// Class Athena.TestAthenaPlayerController
// 0x0018 (0x1120 - 0x1108)
class ATestAthenaPlayerController : public AAthenaPlayerController
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x1108(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestAthenaPlayerController");
		return ptr;
	}


	void TestConsoleExecutableFunction();
	void GrantDebugMenuPermissions(bool AllowAccess);
	void FakeInput(const struct FKey& Key);
	void FakeAxisInput(const struct FKey& Key, float Delta, float DeltaTime);
};


// Class Athena.PlayerRelevancyServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerRelevancyServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerRelevancyServiceInterface");
		return ptr;
	}

};


// Class Athena.TestPlayerRelevancyAthenaPlayerController
// 0x0028 (0x1130 - 0x1108)
class ATestPlayerRelevancyAthenaPlayerController : public AAthenaPlayerController
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x1108(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestPlayerRelevancyAthenaPlayerController");
		return ptr;
	}


	void QueryRelevancyService(float Timeout);
};


// Class Athena.AthenaPlayerControllerTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UAthenaPlayerControllerTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaPlayerControllerTestFunctions");
		return ptr;
	}


	void STATIC_TestAthenaPlayerControllerDisableNormalInputHandling(class AAthenaPlayerController* AthenaPlayerController);
	void STATIC_AddEntitlementDescToInventory(class AAthenaPlayerController* Controller, class UClass* EntitlementDesc);
};


// Class Athena.VoterInterface
// 0x0000 (0x0028 - 0x0028)
class UVoterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoterInterface");
		return ptr;
	}

};


// Class Athena.AthenaPlayerState
// 0x0240 (0x0740 - 0x0500)
class AAthenaPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x240];                                     // 0x0500(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaPlayerState");
		return ptr;
	}


	void OnRep_PirateDescription();
};


// Class Athena.TestAthenaPlayerState
// 0x0000 (0x0740 - 0x0740)
class ATestAthenaPlayerState : public AAthenaPlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestAthenaPlayerState");
		return ptr;
	}


	void SetUniquePlayerID(const class FString& InUniquePlayerId);
};


// Class Athena.AthenaServerIdentityManager
// 0x0030 (0x0058 - 0x0028)
class UAthenaServerIdentityManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaServerIdentityManager");
		return ptr;
	}

};


// Class Athena.AthenaSpringArmComponentParams
// 0x0050 (0x0078 - 0x0028)
class UAthenaSpringArmComponentParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              CameraDistanceFromPlayer;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraVerticalOffset;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraCollisionProbeSize;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CameraCollisionProbeCollisionChannel;                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraMinPitch;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraMaxPitch;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraDefaultPitch;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraDefaultYaw;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraPullbackSpeed;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraPitchSpeed;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraYawSpeed;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraConstantYawSpeed;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnableRotationLag;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationLagSpeed;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ZoomEnabled;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZoomSpeedGamepad;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZoomSpeedMouse;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZoomTimeout;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZoomMinArmLengthFactor;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaSpringArmComponentParams");
		return ptr;
	}

};


// Class Athena.AthenaSpringArmComponent
// 0x0070 (0x03E0 - 0x0370)
class UAthenaSpringArmComponent : public USpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0370(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaSpringArmComponent");
		return ptr;
	}

};


// Class Athena.AthenaStreamedLevelDataAsset
// 0x0020 (0x0048 - 0x0028)
class UAthenaStreamedLevelDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FStringAssetReference>               LevelsToLoad;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaStreamedLevelDataAsset");
		return ptr;
	}

};


// Class Athena.AthenaStreamedLevelServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaStreamedLevelServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaStreamedLevelServiceInterface");
		return ptr;
	}

};


// Class Athena.AthenaStreamedLevelService
// 0x0018 (0x0040 - 0x0028)
class UAthenaStreamedLevelService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaStreamedLevelService");
		return ptr;
	}

};


// Class Athena.ObscuringItemInterface
// 0x0000 (0x0028 - 0x0028)
class UObscuringItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ObscuringItemInterface");
		return ptr;
	}

};


// Class Athena.SkeletalMeshWieldableItem
// 0x0000 (0x07C0 - 0x07C0)
class ASkeletalMeshWieldableItem : public AWieldableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SkeletalMeshWieldableItem");
		return ptr;
	}

};


// Class Athena.TreasureMap
// 0x0080 (0x0840 - 0x07C0)
class ATreasureMap : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x07C0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureMap");
		return ptr;
	}

};


// Class Athena.AthenaTextRender
// 0x00A8 (0x0528 - 0x0480)
class AAthenaTextRender : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0480(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaTextRender");
		return ptr;
	}


	void OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height);
};


// Class Athena.AthenaUserSettingsDefaults
// 0x0010 (0x0038 - 0x0028)
class UAthenaUserSettingsDefaults : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaUserSettingsDefaults");
		return ptr;
	}

};


// Class Athena.SeaRockDataAsset
// 0x0010 (0x0038 - 0x0028)
class USeaRockDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SeaRockDataAsset");
		return ptr;
	}

};


// Class Athena.AthenaWorldSettings
// 0x0060 (0x0678 - 0x0618)
class AAthenaWorldSettings : public AWorldSettings
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0618(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaWorldSettings");
		return ptr;
	}

};


// Class Athena.AtlasSlotRenderer
// 0x0000 (0x0028 - 0x0028)
class UAtlasSlotRenderer : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AtlasSlotRenderer");
		return ptr;
	}

};


// Class Athena.AtmosphericPressureZoneInterface
// 0x0000 (0x0028 - 0x0028)
class UAtmosphericPressureZoneInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AtmosphericPressureZoneInterface");
		return ptr;
	}


	struct FAtmosphericPressureZoneParametersAndLocation GetPressureZoneParameters();
};


// Class Athena.AtmosphericPressureServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAtmosphericPressureServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AtmosphericPressureServiceInterface");
		return ptr;
	}


	void UnregisterAtmosphericPressureZoneFromService(const TScriptInterface<class UAtmosphericPressureZoneInterface>& PressureZone);
	void RegisterAtmosphericPressureZoneWithService(const TScriptInterface<class UAtmosphericPressureZoneInterface>& PressureZone);
	int GetNumberOfAtmosphericPressureZones();
	struct FAtmosphericPressureZoneParametersAndLocation GetAtmosphericPressureZone(int PressureZoneIndex);
	TArray<struct FAtmosphericPressureZoneParametersAndLocation> GetAllAtmosphericPressureZones();
};


// Class Athena.AtmosphericPressureZoneComponent
// 0x0020 (0x0310 - 0x02F0)
class UAtmosphericPressureZoneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AtmosphericPressureZoneComponent");
		return ptr;
	}

};


// Class Athena.AtmosphericPressureService
// 0x0018 (0x0040 - 0x0028)
class UAtmosphericPressureService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AtmosphericPressureService");
		return ptr;
	}

};


// Class Athena.AttackAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UAttackAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AttackAIStrategyId");
		return ptr;
	}

};


// Class Athena.AudioEmitterInterface
// 0x0000 (0x0028 - 0x0028)
class UAudioEmitterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AudioEmitterInterface");
		return ptr;
	}


	struct FWwiseEmitter GetAudioEmitter();
};


// Class Athena.AudioEmitterPoolSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAudioEmitterPoolSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AudioEmitterPoolSourceInterface");
		return ptr;
	}


	class UWwiseObjectPoolWrapper* GetAudioEmitterPool();
};


// Class Athena.AudioUtilities
// 0x0000 (0x0028 - 0x0028)
class UAudioUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AudioUtilities");
		return ptr;
	}


	void STATIC_UpdateCharacterWadingRtpc(class AAthenaCharacter* AthenaCharacter, TArray<struct FWwiseEmitter> Emitters, const struct FName& WadingRtpcName, const struct FName& SquelchRtpcName, float MinRtpcValue, float MaxRtpcValue);
	void STATIC_PlayFootstepSound(class UObject* WorldContextObject, class AAthenaCharacter* AthenaCharacter, const struct FWwiseEmitter& Emitter, const struct FVector& Location, class UWwiseEvent* Cue, TEnumAsByte<EPhysicalSurface> SurfaceType, const struct FName& CharacterSpeedRtpc, float MinRtpcValue, float MaxRtpcValue, TEnumAsByte<ECharacterFootImpactType> FootImpactType);
	void STATIC_FilterLocalPlayerFootStepSounds(TEnumAsByte<ECharacterFootImpactType> FootImpactType);
};


// Class Athena.BakedDecalComponent
// 0x0048 (0x0118 - 0x00D0)
class UBakedDecalComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	int                                                TargetTextureSize;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ClearColour;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxDeferredDecals;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      TargetTexture;                                            // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                StaticMeshes;                                             // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FDeferredBakedDecal>                 DeferredDecals;                                           // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BakedDecalComponent");
		return ptr;
	}


	class UTexture* GetTargetTexture();
	void FinishInitialisation(class UObject* WorldContextObject);
	void FilterEdges();
	void DrawDecal(class UObject* WorldContextObject, const struct FVector& Position, const struct FVector& Normal, float Radius, float NearDistance, float FarDistance, float CullDistance, class UTexture2D* DecalTexture, TEnumAsByte<EBlendMode> BlendMode, int LODIndex);
	void CopyToTargetTexture(class UObject* WorldContextObject, class UTexture* SourceTexture);
	void ClearTargetTexture(const struct FLinearColor& ClearColor);
	void AddMesh(class UStaticMeshComponent* Mesh);
};


// Class Athena.BarrelsOfPlentyDebugSpawnLocation
// 0x0020 (0x0490 - 0x0470)
class ABarrelsOfPlentyDebugSpawnLocation : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0470(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BarrelsOfPlentyDebugSpawnLocation");
		return ptr;
	}

};


// Class Athena.BaseAnchorDynamicsDesc
// 0x0000 (0x0028 - 0x0028)
class UBaseAnchorDynamicsDesc : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BaseAnchorDynamicsDesc");
		return ptr;
	}

};


// Class Athena.StandardAnchorDynamicsDesc
// 0x0028 (0x0050 - 0x0028)
class UStandardAnchorDynamicsDesc : public UBaseAnchorDynamicsDesc
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StandardAnchorDynamicsDesc");
		return ptr;
	}

};


// Class Athena.TestAnchorDynamicsDesc
// 0x0018 (0x0040 - 0x0028)
class UTestAnchorDynamicsDesc : public UBaseAnchorDynamicsDesc
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestAnchorDynamicsDesc");
		return ptr;
	}

};


// Class Athena.BaseHullDragDynamicsDesc
// 0x0000 (0x0028 - 0x0028)
class UBaseHullDragDynamicsDesc : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BaseHullDragDynamicsDesc");
		return ptr;
	}

};


// Class Athena.StandardHullDragDynamicsDesc
// 0x0028 (0x0050 - 0x0028)
class UStandardHullDragDynamicsDesc : public UBaseHullDragDynamicsDesc
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UCurveFloat*                                 WaterDragScalarIfAllSailsUp;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WaterDragScalarIfInReef;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StandardHullDragDynamicsDesc");
		return ptr;
	}

};


// Class Athena.TestHullDragDynamicsDesc
// 0x0010 (0x0038 - 0x0028)
class UTestHullDragDynamicsDesc : public UBaseHullDragDynamicsDesc
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestHullDragDynamicsDesc");
		return ptr;
	}

};


// Class Athena.BaseRudderDynamicsDesc
// 0x0000 (0x0028 - 0x0028)
class UBaseRudderDynamicsDesc : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BaseRudderDynamicsDesc");
		return ptr;
	}

};


// Class Athena.StandardRudderDynamicsDesc
// 0x0010 (0x0038 - 0x0028)
class UStandardRudderDynamicsDesc : public UBaseRudderDynamicsDesc
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FStandardRudderDynamicsParameters           Parameters;                                               // 0x01E3(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StandardRudderDynamicsDesc");
		return ptr;
	}

};


// Class Athena.TestRudderDynamicsDesc
// 0x0028 (0x0050 - 0x0028)
class UTestRudderDynamicsDesc : public UBaseRudderDynamicsDesc
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestRudderDynamicsDesc");
		return ptr;
	}

};


// Class Athena.BaseSailDynamicsDesc
// 0x0000 (0x0028 - 0x0028)
class UBaseSailDynamicsDesc : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BaseSailDynamicsDesc");
		return ptr;
	}

};


// Class Athena.StandardSailDynamicsDesc
// 0x0018 (0x0040 - 0x0028)
class UStandardSailDynamicsDesc : public UBaseSailDynamicsDesc
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UCurveFloat*                                 SailSetFractionToSailForceAmp;                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StandardSailDynamicsDesc");
		return ptr;
	}

};


// Class Athena.TestSailDynamicsDesc
// 0x0018 (0x0040 - 0x0028)
class UTestSailDynamicsDesc : public UBaseSailDynamicsDesc
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestSailDynamicsDesc");
		return ptr;
	}

};


// Class Athena.BaseTooltipDescriptorId
// 0x0000 (0x0028 - 0x0028)
class UBaseTooltipDescriptorId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BaseTooltipDescriptorId");
		return ptr;
	}

};


// Class Athena.TooltipDescriptorId
// 0x0000 (0x0028 - 0x0028)
class UTooltipDescriptorId : public UBaseTooltipDescriptorId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TooltipDescriptorId");
		return ptr;
	}

};


// Class Athena.BodyLightControllerComponent
// 0x00A8 (0x0178 - 0x00D0)
class UBodyLightControllerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UCurveFloat*                                 HourOfDayToIntensityMultiplierCurve;                      // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseLightIntensity;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IntensitySpringAccel;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BodyLightControllerComponent");
		return ptr;
	}


	class UAmbientLightSourceComponent* GetTargetLight();
	void AssignTargetLight(class UAmbientLightSourceComponent* InTargetLight);
};


// Class Athena.BoobyTrapSpawnerDataAsset
// 0x0010 (0x0038 - 0x0028)
class UBoobyTrapSpawnerDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BoobyTrapSpawnerDataAsset");
		return ptr;
	}

};


// Class Athena.SpawnableItemMetadataInterface
// 0x0000 (0x0028 - 0x0028)
class USpawnableItemMetadataInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SpawnableItemMetadataInterface");
		return ptr;
	}

};


// Class Athena.BootyItemInfo
// 0x00C0 (0x0578 - 0x04B8)
class ABootyItemInfo : public AItemInfo
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x04B8(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BootyItemInfo");
		return ptr;
	}

};


// Class Athena.BootyItemInfoDataAsset
// 0x0010 (0x0038 - 0x0028)
class UBootyItemInfoDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BootyItemInfoDataAsset");
		return ptr;
	}

};


// Class Athena.BountyMapLayout
// 0x0080 (0x00A8 - 0x0028)
class UBountyMapLayout : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FTreasureMapWidgetText                      Location;                                                 // 0x01E3(0x0020) (Edit, BlueprintVisible)
	TArray<struct FTreasureMapWidgetText>              Descriptions;                                             // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBountyMapLayoutTarget>              Targets;                                                  // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTreasureMapWidgetText                      MinHaul;                                                  // 0x01E3(0x0020) (Edit, BlueprintVisible)
	TArray<struct FTreasureMapWidgetTexture>           Images;                                                   // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BountyMapLayout");
		return ptr;
	}

};


// Class Athena.PopUpMessageDesc
// 0x00C0 (0x00E8 - 0x0028)
class UPopUpMessageDesc : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FStringAssetReference                       ToastBackgroundImage;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       BackgroundImage;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       ForegroundImage;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FText                                       Text;                                                     // 0x01E3(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01F3(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class FString                                      AudioSfxEventName;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AudioEventName;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AudioSwitchName;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      AudioSwitchValue;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class FString                                      StyleModifier;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PopUpMessageDesc");
		return ptr;
	}

};


// Class Athena.QuestBootyItemPopUpAsset
// 0x0010 (0x0038 - 0x0028)
class UQuestBootyItemPopUpAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuestBootyItemPopUpAsset");
		return ptr;
	}

};


// Class Athena.BountyQuestData
// 0x0028 (0x0050 - 0x0028)
class UBountyQuestData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseEvent*                                 DefaultTargetKilledAudioCue;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BountyLandmarkAudioZoneRadius;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BountyLandmarkAudioZoneHeight;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BountyLandmarkSpawnZoneRadiusInMetres;                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BountyLandmarkSpawnZoneHalfHeightInMetres;                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UQuestBootyItemPopUpAsset*                   BountyQuestTargetKilledPopUpDescAsset;                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BountyQuestData");
		return ptr;
	}

};


// Class Athena.BountyQuestDescData
// 0x00E8 (0x0110 - 0x0028)
class UBountyQuestDescData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FText>                               MaleCaptainNames;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               FemaleCaptainNames;                                       // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               MaleCrewNames;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               FemaleCrewNames;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              AllBountyRewards;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class URiddleTextPhraseDataAsset*                  LocationPhrase;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class URiddleTextPhraseDataAsset*                  LocationUndergroundPhrase;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBountyQuestMugShotSet>              BountyMapMugShotSets;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FBountyQuestLayoutOption>            BountyMapLayoutOptions;                                   // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               DefaultBountyMapDescriptions;                             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TAssetPtr<class UClass>                            DefaultPawnClass;                                         // 0x01E3(0x0020) (Edit)
	class UClass*                                      DefaultClassId;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FemaleCaptainClassId;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MaleCaptainClassId;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FemaleCrewClassId;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MaleCrewClassId;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BountyQuestDescData");
		return ptr;
	}

};


// Class Athena.BowSplashContainer
// 0x0028 (0x0050 - 0x0028)
class UBowSplashContainer : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               EnableProbes;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisibleCullDistance;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HiddenCullDistance;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedThreshold;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BowSplashFieldOfViewAngleAddition;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BowSplashContainer");
		return ptr;
	}

};


// Class Athena.BoxedRpcDispatcherInterface
// 0x0000 (0x0028 - 0x0028)
class UBoxedRpcDispatcherInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BoxedRpcDispatcherInterface");
		return ptr;
	}

};


// Class Athena.BoxedRpcDispatcherComponent
// 0x0008 (0x00D8 - 0x00D0)
class UBoxedRpcDispatcherComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BoxedRpcDispatcherComponent");
		return ptr;
	}


	void Server_SendRpc(const struct FSerialisedRpc& Event);
	void Client_SendRpc(const struct FSerialisedRpc& Event);
};


// Class Athena.BTDecorator_ActorWieldedItemClass
// 0x0028 (0x00B8 - 0x0090)
class UBTDecorator_ActorWieldedItemClass : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x153];                                     // 0x0090(0x0153) MISSED OFFSET
	float                                              Interval;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            ItemClassToTest;                                          // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTDecorator_ActorWieldedItemClass");
		return ptr;
	}

};


// Class Athena.BTDecorator_CanBlock
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_CanBlock : public UBTDecorator_BaseConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTDecorator_CanBlock");
		return ptr;
	}

};


// Class Athena.BTDecorator_ShouldCurrentActionStatePauseBehavior
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_ShouldCurrentActionStatePauseBehavior : public UBTDecorator_BaseConditional
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTDecorator_ShouldCurrentActionStatePauseBehavior");
		return ptr;
	}

};


// Class Athena.BTService_DetermineEngageTarget
// 0x0010 (0x0080 - 0x0070)
class UBTService_DetermineEngageTarget : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTService_DetermineEngageTarget");
		return ptr;
	}

};


// Class Athena.BTService_DetermineRecoveryMethod
// 0x0070 (0x00E0 - 0x0070)
class UBTService_DetermineRecoveryMethod : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	float                                              TimeToForgetAfterSuccessfulFlee;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AAthenaAICharacterController*                CachedAICharacterController;                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTService_DetermineRecoveryMethod");
		return ptr;
	}


	void OnDamageTaken(const struct FImpactDamageEvent& Event);
};


// Class Athena.BTService_ObserveTargetMeleeAttacks
// 0x00F8 (0x0168 - 0x0070)
class UBTService_ObserveTargetMeleeAttacks : public UBTService
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetActorKey;                                           // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      IsTargetAttackingResultKey;                               // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTService_ObserveTargetMeleeAttacks");
		return ptr;
	}


	void OnTargetActorDestroyed(class AActor* TargetActor);
};


// Class Athena.BTTask_AthenaRunEQSQuery
// 0x0050 (0x00F8 - 0x00A8)
class UBTTask_AthenaRunEQSQuery : public UBTTask_RunEQSQuery
{
public:
	unsigned char                                      UnknownData00[0x13B];                                     // 0x00A8(0x013B) MISSED OFFSET
	struct FBlackboardKeySelector                      KeyToSetToTrueIfNoValidLocationFound;                     // 0x01E3(0x0028) (Edit)
	struct FBlackboardKeySelector                      ReasonStringKeyIfNoValidLocationFound;                    // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTTask_AthenaRunEQSQuery");
		return ptr;
	}

};


// Class Athena.BTTask_AthenaRunEQSQueryFromBlackboard
// 0x0028 (0x0120 - 0x00F8)
class UBTTask_AthenaRunEQSQueryFromBlackboard : public UBTTask_AthenaRunEQSQuery
{
public:
	unsigned char                                      UnknownData00[0xEB];                                      // 0x00F8(0x00EB) MISSED OFFSET
	struct FBlackboardKeySelector                      EQSBlackboardKey;                                         // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTTask_AthenaRunEQSQueryFromBlackboard");
		return ptr;
	}

};


// Class Athena.BTTask_SetRecoveryMethod
// 0x0008 (0x0068 - 0x0060)
class UBTTask_SetRecoveryMethod : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	class UClass*                                      RecoveryMethod;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTTask_SetRecoveryMethod");
		return ptr;
	}

};


// Class Athena.BTTask_WaitForWieldBase
// 0x0008 (0x0068 - 0x0060)
class UBTTask_WaitForWieldBase : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	bool                                               WaitForUnstashed;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTTask_WaitForWieldBase");
		return ptr;
	}

};


// Class Athena.BTTask_SpawnAndWieldItem
// 0x0008 (0x0070 - 0x0068)
class UBTTask_SpawnAndWieldItem : public UBTTask_WaitForWieldBase
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	class UClass*                                      ItemDesc;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTTask_SpawnAndWieldItem");
		return ptr;
	}

};


// Class Athena.BTTask_SpawnItemForAIInteractable
// 0x0028 (0x0098 - 0x0070)
class UBTTask_SpawnItemForAIInteractable : public UBTTask_SpawnAndWieldItem
{
public:
	unsigned char                                      UnknownData00[0x173];                                     // 0x0070(0x0173) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTTask_SpawnItemForAIInteractable");
		return ptr;
	}

};


// Class Athena.BTTask_WieldItemByCategory
// 0x0038 (0x00A0 - 0x0068)
class UBTTask_WieldItemByCategory : public UBTTask_WaitForWieldBase
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	bool                                               EnableOverrideItemCategory;                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OverrideItemCategory;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x01E3(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTTask_WieldItemByCategory");
		return ptr;
	}

};


// Class Athena.BTTask_WaitWeighted
// 0x0060 (0x00C0 - 0x0060)
class UBTTask_WaitWeighted : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x183];                                     // 0x0060(0x0183) MISSED OFFSET
	struct FAIDataProviderStructValue                  WeightedRangesFromParams;                                 // 0x01E3(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           WeightedRanges;                                           // 0x01E3(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BTTask_WaitWeighted");
		return ptr;
	}

};


// Class Athena.BuoyancyInterface
// 0x0000 (0x0028 - 0x0028)
class UBuoyancyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BuoyancyInterface");
		return ptr;
	}

};


// Class Athena.BuoyancyComponent
// 0x0148 (0x0218 - 0x00D0)
class UBuoyancyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FWaterBuoyancy                              BuoyancyParams;                                           // 0x01E3(0x0058) (Edit, DisableEditOnInstance)
	struct FBuoyancyComponentSinkingParams             SinkingParams;                                            // 0x01E3(0x0034) (Edit, DisableEditOnInstance)
	struct FBuoyancyComponentLockToSurfaceParams       LockToSurfaceParams;                                      // 0x01E3(0x001C) (Edit, DisableEditOnInstance)
	struct FBuoyancyComponentExclusionParams           ExclusionParams;                                          // 0x01E3(0x0008) (Edit, DisableEditOnInstance)
	class UPrimitiveComponent*                         VisibleMesh;                                              // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EBuoyantObjectState>                   State;                                                    // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x01E4(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BuoyancyComponent");
		return ptr;
	}


	void Sink();
	bool ShouldBeStationary();
	void SetEnabled(bool InEnabled);
	void OnRigidBodyWake(const struct FName& InBoneName);
	void OnRigidBodySleep(const struct FName& InBoneName);
	void OnRep_State();
	bool IsStationary();
	bool IsSinking();
	bool IsEnabled();
};


// Class Athena.OneShotInteractableInterface
// 0x0000 (0x0028 - 0x0028)
class UOneShotInteractableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OneShotInteractableInterface");
		return ptr;
	}

};


// Class Athena.InteractableObject
// 0x0080 (0x0518 - 0x0498)
class AInteractableObject : public AInteractableBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0498(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractableObject");
		return ptr;
	}


	void Blueprint_OnInteract_Server(class AActor* InInteractor);
	void Blueprint_OnInteract_Client(class AActor* InInteractor);
};


// Class Athena.ReplenishableInterface
// 0x0000 (0x0028 - 0x0028)
class UReplenishableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ReplenishableInterface");
		return ptr;
	}


	void Replenish();
	bool IsAtMaxCapacity();
	void Deplete();
	bool CanBeReplenished();
	void AddDefaultStockLevel();
};


// Class Athena.CrewServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UCrewServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CrewServiceInterface");
		return ptr;
	}

};


// Class Athena.StorageContainer
// 0x0110 (0x0628 - 0x0518)
class AStorageContainer : public AInteractableObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0518(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StorageContainer");
		return ptr;
	}


	void TestReplenish();
	void TakeItem(class AActor* Player);
	void Replenish();
	bool IsAtMaxCapacity();
	class FString GetSubjectId();
	int GetMaxCapacity();
	int GetItemCount();
	class UClass* GetDefaultItemDesc();
	void Deplete();
	bool CanBeReplenished();
	void AddItem(class AActor* Player);
	void AddDefaultStockLevel();
};


// Class Athena.BuoyantObjectSpawnParamsDataAsset
// 0x01D0 (0x01F8 - 0x0028)
class UBuoyantObjectSpawnParamsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FBuoyantObjectSpawnParams                   Params;                                                   // 0x01E3(0x00E0) (Edit, DisableEditOnInstance)
	bool                                               EnableParamsOverride;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParamsOverrideFeature;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD];                                       // 0x01EB(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BuoyantObjectSpawnParamsDataAsset");
		return ptr;
	}

};


// Class Athena.BurpComponent
// 0x0068 (0x0138 - 0x00D0)
class UBurpComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              MinGasToTriggerBurp;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinRandomBurpDelay;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRandomBurpDelay;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GasDecayPerSecond;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     BurpComponentPool;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BurpSfx;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerSizeRTPCName;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BurpLengthRTPCName;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BurpComponent");
		return ptr;
	}


	void Multicast_Burp(float DurationRTPC, float TypeRTPC);
	float GetCurrentGasAmount();
};


// Class Athena.BurpTestActor
// 0x0010 (0x0480 - 0x0470)
class ABurpTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BurpTestActor");
		return ptr;
	}


	TEnumAsByte<EWieldItemReturnCode> WieldItemByActor(class AActor* Item, bool UnwieldFast);
	void ToggleWieldItem();
	bool RemoveItem(class AItemInfo* Item);
	void QuickSelectItemOfType(TEnumAsByte<EItemType> ItemType, int TypedItemIndex);
	void QuickSelectItemOfCategory(class UClass* Category, int IndexIntoCategory);
	void QuickSelectItem(int ItemIndex);
	bool PickUpItem(class AItemInfo* Item, bool AndWield);
	int GetNumberOfItemsOfItemCategory(class UClass* ItemSlot);
	int GetCurrentItemIndex();
	void CycleItemUp();
	void CycleItemType(TEnumAsByte<EItemType> ItemType);
	void CycleItemDown();
	void CycleItemCategory(class UClass* Category);
	bool ConsumeItem(class AItemInfo* Item);
	TEnumAsByte<ECanAddItemQueryResult> CanAddItemOfItemCategory(class UClass* ItemSlot);
	bool AddItem(class AItemInfo* Item);
};


// Class Athena.CalmAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UCalmAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CalmAIStrategyId");
		return ptr;
	}

};


// Class Athena.CameraFadeManagerTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UCameraFadeManagerTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CameraFadeManagerTestFunctions");
		return ptr;
	}


	bool STATIC_IsFadeComplete(class APlayerController* TargetController);
	bool STATIC_IsFadeActive(class APlayerController* TargetController);
	void STATIC_FireFadeAckRequestToClient(class AAthenaPlayerController* TargetController, float AckTimeout);
};


// Class Athena.CameraPitchModifier
// 0x0040 (0x0088 - 0x0048)
class UCameraPitchModifier : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CameraPitchModifier");
		return ptr;
	}

};


// Class Athena.CameraRollModifier
// 0x0040 (0x0088 - 0x0048)
class UCameraRollModifier : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CameraRollModifier");
		return ptr;
	}

};


// Class Athena.CannonAIInteractableType
// 0x0000 (0x0028 - 0x0028)
class UCannonAIInteractableType : public UAIInteractableType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CannonAIInteractableType");
		return ptr;
	}

};


// Class Athena.CannonAnimInterface
// 0x0000 (0x0028 - 0x0028)
class UCannonAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CannonAnimInterface");
		return ptr;
	}


	void SetCannonFiring(bool CannonFiring);
	bool GetCannonFiring();
};


// Class Athena.CannonAnimInstance
// 0x0010 (0x0450 - 0x0440)
class UCannonAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0440(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CannonAnimInstance");
		return ptr;
	}


	bool GetCannonFiring();
};


// Class Athena.CannonPitchRateAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UCannonPitchRateAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CannonPitchRateAnalogInputId");
		return ptr;
	}

};


// Class Athena.CannonYawRateAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UCannonYawRateAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CannonYawRateAnalogInputId");
		return ptr;
	}

};


// Class Athena.IterativeCanvasRenderTarget2D
// 0x0018 (0x0180 - 0x0168)
class UIterativeCanvasRenderTarget2D : public UTextureRenderTarget2D
{
public:
	unsigned char                                      UnknownData00[0x7B];                                      // 0x0168(0x007B) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCanvasRenderTargetUpdate;                               // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TWeakObjectPtr<class UWorld>                       World;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IterativeCanvasRenderTarget2D");
		return ptr;
	}


	void ReceiveUpdate(class UCanvas* Canvas, int Width, int Height);
	void GetSize(int* Width, int* Height);
	class UIterativeCanvasRenderTarget2D* STATIC_Create(class UObject* WorldContextObject, class UClass* CanvasRenderTarget2DClass, int Width, int Height, const struct FLinearColor& InClearColor);
};


// Class Athena.CanvasWorldMapComponent
// 0x01A8 (0x0278 - 0x00D0)
class UCanvasWorldMapComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	int                                                CanvasWidth;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MapClass;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxUpdateDist;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SquareShipUpdateDist;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipUpdateRot;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCanvasWorldMapShipIcons>            ShipIcons;                                                // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UTexture*                                    OffscreenArrowTexture;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    CompassTexture;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CompassPosition;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFont*                                       Font;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   GridLabelScreenMin;                                       // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   GridLabelEdgeOffset;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridLabelSize;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IslandLabelSize;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IslandLabelFadeoutZoom;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IslandLabelFadeoutTime;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBox2D                                      OffscreenIndicatorSafe;                                   // 0x01E3(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FBox2D                                      OffscreenIndicatorBounds;                                 // 0x01E3(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffscreenArrowOffset;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffscreenIndicatorFadeoutTime;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                BackgroundColour;                                         // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FCanvasWorldMapBackgroundItems>      BackgroundDetails;                                        // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCanvasWorldMapSeaData>              Seas;                                                     // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture*                                    CrosshairTexture;                                         // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    CrosshairEmptyTexture;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    PinTexture;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    PinTextureHighlight;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    PathDropTexture;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LineTextureWidth;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LineTextureLength;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UIterativeCanvasRenderTarget2D*              RenderTarget;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8D];                                      // 0x01EB(0x008D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CanvasWorldMapComponent");
		return ptr;
	}


	void OnCanvasUpdate(class UCanvas* Canvas, int Width, int Height);
};


// Class Athena.CapstanInterface
// 0x0000 (0x0028 - 0x0028)
class UCapstanInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CapstanInterface");
		return ptr;
	}


	bool IsLocked();
	float GetCapstanState();
	float GetCapstanRatioVelocity();
	int GetCapstanNumCurrentUsers();
	float GetCapstanMaxRatioVelocity();
};


// Class Athena.CapstanDescAsset
// 0x0020 (0x0048 - 0x0028)
class UCapstanDescAsset : public UShipPartDescAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CapstanDescAsset");
		return ptr;
	}

};


// Class Athena.Capstan
// 0x0340 (0x07B0 - 0x0470)
class ACapstan : public AActor
{
public:
	unsigned char                                      UnknownData00[0x340];                                     // 0x0470(0x0340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Capstan");
		return ptr;
	}


	void OnCapstanDescLoaded(class UCapstanDescAsset* CapstanDesc);
	class ACapstanRelease* GetCapstanReleaseActor();
	TArray<class ACapstanArm*> GetArms();
};


// Class Athena.CapstanArmInterface
// 0x0000 (0x0028 - 0x0028)
class UCapstanArmInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CapstanArmInterface");
		return ptr;
	}


	void SetIntent(float NewIntent);
	bool IsLocked();
	bool IsArmInUse();
	float GetCurrentIntent();
	float GetCapstanRatioVelocity();
};


// Class Athena.CapstanEventDispatcherMock
// 0x00A8 (0x00D0 - 0x0028)
class UCapstanEventDispatcherMock : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CapstanEventDispatcherMock");
		return ptr;
	}

};


// Class Athena.CapstanTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UCapstanTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CapstanTestFunctions");
		return ptr;
	}


	class ACapstan* STATIC_SetupCapstanTestServerSide(class UObject* WorldContextObject, const struct FVector& SpawnLocation, class UClass* CapstanClass);
	class ACapstan* STATIC_SetupCapstanTestClientSide(class UObject* WorldContextObject);
	void STATIC_SetCapstanSpeed(class ACapstan* Capstan, float MaxPlayerVelocity, float MaxLoweringVelocity);
	class ACapstanArm* STATIC_GetCapstanArm(class ACapstan* Capstan, int ArmIndex);
	void STATIC_ForceSetCapstanRatio(class ACapstan* Capstan, float TargetRatio);
};


// Class Athena.CapturedByKrakenActionStateId
// 0x0000 (0x0028 - 0x0028)
class UCapturedByKrakenActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CapturedByKrakenActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoCapturedByKrakenActionState(class AActor* Character, class AKrakenAnimatedTentacle* Tentacle);
	void STATIC_PopCharacterOutOfCapturedByKrakenActionState(class AActor* Character);
};


// Class Athena.ClothingCategory
// 0x0000 (0x0078 - 0x0078)
class UClothingCategory : public UCategoryBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClothingCategory");
		return ptr;
	}

};


// Class Athena.InvalidClothingCategory
// 0x0000 (0x0078 - 0x0078)
class UInvalidClothingCategory : public UClothingCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InvalidClothingCategory");
		return ptr;
	}

};


// Class Athena.ClothingDesc
// 0x0008 (0x00E0 - 0x00D8)
class UClothingDesc : public UEntitlementDesc
{
public:
	unsigned char                                      UnknownData00[0x10B];                                     // 0x00D8(0x010B) MISSED OFFSET
	struct FName                                       WardrobeKey;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClothingDesc");
		return ptr;
	}

};


// Class Athena.CarouselPirateDescConversion
// 0x0000 (0x0028 - 0x0028)
class UCarouselPirateDescConversion : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CarouselPirateDescConversion");
		return ptr;
	}


	struct FPirateDescription STATIC_ToPirateDescriptor(const struct FCarouselPirateDesc& InParams);
	TArray<class UClass*> STATIC_ToOutfit(const struct FCarouselPirateDesc& InParams);
};


// Class Athena.CarouselPirateGenerator
// 0x0000 (0x0028 - 0x0028)
class UCarouselPirateGenerator : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CarouselPirateGenerator");
		return ptr;
	}


	void STATIC_RefreshCurrentPirateStatus(class UObject* WorldContextObject, bool Locked);
	TArray<struct FCarouselPirateDesc> STATIC_GenerateSetOfPirates(int InSeed, int InCount, const struct FCarouselPirateGeneratorParams& InParams);
	TArray<struct FName> STATIC_GenerateClothingItems(int InSeed, const struct FCarouselPirateGeneratorParams& InParams, TEnumAsByte<EIPGGender> InTargetGender, TEnumAsByte<EIPGEthnicity> InTargetEthnicity);
};


// Class Athena.CarouselPirateGeneratorParamsAsset
// 0x00C8 (0x00F0 - 0x0028)
class UCarouselPirateGeneratorParamsAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CarouselPirateGeneratorParamsAsset");
		return ptr;
	}

};


// Class Athena.CatalogOfferDataAsset
// 0x0108 (0x0130 - 0x0028)
class UCatalogOfferDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FGuid                                       OfferId;                                                  // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01F3(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       DisplayDescription;                                       // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData02[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FStringAssetReference                       ThumbnailOverride;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       PreviewOverride;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<ECatalogOfferCurrencyType>             CurrencyType;                                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Price;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Items;                                                    // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FPlayerStat>                         StatsToTriggerUponPurchase;                               // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FCatalogOfferPrerequisitesDataAsset         Prerequisites;                                            // 0x01E3(0x0020) (Edit)
	struct FEmblemId                                   PrerequisiteEmblem;                                       // 0x01E3(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CatalogOfferDataAsset");
		return ptr;
	}

};


// Class Athena.CatalogDataAsset
// 0x0058 (0x0080 - 0x0028)
class UCatalogDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FGuid                                       CatalogId;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01F3(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CatalogDataAsset");
		return ptr;
	}

};


// Class Athena.CatalogListDataAsset
// 0x0010 (0x0038 - 0x0028)
class UCatalogListDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CatalogListDataAsset");
		return ptr;
	}

};


// Class Athena.TitleCategory
// 0x0000 (0x0078 - 0x0078)
class UTitleCategory : public UClothingCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TitleCategory");
		return ptr;
	}

};


// Class Athena.BootyItemDesc
// 0x0000 (0x0120 - 0x0120)
class UBootyItemDesc : public UItemWithoutIconsDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BootyItemDesc");
		return ptr;
	}

};


// Class Athena.MerchantCrateItemInfo
// 0x0010 (0x0588 - 0x0578)
class AMerchantCrateItemInfo : public ABootyItemInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0578(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantCrateItemInfo");
		return ptr;
	}

};


// Class Athena.MountpointInterface
// 0x0000 (0x0028 - 0x0028)
class UMountpointInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MountpointInterface");
		return ptr;
	}

};


// Class Athena.ObjectMeshInterface
// 0x0000 (0x0028 - 0x0028)
class UObjectMeshInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ObjectMeshInterface");
		return ptr;
	}

};


// Class Athena.PickupableInterface
// 0x0000 (0x0028 - 0x0028)
class UPickupableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PickupableInterface");
		return ptr;
	}


	void HandleDestroy();
};


// Class Athena.PickupableObject
// 0x0118 (0x05B0 - 0x0498)
class APickupableObject : public AInteractableBase
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0498(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PickupableObject");
		return ptr;
	}

};


// Class Athena.ItemProxy
// 0x0100 (0x06B0 - 0x05B0)
class AItemProxy : public APickupableObject
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x05B0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemProxy");
		return ptr;
	}


	void PerformDropOnSurfaceFx(TEnumAsByte<EPhysicalSurface> ServerSurfaceType, bool AttachVFXToItem, const struct FVector& OverrideVFXPos, class AActor* ActorToParentVfxTo);
	void Multicast_DropOnSurfaceRPC(TEnumAsByte<EPhysicalSurface> SurfaceType, bool AttachVFXToItem, const struct FVector& OverrideVFXPos, class AActor* ActorToParentVfxTo);
	class AItemInfo* GetItemInfo();
};


// Class Athena.FloatingItemProxy
// 0x0120 (0x07D0 - 0x06B0)
class AFloatingItemProxy : public AItemProxy
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x06B0(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FloatingItemProxy");
		return ptr;
	}


	void OnRep_PhysicsState();
};


// Class Athena.BootyProxy
// 0x00A0 (0x0870 - 0x07D0)
class ABootyProxy : public AFloatingItemProxy
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x07D0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BootyProxy");
		return ptr;
	}

};


// Class Athena.BaseMerchantCrateItemProxy
// 0x0020 (0x0890 - 0x0870)
class ABaseMerchantCrateItemProxy : public ABootyProxy
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0870(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BaseMerchantCrateItemProxy");
		return ptr;
	}

};


// Class Athena.MerchantCrateItemProxy
// 0x0000 (0x0890 - 0x0890)
class AMerchantCrateItemProxy : public ABaseMerchantCrateItemProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantCrateItemProxy");
		return ptr;
	}

};


// Class Athena.StaticMerchantCrateItemProxy
// 0x0000 (0x0890 - 0x0890)
class AStaticMerchantCrateItemProxy : public ABaseMerchantCrateItemProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StaticMerchantCrateItemProxy");
		return ptr;
	}

};


// Class Athena.StaticMeshWieldableItem
// 0x0000 (0x07C0 - 0x07C0)
class AStaticMeshWieldableItem : public AWieldableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StaticMeshWieldableItem");
		return ptr;
	}

};


// Class Athena.MerchantCrate
// 0x0020 (0x07E0 - 0x07C0)
class AMerchantCrate : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x07C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantCrate");
		return ptr;
	}

};


// Class Athena.StaticMerchantCrate
// 0x0028 (0x07E8 - 0x07C0)
class AStaticMerchantCrate : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x07C0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StaticMerchantCrate");
		return ptr;
	}

};


// Class Athena.MockMerchantCrateItemProxy
// 0x0000 (0x0890 - 0x0890)
class AMockMerchantCrateItemProxy : public ABaseMerchantCrateItemProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MockMerchantCrateItemProxy");
		return ptr;
	}

};


// Class Athena.MerchantCrateCategoryMock
// 0x0000 (0x0080 - 0x0080)
class UMerchantCrateCategoryMock : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantCrateCategoryMock");
		return ptr;
	}

};


// Class Athena.MerchantCrateItemInfoMock
// 0x0008 (0x0590 - 0x0588)
class AMerchantCrateItemInfoMock : public AMerchantCrateItemInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0588(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantCrateItemInfoMock");
		return ptr;
	}

};


// Class Athena.CommonMerchantCrateItemInfoMock
// 0x0000 (0x0590 - 0x0590)
class ACommonMerchantCrateItemInfoMock : public AMerchantCrateItemInfoMock
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CommonMerchantCrateItemInfoMock");
		return ptr;
	}

};


// Class Athena.RareMerchantCrateItemInfoMock
// 0x0000 (0x0590 - 0x0590)
class ARareMerchantCrateItemInfoMock : public AMerchantCrateItemInfoMock
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RareMerchantCrateItemInfoMock");
		return ptr;
	}

};


// Class Athena.LegendaryMerchantCrateItemInfoMock
// 0x0000 (0x0590 - 0x0590)
class ALegendaryMerchantCrateItemInfoMock : public AMerchantCrateItemInfoMock
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LegendaryMerchantCrateItemInfoMock");
		return ptr;
	}

};


// Class Athena.MythicalMerchantCrateItemInfoMock
// 0x0000 (0x0590 - 0x0590)
class AMythicalMerchantCrateItemInfoMock : public AMerchantCrateItemInfoMock
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MythicalMerchantCrateItemInfoMock");
		return ptr;
	}

};


// Class Athena.MerchantCrateItemDescMock
// 0x0000 (0x0120 - 0x0120)
class UMerchantCrateItemDescMock : public UBootyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantCrateItemDescMock");
		return ptr;
	}

};


// Class Athena.TreasureChestItemInfo
// 0x0000 (0x0578 - 0x0578)
class ATreasureChestItemInfo : public ABootyItemInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureChestItemInfo");
		return ptr;
	}

};


// Class Athena.TreasureChestCategoryMock
// 0x0000 (0x0080 - 0x0080)
class UTreasureChestCategoryMock : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureChestCategoryMock");
		return ptr;
	}

};


// Class Athena.TreasureChestItemInfoMock
// 0x0008 (0x0580 - 0x0578)
class ATreasureChestItemInfoMock : public ATreasureChestItemInfo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0578(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureChestItemInfoMock");
		return ptr;
	}

};


// Class Athena.TreasureChestItemDescMock
// 0x0000 (0x0120 - 0x0120)
class UTreasureChestItemDescMock : public UBootyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureChestItemDescMock");
		return ptr;
	}

};


// Class Athena.PirateLegendCategory
// 0x0000 (0x0078 - 0x0078)
class UPirateLegendCategory : public UCategoryBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PirateLegendCategory");
		return ptr;
	}

};


// Class Athena.ShantyUnlockDesc
// 0x0000 (0x00D8 - 0x00D8)
class UShantyUnlockDesc : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShantyUnlockDesc");
		return ptr;
	}

};


// Class Athena.ShantyCategory
// 0x0000 (0x0078 - 0x0078)
class UShantyCategory : public UCategoryBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShantyCategory");
		return ptr;
	}

};


// Class Athena.ShantyListDataAsset
// 0x0018 (0x0040 - 0x0028)
class UShantyListDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FShantyData>                         Shanties;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShantyListDataAsset");
		return ptr;
	}

};


// Class Athena.ShipCustomizationCategory
// 0x0000 (0x0078 - 0x0078)
class UShipCustomizationCategory : public UCategoryBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCustomizationCategory");
		return ptr;
	}

};


// Class Athena.InvalidShipCustomizationCategory
// 0x0000 (0x0078 - 0x0078)
class UInvalidShipCustomizationCategory : public UShipCustomizationCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InvalidShipCustomizationCategory");
		return ptr;
	}

};


// Class Athena.CategoryDefaults
// 0x0010 (0x0038 - 0x0028)
class UCategoryDefaults : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CategoryDefaults");
		return ptr;
	}

};


// Class Athena.CharacterMovementAINoiseEventComponentParams
// 0x0028 (0x0050 - 0x0028)
class UCharacterMovementAINoiseEventComponentParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       MovementTag;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WalkingSpeedToNoiseRange;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CrouchedWalkingNoiseRange;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MovingInWaterNoiseRange;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              JumpNoiseRange;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LandNoiseRange;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterMovementAINoiseEventComponentParams");
		return ptr;
	}

};


// Class Athena.CharacterAINoiseEventComponent
// 0x0048 (0x0118 - 0x00D0)
class UCharacterAINoiseEventComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UCharacterMovementAINoiseEventComponentParams* Params;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AAthenaCharacter*                            AthenaCharacter;                                          // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAthenaCharacterMovementComponent*           CharacterMovementComponent;                               // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterAINoiseEventComponent");
		return ptr;
	}

};


// Class Athena.CharacterAudioComponent
// 0x0650 (0x0720 - 0x00D0)
class UCharacterAudioComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UCharacterAudioComponentParams*              Params;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TimeOfDayRtpc;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPlayerMusicController                      PlayerMusicController;                                    // 0x01E3(0x00D8) (Edit)
	class UCharacterAudioFootfallControllerParams*     FootfallParams;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCharacterAudioEventControllerParams*        EventParams;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PegLegCategory;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BootsCategory;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioSpaceTrackerComponent*                 AudioSpaceTracker;                                        // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AAthenaPlayerCharacter*                      AthenaPlayerCharacter;                                    // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioSpaceDataAsset*                        CurrentSpace;                                             // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AShip*                                       CurrentShip;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x535];                                     // 0x01EB(0x0535) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterAudioComponent");
		return ptr;
	}


	bool SetNamedState(const struct FName& StateName, bool Active);
	void ResetNamedStates();
	void PlaySoundOnLocalClientOnly_RPC(class UWwiseEvent* Event);
	float GetSpaceRtpcValueFromRtpcName(const struct FName& RTPCName);
	int GetNumberOfSkeletonsAffectingMusicSystem();
	struct FWwiseEmitter GetEmitter();
	TEnumAsByte<EPlayerMusicState> GetCurrentPlayerMusicState();
};


// Class Athena.CharacterAudioComponentParams
// 0x0160 (0x0188 - 0x0028)
class UCharacterAudioComponentParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     CharacterAudioPool;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CausedDamageAudioEvent;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CharacterDeadAudioEvent;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 KilledCharacterAudioEvent;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStateCategoryGroup                         CharacterState;                                           // 0x01E3(0x0020) (Edit)
	class UWwiseEvent*                                 PlayCharacterRespawn;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterStateDead;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterStateFall;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterStateStun;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterStateDefault;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterStateTeleporting;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FDamageTypeToAudio>                  ExplosionSoundEvents;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UWwiseEvent*                                 PlayPlayerSlidingDownLadder;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopPlayerSlidingDownLadder;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LadderSlideSpeedRtpc;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 LadderUse;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CannonUse;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WheelUse;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SailManipulatorUse;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CharacterTorsoEnteredWater;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CharacterTorsoExitedWater;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerSpeedRtpc;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpeedRtpcMin;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerSpeedRtpcMax;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BrokeLegSwitchGroupName;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BrokeLegSwitch;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       HealedLegSwitch;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FallDamageRTPC;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FHealthChangeAudio>                  HealthChangeSfx;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UWwiseEvent*                                 LocalPlayerTeleportPlay;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 LocalPlayerTeleportStop;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceDataAsset*                        LargeShipMapDeck;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceDataAsset*                        LargeShipBrigDeck;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceDataAsset*                        LargeShipCaptainsCabin;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceDataAsset*                        IslandTavern;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceDataAsset*                        IslandCave;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmallestEnclosedRatioToTriggerCave;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PredominantCaveSurface;                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LargestCaveSizeMetersSquared;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmallestCaveSizeMetersSquared;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CaveSizeRtpcName;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterAudioComponentParams");
		return ptr;
	}

};


// Class Athena.CharacterAudioEventControllerParams
// 0x0020 (0x0048 - 0x0028)
class UCharacterAudioEventControllerParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseEvent*                                 WieldEvent;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StowEvent;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 EnemyHitNotifyEvent;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterAudioEventControllerParams");
		return ptr;
	}

};


// Class Athena.CharacterFootImpactComponent
// 0x0068 (0x0138 - 0x00D0)
class UCharacterFootImpactComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<struct FCharacterSocketCollisionDesc>       SocketCollisionDesc;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              SocketOffsetTolerance;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleOffsetTolerance;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterFootImpactComponent");
		return ptr;
	}

};


// Class Athena.CharacterHitReactionDamagerTypeToAnimTypeLayer
// 0x0010 (0x0038 - 0x0028)
class UCharacterHitReactionDamagerTypeToAnimTypeLayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterHitReactionDamagerTypeToAnimTypeLayer");
		return ptr;
	}

};


// Class Athena.CharacterInputBinder
// 0x0020 (0x00A8 - 0x0088)
class UCharacterInputBinder : public UInputBinder
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0088(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterInputBinder");
		return ptr;
	}

};


// Class Athena.AthenaPlayerCharacterTestInputBinder
// 0x0018 (0x00C0 - 0x00A8)
class UAthenaPlayerCharacterTestInputBinder : public UCharacterInputBinder
{
public:
	unsigned char                                      UnknownData00[0x13B];                                     // 0x00A8(0x013B) MISSED OFFSET
	class UClass*                                      LastAnalogInputId;                                        // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastAnalogInputValue;                                     // 0x01E3(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LastNotificationInputId;                                  // 0x01E3(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaPlayerCharacterTestInputBinder");
		return ptr;
	}

};


// Class Athena.CharacterInteractionComponentTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UCharacterInteractionComponentTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterInteractionComponentTestFunctions");
		return ptr;
	}


	void STATIC_PushCanInteractValidatorToInteractionComponent(class UCharacterInteractionComponent* InCharacterInteractionComponent);
	bool STATIC_CharacterInteractionComponentWithoutInteractors_WhenPolicyIsAdded_PolicyIsntCalled(class UCharacterInteractionComponent* InCharacterInteractionComponent);
	bool STATIC_CharacterInteractionComponentWithInteractors_WhenPolicyIsAdded_PolicyIsCalled(class UCharacterInteractionComponent* InCharacterInteractionComponent);
	bool STATIC_CharacterInteractionComponentWithInteractor_TwoPolicies_HighestPriorityFirst(class UCharacterInteractionComponent* InCharacterInteractionComponent);
};


// Class Athena.CharacterPossessedEventTestComponent
// 0x0050 (0x0120 - 0x00D0)
class UCharacterPossessedEventTestComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00D0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterPossessedEventTestComponent");
		return ptr;
	}


	bool HasReceivedPlayerStateReplicatedEvent();
};


// Class Athena.CharacterSocketCollisionDelegate
// 0x0000 (0x0028 - 0x0028)
class UCharacterSocketCollisionDelegate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterSocketCollisionDelegate");
		return ptr;
	}

};


// Class Athena.CharacterSocketCollisionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCharacterSocketCollisionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterSocketCollisionFunctionLibrary");
		return ptr;
	}


	bool STATIC_NotEqual(const struct FCharacterSocketCollisionHandle& A, const struct FCharacterSocketCollisionHandle& B);
	bool STATIC_IsValid(const struct FCharacterSocketCollisionHandle& Handle);
	bool STATIC_Equal(const struct FCharacterSocketCollisionHandle& A, const struct FCharacterSocketCollisionHandle& B);
};


// Class Athena.CharacterSocketCollisionServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UCharacterSocketCollisionServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterSocketCollisionServiceInterface");
		return ptr;
	}


	void UnregisterSocket(struct FCharacterSocketCollisionHandle* Handle);
	struct FCharacterSocketCollisionHandle RegisterSocket(class AAthenaCharacter* InCharacter, const struct FCharacterSocketCollisionDesc& InDesc);
	bool IsSocketRegistered(const struct FCharacterSocketCollisionHandle& Handle);
};


// Class Athena.CharacterSocketCollisionService
// 0x1130 (0x15A0 - 0x0470)
class ACharacterSocketCollisionService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1130];                                    // 0x0470(0x1130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterSocketCollisionService");
		return ptr;
	}

};


// Class Athena.CharacterVfxComponent
// 0x0000 (0x00D0 - 0x00D0)
class UCharacterVfxComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterVfxComponent");
		return ptr;
	}

};


// Class Athena.ChatboxCompositeInputHandler
// 0x0050 (0x0128 - 0x00D8)
class UChatboxCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00D8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ChatboxCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnOpenChatbox();
};


// Class Athena.CinematicCameraController
// 0x0008 (0x07B8 - 0x07B0)
class ACinematicCameraController : public ADebugCameraController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CinematicCameraController");
		return ptr;
	}


	void SetFOV(float NewFOV);
	float GetFOV();
};


// Class Athena.RankDesc
// 0x0008 (0x00E0 - 0x00D8)
class URankDesc : public UEntitlementDesc
{
public:
	unsigned char                                      UnknownData00[0x10B];                                     // 0x00D8(0x010B) MISSED OFFSET
	uint32_t                                           Grade;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RankDesc");
		return ptr;
	}

};


// Class Athena.ClientCompanyData
// 0x0130 (0x0158 - 0x0028)
class UClientCompanyData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UClass*                                      Company;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCompanySkin                                Skin;                                                     // 0x01E3(0x0028) (Edit)
	struct FCompanyShopSkin                            ShopSkin;                                                 // 0x01E3(0x0020) (Edit)
	struct FCompanyProgressIcons                       ProgressIcons;                                            // 0x01E3(0x0018) (Edit)
	struct FCompanyRankData                            RankData;                                                 // 0x01E3(0x0010) (Edit)
	struct FText                                       Motto;                                                    // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01F3(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       CompanyFlavourText1;                                      // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData02[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       CompanyFlavourText2;                                      // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData03[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	uint32_t                                           TotalNumberOfTitles;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalNumberOfItems;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClientCompanyData");
		return ptr;
	}

};


// Class Athena.ClientCompanyServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UClientCompanyServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClientCompanyServiceInterface");
		return ptr;
	}

};


// Class Athena.ClientCompanyService
// 0x0068 (0x0090 - 0x0028)
class UClientCompanyService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClientCompanyService");
		return ptr;
	}

};


// Class Athena.ClientCompanySettings
// 0x0010 (0x0038 - 0x0028)
class UClientCompanySettings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClientCompanySettings");
		return ptr;
	}

};


// Class Athena.ClientNotificationsServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UClientNotificationsServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClientNotificationsServiceInterface");
		return ptr;
	}

};


// Class Athena.ClientNotificationsService
// 0x0028 (0x0050 - 0x0028)
class UClientNotificationsService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClientNotificationsService");
		return ptr;
	}

};


// Class Athena.ClimbLadderAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UClimbLadderAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClimbLadderAnalogInputId");
		return ptr;
	}

};


// Class Athena.ClothingLoadoutControlInterface
// 0x0000 (0x0028 - 0x0028)
class UClothingLoadoutControlInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClothingLoadoutControlInterface");
		return ptr;
	}


	bool UnequipClothing(class UClass* InDesc);
	void SetClothingLoadout(const struct FClothingLoadout& InLoadout);
	bool EquipClothing(class UClass* InDesc);
};


// Class Athena.ClothingLoadoutViewInterface
// 0x0000 (0x0028 - 0x0028)
class UClothingLoadoutViewInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClothingLoadoutViewInterface");
		return ptr;
	}


	struct FClothingLoadout GetClothingLoadout();
};


// Class Athena.TitleLoadoutControlInterface
// 0x0000 (0x0028 - 0x0028)
class UTitleLoadoutControlInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TitleLoadoutControlInterface");
		return ptr;
	}


	void Client_UpdateTitleUI(class UClass* InLoadout);
};


// Class Athena.TitleLoadoutViewInterface
// 0x0000 (0x0028 - 0x0028)
class UTitleLoadoutViewInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TitleLoadoutViewInterface");
		return ptr;
	}


	class UClass* GetTitleLoadout();
};


// Class Athena.PlayerEntitlementViewInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerEntitlementViewInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerEntitlementViewInterface");
		return ptr;
	}

};


// Class Athena.ClothingLoadoutComponent
// 0x0080 (0x0150 - 0x00D0)
class UClothingLoadoutComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FClothingLoadout                            Loadout;                                                  // 0x01E3(0x0010) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClothingLoadoutComponent");
		return ptr;
	}


	void OnRep_Loadout();
};


// Class Athena.CloudDomeService
// 0x0018 (0x0040 - 0x0028)
class UCloudDomeService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CloudDomeService");
		return ptr;
	}

};


// Class Athena.CloudSystem
// 0x01A8 (0x0618 - 0x0470)
class ACloudSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0470(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CloudSystem");
		return ptr;
	}


	void SetGlobalAtmosphericPressure(float NewAtmosphericPressure);
};


// Class Athena.ClusterStaticMeshComponent
// 0x0010 (0x0700 - 0x06F0)
class UClusterStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClusterStaticMeshComponent");
		return ptr;
	}

};


// Class Athena.Cluster
// 0x0028 (0x0498 - 0x0470)
class ACluster : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0470(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Cluster");
		return ptr;
	}

};


// Class Athena.ShipSpawnLocation
// 0x0040 (0x04B0 - 0x0470)
class AShipSpawnLocation : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0470(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipSpawnLocation");
		return ptr;
	}

};


// Class Athena.SeaId
// 0x0008 (0x0030 - 0x0028)
class USeaId : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SeaId");
		return ptr;
	}

};


// Class Athena.PrebakedIslandAsset
// 0x0010 (0x0038 - 0x0028)
class UPrebakedIslandAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PrebakedIslandAsset");
		return ptr;
	}

};


// Class Athena.CoastInterface
// 0x0000 (0x0028 - 0x0028)
class UCoastInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoastInterface");
		return ptr;
	}


	void UnregisterCoast(const struct FBlueprintableIntegerHandle& CoastHandle);
	struct FBlueprintableIntegerHandle RegisterCoast(class USplineComponent* CoastalSpline, class USplineComponent* InnerSpline, const struct FVector& SplineOrigin);
	struct FName GetClosestIslandNameOfCoastlineForPointAndTolerance(const struct FVector& Pos, float MaxDistFromCoast, float* OutClosestDistToShore);
	TArray<struct FCoastObject> GetClosestCoastObjects(const struct FVector& LookupPosition);
};


// Class Athena.CoastService
// 0x0070 (0x0098 - 0x0028)
class UCoastService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoastService");
		return ptr;
	}

};


// Class Athena.CoherentBaseHUD
// 0x0010 (0x0578 - 0x0568)
class ACoherentBaseHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0568(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentBaseHUD");
		return ptr;
	}


	bool IsViewportValid();
};


// Class Athena.AthenaHUD
// 0x0210 (0x0788 - 0x0578)
class AAthenaHUD : public ACoherentBaseHUD
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x0578(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaHUD");
		return ptr;
	}


	void ShowTooltipsDetailedAtlas();
	void ShowTooltipsAtlas();
	void ShowNameplatesAtlas();
	bool HasInputFocus();
	bool AreInGameMenusActive();
	bool AreAllViewScriptingReady();
};


// Class Athena.CoherentUIGTInstancedComponent
// 0x0048 (0x0388 - 0x0340)
class UCoherentUIGTInstancedComponent : public UCoherentUIGTBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0340(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentUIGTInstancedComponent");
		return ptr;
	}


	void ScriptingReadyEventReceived();
	void ReadyForBindingsEventReceived();
	void OnScriptingReady();
	void OnReadyForBindings();
	bool IsScriptingReady();
	class UMaterialInstanceDynamic* GetHUDMaterial();
	void FinishLoadEventReceived(const class FString& path, bool isMainFrame);
	void BindingsReleasedEventReceived();
};


// Class Athena.CoherentBaseHUDComponent
// 0x0200 (0x0588 - 0x0388)
class UCoherentBaseHUDComponent : public UCoherentUIGTInstancedComponent
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0388(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentBaseHUDComponent");
		return ptr;
	}


	void OnScriptingReady();
	void OnReadyForBindings();
	bool HasInitializationErrorOccurred();
};


// Class Athena.FrontendHUDComponent
// 0x0168 (0x06F0 - 0x0588)
class UFrontendHUDComponent : public UCoherentBaseHUDComponent
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0588(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FrontendHUDComponent");
		return ptr;
	}


	void SetFrontendMessagingDispatcher(const TScriptInterface<class UObjectMessagingDispatcherInterface>& Dispatcher);
	void OnReadyForBindings();
};


// Class Athena.UIInputForwardComponent
// 0x0048 (0x0118 - 0x00D0)
class UUIInputForwardComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UCoherentUIGTBaseComponent*                  TargetView;                                               // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UIInputForwardComponent");
		return ptr;
	}


	void TargetViewScriptingReady();
	void SetUIFocus(TEnumAsByte<EUIInputFocusType> FocusType, class UCoherentUIGTBaseComponent* TargetViewComponent);
	void SetTargetView(class UCoherentUIGTBaseComponent* ViewComponent);
	bool IsUIFocused();
	TEnumAsByte<EUIInputFocusType> GetCurrentInputFocusType();
	void CentreMouseCursor();
};


// Class Athena.FrontendHUD
// 0x00F0 (0x0668 - 0x0578)
class AFrontendHUD : public ACoherentBaseHUD
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0578(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FrontendHUD");
		return ptr;
	}


	void SetBootFlowMessagingDispatcher(const TScriptInterface<class UObjectMessagingDispatcherInterface>& Dispatcher);
	TScriptInterface<class UObjectMessagingDispatcherInterface> GetBootFlowMessagingDispatcher();
	void DeletePirate();
	void AttachToBootFlowMessagingDispatcher();
};


// Class Athena.CoherentToWwiseEventDataAsset
// 0x0010 (0x0038 - 0x0028)
class UCoherentToWwiseEventDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentToWwiseEventDataAsset");
		return ptr;
	}

};


// Class Athena.CoherentToWwiseEventComponent
// 0x0188 (0x0258 - 0x00D0)
class UCoherentToWwiseEventComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FStringAssetReference                       UIAudioCuesTableLocation;                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UCoherentToWwiseEventDataAsset*              UIAudioCuesAsset;                                         // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       AudioGameStateGroup;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AudioGameStateIngame;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AudioGameStateInMenu;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AudioGameStateLoading;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AudioGameStateInFrontEnd;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6D];                                      // 0x01EB(0x006D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentToWwiseEventComponent");
		return ptr;
	}


	bool IsPlayingAny();
	struct FWwiseEmitter GetEmitter();
};


// Class Athena.CoherentUIGTAssetContainer
// 0x0010 (0x0038 - 0x0028)
class UCoherentUIGTAssetContainer : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentUIGTAssetContainer");
		return ptr;
	}

};


// Class Athena.CoherentUIGTHUDComponent
// 0x0920 (0x0EA8 - 0x0588)
class UCoherentUIGTHUDComponent : public UCoherentBaseHUDComponent
{
public:
	unsigned char                                      UnknownData00[0x920];                                     // 0x0588(0x0920) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentUIGTHUDComponent");
		return ptr;
	}


	void OnScriptingReady();
	void OnReadyForBindings();
};


// Class Athena.CoherentUIGTInGameMenusComponent
// 0x00A0 (0x0628 - 0x0588)
class UCoherentUIGTInGameMenusComponent : public UCoherentBaseHUDComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0588(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentUIGTInGameMenusComponent");
		return ptr;
	}


	void OnReadyForBindings();
};


// Class Athena.CoherentUIGTAtlasComponent
// 0x0058 (0x03E0 - 0x0388)
class UCoherentUIGTAtlasComponent : public UCoherentUIGTInstancedComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0388(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentUIGTAtlasComponent");
		return ptr;
	}


	void OnReadyForBindings();
};


// Class Athena.CoherentUIGTNameplateComponent
// 0x0030 (0x0410 - 0x03E0)
class UCoherentUIGTNameplateComponent : public UCoherentUIGTAtlasComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03E0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentUIGTNameplateComponent");
		return ptr;
	}

};


// Class Athena.CoherentUIGTTooltipComponent
// 0x0068 (0x0448 - 0x03E0)
class UCoherentUIGTTooltipComponent : public UCoherentUIGTAtlasComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x03E0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentUIGTTooltipComponent");
		return ptr;
	}

};


// Class Athena.CoherentUIGTTooltipDetailedComponent
// 0x0098 (0x0478 - 0x03E0)
class UCoherentUIGTTooltipDetailedComponent : public UCoherentUIGTAtlasComponent
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x03E0(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentUIGTTooltipDetailedComponent");
		return ptr;
	}

};


// Class Athena.CoherentUIGTPersistentDataAsset
// 0x0010 (0x0038 - 0x0028)
class UCoherentUIGTPersistentDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentUIGTPersistentDataAsset");
		return ptr;
	}

};


// Class Athena.CoherentUIGTRootDataAsset
// 0x0060 (0x0088 - 0x0028)
class UCoherentUIGTRootDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class UCoherentUIGTAssetContainer*>         SharedContainers;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<class UCoherentUIGTAssetContainer*>         HUDContainers;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<class UCoherentUIGTAssetContainer*>         MenuContainers;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<class UCoherentUIGTAssetContainer*>         ShopContainers;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<class UCoherentUIGTAssetContainer*>         CompanyContainers;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CoherentUIGTRootDataAsset");
		return ptr;
	}

};


// Class Athena.CompanyLevelData
// 0x0018 (0x0040 - 0x0028)
class UCompanyLevelData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UClass*                                      Company;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CompanyLevelData");
		return ptr;
	}

};


// Class Athena.CompanyNPCInterface
// 0x0000 (0x0028 - 0x0028)
class UCompanyNPCInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CompanyNPCInterface");
		return ptr;
	}


	void PurchaseWieldedBooty(class AActor* Vendor);
	bool CanPurchaseBootyOfType(TEnumAsByte<EBootyTypes> BootyType);
};


// Class Athena.CompanyNPCComponent
// 0x0058 (0x0128 - 0x00D0)
class UCompanyNPCComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UClass*                                      Company;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CompanyNPCComponent");
		return ptr;
	}

};


// Class Athena.CompanySettings
// 0x0010 (0x0038 - 0x0028)
class UCompanySettings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CompanySettings");
		return ptr;
	}

};


// Class Athena.CompanyValidationAsset
// 0x0010 (0x0038 - 0x0028)
class UCompanyValidationAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CompanyValidationAsset");
		return ptr;
	}

};


// Class Athena.CompassSpinComponent
// 0x00E0 (0x01B0 - 0x00D0)
class UCompassSpinComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              MagnetForce;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DampingFactor;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DampingFactorWhenSpinningInStorm;                         // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeightedProbabilityRangeOfRanges           SpinSpeedsForStormIntensities;                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           AccelerationsForStormIntensities;                         // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	TArray<float>                                      ChancesOfPointingNorthForStormIntensities;                // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeightedProbabilityRangeOfRanges           PointingNorthDurationsForStormIntensities;                // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	float                                              StormChangeDirectionIntervalMin;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StormChangeDirectionIntervalMax;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CompassSpinComponent");
		return ptr;
	}

};


// Class Athena.CompositeQuickSwitchWeaponSecondaryInteractNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UCompositeQuickSwitchWeaponSecondaryInteractNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CompositeQuickSwitchWeaponSecondaryInteractNotificationInputId");
		return ptr;
	}

};


// Class Athena.CompositeQuickSwitchWeaponSecondaryInteractReleasedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UCompositeQuickSwitchWeaponSecondaryInteractReleasedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CompositeQuickSwitchWeaponSecondaryInteractReleasedNotificationInputId");
		return ptr;
	}

};


// Class Athena.ConcealingInterface
// 0x0000 (0x0028 - 0x0028)
class UConcealingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ConcealingInterface");
		return ptr;
	}

};


// Class Athena.ConsumableInterface
// 0x0000 (0x0028 - 0x0028)
class UConsumableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ConsumableInterface");
		return ptr;
	}

};


// Class Athena.ConsumableWieldableComponent
// 0x0008 (0x00D8 - 0x00D0)
class UConsumableWieldableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ConsumableWieldableComponent");
		return ptr;
	}

};


// Class Athena.ControlCapstanArmActionStateId
// 0x0000 (0x0028 - 0x0028)
class UControlCapstanArmActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControlCapstanArmActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoControlCapstanArmActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AActor* ControlledObject, class AActor* Character);
};


// Class Athena.ControllableJIPTestFixture
// 0x0018 (0x0550 - 0x0538)
class AControllableJIPTestFixture : public ATestLevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0538(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControllableJIPTestFixture");
		return ptr;
	}

};


// Class Athena.ControllableMessagesInterface
// 0x0000 (0x0028 - 0x0028)
class UControllableMessagesInterface : public UObjectMessagingInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControllableMessagesInterface");
		return ptr;
	}


	void TakenControlOfWheel(class AActor* Actor);
	void RelinquishedControl(class AActor* Actor);
};


// Class Athena.ControllableMock
// 0x0068 (0x0090 - 0x0028)
class UControllableMock : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class AActor*                                      ActorThatRequestedStateChange;                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       ObjectDisplayName;                                        // 0x01E3(0x0018)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01EB(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FControlObjectActionRuleParams              ControlObjectActionRuleParams;                            // 0x01E3(0x0010)
	TEnumAsByte<ENetRole>                              Role;                                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               HasAController;                                           // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControllableMock");
		return ptr;
	}

};


// Class Athena.ControllableObjectFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UControllableObjectFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControllableObjectFunctionLibrary");
		return ptr;
	}


	class AActor* STATIC_GetAnyUncontrolledActor(TArray<class AActor*> Actors);
	TArray<class AActor*> STATIC_FilterUncontrolledActors(TArray<class AActor*>* Actors);
	TArray<class AActor*> STATIC_FilterControllableActors(TArray<class AActor*>* Actors);
};


// Class Athena.ControlObjectActionStateId
// 0x0000 (0x0028 - 0x0028)
class UControlObjectActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControlObjectActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoControlObjectActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AActor* ControlledObject, class AActor* Character);
};


// Class Athena.ControlSailManipulatorActionStateId
// 0x0000 (0x0028 - 0x0028)
class UControlSailManipulatorActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControlSailManipulatorActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoControlSailManipulatorActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AActor* ControlledObject, class AActor* Character, TEnumAsByte<EControllableObjectType> ControllableType, class UClass* AnalogInputId);
};


// Class Athena.ControlWheelActionStateId
// 0x0000 (0x0028 - 0x0028)
class UControlWheelActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControlWheelActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoControlWheelActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AWheel* ControlledObject, class AActor* Character);
};


// Class Athena.CrewFunctions
// 0x0000 (0x0028 - 0x0028)
class UCrewFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CrewFunctions");
		return ptr;
	}


	void STATIC_ResetCrewToSpawnLocation(class UObject* WorldContext, const struct FGuid& CrewId, class AShipSpawnLocation* SpawnLocation);
	void STATIC_ResetCrewToSafeSpawnLocation(class UObject* WorldContext, const struct FGuid& CrewId, const struct FVector& ActorLocation);
	void STATIC_RemoveCharacterFromCrew(class UObject* WorldContext, class AAthenaCharacter* Player);
	bool STATIC_IsCharacterMemberOfCrew(class AAthenaCharacter* Player, const struct FGuid& CrewId);
	bool STATIC_IsActorMemberOfCharactersCrew(class AActor* Actor, class AAthenaCharacter* Player);
	class UClass* STATIC_GetShipSizeForCrewId(class UObject* WorldContext, const struct FGuid& CrewId);
	class UClass* STATIC_GetShipSizeForActorsCrew(class UObject* WorldContext, class AActor* Actor);
	struct FGuid STATIC_GetCrewIdFromActor(class UObject* WorldContext, class AActor* Actor);
	void STATIC_CreateCrewWithSessionTemplate(class UObject* WorldContext, const struct FGuid& CrewId, const struct FCrewSessionTemplate& CrewSessionTemplate, class AAthenaPlayerState* FirstMember);
	void STATIC_CreateCrew(class UObject* WorldContext, const struct FGuid& CrewId, class AAthenaPlayerState* FirstMember);
	bool STATIC_AreInSameCrew(const struct FGuid& CrewId1, const struct FGuid& CrewId2);
	bool STATIC_AreCharactersInSameCrew(class AAthenaCharacter* Player1, class AAthenaCharacter* Player2);
	void STATIC_AddShipToCrew(class UObject* WorldContext, class AShip* Ship, const struct FGuid& CrewId);
	void STATIC_AddCharacterToCrew(class UObject* WorldContext, class AAthenaCharacter* Player, const struct FGuid& CrewId);
};


// Class Athena.CrewMemberInterface
// 0x0000 (0x0028 - 0x0028)
class UCrewMemberInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CrewMemberInterface");
		return ptr;
	}

};


// Class Athena.CrewMembershipInterface
// 0x0000 (0x0028 - 0x0028)
class UCrewMembershipInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CrewMembershipInterface");
		return ptr;
	}


	struct FGuid GetLastKnownCrewId();
	struct FGuid GetCrewId();
};


// Class Athena.CrewOwnershipComponent
// 0x00C0 (0x0190 - 0x00D0)
class UCrewOwnershipComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TEnumAsByte<ECrewOwnershipState>                   State;                                                    // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CachedCrewId;                                             // 0x01E3(0x0010) (Net, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       LastKnownCrewId;                                          // 0x01E3(0x0010) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CrewOwnershipComponent");
		return ptr;
	}

};


// Class Athena.CrewService
// 0x0248 (0x06B8 - 0x0470)
class ACrewService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x0470(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CrewService");
		return ptr;
	}

};


// Class Athena.DebugCrewServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugCrewServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugCrewServiceInterface");
		return ptr;
	}

};


// Class Athena.DebugCrewService
// 0x0008 (0x06C0 - 0x06B8)
class ADebugCrewService : public ACrewService
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugCrewService");
		return ptr;
	}

};


// Class Athena.CrewSessionConfig
// 0x0010 (0x0038 - 0x0028)
class UCrewSessionConfig : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CrewSessionConfig");
		return ptr;
	}

};


// Class Athena.CrewShipManifest
// 0x0278 (0x06E8 - 0x0470)
class ACrewShipManifest : public AActor
{
public:
	unsigned char                                      UnknownData00[0x278];                                     // 0x0470(0x0278) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CrewShipManifest");
		return ptr;
	}


	void SetProposedVoyage(class UVoyageProposalDesc* Proposal, int SlotIndex);
	void OnRep_VoyageSelectionVoteData();
	void OnRep_VoyageCancelVoteData();
	void OnRep_ProposedVoyages();
	void OnRep_CurrentActiveVoyage();
	void OnCrewUpdated();
	bool IsCurrentVoyageActive(class UVoyageProposalDesc* Proposal);
	bool HasPlayerProposedVoyage(class AAthenaPlayerState* Proposal);
	void GetProposedVoyages(TArray<struct FProposedVoyageEntry>* OutProposedVoyages);
};


// Class Athena.CrewSpawnLocationVariablesListAsset
// 0x0028 (0x0050 - 0x0028)
class UCrewSpawnLocationVariablesListAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              MinimumSafeShipDistance;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaximumSafeShipDistance;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SafeShipDistanceScore;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnIsNotOccupiedPenalty;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PenaltyResourceIsland;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PenaltyOutpostIsland;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PenaltySmallIsland;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PenaltyMediumIsland;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PenaltyLargeIsland;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CrewSpawnLocationVariablesListAsset");
		return ptr;
	}

};


// Class Athena.CrewSpawnLocationsInterface
// 0x0000 (0x0028 - 0x0028)
class UCrewSpawnLocationsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CrewSpawnLocationsInterface");
		return ptr;
	}

};


// Class Athena.CrewSpawnLocations
// 0x0180 (0x05F0 - 0x0470)
class ACrewSpawnLocations : public AActor
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0470(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CrewSpawnLocations");
		return ptr;
	}

};


// Class Athena.CrewVoyageParticipant
// 0x00E0 (0x0108 - 0x0028)
class UCrewVoyageParticipant : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CrewVoyageParticipant");
		return ptr;
	}


	void OnPlayerStateEndPlay(TEnumAsByte<EEndPlayReason> InReason);
	void OnPlayerStateDestroyed();
};


// Class Athena.DamageableInterface
// 0x0000 (0x0028 - 0x0028)
class UDamageableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DamageableInterface");
		return ptr;
	}


	bool OnDamageableImpact(const struct FImpactDamageEvent& ImpactDamageEvent);
	bool CanApplyDamage(const struct FImpactDamageEvent& ImpactDamageEvent);
};


// Class Athena.DamageableActor
// 0x0070 (0x04E0 - 0x0470)
class ADamageableActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0470(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DamageableActor");
		return ptr;
	}

};


// Class Athena.DamageableVulnerabilityLayer
// 0x0010 (0x0038 - 0x0028)
class UDamageableVulnerabilityLayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DamageableVulnerabilityLayer");
		return ptr;
	}

};


// Class Athena.DamageableComponent
// 0x0030 (0x0100 - 0x00D0)
class UDamageableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnApplyDamage;                                            // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FDamageableVulnerabilityPair>        Vulnerabilities;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UDamageableVulnerabilityLayer*               AddedVulnerabilityLayer;                                  // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DamageableComponent");
		return ptr;
	}


	bool OnDamageableImpact(const struct FImpactDamageEvent& ImpactDamageEvent);
};


// Class Athena.ActorDamageableComponent
// 0x0008 (0x0108 - 0x0100)
class UActorDamageableComponent : public UDamageableComponent
{
public:
	unsigned char                                      UnknownData00[0xE3];                                      // 0x0100(0x00E3) MISSED OFFSET
	class UHealthComponent*                            HealthComp;                                               // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ActorDamageableComponent");
		return ptr;
	}

};


// Class Athena.ShipDamageableComponent
// 0x0018 (0x0118 - 0x0100)
class UShipDamageableComponent : public UDamageableComponent
{
public:
	unsigned char                                      UnknownData00[0xE3];                                      // 0x0100(0x00E3) MISSED OFFSET
	class AShip*                                       Ship;                                                     // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UClass*>                              AllowedDamagers;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipDamageableComponent");
		return ptr;
	}


	void Multicast_DamageTriggered(const struct FImpactDamageEvent& DamageEvent);
};


// Class Athena.DamageBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UDamageBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DamageBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_TriggerShipImpactDamageFromLookAt(class AAthenaPlayerCharacter* AthenaCharacter, float Strength, TArray<class AActor*> IgnoreList);
	void STATIC_TriggerShipImpactDamageFromLocationAndDirection(class UObject* WorldContext, float Strength, const struct FVector& Location, const struct FVector& Direction, TArray<class AActor*> IgnoreList);
	void STATIC_TriggerPlayerImpactDamageFromLookAt(class AAthenaPlayerCharacter* AthenaCharacter, float Strength, TArray<class AActor*> IgnoreList);
	void STATIC_TriggerPlayerImpactDamageFromLocationAndDirection(class UObject* WorldContext, float Strength, const struct FVector& Location, const struct FVector& Direction, TArray<class AActor*> IgnoreList);
};


// Class Athena.BlunderbussDamagerType
// 0x0000 (0x0028 - 0x0028)
class UBlunderbussDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BlunderbussDamagerType");
		return ptr;
	}

};


// Class Athena.CannonDamagerType
// 0x0000 (0x0028 - 0x0028)
class UCannonDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CannonDamagerType");
		return ptr;
	}

};


// Class Athena.CannonSplashDamagerType
// 0x0000 (0x0028 - 0x0028)
class UCannonSplashDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CannonSplashDamagerType");
		return ptr;
	}

};


// Class Athena.CutlassDamagerType
// 0x0000 (0x0028 - 0x0028)
class UCutlassDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CutlassDamagerType");
		return ptr;
	}

};


// Class Athena.ExplosionDamagerType
// 0x0000 (0x0028 - 0x0028)
class UExplosionDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ExplosionDamagerType");
		return ptr;
	}

};


// Class Athena.EyeOfReachDamagerType
// 0x0000 (0x0028 - 0x0028)
class UEyeOfReachDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EyeOfReachDamagerType");
		return ptr;
	}

};


// Class Athena.FlintlockDamagerType
// 0x0000 (0x0028 - 0x0028)
class UFlintlockDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FlintlockDamagerType");
		return ptr;
	}

};


// Class Athena.KrakenTentacleDamagerType
// 0x0000 (0x0028 - 0x0028)
class UKrakenTentacleDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenTentacleDamagerType");
		return ptr;
	}

};


// Class Athena.LandscapeDamagerType
// 0x0000 (0x0028 - 0x0028)
class ULandscapeDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandscapeDamagerType");
		return ptr;
	}

};


// Class Athena.LightningDamagerType
// 0x0000 (0x0028 - 0x0028)
class ULightningDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LightningDamagerType");
		return ptr;
	}

};


// Class Athena.OffworldStrainDamagerType
// 0x0000 (0x0028 - 0x0028)
class UOffworldStrainDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OffworldStrainDamagerType");
		return ptr;
	}

};


// Class Athena.ScuttleDamagerType
// 0x0000 (0x0028 - 0x0028)
class UScuttleDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ScuttleDamagerType");
		return ptr;
	}

};


// Class Athena.ShipDamagerType
// 0x0000 (0x0028 - 0x0028)
class UShipDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipDamagerType");
		return ptr;
	}

};


// Class Athena.SingleBulletGunDamagerType
// 0x0000 (0x0028 - 0x0028)
class USingleBulletGunDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SingleBulletGunDamagerType");
		return ptr;
	}

};


// Class Athena.StrainDamagerType
// 0x0000 (0x0028 - 0x0028)
class UStrainDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StrainDamagerType");
		return ptr;
	}

};


// Class Athena.SwimmingCreatureDamagerType
// 0x0000 (0x0028 - 0x0028)
class USwimmingCreatureDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SwimmingCreatureDamagerType");
		return ptr;
	}

};


// Class Athena.UnarmedCombatDamagerType
// 0x0000 (0x0028 - 0x0028)
class UUnarmedCombatDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UnarmedCombatDamagerType");
		return ptr;
	}

};


// Class Athena.DeadActionStateId
// 0x0000 (0x0028 - 0x0028)
class UDeadActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DeadActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoDeadActionState(class AActor* Character, const struct FDamageInstance& FinalBlow, TEnumAsByte<ECharacterDeathType> DeathType);
};


// Class Athena.DebugFlyingActionStateId
// 0x0000 (0x0028 - 0x0028)
class UDebugFlyingActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugFlyingActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoDebugFlyingActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AActor* Character);
};


// Class Athena.DebugFlyingCompositeInputHandler
// 0x0000 (0x00D8 - 0x00D8)
class UDebugFlyingCompositeInputHandler : public UCompositeInputHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugFlyingCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnTurnRate(float Value);
	TEnumAsByte<EInputHandlerResult> OnTurn(float Value);
	TEnumAsByte<EInputHandlerResult> OnMoveUp(float Value);
	TEnumAsByte<EInputHandlerResult> OnMoveRight(float Value);
	TEnumAsByte<EInputHandlerResult> OnMoveForward(float Value);
	TEnumAsByte<EInputHandlerResult> OnLookUpRate(float Value);
	TEnumAsByte<EInputHandlerResult> OnLookUp(float Value);
	TEnumAsByte<EInputHandlerResult> OnDisengageInput();
};


// Class Athena.DebugLandmarkLocation
// 0x0018 (0x0488 - 0x0470)
class ADebugLandmarkLocation : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0470(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugLandmarkLocation");
		return ptr;
	}


	void EnableDrawingForAllMachines_RPC(bool Flag);
};


// Class Athena.DebugShipControlActionStateId
// 0x0000 (0x0028 - 0x0028)
class UDebugShipControlActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugShipControlActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoDebugShipControlActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class ADebugShipController* DebugShipController, class AActor* Owner);
};


// Class Athena.DebugShipControlCompositeInputHandler
// 0x0000 (0x00D8 - 0x00D8)
class UDebugShipControlCompositeInputHandler : public UCompositeInputHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugShipControlCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnTurnRate(float Value);
	TEnumAsByte<EInputHandlerResult> OnMoveRight(float Value);
	TEnumAsByte<EInputHandlerResult> OnLookUpRate(float Value);
	TEnumAsByte<EInputHandlerResult> OnJump();
};


// Class Athena.DebugShipFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UDebugShipFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugShipFunctionLibrary");
		return ptr;
	}


	void STATIC_SetAllWheelAngle(class AActor* Ship, float Angle);
	void STATIC_SetAllSailsLoweredProportion(class AActor* Ship, float Proportion);
	void STATIC_SetAllSailsDamageScalar(class AActor* Ship, float Proportion);
	void STATIC_SetAllSailsAngle(class AActor* Ship, float Angle);
	void STATIC_SetAllRuddersAngleRatio(class AActor* Ship, float InRudderAngleRatio);
	void STATIC_SetAllCapstansPosition(class AActor* Ship, float Position);
	void STATIC_SetAllCannonsAim(class AActor* Ship, float Pitch, float Yaw);
	void STATIC_SetAllAnchorsLoweredProportion(class AActor* Ship, float InLoweredProportion);
	void STATIC_RotateAllMastsSailAngles(TArray<class AActor*> Masts, float DeltaSeconds, float* PercentPerSec);
	void STATIC_FireEveryNthCannons(class AActor* Ship, int EveryNthCannons);
	void STATIC_FireCannonEveryXSecond(TArray<class AActor*> Cannons, float DeltaSeconds, float SecondsBetweenShots, float* Accumulator, int* CannonIndex);
	void STATIC_FireAllCannons(class AActor* Ship);
	void STATIC_CycleAllMastsSailLowered(TArray<class AActor*> Masts, float DeltaSeconds, float* PercentPerSec);
};


// Class Athena.DebugShipInterface
// 0x0000 (0x0028 - 0x0028)
class UDebugShipInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugShipInterface");
		return ptr;
	}

};


// Class Athena.DebugShipService
// 0x0020 (0x0048 - 0x0028)
class UDebugShipService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugShipService");
		return ptr;
	}

};


// Class Athena.DebugSuperSailorActionStateId
// 0x0000 (0x0028 - 0x0028)
class UDebugSuperSailorActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugSuperSailorActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoDebugSuperSailorActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AActor* Character);
};


// Class Athena.DebugSuperSailorCompositeInputHandler
// 0x0068 (0x0140 - 0x00D8)
class UDebugSuperSailorCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00D8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugSuperSailorCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnRightTrigger(float Value);
	TEnumAsByte<EInputHandlerResult> OnMoveRight(float Value);
	TEnumAsByte<EInputHandlerResult> OnMoveForward(float Value);
	TEnumAsByte<EInputHandlerResult> OnDisengageInput();
};


// Class Athena.DebugTreasureLocation
// 0x0018 (0x0488 - 0x0470)
class ADebugTreasureLocation : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0470(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugTreasureLocation");
		return ptr;
	}


	void EnableDrawingForAllMachines_RPC(bool Flag);
};


// Class Athena.OpinionatedNameplateAttitudeTestActor
// 0x0008 (0x0478 - 0x0470)
class AOpinionatedNameplateAttitudeTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OpinionatedNameplateAttitudeTestActor");
		return ptr;
	}

};


// Class Athena.DeferredNameplateAttitudeTestActor
// 0x0008 (0x04D8 - 0x04D0)
class ADeferredNameplateAttitudeTestActor : public APawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DeferredNameplateAttitudeTestActor");
		return ptr;
	}

};


// Class Athena.DisengageNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UDisengageNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DisengageNotificationInputId");
		return ptr;
	}

};


// Class Athena.DitherComponent
// 0x0048 (0x0118 - 0x00D0)
class UDitherComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              FadeSpd;                                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMeshComponent*                              Mesh;                                                     // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DitherComponent");
		return ptr;
	}


	void SetCurrentTransparency(float Val);
	void FadeOut();
	void FadeIn();
};


// Class Athena.DitherFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UDitherFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DitherFunctionLibrary");
		return ptr;
	}


	void STATIC_DisableDitheringOnMaterial(class UMaterialInstance* Material);
};


// Class Athena.DockedToInteractableAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UDockedToInteractableAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DockedToInteractableAIStrategyId");
		return ptr;
	}

};


// Class Athena.DockToObjectCompositeInputHandler
// 0x0018 (0x00F0 - 0x00D8)
class UDockToObjectCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DockToObjectCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnDisengage();
};


// Class Athena.DrawDebugServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UDrawDebugServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DrawDebugServiceInterface");
		return ptr;
	}

};


// Class Athena.DrawDebugService
// 0x0078 (0x04E8 - 0x0470)
class ADrawDebugService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0470(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DrawDebugService");
		return ptr;
	}


	void OnRep_ReplicatedItems();
};


// Class Athena.DropLargeWieldedItemNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UDropLargeWieldedItemNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DropLargeWieldedItemNotificationInputId");
		return ptr;
	}

};


// Class Athena.DrowningComponentParams
// 0x00C8 (0x00F0 - 0x0028)
class UDrowningComponentParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FBlendableDrowningParams                    DrowningParameters;                                       // 0x01E3(0x001C) (Edit)
	class UWwiseObjectPoolWrapper*                     DrowningEmitterPool;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StartDrowningSfx;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopDrowningSfx;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StartDrowningSfxRemotePlayer;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopDrowningSfxRemotePlayer;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SurfaceBreathSfxSoft;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SurfaceBreathSfxMed;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SurfaceBreathSfxHard;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BubblesSfx;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerDrowningAmountRtpc;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RemotePlayerDrowningAmountRtpc;                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     BubblesFirstPerson;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     BubblesThirdPerson;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BubblesAmountRtpc;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BubblesFirstPersonSocket;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BubblesThirdPersonSocket;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BubblesRateParam;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BubblesLargeRateParam;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BubbleRateTimeCurve;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BubbleIntervalForOxygenLevel;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DrowningComponentParams");
		return ptr;
	}

};


// Class Athena.WaterModifierZoneInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterModifierZoneInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WaterModifierZoneInterface");
		return ptr;
	}


	class UClass* GetWaterModifierZoneType();
	struct FWaterModifierZoneParametersAndLocation GetWaterModifierZoneParameters();
};


// Class Athena.WaterModifierZoneServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterModifierZoneServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WaterModifierZoneServiceInterface");
		return ptr;
	}


	void UnregisterWaterModifierZoneFromService(const TScriptInterface<class UWaterModifierZoneInterface>& WaterModifierZone);
	void RegisterWaterModifierZoneWithService(const TScriptInterface<class UWaterModifierZoneInterface>& WaterModifierZone);
	TArray<struct FWaterModifierZoneParametersAndLocation> GetWaterModifierZones(class UClass* Type);
	struct FWaterModifierZoneParametersAndLocation GetWaterModifierZone(int WaterModifierZoneIndex);
	float GetWaterModifierStrength(class UClass* Type, const struct FVector& Position);
	struct FBlendableDrowningParams GetWaterModifierDrowningParams(class AAthenaCharacter* Actor, const struct FBlendableDrowningParams& DefaultParams);
	int GetNumberOfWaterModifierZonesByType(class UClass* Type);
	int GetNumberOfWaterModifierZones();
	float GetDragScalarAtLocation(const struct FVector& Position);
	TArray<struct FWaterModifierZoneParametersAndLocation> GetAllWaterModifierZones();
};


// Class Athena.DrowningComponent
// 0x0088 (0x0158 - 0x00D0)
class UDrowningComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UDrowningComponentParams*                    Params;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    BubbleVFXComponent;                                       // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OxygenLevel;                                              // 0x01E3(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrowningState>                        ServerDrowningState;                                      // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DrowningComponent");
		return ptr;
	}


	void OnRep_CurrentState();
	void OnRep_CurrentOxygen();
	float GetOxygenLevel();
};


// Class Athena.DrunkennessComponentPublicData
// 0x0088 (0x00B0 - 0x0028)
class UDrunkennessComponentPublicData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FDrunkennessSetupData>               DrunkennessSetupData;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              VomitingThresholdWhenGettingDrunker;                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VomitingThresholdWhenSobering;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeBetweenVomitBouts;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeBetweenVomitBouts;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinVomitBoutDuration;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxVomitBoutDuration;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WaterSplashSoberingAmount;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WaterSplashSoberingRate;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DrunkennessRemappingCurveForScreenVfx;                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DrunkennessRemappingCurveForStaggering;                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraRollAmp;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraRollAccel;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     DrunkennessComponentPool;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StartDrunkennessSfx;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopDrunkennessSfx;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StartDrunkennessSfxRemotePlayer;                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopDrunkennessSfxRemotePlayer;                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerDrunkennessAmountRtpc;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RemotePlayerDrunkennessAmountRtpc;                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DrunkennessComponentPublicData");
		return ptr;
	}

};


// Class Athena.DrunkennessComponent
// 0x0170 (0x0240 - 0x00D0)
class UDrunkennessComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UDrunkennessComponentPublicData*             PublicData;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetDrunkenness[0x2];                                   // 0x01E3(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              CurrentDrunkenness[0x2];                                  // 0x01E3(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              RemainingAmountToSoberUpDueToWaterSplash;                 // 0x01E3(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       VomitVFXType;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x55];                                      // 0x01EB(0x0055) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DrunkennessComponent");
		return ptr;
	}


	void TestForceVomiting(float Duration);
	void SetTargetDrunkenness_RPC(TEnumAsByte<EDrunkennessType> Type, float Value, bool bInstantlySetActualToTarget);
	void SetTargetDrunkenness(TEnumAsByte<EDrunkennessType> Type, float TargetDrunkeness);
	void Reset();
	void OnRep_RemainingAmountToSoberUpDueToWaterSplash();
	void OnRep_CurrentDrunkenness();
	class UVomitComponent* GetVomitComponent();
	float GetStaggerAmplitude();
	float GetOverallCurrentDrunkenness();
	void ChangeDrunkenness(TEnumAsByte<EDrunkennessType> Type, float DrunkennessChange);
};


// Class Athena.DrunkenChestComponent
// 0x00A0 (0x0170 - 0x00D0)
class UDrunkenChestComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UWwiseEvent*                                 OnPickedUpLocalPlayerOnlyEvent;                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDrunkennessComponent*                       DrunkennessComponent;                                     // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DrunkenChestComponent");
		return ptr;
	}

};


// Class Athena.DrunkTestActor
// 0x00B8 (0x0528 - 0x0470)
class ADrunkTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0470(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DrunkTestActor");
		return ptr;
	}

};


// Class Athena.DynamicFlowComponent
// 0x0090 (0x0780 - 0x06F0)
class UDynamicFlowComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x06F0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DynamicFlowComponent");
		return ptr;
	}


	void SetTexture(class UObject* WorldContextObject, class UTexture* SourceTexture);
	class UTexture* GetTexture();
	void ClearTexture(const struct FLinearColor& ClearColor);
};


// Class Athena.EatingAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UEatingAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EatingAIStrategyId");
		return ptr;
	}

};


// Class Athena.EmblemComponent
// 0x0150 (0x0220 - 0x00D0)
class UEmblemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x00D0(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmblemComponent");
		return ptr;
	}

};


// Class Athena.EmblemDefinitionAssetList
// 0x0010 (0x0038 - 0x0028)
class UEmblemDefinitionAssetList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmblemDefinitionAssetList");
		return ptr;
	}

};


// Class Athena.EmblemDefinitionDataAsset
// 0x0018 (0x0040 - 0x0028)
class UEmblemDefinitionDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UClass*                                      Company;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmblemDefinitionDataAsset");
		return ptr;
	}

};


// Class Athena.EmblemServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UEmblemServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmblemServiceInterface");
		return ptr;
	}

};


// Class Athena.EmblemService
// 0x00F8 (0x0120 - 0x0028)
class UEmblemService : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmblemService");
		return ptr;
	}

};


// Class Athena.EmoteActionStateId
// 0x0000 (0x0028 - 0x0028)
class UEmoteActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmoteActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoEmoteActionState(class AActor* Character, const struct FEmoteData& EmoteData);
};


// Class Athena.EmoteCompositeInputHandler
// 0x00C8 (0x01A0 - 0x00D8)
class UEmoteCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x00D8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmoteCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnZoomOut(float Value);
	TEnumAsByte<EInputHandlerResult> OnZoomMouse(float Value);
	TEnumAsByte<EInputHandlerResult> OnZoomIn(float Value);
	TEnumAsByte<EInputHandlerResult> OnTurnRate(float Value);
	TEnumAsByte<EInputHandlerResult> OnTurn(float Value);
	TEnumAsByte<EInputHandlerResult> OnMoveRight(float Value);
	TEnumAsByte<EInputHandlerResult> OnMoveForward(float Value);
	TEnumAsByte<EInputHandlerResult> OnLookUpRate(float Value);
	TEnumAsByte<EInputHandlerResult> OnLookUp(float Value);
	TEnumAsByte<EInputHandlerResult> OnJump();
	TEnumAsByte<EInputHandlerResult> OnCancel();
};


// Class Athena.ItemRadialInventoryActivatedGamepadNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UItemRadialInventoryActivatedGamepadNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemRadialInventoryActivatedGamepadNotificationInputId");
		return ptr;
	}

};


// Class Athena.ItemRadialInventoryDeactivatedGamepadNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UItemRadialInventoryDeactivatedGamepadNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemRadialInventoryDeactivatedGamepadNotificationInputId");
		return ptr;
	}

};


// Class Athena.ItemRadialInventoryActivatedKeyboardNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UItemRadialInventoryActivatedKeyboardNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemRadialInventoryActivatedKeyboardNotificationInputId");
		return ptr;
	}

};


// Class Athena.ItemRadialInventoryDeactivatedKeyboardNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UItemRadialInventoryDeactivatedKeyboardNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemRadialInventoryDeactivatedKeyboardNotificationInputId");
		return ptr;
	}

};


// Class Athena.MapRadialInventoryActivatedGamepadNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UMapRadialInventoryActivatedGamepadNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapRadialInventoryActivatedGamepadNotificationInputId");
		return ptr;
	}

};


// Class Athena.MapRadialInventoryDeactivatedGamepadNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UMapRadialInventoryDeactivatedGamepadNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapRadialInventoryDeactivatedGamepadNotificationInputId");
		return ptr;
	}

};


// Class Athena.MapRadialInventoryActivatedKeyboardNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UMapRadialInventoryActivatedKeyboardNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapRadialInventoryActivatedKeyboardNotificationInputId");
		return ptr;
	}

};


// Class Athena.MapRadialInventoryDeactivatedKeyboardNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UMapRadialInventoryDeactivatedKeyboardNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapRadialInventoryDeactivatedKeyboardNotificationInputId");
		return ptr;
	}

};


// Class Athena.PhraseRadialInventoryActivatedGamepadNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UPhraseRadialInventoryActivatedGamepadNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PhraseRadialInventoryActivatedGamepadNotificationInputId");
		return ptr;
	}

};


// Class Athena.PhraseRadialInventoryDeactivatedGamepadNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UPhraseRadialInventoryDeactivatedGamepadNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PhraseRadialInventoryDeactivatedGamepadNotificationInputId");
		return ptr;
	}

};


// Class Athena.PhraseRadialInventoryActivatedKeyboardNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UPhraseRadialInventoryActivatedKeyboardNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PhraseRadialInventoryActivatedKeyboardNotificationInputId");
		return ptr;
	}

};


// Class Athena.PhraseRadialInventoryDeactivatedKeyboardNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UPhraseRadialInventoryDeactivatedKeyboardNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PhraseRadialInventoryDeactivatedKeyboardNotificationInputId");
		return ptr;
	}

};


// Class Athena.PhraseRadialInventoryNextSetNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UPhraseRadialInventoryNextSetNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PhraseRadialInventoryNextSetNotificationInputId");
		return ptr;
	}

};


// Class Athena.EmotesRadialActivatedGamepadNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UEmotesRadialActivatedGamepadNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmotesRadialActivatedGamepadNotificationInputId");
		return ptr;
	}

};


// Class Athena.EmotesRadialDeactivatedGamepadNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UEmotesRadialDeactivatedGamepadNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmotesRadialDeactivatedGamepadNotificationInputId");
		return ptr;
	}

};


// Class Athena.EmotesRadialActivatedKeyboardNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UEmotesRadialActivatedKeyboardNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmotesRadialActivatedKeyboardNotificationInputId");
		return ptr;
	}

};


// Class Athena.EmotesRadialDeactivatedKeyboardNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UEmotesRadialDeactivatedKeyboardNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmotesRadialDeactivatedKeyboardNotificationInputId");
		return ptr;
	}

};


// Class Athena.EmotesRadialDataAsset
// 0x0010 (0x0038 - 0x0028)
class UEmotesRadialDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmotesRadialDataAsset");
		return ptr;
	}

};


// Class Athena.EmotesRadialComponent
// 0x0020 (0x03D8 - 0x03B8)
class UEmotesRadialComponent : public URadialInventoryComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03B8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmotesRadialComponent");
		return ptr;
	}


	int GetNumSlots();
	class AActor* GetLastSelectedItem();
	void DeactivateRadialInventory();
};


// Class Athena.EmoteZoomInAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UEmoteZoomInAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmoteZoomInAnalogInputId");
		return ptr;
	}

};


// Class Athena.EmoteZoomMouseAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UEmoteZoomMouseAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmoteZoomMouseAnalogInputId");
		return ptr;
	}

};


// Class Athena.EmoteZoomOutAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UEmoteZoomOutAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmoteZoomOutAnalogInputId");
		return ptr;
	}

};


// Class Athena.EncounterListenerComponent
// 0x0020 (0x00F0 - 0x00D0)
class UEncounterListenerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TEnumAsByte<EEncounterListenerType>                EncounterListenerType;                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EncounterListenerComponent");
		return ptr;
	}

};


// Class Athena.EncounterServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UEncounterServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EncounterServiceInterface");
		return ptr;
	}

};


// Class Athena.EncounterService
// 0x0100 (0x0128 - 0x0028)
class UEncounterService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FEncounter>                          Encounters;                                               // 0x01E3(0x0010) (ZeroConstructor)
	struct FEncounterListenerData                      EncounterListenerData;                                    // 0x01E3(0x0030)
	struct FEncounterServiceParams                     EncounterParams;                                          // 0x01E3(0x0018)
	TArray<struct FEncounter>                          EncountersLeftToCheck;                                    // 0x01E3(0x0010) (ZeroConstructor)
	TArray<struct FEncounter>                          EncountersToCheckForUpdate;                               // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EncounterService");
		return ptr;
	}


	void StopListeningForEncounters(class AActor* EncounterListenerActor);
};


// Class Athena.Ensemble
// 0x0080 (0x04F0 - 0x0470)
class AEnsemble : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0470(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Ensemble");
		return ptr;
	}


	void OnRep_Instruments();
	int GetNumInstruments();
	int GetNumInstrumentData();
	int GetInstrumentDataPlaybackPosition(int Index);
};


// Class Athena.TitleDesc
// 0x0000 (0x00E0 - 0x00E0)
class UTitleDesc : public UClothingDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TitleDesc");
		return ptr;
	}

};


// Class Athena.ClusterDescription
// 0x0010 (0x0130 - 0x0120)
class UClusterDescription : public UItemWithoutIconsDesc
{
public:
	unsigned char                                      UnknownData00[0xC3];                                      // 0x0120(0x00C3) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    Clusters;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClusterDescription");
		return ptr;
	}

};


// Class Athena.TreasureMapItemInfo
// 0x0000 (0x04B8 - 0x04B8)
class ATreasureMapItemInfo : public AItemInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureMapItemInfo");
		return ptr;
	}

};


// Class Athena.TreasureMapItemDesc
// 0x0000 (0x0120 - 0x0120)
class UTreasureMapItemDesc : public UItemWithoutIconsDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureMapItemDesc");
		return ptr;
	}

};


// Class Athena.UsableInterface
// 0x0000 (0x0028 - 0x0028)
class UUsableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UsableInterface");
		return ptr;
	}


	void UpdateUsage(float DeltaTime);
	void StopUsing(class UClass* InputID);
	void StartUsing(class UClass* InputID);
	bool IsBeingUsed();
	bool CanBeUsed();
};


// Class Athena.TestUsable
// 0x0018 (0x07D8 - 0x07C0)
class ATestUsable : public AWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x07C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestUsable");
		return ptr;
	}

};


// Class Athena.TestUsableItemDesc
// 0x0000 (0x0120 - 0x0120)
class UTestUsableItemDesc : public UItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestUsableItemDesc");
		return ptr;
	}

};


// Class Athena.NamedNotificationInputInterface
// 0x0000 (0x0028 - 0x0028)
class UNamedNotificationInputInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NamedNotificationInputInterface");
		return ptr;
	}


	struct FText GetNotificationInputDisplayName(class UClass* InputID);
};


// Class Athena.InventoryItemComponent
// 0x0038 (0x0108 - 0x00D0)
class UInventoryItemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TEnumAsByte<EItemType>                             Type;                                                     // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       Icon;                                                     // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      IconUrl;                                                  // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              IconRotation;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IconScale;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InventoryItemComponent");
		return ptr;
	}


	void SetItemType(TEnumAsByte<EItemType> InType);
	void SetIconURL(const struct FStringAssetReference& InIconURL);
	void SetIconRotation(float InIconRotation);
	void OnAddedToInventory();
	TEnumAsByte<EItemType> GetItemType();
	class FString GetIconURL();
	float GetIconScale();
	float GetIconRotation();
};


// Class Athena.TestWieldableItem
// 0x0060 (0x0820 - 0x07C0)
class ATestWieldableItem : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x07C0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestWieldableItem");
		return ptr;
	}

};


// Class Athena.TestWieldableItemLarge
// 0x0000 (0x0820 - 0x0820)
class ATestWieldableItemLarge : public ATestWieldableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestWieldableItemLarge");
		return ptr;
	}

};


// Class Athena.TestWieldableItemInfo
// 0x0000 (0x04B8 - 0x04B8)
class ATestWieldableItemInfo : public AItemInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestWieldableItemInfo");
		return ptr;
	}

};


// Class Athena.TestWieldableItemDesc
// 0x0000 (0x0120 - 0x0120)
class UTestWieldableItemDesc : public UItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestWieldableItemDesc");
		return ptr;
	}

};


// Class Athena.NullEntitlementDesc
// 0x0000 (0x00D8 - 0x00D8)
class UNullEntitlementDesc : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NullEntitlementDesc");
		return ptr;
	}

};


// Class Athena.PirateLegendDesc
// 0x0000 (0x00D8 - 0x00D8)
class UPirateLegendDesc : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PirateLegendDesc");
		return ptr;
	}

};


// Class Athena.ShipCustomizationInfo
// 0x0018 (0x0040 - 0x0028)
class UShipCustomizationInfo : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UClass*                                      Category;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCustomizationInfo");
		return ptr;
	}

};


// Class Athena.ShipCustomizationDesc
// 0x0010 (0x00E8 - 0x00D8)
class UShipCustomizationDesc : public UEntitlementDesc
{
public:
	unsigned char                                      UnknownData00[0x10B];                                     // 0x00D8(0x010B) MISSED OFFSET
	struct FStringAssetReference                       CustomizationInfo;                                        // 0x01E3(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCustomizationDesc");
		return ptr;
	}

};


// Class Athena.VoyageRewardDataAsset
// 0x0010 (0x0038 - 0x0028)
class UVoyageRewardDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageRewardDataAsset");
		return ptr;
	}

};


// Class Athena.WeightedTreasureChestDescAsset
// 0x0010 (0x0038 - 0x0028)
class UWeightedTreasureChestDescAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WeightedTreasureChestDescAsset");
		return ptr;
	}

};


// Class Athena.MerchantQuestRandomRequiredItemsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UMerchantQuestRandomRequiredItemsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantQuestRandomRequiredItemsDataAsset");
		return ptr;
	}

};


// Class Athena.VoyageLocationOnlyNamedIslandListDataAsset
// 0x0010 (0x0038 - 0x0028)
class UVoyageLocationOnlyNamedIslandListDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageLocationOnlyNamedIslandListDataAsset");
		return ptr;
	}

};


// Class Athena.VoyageRecipeDataAsset
// 0x0158 (0x0180 - 0x0028)
class UVoyageRecipeDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0028(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageRecipeDataAsset");
		return ptr;
	}

};


// Class Athena.VoyageProposalDesc
// 0x0038 (0x0110 - 0x00D8)
class UVoyageProposalDesc : public UEntitlementDesc
{
public:
	unsigned char                                      UnknownData00[0x10B];                                     // 0x00D8(0x010B) MISSED OFFSET
	class UClass*                                      TradingCompany;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Rank;                                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Difficulty;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStringAssetReference                       TooltipBackgroundImageUrl;                                // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UVoyageRecipeDataAsset*                      VoyageRecipe;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageProposalDesc");
		return ptr;
	}

};


// Class Athena.EntitlementMapDataAsset
// 0x0010 (0x0038 - 0x0028)
class UEntitlementMapDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EntitlementMapDataAsset");
		return ptr;
	}

};


// Class Athena.EntitlementsAsset
// 0x0010 (0x0038 - 0x0028)
class UEntitlementsAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EntitlementsAsset");
		return ptr;
	}

};


// Class Athena.EntitlementSettings
// 0x0068 (0x0090 - 0x0028)
class UEntitlementSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FStringAssetReference                       EntitlementMap;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       DefaultEntitlementsAsset;                                 // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FFeaturedEntitlements>               EntitlementsAssetOverrides;                               // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EntitlementSettings");
		return ptr;
	}

};


// Class Athena.EnvQueryContext_AllPlayerCharactersOnIsland
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_AllPlayerCharactersOnIsland : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EnvQueryContext_AllPlayerCharactersOnIsland");
		return ptr;
	}

};


// Class Athena.EnvQueryContext_NamedActor
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_NamedActor : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EnvQueryContext_NamedActor");
		return ptr;
	}

};


// Class Athena.EnvQueryContext_NamedActorOnIsland
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_NamedActorOnIsland : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EnvQueryContext_NamedActorOnIsland");
		return ptr;
	}

};


// Class Athena.EnvQueryContext_OccupiedPositionsOnIsland
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_OccupiedPositionsOnIsland : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EnvQueryContext_OccupiedPositionsOnIsland");
		return ptr;
	}

};


// Class Athena.EnvQueryContext_TargetPosition
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_TargetPosition : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EnvQueryContext_TargetPosition");
		return ptr;
	}

};


// Class Athena.EnvQueryContext_Threat
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Threat : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EnvQueryContext_Threat");
		return ptr;
	}

};


// Class Athena.EnvQueryGenerator_IslandAISpawnLocations
// 0x0000 (0x0048 - 0x0048)
class UEnvQueryGenerator_IslandAISpawnLocations : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EnvQueryGenerator_IslandAISpawnLocations");
		return ptr;
	}

};


// Class Athena.EnvQueryTest_FacingAwayFromActor
// 0x00B0 (0x0220 - 0x0170)
class UEnvQueryTest_FacingAwayFromActor : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	class UClass*                                      CentreContext;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ActorContext;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EConeWeightingMethod>                  ConeType;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   ConeThreshold;                                            // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   DistanceFromQuerierToValidBandOfPoints;                   // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	bool                                               UseOriginAsThreat;                                        // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   AngleBias;                                                // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0213(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EnvQueryTest_FacingAwayFromActor");
		return ptr;
	}

};


// Class Athena.GeneratedLocationsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UGeneratedLocationsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GeneratedLocationsDataAsset");
		return ptr;
	}

};


// Class Athena.WashedUpItemDataAsset
// 0x0010 (0x0048 - 0x0038)
class UWashedUpItemDataAsset : public UGeneratedLocationsDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	TArray<struct FWashedUpLocationData>               SpawnLocations;                                           // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WashedUpItemDataAsset");
		return ptr;
	}

};


// Class Athena.IslandServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UIslandServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandServiceInterface");
		return ptr;
	}


	void OnCrewSpawningOnIsland(const struct FName& IslandName);
	TArray<struct FName> GetAllIslandNames();
};


// Class Athena.EnvQueryTest_InIslandSafeZone
// 0x0008 (0x0178 - 0x0170)
class UEnvQueryTest_InIslandSafeZone : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	float                                              Radius;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EnvQueryTest_InIslandSafeZone");
		return ptr;
	}

};


// Class Athena.EnvQueryTest_InSeaRockZone
// 0x0008 (0x0178 - 0x0170)
class UEnvQueryTest_InSeaRockZone : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	float                                              Radius;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EnvQueryTest_InSeaRockZone");
		return ptr;
	}

};


// Class Athena.EnvQueryTest_InShipwreckZone
// 0x0008 (0x0178 - 0x0170)
class UEnvQueryTest_InShipwreckZone : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	float                                              Radius;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EnvQueryTest_InShipwreckZone");
		return ptr;
	}

};


// Class Athena.EnvQueryTest_InsideWorldBounds
// 0x0008 (0x0178 - 0x0170)
class UEnvQueryTest_InsideWorldBounds : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	float                                              Radius;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EnvQueryTest_InsideWorldBounds");
		return ptr;
	}

};


// Class Athena.EnvQueryTest_TraceByProfile
// 0x0040 (0x01B0 - 0x0170)
class UEnvQueryTest_TraceByProfile : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	struct FName                                       CollisionProfileName;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   Radius;                                                   // 0x01E3(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Context;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EnvQueryTest_TraceByProfile");
		return ptr;
	}

};


// Class Athena.ExhumableInterface
// 0x0000 (0x0028 - 0x0028)
class UExhumableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ExhumableInterface");
		return ptr;
	}

};


// Class Athena.ExplosionComponent
// 0x00A0 (0x0170 - 0x00D0)
class UExplosionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UClass*                                      DamagerType;                                              // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShipMaximumRadiusInMetres;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ShipDamageCurveInMetres;                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDamageAmount;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumDamageHolesPerShip;                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 PlayerDamageCurve;                                        // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 OtherPawnDamageCurve;                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UForceFeedbackEffect*                        ForceFeedbackEffectLower;                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceFeedbackEffectLowerTriggerPercentage;                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ForceFeedbackTag;                                         // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeInnerRadius;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeOuterRadius;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerInsideShipDamageMultiplier;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  HealthChangedReason;                                      // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKnockBackInfo                              KnockbackParams;                                          // 0x01E3(0x0034) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ExplosionComponent");
		return ptr;
	}

};


// Class Athena.ExplosiveComponentInterface
// 0x0000 (0x0028 - 0x0028)
class UExplosiveComponentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ExplosiveComponentInterface");
		return ptr;
	}

};


// Class Athena.HitReactionInterface
// 0x0000 (0x0028 - 0x0028)
class UHitReactionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HitReactionInterface");
		return ptr;
	}


	void OnHitReactionImpact(const struct FImpactDamageEvent& ImpactDamageEvent);
};


// Class Athena.ExplosiveComponent
// 0x00E8 (0x01B8 - 0x00D0)
class UExplosiveComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              ExplosionDelayPerMetre;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ExplosionParticleSystem;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ExplosionOnSandParticleSystem;                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ExplosionOnWaterSurfaceParticleSystem;                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ExplosionUnderWaterParticleSystem;                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NearToSurfaceDistance;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 ExplosionSoundCue;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ExplosionSoundCueSwitchName;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ExplosionSoundCueSwitchValueForOnLand;                    // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ExplosionSoundCueSwitchValueForOnSand;                    // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ExplosionSoundCueSwitchValueForOnWaterSurface;            // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ExplosionSoundCueIsObjectUnderWaterSwitchName;            // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ExplosionSoundCueIsObjectUnderWaterSwitchValueForAboveWater;// 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ExplosionSoundCueIsObjectUnderWaterSwitchValueForBelowWater;// 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     ExplosionSfxPool;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HitReactParticleSystem;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 HitReactSoundCue;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     HitTestTraceChannel;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SandSurfaceType;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UExplosionComponent*                         ExplosionComponent;                                       // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UHealthComponent*                            HealthComponent;                                          // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               IsExploding;                                              // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ExplosiveComponent");
		return ptr;
	}


	void Multicast_Explode();
};


// Class Athena.FaceTargetComponent
// 0x0080 (0x0150 - 0x00D0)
class UFaceTargetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              BlendRotationInterpSpeed;                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BlendRotationUseConstantInterp;                           // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActorToFace;                                        // 0x01E3(0x0008) (Edit, Net, ZeroConstructor, IsPlainOldData)
	float                                              ClampYawRange;                                            // 0x01E3(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	float                                              ClampYawCentre;                                           // 0x01E3(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	float                                              ClampYawRate;                                             // 0x01E3(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FaceTargetComponent");
		return ptr;
	}


	void OnRep_TargetActorToFace(class AActor* PrevTargetActorToFace);
};


// Class Athena.FaunaAnimationData
// 0x06C0 (0x06E8 - 0x0028)
class UFaunaAnimationData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x6C0];                                     // 0x0028(0x06C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FaunaAnimationData");
		return ptr;
	}

};


// Class Athena.FaunaBreed
// 0x0000 (0x0028 - 0x0028)
class UFaunaBreed : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FaunaBreed");
		return ptr;
	}

};


// Class Athena.FaunaSpecies
// 0x0000 (0x0028 - 0x0028)
class UFaunaSpecies : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FaunaSpecies");
		return ptr;
	}

};


// Class Athena.Fauna
// 0x0510 (0x0B70 - 0x0660)
class AFauna : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x510];                                     // 0x0660(0x0510) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Fauna");
		return ptr;
	}


	void TestingSetWaterState(TEnumAsByte<EFaunaInWaterState> NewInState);
	void SetAIStrategy(class UClass* InStrategy);
	void OnRep_TargetTurnAngle();
	void OnRep_IsPlayingStarvingAnim();
	void OnRep_IsCalm();
	void OnRep_IsAgitated();
	void OnRep_InWaterState();
	void OnRep_CurrentAIStrategy(class UClass* OldAIStrategy);
	void OnRep_CratedState(TEnumAsByte<EFaunaCratedState> PreviousCratedState);
	void Multicast_PlayPutInCrateEffectsRPC(class AActor* Crate);
	void Multicast_JustBeenFedRPC(class AActor* FedBy);
	void Multicast_HightlightLeader(bool bIsLeader);
	void Multicast_DespawnRPC();
	class UClass* GetAIStrategy();
	void GenerateNewRandomAnimationSeed();
	void ActivateResponseRPC(float InTargetTurnAngle);
};


// Class Athena.FaunaAnimationInterface
// 0x0000 (0x0028 - 0x0028)
class UFaunaAnimationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FaunaAnimationInterface");
		return ptr;
	}

};


// Class Athena.FaunaAnimationInstance
// 0x0F20 (0x1360 - 0x0440)
class UFaunaAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xF20];                                     // 0x0440(0x0F20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FaunaAnimationInstance");
		return ptr;
	}


	class UAnimSequence* GetTurnRightAnimation();
	float GetTurnRate();
	class UAnimSequence* GetTurnLeftAnimation();
	void GetSurfaceOrientation(float* NewPitch);
	class UAnimSequence* GetStartledLowUnderwaterAnimation();
	class UAnimSequence* GetStartledLowOnSeaAnimation();
	class UAnimSequence* GetStartledLowOnLandAnimation();
	class UAnimSequence* GetStartledHighUnderwaterAnimation();
	class UAnimSequence* GetStartledHighOnSeaAnimation();
	class UAnimSequence* GetStartledHighOnLandAnimation();
	class UAnimSequence* GetSpecialUnderwaterAnimation(bool* LoopSpecial);
	class UAnimSequence* GetSpecialSeaAnimation(bool* LoopSpecial);
	class UAnimSequence* GetSpecialLandAnimation(bool* LoopSpecial);
	class UAnimSequence* GetSnakeStrikeOnLandAnimation();
	class UAnimSequence* GetSnakeCharmStanceOutOnLandAnimation();
	class UAnimSequence* GetSnakeCharmStanceLoopOnLandAnimation();
	class UAnimSequence* GetSnakeCharmStanceInOnLandAnimation();
	class UAnimSequence* GetSnakeAttackStanceOutOnLandAnimation();
	class UAnimSequence* GetSnakeAttackStanceLoopOnLandAnimation();
	class UAnimSequence* GetSnakeAttackStanceInOnLandAnimation();
	class UAnimSequence* GetPigStarveStartledLowOnLandAnimation();
	class UAnimSequence* GetPigStarveStartledHighOnLandAnimation();
	class UAnimSequence* GetPigStarveOutOnLandAnimation();
	class UAnimSequence* GetPigStarveLoopOnLandAnimation();
	class UAnimSequence* GetPigStarveInOnLandAnimation();
	class UAnimSequence* GetPigStarveDeathOnLandAnimation();
	class UAnimSequence* GetPigEatingUnderwaterAnimation();
	class UAnimSequence* GetPigEatingOnSeaAnimation();
	class UAnimSequence* GetPigEatingOnLandAnimation();
	class UBlendSpace1D* GetLocomotionUnderwaterAnimationB();
	class UBlendSpace1D* GetLocomotionUnderwaterAnimationA();
	class UBlendSpace1D* GetLocomotionSeaAnimationB();
	class UBlendSpace1D* GetLocomotionSeaAnimationA();
	class UBlendSpace1D* GetLocomotionLandAnimationB();
	class UBlendSpace1D* GetLocomotionLandAnimationA();
	class UBlendSpace1D* GetImpactUnderwaterAnimation();
	class UBlendSpace1D* GetImpactOnSeaAnimation();
	class UBlendSpace1D* GetImpactOnLandAnimation();
	class UAnimSequence* GetIdleUnderwaterAnimationB();
	class UAnimSequence* GetIdleUnderwaterAnimationA();
	class UAnimSequence* GetIdleSeaAnimationB();
	class UAnimSequence* GetIdleSeaAnimationA();
	class UAnimSequence* GetIdleLandAnimationB();
	class UAnimSequence* GetIdleLandAnimationA();
	class UAnimSequence* GetDyingLoopUnderwaterAnimation();
	class UAnimSequence* GetDyingLoopOnSeaAnimation();
	class UAnimSequence* GetDyingLoopOnLandAnimation();
	class UAnimSequence* GetDeathUnderwaterAnimation();
	class UAnimSequence* GetDeathOnSeaAnimation();
	class UAnimSequence* GetDeathOnLandAnimation();
	void GenerateNewValidAnimationIndex(class AActor* Owner, TEnumAsByte<EFaunaAnimationLocation> InLocation, TEnumAsByte<EFaunaAnimationState> InState, bool IsIdleStateA);
	bool AssetArrayValidationCheck();
};


// Class Athena.FaunaMovementComponent
// 0x00A0 (0x05D0 - 0x0530)
class UFaunaMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0530(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FaunaMovementComponent");
		return ptr;
	}

};


// Class Athena.FeedingInterface
// 0x0000 (0x0028 - 0x0028)
class UFeedingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FeedingInterface");
		return ptr;
	}

};


// Class Athena.FeedingComponent
// 0x0040 (0x0110 - 0x00D0)
class UFeedingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UClass*                                      FoodItemDesc;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FeedTime;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToFeed;                                              // 0x01E3(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysDescribe;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FeedingComponent");
		return ptr;
	}


	void OnRep_ActorToFeed();
};


// Class Athena.FireCannonNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UFireCannonNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FireCannonNotificationInputId");
		return ptr;
	}

};


// Class Athena.FiredFromActorActionStateId
// 0x0000 (0x0028 - 0x0028)
class UFiredFromActorActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FiredFromActorActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoFiredFromActorActionState(class AActor* Character, class AActor* FiringActor, const struct FVector& LaunchVelocity);
	void STATIC_PopCharacterOutOfFiredFromActorActionState(class AActor* Character);
};


// Class Athena.FiredFromCannonActionStateId
// 0x0000 (0x0028 - 0x0028)
class UFiredFromCannonActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FiredFromCannonActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoFiredFromCannonActionState(class AActor* Character, class AActor* FiringActor, const struct FVector& LaunchVelocity);
	void STATIC_PopCharacterOutOfFiredFromCannonActionState(class AActor* Character);
};


// Class Athena.FleeAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UFleeAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FleeAIStrategyId");
		return ptr;
	}

};


// Class Athena.FlyingCreature
// 0x0058 (0x04C8 - 0x0470)
class AFlyingCreature : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0470(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FlyingCreature");
		return ptr;
	}

};


// Class Athena.FOVHandlerFunctions
// 0x0000 (0x0028 - 0x0028)
class UFOVHandlerFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FOVHandlerFunctions");
		return ptr;
	}


	void STATIC_SetTargetFOV(class AAthenaPlayerCharacter* Character, float TargetFOV);
	void STATIC_SetBlendSpeed(class AAthenaPlayerCharacter* Character, float BlendSpeed);
	void STATIC_ResetToDefault(class AAthenaPlayerCharacter* Character);
	float STATIC_GetTargetFOV(class AAthenaPlayerCharacter* Character);
	float STATIC_GetDefaultTargetFOV(class AAthenaPlayerCharacter* Character);
	float STATIC_GetDefaultFOV(class AAthenaPlayerCharacter* Character);
	float STATIC_GetBlendSpeed(class AAthenaPlayerCharacter* Character);
};


// Class Athena.FrontendCameraComponent
// 0x0080 (0x0150 - 0x00D0)
class UFrontendCameraComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FScriptMulticastDelegate                    EnteredEngageState;                                       // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EnteredShipSelectState;                                   // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartMapTableAnimation;                                   // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkipMapTableAnimation;                                    // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SetMapTableAnimationPlaybackRate;                         // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GoToPirateSelectCamera;                                   // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FrontendCameraComponent");
		return ptr;
	}


	void SetMapTablePlaybackRate(float InPlaybackRate);
	void MapTableAnimationFinished();
};


// Class Athena.FrontendGameMode
// 0x0010 (0x0578 - 0x0568)
class AFrontendGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0568(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FrontendGameMode");
		return ptr;
	}


	void BeginPreloading();
};


// Class Athena.GameAudioInterface
// 0x0000 (0x0028 - 0x0028)
class UGameAudioInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GameAudioInterface");
		return ptr;
	}


	void UnregisterShip(class AShip* Ship);
	void RegisterShip(class AShip* Ship);
	float GetClosestNonCrewShipDistance(class AShip* PlayerShip);
};


// Class Athena.GameAudioService
// 0x0018 (0x0040 - 0x0028)
class UGameAudioService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GameAudioService");
		return ptr;
	}

};


// Class Athena.GameplayEventSignal
// 0x0078 (0x04F8 - 0x0480)
class AGameplayEventSignal : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0480(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GameplayEventSignal");
		return ptr;
	}


	void DeactivateAndDestroy();
};


// Class Athena.GameplayLODSettings
// 0x0010 (0x0038 - 0x0028)
class UGameplayLODSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GameplayLODSettings");
		return ptr;
	}

};


// Class Athena.GameStateFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameStateFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GameStateFunctionLibrary");
		return ptr;
	}


	class AAthenaGameState* STATIC_GetAthenaGameStateFromWorld(class UWorld* InWorld);
	class AAthenaGameState* STATIC_GetAthenaGameState(class UObject* InWorldContextObject);
};


// Class Athena.GarbageGenerator
// 0x0018 (0x0488 - 0x0470)
class AGarbageGenerator : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0470(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GarbageGenerator");
		return ptr;
	}


	void SetSizeOfPersistentSet(int InSizeOfPersistentSet);
	void SetGarbageGenerationRatePerTick(int InAmountToGenerate);
};


// Class Athena.GarbageObject
// 0x0000 (0x0028 - 0x0028)
class UGarbageObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GarbageObject");
		return ptr;
	}

};


// Class Athena.BuriedTreasureDataAsset
// 0x0000 (0x0038 - 0x0038)
class UBuriedTreasureDataAsset : public UGeneratedLocationsDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BuriedTreasureDataAsset");
		return ptr;
	}

};


// Class Athena.GenericPart
// 0x0008 (0x0478 - 0x0470)
class AGenericPart : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GenericPart");
		return ptr;
	}


	void OnPartMeshLoaded(class UStaticMesh* Mesh);
	void OnPartDescLoaded(class UGenericPartDescAsset* Desc);
};


// Class Athena.GhostCharacterAudioComponentParams
// 0x0018 (0x0040 - 0x0028)
class UGhostCharacterAudioComponentParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       PlayerStateName;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerStateGhostShip;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GhostCharacterAudioComponentParams");
		return ptr;
	}

};


// Class Athena.GhostCharacterAudioComponent
// 0x00C8 (0x0198 - 0x00D0)
class UGhostCharacterAudioComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<class UWwiseEvent*>                         GhostShipPlayEvents;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UWwiseEvent*                                 GhostShipWaterphonePlay;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 GhostShipMusicStopAll;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 GhostShipAmbiencePlay;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 GhostShipAmbienceStop;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GhostShipEventChangeMinTriggerTime;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GhostShipEventChangeMaxTriggerTime;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UGhostCharacterAudioComponentParams*         GhostCharacterAudioParams;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCharacterAudioFootfallControllerParams*     FootfallParams;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GhostCharacterAudioComponent");
		return ptr;
	}

};


// Class Athena.GhostShipDoor
// 0x00A8 (0x0518 - 0x0470)
class AGhostShipDoor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0470(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GhostShipDoor");
		return ptr;
	}


	void Multicast_ResetForPlayer(class APawn* Player);
	void Multicast_OpenForPlayer(class APawn* Player);
	void Multicast_OnDoorFullyOpen(class APawn* Player);
};


// Class Athena.GhostShipPlayerSpawnLocation
// 0x0000 (0x04A0 - 0x04A0)
class AGhostShipPlayerSpawnLocation : public APlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GhostShipPlayerSpawnLocation");
		return ptr;
	}

};


// Class Athena.GhostShipTickManager
// 0x0010 (0x0480 - 0x0470)
class AGhostShipTickManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GhostShipTickManager");
		return ptr;
	}


	void EnableActorsOnGhostShip(bool bEnable);
};


// Class Athena.GlobalEmitterServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UGlobalEmitterServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GlobalEmitterServiceInterface");
		return ptr;
	}

};


// Class Athena.GlobalEmitterService
// 0x0020 (0x0490 - 0x0470)
class AGlobalEmitterService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0470(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GlobalEmitterService");
		return ptr;
	}

};


// Class Athena.HandlesFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHandlesFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HandlesFunctionLibrary");
		return ptr;
	}


	bool STATIC_NotEqual(const struct FBlueprintableIntegerHandle& A, const struct FBlueprintableIntegerHandle& B);
	bool STATIC_IsValid(const struct FBlueprintableIntegerHandle& Handle);
	bool STATIC_Equal(const struct FBlueprintableIntegerHandle& A, const struct FBlueprintableIntegerHandle& B);
};


// Class Athena.HangerComponent
// 0x0030 (0x0320 - 0x02F0)
class UHangerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HangerComponent");
		return ptr;
	}

};


// Class Athena.HealthInterface
// 0x0000 (0x0028 - 0x0028)
class UHealthInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HealthInterface");
		return ptr;
	}

};


// Class Athena.HealthComponent
// 0x00F8 (0x01C8 - 0x00D0)
class UHealthComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              MinTimeSinceLastPredictedHealthChangeToFireChangedEventAgain;// 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHealth;                                            // 0x01E3(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	TArray<struct FContinuousHealthChange>             ContinuousHealthChangeSources;                            // 0x01E3(0x0010) (Net, ZeroConstructor)
	float                                              MaxHealth;                                                // 0x01E3(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsHealthAdjustLocked;                                     // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HealthComponent");
		return ptr;
	}


	bool ToggleGodMode();
	void TakeDamage(const struct FDamageInstance& DamageInstance);
	void StopContinuousHealthChange(TEnumAsByte<EHealthChangedReason> Reason);
	void StartContinuousHealthChange(float AmountPerSecond, TEnumAsByte<EHealthChangedReason> Reason);
	void SetHealth(float Amount, TEnumAsByte<EHealthChangedReason> Reason);
	void ResetToMaxHealth();
	void PreventAdjustmentFromHealthChangeReason(TEnumAsByte<EPreventDamageTypeLockReasons> LockReason, TEnumAsByte<EHealthChangedReason> HealthChangeReason);
	void PredictHealthChange(float Change, TEnumAsByte<EHealthChangedReason> Reason);
	void OnRep_ContinuousHealthChangeSources(TArray<struct FContinuousHealthChange> PrevContinuousDamageSources);
	void Multicast_SetHealthOnClients(const struct FHealthChange& Instance);
	bool IsGodModeActive();
	bool IsDamageTypePrevented(TEnumAsByte<EHealthChangedReason> HealthChangeReason);
	float GetMaxHealth();
	float GetCurrentHealth();
	void EnableAdjustHealth(TEnumAsByte<EHealthAdjustLockReasons> Reason, bool Strict);
	void DisableAdjustHealth(TEnumAsByte<EHealthAdjustLockReasons> Reason, bool Strict);
	bool CanAdjustHealth();
	void AllowAdjustmentFromHealthChangeReason(TEnumAsByte<EPreventDamageTypeLockReasons> LockReason, TEnumAsByte<EHealthChangedReason> HealthChangeReason);
	void AdjustHealth(float Amount, TEnumAsByte<EHealthChangedReason> Reason);
};


// Class Athena.HealthComponentMock
// 0x0008 (0x01D0 - 0x01C8)
class UHealthComponentMock : public UHealthComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HealthComponentMock");
		return ptr;
	}

};


// Class Athena.HealthComponentTestActor
// 0x00B0 (0x0580 - 0x04D0)
class AHealthComponentTestActor : public APawn
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x04D0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HealthComponentTestActor");
		return ptr;
	}

};


// Class Athena.HealthTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UHealthTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HealthTestFunctions");
		return ptr;
	}


	struct FDamageInstance STATIC_MakeDamageInstance(float Amount, class AActor* From, TEnumAsByte<EHealthChangedReason> Reason);
};


// Class Athena.HideInObjectActionStateId
// 0x0000 (0x0028 - 0x0028)
class UHideInObjectActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HideInObjectActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoHideInObjectActionState(class AActor* Character, class AActor* ObjectToHideIn, class AActor* Dockable);
	void STATIC_PopCharacterOutOfHideInObjectActionState(class AActor* Character);
};


// Class Athena.HideInObjectCompositeInputHandler
// 0x0028 (0x0100 - 0x00D8)
class UHideInObjectCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HideInObjectCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnUseConcealingObjectNotificationRecieved();
};


// Class Athena.Hideout
// 0x0078 (0x04E8 - 0x0470)
class AHideout : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0470(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Hideout");
		return ptr;
	}


	void OnPlayerInViewOfHideout(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class Athena.SpawnLocation
// 0x0010 (0x04B0 - 0x04A0)
class ASpawnLocation : public APlayerStart
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SpawnLocation");
		return ptr;
	}

};


// Class Athena.HideoutEntrance
// 0x0048 (0x04B8 - 0x0470)
class AHideoutEntrance : public AActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0470(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HideoutEntrance");
		return ptr;
	}


	void OnBeginOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class Athena.HideoutExit
// 0x0038 (0x04A8 - 0x0470)
class AHideoutExit : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0470(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HideoutExit");
		return ptr;
	}


	void OnBeginOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class Athena.HideoutService
// 0x0030 (0x0058 - 0x0028)
class UHideoutService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HideoutService");
		return ptr;
	}

};


// Class Athena.HitDetectionInterface
// 0x0000 (0x0028 - 0x0028)
class UHitDetectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HitDetectionInterface");
		return ptr;
	}

};


// Class Athena.HitDetectionComponent
// 0x00A0 (0x0170 - 0x00D0)
class UHitDetectionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00D0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HitDetectionComponent");
		return ptr;
	}

};


// Class Athena.HitReactionComponent
// 0x0030 (0x0100 - 0x00D0)
class UHitReactionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnServerProcessHitReaction;                               // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnClientProcessHitReaction;                               // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               ServerAuthoritiveReactions;                               // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HitReactionComponent");
		return ptr;
	}


	void OnHitReactionImpact(const struct FImpactDamageEvent& ImpactDamageEvent);
	void Multicast_ProcessHitReaction(const struct FImpactDamageEvent& DamageEvent);
};


// Class Athena.CharacterHitReactionComponent
// 0x0010 (0x0110 - 0x0100)
class UCharacterHitReactionComponent : public UHitReactionComponent
{
public:
	unsigned char                                      UnknownData00[0xE3];                                      // 0x0100(0x00E3) MISSED OFFSET
	class AAthenaCharacter*                            AthenaCharacter;                                          // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCharacterHitReactionDamagerTypeToAnimTypeLayer* DamagerTypeToAnimTypeLayer;                               // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CharacterHitReactionComponent");
		return ptr;
	}

};


// Class Athena.MockHitReactionComponent
// 0x0008 (0x0108 - 0x0100)
class UMockHitReactionComponent : public UHitReactionComponent
{
public:
	unsigned char                                      UnknownData00[0xE3];                                      // 0x0100(0x00E3) MISSED OFFSET
	bool                                               CalledServerProcessHitReactionImpl;                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               CalledClientProcessHitReactionImpl;                       // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MockHitReactionComponent");
		return ptr;
	}


	void SetServerAuthoritiveReactions(bool ServerAuthoritive);
	void ResetMockHitReactionComponent();
};


// Class Athena.MockHitReactionActor
// 0x0018 (0x0488 - 0x0470)
class AMockHitReactionActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0470(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MockHitReactionActor");
		return ptr;
	}

};


// Class Athena.Hole
// 0x0018 (0x0488 - 0x0470)
class AHole : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0470(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Hole");
		return ptr;
	}


	void OnStateChanged(TEnumAsByte<EHoleState> InState);
	void OnRep_State();
};


// Class Athena.ShovelHole
// 0x0028 (0x04B0 - 0x0488)
class AShovelHole : public AHole
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0488(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShovelHole");
		return ptr;
	}


	void OnRep_ParallaxValue();
};


// Class Athena.HoleDataAsset
// 0x0020 (0x0048 - 0x0028)
class UHoleDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FMaxHolePerIslandDataAsset>          MaxHolePerIslandData;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	int                                                DefaultMaxHoles;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumOverlappingHolesAllowed;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HoleDataAsset");
		return ptr;
	}

};


// Class Athena.HoleServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UHoleServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HoleServiceInterface");
		return ptr;
	}

};


// Class Athena.HoleService
// 0x0048 (0x04B8 - 0x0470)
class AHoleService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0470(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HoleService");
		return ptr;
	}

};


// Class Athena.Hull
// 0x0028 (0x0498 - 0x0470)
class AHull : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0470(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Hull");
		return ptr;
	}

};


// Class Athena.LocatorContainer
// 0x0010 (0x0038 - 0x0028)
class ULocatorContainer : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LocatorContainer");
		return ptr;
	}

};


// Class Athena.ShipPartInterface
// 0x0000 (0x0028 - 0x0028)
class UShipPartInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipPartInterface");
		return ptr;
	}


	void SetShip(class AShip* Ship);
	void ClearShip();
};


// Class Athena.LeakableInterface
// 0x0000 (0x0028 - 0x0028)
class ULeakableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LeakableInterface");
		return ptr;
	}


	float GetLeakAmount();
};


// Class Athena.RepairTypeId
// 0x0000 (0x0028 - 0x0028)
class URepairTypeId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RepairTypeId");
		return ptr;
	}

};


// Class Athena.RepairableInterface
// 0x0000 (0x0028 - 0x0028)
class URepairableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RepairableInterface");
		return ptr;
	}


	void HandleDestroy();
	class UClass* GetRepairType();
	float GetRepairTime();
	TEnumAsByte<ERepairableState> GetRepairableState();
};


// Class Athena.DamageZone
// 0x0340 (0x07D8 - 0x0498)
class ADamageZone : public AInteractableBase
{
public:
	unsigned char                                      UnknownData00[0x340];                                     // 0x0498(0x0340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DamageZone");
		return ptr;
	}


	void UpdateWaterLeak(bool ForceUpdate);
	void PlayHitVFX(class UParticleSystem* VFX);
	void OnUnderwaterStateChanged();
	void OnShipSet();
	void OnShipCleared();
	void OnShipBeginsToSink();
	void OnRepairMounted();
	void OnRepairableStateUpdate(TEnumAsByte<ERepairableState> InRepairableState);
	void OnRep_DamageLevel();
	void OnRep_AuthorityRepairableState();
	void OnInitialise();
	void OnDamageLevelUpdate(int InDamageLevel);
	void Multicast_PlayDamageEffectsRPC(bool PlaySfx, bool PlayVFX);
	bool IsOnSinkingShip();
	bool IsAboutToBlow();
	void InitialiseInternalWaterSamplePositions();
	class AShip* GetShipOwner();
	bool GetRepairMountLocation(class USceneComponent** MountLocation, struct FName* MountSocket);
	float GetLeakAmount();
	float GetDamagePercentage();
	int GetDamageLevel();
	void ApplyDamage(const struct FHullDamageHit& InHit);
};


// Class Athena.HullDamage
// 0x0138 (0x05A8 - 0x0470)
class AHullDamage : public AActor
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0470(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HullDamage");
		return ptr;
	}


	bool ShouldHitGenerateDecal(const struct FVector& HitNormal, const struct FVector& HitVelocity, float HitStrength);
	TArray<class ADamageZone*> GetDamageZonesByDamagerType(class UClass* InDamagerType, const struct FVector& InPosition, int InNumDamageZones);
	float CalculateHitStrengthForImpact(const struct FVector& HitNormal, const struct FVector& HitVelocity, float HitStrength);
};


// Class Athena.ShipInternalWater
// 0x01D0 (0x0640 - 0x0470)
class AShipInternalWater : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0470(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipInternalWater");
		return ptr;
	}


	bool TryGetIntersectionPosition(const struct FVector& StartPosition, const struct FVector& EndPosition, struct FVector* IntersectionPosition);
	void ShrinkWaterOcclusionVolume(float Time);
	void SetNormalizedWaterAmountLimit(float NormalizedWaterAmount);
	void SetNormalizedWaterAmount(float NoramlisedWaterAmount);
	void RegisterComponents(class UCurveFloat* CurveFloat);
	void OnRep_ServerWaterAmount();
	bool IsWaterMeshVisible();
	bool IsOcclusionZoneFullyReduced();
	float GetWaterAmount();
	float GetNormalizedWaterAmount();
	float GetNormalizedVisualWaterAmount();
	float GetDistanceFromPosition(const struct FVector& Position);
	void AddWaterAmount(float WaterToAdd);
};


// Class Athena.TestHullDamage
// 0x0010 (0x05B8 - 0x05A8)
class ATestHullDamage : public AHullDamage
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestHullDamage");
		return ptr;
	}

};


// Class Athena.HumanoidActionStateCreatorDefinition
// 0x02B0 (0x0720 - 0x0470)
class AHumanoidActionStateCreatorDefinition : public AActionStateCreatorDefinition
{
public:
	unsigned char                                      UnknownData00[0x2B0];                                     // 0x0470(0x02B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HumanoidActionStateCreatorDefinition");
		return ptr;
	}

};


// Class Athena.IdleCircleAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UIdleCircleAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IdleCircleAIStrategyId");
		return ptr;
	}

};


// Class Athena.ImpactDecalParamModifier
// 0x0000 (0x0028 - 0x0028)
class UImpactDecalParamModifier : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactDecalParamModifier");
		return ptr;
	}


	bool SetParamValues(const struct FHitResult& HitResult, class UMaterialInstanceDynamic* DecalMatInstance);
};


// Class Athena.ImpactDataAsset
// 0x0060 (0x0088 - 0x0028)
class UImpactDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UMaterialInterface*                          DecalMaterial;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              DecalParamModifiers;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FVector                                     DecalSize;                                                // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeScreenSize;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecalLifetime;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Particles;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     TriggeredForClientParticles;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVfxRegion>                            ParticlesVfxRegion;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseEvent;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     WwiseObjectPool;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactDataAsset");
		return ptr;
	}

};


// Class Athena.ImpactListDataAsset
// 0x0018 (0x0040 - 0x0028)
class UImpactListDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                MaxAudioEventsPerDischarge;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactListDataAsset");
		return ptr;
	}

};


// Class Athena.ImpactDecalParamModifierTime
// 0x0000 (0x0028 - 0x0028)
class UImpactDecalParamModifierTime : public UImpactDecalParamModifier
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactDecalParamModifierTime");
		return ptr;
	}


	bool SetParamValues(const struct FHitResult& HitResult, class UMaterialInstanceDynamic* DecalMatInstance);
};


// Class Athena.ImpactDecalParamModifierVomit
// 0x0000 (0x0028 - 0x0028)
class UImpactDecalParamModifierVomit : public UImpactDecalParamModifier
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactDecalParamModifierVomit");
		return ptr;
	}


	bool SetParamValues(const struct FHitResult& HitResult, class UMaterialInstanceDynamic* DecalMatInstance);
};


// Class Athena.ImpactFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UImpactFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactFunctionLibrary");
		return ptr;
	}

};


// Class Athena.ImpactMeleeAttackId
// 0x0000 (0x0028 - 0x0028)
class UImpactMeleeAttackId : public UImpactProjectileId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactMeleeAttackId");
		return ptr;
	}

};


// Class Athena.ImpactProjectileIdCannonball
// 0x0000 (0x0028 - 0x0028)
class UImpactProjectileIdCannonball : public UImpactProjectileId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactProjectileIdCannonball");
		return ptr;
	}

};


// Class Athena.ImpactProjectileIdLightning
// 0x0000 (0x0028 - 0x0028)
class UImpactProjectileIdLightning : public UImpactProjectileId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactProjectileIdLightning");
		return ptr;
	}

};


// Class Athena.ImpactProjectileIdSmallShot
// 0x0000 (0x0028 - 0x0028)
class UImpactProjectileIdSmallShot : public UImpactProjectileId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactProjectileIdSmallShot");
		return ptr;
	}

};


// Class Athena.ImpactProjectileIdSmallShotScatter
// 0x0000 (0x0028 - 0x0028)
class UImpactProjectileIdSmallShotScatter : public UImpactProjectileId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactProjectileIdSmallShotScatter");
		return ptr;
	}

};


// Class Athena.ImpactProjectileIdVomit
// 0x0000 (0x0028 - 0x0028)
class UImpactProjectileIdVomit : public UImpactProjectileId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactProjectileIdVomit");
		return ptr;
	}

};


// Class Athena.ImpactProjectileIdWater
// 0x0000 (0x0028 - 0x0028)
class UImpactProjectileIdWater : public UImpactProjectileId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactProjectileIdWater");
		return ptr;
	}

};


// Class Athena.ImpactSettings
// 0x0010 (0x0038 - 0x0028)
class UImpactSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ImpactSettings");
		return ptr;
	}

};


// Class Athena.IngestedByKrakenActionStateId
// 0x0000 (0x0028 - 0x0028)
class UIngestedByKrakenActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IngestedByKrakenActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoIngestedByKrakenActionState(class AActor* Character, class AKrakenAnimatedTentacle* Tentacle);
	void STATIC_PopCharacterOutOfIngestedByKrakenActionState(class AActor* Character);
};


// Class Athena.IngestedByKrakenCompositeInputHandler
// 0x0028 (0x0100 - 0x00D8)
class UIngestedByKrakenCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IngestedByKrakenCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnLookUpRate(float Value);
	TEnumAsByte<EInputHandlerResult> OnLookUp(float Value);
};


// Class Athena.InstrumentInterface
// 0x0000 (0x0028 - 0x0028)
class UInstrumentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InstrumentInterface");
		return ptr;
	}

};


// Class Athena.IntentCombinerComponent
// 0x0028 (0x00F8 - 0x00D0)
class UIntentCombinerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              CooperationMultiplier;                                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartMovingThreshold;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StopMovingThreshold;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConflictedStartMovingThreshold;                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConflictedStopMovingThreshold;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UControllableIntentComponent*>        IntentProviders;                                          // 0x01E3(0x0010) (ExportObject, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IntentCombinerComponent");
		return ptr;
	}


	void SetIntentProviders(TArray<class UControllableIntentComponent*> InIntentProviders);
	float GetCombinedIntent(bool IsMoving);
};


// Class Athena.IntentComponent
// 0x0008 (0x00D8 - 0x00D0)
class UIntentComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              ServerIntent;                                             // 0x01E3(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              LocalIntent;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IntentComponent");
		return ptr;
	}


	void SetIntent(float NewIntent);
	void Server_SetIntent(float NewIntent);
	float GetIntent();
};


// Class Athena.ClimbingComponent
// 0x0018 (0x00F0 - 0x00D8)
class UClimbingComponent : public UIntentComponent
{
public:
	unsigned char                                      UnknownData00[0x10B];                                     // 0x00D8(0x010B) MISSED OFFSET
	struct FVector                                     UseLadderOffset;                                          // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ServerHeight;                                             // 0x01E3(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ServerClimbId;                                            // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClimbingComponent");
		return ptr;
	}


	void SetClimbId(unsigned char InClimbId);
	bool IsClimbIdInSyncWithServer();
	float GetServerHeight();
	bool GetIsCurrentlyClimbing();
};


// Class Athena.ControllableIntentComponent
// 0x0008 (0x00E0 - 0x00D8)
class UControllableIntentComponent : public UIntentComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControllableIntentComponent");
		return ptr;
	}


	bool HasController();
	float GetIntent();
};


// Class Athena.CapstanMock
// 0x0048 (0x04E0 - 0x0498)
class ACapstanMock : public AInteractableBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0498(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CapstanMock");
		return ptr;
	}

};


// Class Athena.MockCannon
// 0x0008 (0x0A08 - 0x0A00)
class AMockCannon : public ACannon
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A00(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MockCannon");
		return ptr;
	}

};


// Class Athena.CapstanArm
// 0x0018 (0x05D0 - 0x05B8)
class ACapstanArm : public AControllableObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x05B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CapstanArm");
		return ptr;
	}


	struct FVector GetLookAtPos();
};


// Class Athena.DebugShipController
// 0x0008 (0x05C0 - 0x05B8)
class ADebugShipController : public AControllableObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugShipController");
		return ptr;
	}


	void Server_RequestUpdateSailsLowered(float InRateOfChange);
	void Server_RequestUpdateSailsAngle(float InRateOfChange);
	void Server_RequestToggleAnchorState();
	void Server_RequestSetRuddersAngleRatio(float InRateOfChange);
};


// Class Athena.MapTableControlPoint
// 0x0020 (0x05D8 - 0x05B8)
class AMapTableControlPoint : public AControllableObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05B8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapTableControlPoint");
		return ptr;
	}

};


// Class Athena.PlayerLoadingInteractionPoint
// 0x0038 (0x05F0 - 0x05B8)
class APlayerLoadingInteractionPoint : public AControllableObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x05B8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerLoadingInteractionPoint");
		return ptr;
	}


	void Server_NotifyInteractionPointUsed(class AActor* UsingActor);
};


// Class Athena.SailManipulatorAudioParams
// 0x0018 (0x0040 - 0x0028)
class USailManipulatorAudioParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseEvent*                                 PlaySailManipulator;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopSailManipulator;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SailManipulatorAudioParams");
		return ptr;
	}

};


// Class Athena.SailManipulatorInterface
// 0x0000 (0x0028 - 0x0028)
class USailManipulatorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SailManipulatorInterface");
		return ptr;
	}


	void SetLocked(bool IsLocked);
	void SetIntent(float NewIntent);
	bool IsLocked();
	class UStaticMeshComponent* GetTopMeshComponent();
	float GetCurrentIntent();
	class UStaticMeshComponent* GetBaseMeshComponent();
};


// Class Athena.SailAngleInterface
// 0x0000 (0x0028 - 0x0028)
class USailAngleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SailAngleInterface");
		return ptr;
	}


	float GetSailTurnRate();
	float GetSailAngleRatio();
	struct FVector GetRightRopeStartingPoint();
	struct FVector GetRightRopeEndingPoint();
	struct FVector GetLeftRopeStartingPoint();
	struct FVector GetLeftRopeEndingPoint();
};


// Class Athena.SailHoistInterface
// 0x0000 (0x0028 - 0x0028)
class USailHoistInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SailHoistInterface");
		return ptr;
	}


	float GetSailRaisedPercentage();
	float GetSailMovementRate();
	struct FVector GetRopeStartingPoint();
	struct FVector GetRopeEndingPoint();
};


// Class Athena.TestControllableObject
// 0x0010 (0x05C8 - 0x05B8)
class ATestControllableObject : public AControllableObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestControllableObject");
		return ptr;
	}


	void TestForceDisconnectIdleSecondsThreshold(float DisconnectIdleThreshold);
	void TestForceCanDisconnectWhenIdle(bool CanDisconnect);
};


// Class Athena.WheelInterface
// 0x0000 (0x0028 - 0x0028)
class UWheelInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WheelInterface");
		return ptr;
	}


	float GetWheelRate();
	float GetWheelAngle();
	float GetWantedWheelAngle();
	float GetServerWheelAngle();
	float GetNormalizedWheelPosition();
	TEnumAsByte<EWheelAnimationType> GetAnimationType();
	float GetAnimationTime();
};


// Class Athena.WheelDescAsset
// 0x0010 (0x0038 - 0x0028)
class UWheelDescAsset : public UShipPartDescAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WheelDescAsset");
		return ptr;
	}

};


// Class Athena.Wheel
// 0x0250 (0x0808 - 0x05B8)
class AWheel : public AControllableObject
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x05B8(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Wheel");
		return ptr;
	}


	void Server_SetWheelAngle(float WheelAngleIncrement);
	void OnWheelDescLoaded(class UWheelDescAsset* WheelDesc);
	void OnRep_ServerWheelAngle();
	void Multicast_ForceSetWheelAngle(float Angle);
	class USkeletalMeshComponent* GetWheelMesh();
	float GetMaxWheelAngle();
	void ForceSetWheelAngle(float Angle);
	void ApplyWheelInput(float Value);
};


// Class Athena.TestDamageZone
// 0x0008 (0x07E0 - 0x07D8)
class ATestDamageZone : public ADamageZone
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestDamageZone");
		return ptr;
	}


	void TestStopWaterLeakSfx();
	void TestStopWaterLeakRepairingSfx();
	void TestPlayWaterLeakSfx();
	void TestPlayWaterLeakRepairingSfx();
	bool IsWaterLeakSfxPlaying();
	bool IsWaterLeakRepairSfxPlaying();
};


// Class Athena.Bell
// 0x00E8 (0x0600 - 0x0518)
class ABell : public AInteractableObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0518(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Bell");
		return ptr;
	}


	void RingBell(bool IsInTurbulence);
};


// Class Athena.CapstanRelease
// 0x0018 (0x0530 - 0x0518)
class ACapstanRelease : public AInteractableObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0518(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CapstanRelease");
		return ptr;
	}

};


// Class Athena.InteractableLightParameters
// 0x0018 (0x0040 - 0x0028)
class UInteractableLightParameters : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               LiveUpdate;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StartLit;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractableLightParameters");
		return ptr;
	}

};


// Class Athena.InteractableLight
// 0x0060 (0x0578 - 0x0518)
class AInteractableLight : public AInteractableObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0518(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractableLight");
		return ptr;
	}


	void OnRep_OnLightStateChanged();
	void LightStateChanged();
	bool IsLightOn();
};


// Class Athena.InteractableLightMock
// 0x0000 (0x0578 - 0x0578)
class AInteractableLightMock : public AInteractableLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractableLightMock");
		return ptr;
	}

};


// Class Athena.ShipInteractableLight
// 0x00C8 (0x0640 - 0x0578)
class AShipInteractableLight : public AInteractableLight
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0578(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipInteractableLight");
		return ptr;
	}

};


// Class Athena.ShipInteractableLightMock
// 0x0000 (0x0640 - 0x0640)
class AShipInteractableLightMock : public AShipInteractableLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipInteractableLightMock");
		return ptr;
	}

};


// Class Athena.Mermaid
// 0x03E0 (0x08F8 - 0x0518)
class AMermaid : public AInteractableObject
{
public:
	unsigned char                                      UnknownData00[0x3E0];                                     // 0x0518(0x03E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Mermaid");
		return ptr;
	}


	void OnRep_State();
	void Multicast_TeleportPlayerRPC(class AAthenaPlayerCharacter* Player);
	void Multicast_SurfacedRPC();
	void Multicast_DiveRPC();
	bool IsBeaconActive();
	int GetUniqueMermaidId();
	TArray<struct FGuid> GetCrewIdsResponsibleForSavingAsCopy();
	void AddCrewResponsibleForSaving(const struct FGuid& CrewId);
};


// Class Athena.MusicBox
// 0x0068 (0x0580 - 0x0518)
class AMusicBox : public AInteractableObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0518(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MusicBox");
		return ptr;
	}


	void OnRep_OnIsPlayingChanged(bool WasPlaying);
};


// Class Athena.ShipwrightOneShot
// 0x00E0 (0x05F8 - 0x0518)
class AShipwrightOneShot : public AInteractableObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0518(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwrightOneShot");
		return ptr;
	}


	void TestForceExpireAllRestockMoratoriums();
	void RestockShip(class AActor* InInteractor);
	bool IsShipCloseAndSlowEnoughToRestock(class AShip* Ship);
	float GetTimeInSecondsUntilNextRestock(class AActor* Player);
	bool GetHasRestockMoratoriumDataForPlayerCrew(class AActor* Player);
};


// Class Athena.LandmarkReactionInterface
// 0x0000 (0x0028 - 0x0028)
class ULandmarkReactionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkReactionInterface");
		return ptr;
	}


	bool StopReaction();
	bool StartReaction();
};


// Class Athena.LandmarkReactionActor
// 0x0008 (0x0478 - 0x0470)
class ALandmarkReactionActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkReactionActor");
		return ptr;
	}


	bool StopReaction();
	bool StartReaction();
};


// Class Athena.SkeletonFortDoor
// 0x0088 (0x05A0 - 0x0518)
class ASkeletonFortDoor : public AInteractableObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0518(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SkeletonFortDoor");
		return ptr;
	}


	void ResetDoor();
	void OpenDoor();
	void OnRep_ServerDoorState();
};


// Class Athena.BuoyantStorageContainer
// 0x0150 (0x0778 - 0x0628)
class ABuoyantStorageContainer : public AStorageContainer
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0628(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BuoyantStorageContainer");
		return ptr;
	}


	void OnRep_PhysicsState();
};


// Class Athena.IslandStorageContainer
// 0x0008 (0x0630 - 0x0628)
class AIslandStorageContainer : public AStorageContainer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0628(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandStorageContainer");
		return ptr;
	}

};


// Class Athena.ShipStorageContainer
// 0x0008 (0x0630 - 0x0628)
class AShipStorageContainer : public AStorageContainer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0628(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipStorageContainer");
		return ptr;
	}

};


// Class Athena.TestInteractableObject
// 0x0000 (0x0518 - 0x0518)
class ATestInteractableObject : public AInteractableObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestInteractableObject");
		return ptr;
	}

};


// Class Athena.LadderInterface
// 0x0000 (0x0028 - 0x0028)
class ULadderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LadderInterface");
		return ptr;
	}


	float GetLadderHeight();
};


// Class Athena.Ladder
// 0x01C8 (0x0660 - 0x0498)
class ALadder : public AInteractableBase
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x0498(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Ladder");
		return ptr;
	}


	struct FTransform GetTopLadderRungTransform();
	struct FTransform GetBottomLadderRungTransform();
};


// Class Athena.TestDerivedLadder
// 0x0000 (0x0660 - 0x0660)
class ATestDerivedLadder : public ALadder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestDerivedLadder");
		return ptr;
	}

};


// Class Athena.TestDerivedLadderInitialised
// 0x0000 (0x0660 - 0x0660)
class ATestDerivedLadderInitialised : public ATestDerivedLadder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestDerivedLadderInitialised");
		return ptr;
	}

};


// Class Athena.ModalInteraction
// 0x0010 (0x0480 - 0x0470)
class AModalInteraction : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ModalInteraction");
		return ptr;
	}

};


// Class Athena.ModalInteractionProxy
// 0x00A0 (0x0538 - 0x0498)
class AModalInteractionProxy : public AInteractableBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0498(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ModalInteractionProxy");
		return ptr;
	}

};


// Class Athena.MermaidInteractionProxy
// 0x0000 (0x0538 - 0x0538)
class AMermaidInteractionProxy : public AModalInteractionProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MermaidInteractionProxy");
		return ptr;
	}

};


// Class Athena.NPC
// 0x0008 (0x0540 - 0x0538)
class ANPC : public AModalInteractionProxy
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0538(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPC");
		return ptr;
	}

};


// Class Athena.CompanyShopkeeper
// 0x0008 (0x0548 - 0x0540)
class ACompanyShopkeeper : public ANPC
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0540(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CompanyShopkeeper");
		return ptr;
	}

};


// Class Athena.Shipwright
// 0x0008 (0x0548 - 0x0540)
class AShipwright : public ANPC
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0540(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Shipwright");
		return ptr;
	}

};


// Class Athena.Shopkeeper
// 0x0000 (0x0540 - 0x0540)
class AShopkeeper : public ANPC
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Shopkeeper");
		return ptr;
	}

};


// Class Athena.PossessionsChest
// 0x0078 (0x05B0 - 0x0538)
class APossessionsChest : public AModalInteractionProxy
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0538(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PossessionsChest");
		return ptr;
	}

};


// Class Athena.ShipCustomizationChest
// 0x0038 (0x05E8 - 0x05B0)
class AShipCustomizationChest : public APossessionsChest
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x05B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCustomizationChest");
		return ptr;
	}

};


// Class Athena.ShipFlagCustomizationChest
// 0x0018 (0x0600 - 0x05E8)
class AShipFlagCustomizationChest : public AShipCustomizationChest
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x05E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipFlagCustomizationChest");
		return ptr;
	}

};


// Class Athena.VoyageProposalContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UVoyageProposalContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageProposalContainerInterface");
		return ptr;
	}

};


// Class Athena.VoyageProposalContainer
// 0x0220 (0x0758 - 0x0538)
class AVoyageProposalContainer : public AModalInteractionProxy
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x0538(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageProposalContainer");
		return ptr;
	}


	void SetManifest(class ACrewShipManifest* Manifest);
};


// Class Athena.BaseSimpleBootyItemProxy
// 0x0000 (0x0870 - 0x0870)
class ABaseSimpleBootyItemProxy : public ABootyProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BaseSimpleBootyItemProxy");
		return ptr;
	}

};


// Class Athena.SimpleBootyItemProxy
// 0x0000 (0x0870 - 0x0870)
class ASimpleBootyItemProxy : public ABaseSimpleBootyItemProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SimpleBootyItemProxy");
		return ptr;
	}

};


// Class Athena.StaticSimpleBootyItemProxy
// 0x0000 (0x0870 - 0x0870)
class AStaticSimpleBootyItemProxy : public ABaseSimpleBootyItemProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StaticSimpleBootyItemProxy");
		return ptr;
	}

};


// Class Athena.BountyRewardItemProxy
// 0x0038 (0x08A8 - 0x0870)
class ABountyRewardItemProxy : public ABootyProxy
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0870(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BountyRewardItemProxy");
		return ptr;
	}

};


// Class Athena.TreasureChestItemProxy
// 0x0150 (0x09C0 - 0x0870)
class ATreasureChestItemProxy : public ABootyProxy
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0870(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureChestItemProxy");
		return ptr;
	}


	void OnRep_State(TEnumAsByte<ETreasureChestProxyState> OldState);
	void OnRep_NumDigsLeft(int PrevNumDigsLeft);
};


// Class Athena.MockTreasureChestItemProxy
// 0x0008 (0x09C8 - 0x09C0)
class AMockTreasureChestItemProxy : public ATreasureChestItemProxy
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MockTreasureChestItemProxy");
		return ptr;
	}

};


// Class Athena.StrongholdKeyProxy
// 0x0000 (0x07D0 - 0x07D0)
class AStrongholdKeyProxy : public AFloatingItemProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StrongholdKeyProxy");
		return ptr;
	}

};


// Class Athena.MessageInABottleItemProxy
// 0x0018 (0x06C8 - 0x06B0)
class AMessageInABottleItemProxy : public AItemProxy
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x06B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MessageInABottleItemProxy");
		return ptr;
	}


	void Multicast_Smash();
};


// Class Athena.StaticMeshItemProxy
// 0x0000 (0x06B0 - 0x06B0)
class AStaticMeshItemProxy : public AItemProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StaticMeshItemProxy");
		return ptr;
	}

};


// Class Athena.PickupableMock
// 0x0008 (0x05B8 - 0x05B0)
class APickupableMock : public APickupableObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PickupableMock");
		return ptr;
	}

};


// Class Athena.TooltipDetailedEventProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UTooltipDetailedEventProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TooltipDetailedEventProviderInterface");
		return ptr;
	}

};


// Class Athena.VotableObjectView
// 0x00F0 (0x0588 - 0x0498)
class AVotableObjectView : public AInteractableBase
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0498(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VotableObjectView");
		return ptr;
	}


	void OnVoteRemoved(const TScriptInterface<class UVoterInterface>& Voter);
	void OnVoteCompleted(bool IsWinner);
	void OnVoteAdded(const TScriptInterface<class UVoterInterface>& Voter);
	TScriptInterface<class UVoterInterface> GetVoter(int Index);
};


// Class Athena.InteractableMock
// 0x0030 (0x0058 - 0x0028)
class UInteractableMock : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class AActor*                                      ActorThatInteracted;                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractableMock");
		return ptr;
	}

};


// Class Athena.InteractableMockActor
// 0x0038 (0x04A8 - 0x0470)
class AInteractableMockActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0470(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractableMockActor");
		return ptr;
	}

};


// Class Athena.InteractablesTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UInteractablesTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractablesTestFunctions");
		return ptr;
	}


	class AShip* STATIC_SpawnLargeShipForMPTesting(class UObject* WorldContextObject, const struct FVector& Position, const struct FRotator& Rotation);
	class AShip* STATIC_SetupServerSideAndSpawnShip(class UObject* WorldContextObject, float CapstanPosition, float SailsLoweredPosition);
	class AShip* STATIC_SetupClientSide(class UObject* WorldContextObject);
};


// Class Athena.InteractionCompositeInputHandler
// 0x0058 (0x0130 - 0x00D8)
class UInteractionCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00D8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractionCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnSecondaryInteractReleased();
	TEnumAsByte<EInputHandlerResult> OnSecondaryInteract();
	TEnumAsByte<EInputHandlerResult> OnPrimaryInteractReleased();
	TEnumAsByte<EInputHandlerResult> OnPrimaryInteract();
};


// Class Athena.InteractionPoliciesTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UInteractionPoliciesTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractionPoliciesTestFunctions");
		return ptr;
	}


	bool STATIC_WithinInteractionAngleValidationPolicy_WithInteractorBehindTheObject_IsInvalidReturnsFalse(class AAthenaCharacter* InCharacter, class AActor* InInteractable);
	bool STATIC_WithinInteractionAngleValidationPolicy_WithinInteractionAngleInteractor_IsValidReturnsTrue(class AAthenaCharacter* InCharacter, float InInteractionRegionDegrees, class UInteractableArea* InRegionInteractor);
	bool STATIC_WithinInteractionAngleValidationPolicy_OutsideInteractionAngleInteractor_IsValidReturnsFalse(class AAthenaCharacter* InCharacter, float InInteractionRegionDegrees, class UInteractableArea* InOutOfRegionInteractor);
	bool STATIC_ClosestToPlayerSortingPolicy_WithTwoInteractablesClosestAndFurthest_ClosestTakesHighestPrecedent(class AAthenaCharacter* InCharacter, class UInteractableArea* InClosestInteractable, class UInteractableArea* InFurthestInteractable);
	bool STATIC_CenterOfScreenDistanceSortingPolicy_ExecuteTakesHighestPrecedent(class AAthenaCharacter* InCharacter, class UInteractableArea* InLhsInteractor, class UInteractableArea* InRhsInteractor, float InPlayerDistanceDelta, float InCenterDistanceDelta);
	bool STATIC_CanInteractValidationPolicy_WithCantInteractInteractor_IsValidReturnsFalse(class AActor* InCharacter, class UInteractableArea* InCanInteractInteractor);
	bool STATIC_CanInteractValidationPolicy_WithCanInteractInteractor_IsValidReturnsTrue(class AActor* InCharacter, class UInteractableArea* InCanInteractInteractor);
	bool STATIC_AirbornePolicy_ExecuteCanInteract(class AAthenaCharacter* InCharacter, class AActor* InInteractable);
};


// Class Athena.InteractionSettings
// 0x0018 (0x0040 - 0x0028)
class UInteractionSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              MaximumInteractionAngleClient;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaximumInteractionAngleServer;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaximumInteractionDistance;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxInteractorsPlayerDistanceDelta;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractionSettings");
		return ptr;
	}

};


// Class Athena.InteractObjectActionStateId
// 0x0000 (0x0028 - 0x0028)
class UInteractObjectActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractObjectActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoInteractObjectActionState(class AActor* InteractObject, class AActor* Character);
};


// Class Athena.InteractOrDisengageNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UInteractOrDisengageNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractOrDisengageNotificationInputId");
		return ptr;
	}

};


// Class Athena.InteractOrDisengageReleasedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UInteractOrDisengageReleasedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractOrDisengageReleasedNotificationInputId");
		return ptr;
	}

};


// Class Athena.InteractorTestProxyObject
// 0x0038 (0x04A8 - 0x0470)
class AInteractorTestProxyObject : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0470(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InteractorTestProxyObject");
		return ptr;
	}

};


// Class Athena.InterpolatingItem
// 0x00E0 (0x0550 - 0x0470)
class AInterpolatingItem : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0470(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InterpolatingItem");
		return ptr;
	}

};


// Class Athena.InventoryItemCategoryToSlotRemappingAsset
// 0x0010 (0x0038 - 0x0028)
class UInventoryItemCategoryToSlotRemappingAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InventoryItemCategoryToSlotRemappingAsset");
		return ptr;
	}

};


// Class Athena.InventoryListenerMock
// 0x00A8 (0x00D0 - 0x0028)
class UInventoryListenerMock : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InventoryListenerMock");
		return ptr;
	}

};


// Class Athena.WieldableMock
// 0x0038 (0x0060 - 0x0028)
class UWieldableMock : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableMock");
		return ptr;
	}

};


// Class Athena.InventoryManipulatorComponent
// 0x0250 (0x0320 - 0x00D0)
class UInventoryManipulatorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              StashItemTimeout;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SlowStashItemTimeout;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WieldItemTimeout;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDropItemParams                             DropItemParams;                                           // 0x01E3(0x0030) (Edit)
	struct FInventoryMemory                            InventoryMemory;                                          // 0x01E3(0x0050)
	TScriptInterface<class UWieldableItemSetInterface> WieldableItemSetInterface;                                // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UWieldedItemInterface>      WieldedItemInterface;                                     // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x12D];                                     // 0x01F3(0x012D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InventoryManipulatorComponent");
		return ptr;
	}


	TEnumAsByte<EWieldItemReturnCode> WieldItemByActor(class AActor* Item, bool UnwieldFast);
	void WieldItem(int ItemIndex, bool Fast);
	void ToggleWieldItem();
	void Server_DropItemRPC(class AActor* Item);
	bool RemoveItem(class AItemInfo* Item);
	void QuickSelectItemOfType(TEnumAsByte<EItemType> ItemType, int TypedItemIndex);
	void QuickSelectItemOfCategory(class UClass* Category, int IndexIntoCategory);
	void QuickSelectItem(int ItemIndex);
	bool PickUpItem(class AItemInfo* ItemInfo, bool AndWield);
	void Multicast_ItemPickedUpRPC(TEnumAsByte<EWieldableItemSize> ItemSize, bool WasEmptyHanded);
	void Multicast_CurrentItemActorIndexChangedRPC(int NewIndex);
	bool IsIdle();
	int GetNumberOfItemsOfItemCategory(class UClass* ItemSlot);
	int GetCurrentItemIndex();
	TEnumAsByte<EDropItemReturnCode> DropWieldedItem();
	void DropOrDestroyLargeWieldedItem();
	bool DetermineDropPos(const struct FVector& InSpawnPos, struct FHitResult* OutHit);
	void CycleItemUp();
	void CycleItemType(TEnumAsByte<EItemType> ItemType);
	void CycleItemDown();
	void CycleItemCategory(class UClass* Category);
	bool ConsumeItem(class AItemInfo* Item);
	TEnumAsByte<EDropItemReturnCode> CanDropWieldedItem();
	TEnumAsByte<ECanAddItemQueryResult> CanAddItemOfItemCategory(class UClass* ItemSlot);
	bool AddItem(class AItemInfo* Item);
};


// Class Athena.InventoryManipulatorComponentMock
// 0x0008 (0x0328 - 0x0320)
class UInventoryManipulatorComponentMock : public UInventoryManipulatorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0320(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.InventoryManipulatorComponentMock");
		return ptr;
	}


	void ForceDroppedItemToAttachToHitActor(bool InValue);
};


// Class Athena.IslandBoundsComponent
// 0x0000 (0x06A0 - 0x06A0)
class UIslandBoundsComponent : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandBoundsComponent");
		return ptr;
	}

};


// Class Athena.ServiceProviderGameState
// 0x0100 (0x05C8 - 0x04C8)
class AServiceProviderGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x04C8(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ServiceProviderGameState");
		return ptr;
	}

};


// Class Athena.AthenaGameState
// 0x0270 (0x0838 - 0x05C8)
class AAthenaGameState : public AServiceProviderGameState
{
public:
	unsigned char                                      UnknownData00[0x270];                                     // 0x05C8(0x0270) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaGameState");
		return ptr;
	}


	void OnRep_ReplicatedWindService();
	void OnRep_ReplicatedWaterService();
	void OnRep_ReplicatedTinySharkService();
	void OnRep_ReplicatedTimeService();
	void OnRep_ReplicatedStormService();
	void OnRep_ReplicatedShipwrightService();
	void OnRep_ReplicatedShipService();
	void OnRep_ReplicatedPlayerManagerService();
	void OnRep_ReplicatedKrakenService();
	void OnRep_ReplicatedIslandService();
	void OnRep_ReplicatedDrawDebugService();
	void OnRep_ReplicatedCrewService();
};


// Class Athena.IslandWashedUpSpawnerManager
// 0x0158 (0x05C8 - 0x0470)
class AIslandWashedUpSpawnerManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0470(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandWashedUpSpawnerManager");
		return ptr;
	}

};


// Class Athena.IslandData
// 0x0120 (0x0590 - 0x0470)
class AIslandData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0470(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandData");
		return ptr;
	}


	void OnOverlapEnd(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
	struct FIsland MakeFIsland();
};


// Class Athena.LandmarkTreasureLocationsDataAsset
// 0x0010 (0x0038 - 0x0028)
class ULandmarkTreasureLocationsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkTreasureLocationsDataAsset");
		return ptr;
	}

};


// Class Athena.IslandDataDefaultAssetEntry
// 0x0028 (0x0050 - 0x0028)
class UIslandDataDefaultAssetEntry : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TEnumAsByte<EIslandType>                           IslandType;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  AISpawner;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  CannonsAISpawner;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandDataDefaultAssetEntry");
		return ptr;
	}

};


// Class Athena.FortIslandDataDefaultAssetEntry
// 0x0010 (0x0060 - 0x0050)
class UFortIslandDataDefaultAssetEntry : public UIslandDataDefaultAssetEntry
{
public:
	unsigned char                                      UnknownData00[0x193];                                     // 0x0050(0x0193) MISSED OFFSET
	class UAISpawner*                                  AISpawnerWhenFortActive;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  CannonsAISpawnerWhenFortActive;                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FortIslandDataDefaultAssetEntry");
		return ptr;
	}

};


// Class Athena.IslandDataAssetEntry
// 0x00B8 (0x00E0 - 0x0028)
class UIslandDataAssetEntry : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       IslandName;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTreasureMapData>                    TreasureMaps;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UWorldMapIslandDataAsset*                    WorldMapData;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGeneratedLocationsDataAsset*                UndergroundTreasureLocationsSource;                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             UndergroundTreasureLocations;                             // 0x01E3(0x0010) (ZeroConstructor, Transient)
	class ULandmarkTreasureLocationsDataAsset*         LandmarkTreasureLocationsSource;                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGeneratedLocationsDataAsset*                AISpawnLocationsSource;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             AISpawnLocations;                                         // 0x01E3(0x0010) (ZeroConstructor, Transient)
	class UWashedUpItemDataAsset*                      WashedUpItemLocationDataSource;                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FWashedUpLocationData>               WashedUpItemsLocationData;                                // 0x01E3(0x0010) (ZeroConstructor, Transient)
	struct FText                                       LocalisedName;                                            // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01F3(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UAISpawner*                                  AISpawner;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandDataAssetEntry");
		return ptr;
	}

};


// Class Athena.IslandDataAsset
// 0x0028 (0x0050 - 0x0028)
class UIslandDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               AllowDefaultIdentityTransform;                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawningGracePeriod;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UIslandDataDefaultAssetEntry*>        IslandDefaultDataEntries;                                 // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandDataAsset");
		return ptr;
	}

};


// Class Athena.IslandFaunaSettings
// 0x0038 (0x0060 - 0x0028)
class UIslandFaunaSettings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	int                                                IslandPopulatedChance;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRange                   NumberOfFaunaTypes;                                       // 0x01E3(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandFaunaSettings");
		return ptr;
	}

};


// Class Athena.IslandLocationVerifierInterface
// 0x0000 (0x0028 - 0x0028)
class UIslandLocationVerifierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandLocationVerifierInterface");
		return ptr;
	}


	struct FIslandLocationVerifierResult VerifyLocation(const struct FVector& Location, bool RequiresNavMesh);
};


// Class Athena.IslandService
// 0x0150 (0x05C0 - 0x0470)
class AIslandService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0470(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandService");
		return ptr;
	}


	void OnRep_ReplicatedIslandArray();
	void CollectLandmarksFromWorld();
	void CollectIslandDataFromWorld();
};


// Class Athena.ItemBlockingInterface
// 0x0000 (0x0028 - 0x0028)
class UItemBlockingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemBlockingInterface");
		return ptr;
	}

};


// Class Athena.ItemFactoryFunctions
// 0x0000 (0x0028 - 0x0028)
class UItemFactoryFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemFactoryFunctions");
		return ptr;
	}


	class AWieldableItem* STATIC_SpawnItemAsWieldable(class UObject* WorldContext, class UClass* What, const struct FTransform& Where, class AActor* Owner);
	class AItemProxy* STATIC_SpawnItemAsProxy(class UObject* WorldContext, class UClass* What, const struct FTransform& Where);
	class AItemInfo* STATIC_SpawnItem(class UObject* WorldContext, class UClass* What, const struct FTransform& Where);
};


// Class Athena.WeepingChestItemInfo
// 0x0000 (0x0578 - 0x0578)
class AWeepingChestItemInfo : public ATreasureChestItemInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WeepingChestItemInfo");
		return ptr;
	}

};


// Class Athena.FruitItemInfo
// 0x0000 (0x04B8 - 0x04B8)
class AFruitItemInfo : public AItemInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FruitItemInfo");
		return ptr;
	}

};


// Class Athena.StrongholdKeyItemInfo
// 0x0010 (0x04C8 - 0x04B8)
class AStrongholdKeyItemInfo : public AItemInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StrongholdKeyItemInfo");
		return ptr;
	}

};


// Class Athena.TestUsableItemInfo
// 0x0000 (0x04B8 - 0x04B8)
class ATestUsableItemInfo : public AItemInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestUsableItemInfo");
		return ptr;
	}

};


// Class Athena.ItemLoaderInterface
// 0x0000 (0x0028 - 0x0028)
class UItemLoaderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemLoaderInterface");
		return ptr;
	}

};


// Class Athena.ItemLoaderComponent
// 0x0058 (0x0128 - 0x00D0)
class UItemLoaderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00D0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemLoaderComponent");
		return ptr;
	}

};


// Class Athena.ItemLoadoutControlInterface
// 0x0000 (0x0028 - 0x0028)
class UItemLoadoutControlInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemLoadoutControlInterface");
		return ptr;
	}


	void SetItemLoadout(const struct FItemLoadout& InItemLoadout);
	bool RemoveItem(class AItemInfo* InItem, TEnumAsByte<EItemLoadoutDestroyBehaviour> InDestroyBehaviour);
	bool PushItem(class AItemInfo* InItem);
	bool EquipWeapon_Client(class UClass* InItemDesc, int InIndex);
	bool EquipWeapon(class UClass* InItemDesc, int InIndex);
	bool EquipItem(class UClass* InItemDesc);
};


// Class Athena.ItemLoadoutComponent
// 0x00C0 (0x0190 - 0x00D0)
class UItemLoadoutComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	int                                                MaxWeaponSlots;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FItemLoadout                                ItemLoadout;                                              // 0x01E3(0x0020)
	struct FItemLoadoutComponentSlots                  LoadoutSlots;                                             // 0x01E3(0x0020) (Net)
	TArray<class UClass*>                              WeaponSlots_ClientPredicted;                              // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemLoadoutComponent");
		return ptr;
	}


	void OnRep_Slots();
	void OnItemDestroyed(class AActor* InActor);
};


// Class Athena.ItemPickupBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UItemPickupBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemPickupBlueprintFunctionLibrary");
		return ptr;
	}


	bool STATIC_IsActorWieldingLargeItem(class AActor* WieldingActor);
};


// Class Athena.ItemSpawnDistributionAsset
// 0x0010 (0x0038 - 0x0028)
class UItemSpawnDistributionAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemSpawnDistributionAsset");
		return ptr;
	}

};


// Class Athena.ItemSpawnComponent
// 0x0130 (0x0420 - 0x02F0)
class UItemSpawnComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x02F0(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ItemSpawnComponent");
		return ptr;
	}

};


// Class Athena.FortItemSpawnComponent
// 0x0000 (0x0420 - 0x0420)
class UFortItemSpawnComponent : public UItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FortItemSpawnComponent");
		return ptr;
	}

};


// Class Athena.IslandItemSpawnComponent
// 0x00B0 (0x04D0 - 0x0420)
class UIslandItemSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0420(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandItemSpawnComponent");
		return ptr;
	}

};


// Class Athena.IslandFaunaSpawnComponent
// 0x0020 (0x04F0 - 0x04D0)
class UIslandFaunaSpawnComponent : public UIslandItemSpawnComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandFaunaSpawnComponent");
		return ptr;
	}

};


// Class Athena.IslandItemSpawnComponentMock
// 0x0000 (0x04D0 - 0x04D0)
class UIslandItemSpawnComponentMock : public UIslandItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.IslandItemSpawnComponentMock");
		return ptr;
	}

};


// Class Athena.WashedUpItemSpawnComponent
// 0x0070 (0x0540 - 0x04D0)
class UWashedUpItemSpawnComponent : public UIslandItemSpawnComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x04D0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WashedUpItemSpawnComponent");
		return ptr;
	}

};


// Class Athena.WashedUpItemSpawnComponentMock
// 0x0000 (0x0540 - 0x0540)
class UWashedUpItemSpawnComponentMock : public UWashedUpItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WashedUpItemSpawnComponentMock");
		return ptr;
	}

};


// Class Athena.JumpNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UJumpNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.JumpNotificationInputId");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacle
// 0x04A0 (0x0A30 - 0x0590)
class AKrakenAnimatedTentacle : public AKrakenTentacle
{
public:
	unsigned char                                      UnknownData00[0x4A0];                                     // 0x0590(0x04A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacle");
		return ptr;
	}


	void TestToggleInstantStateSwitching();
	void SetMinHoldingTargetTime(float HoldingTime);
	void SetCurrentTarget(class AAthenaCharacter* Target);
	void RequestState(class UClass* NewState);
	void RequestIdleState(class UClass* IdleState);
	void OnRep_TentacleYaw(float OldTentacleYaw);
	void OnRep_TentacleWorldLocation(const struct FVector& OldTentacleWorldLocation);
	void OnRep_PendingState();
	void OnRep_CurrentTarget();
	void OnRep_CurrentState();
	void OnRep_AnimationProgression();
	bool IsAnimationLooping();
	class AAthenaCharacter* GetCurrentTarget();
	class UClass* GetCurrentState();
	void DockToActor(class AActor* ActorToDockTo);
};


// Class Athena.KrakenShipWrappingTellAnimatedTentacle
// 0x0010 (0x0A40 - 0x0A30)
class AKrakenShipWrappingTellAnimatedTentacle : public AKrakenAnimatedTentacle
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0A30(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenShipWrappingTellAnimatedTentacle");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleAnimationInstance
// 0x0120 (0x0560 - 0x0440)
class UKrakenAnimatedTentacleAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0440(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleAnimationInstance");
		return ptr;
	}

};


// Class Athena.KrakenAnimatedTentacleRecordingAnimationInstance
// 0x0120 (0x0560 - 0x0440)
class UKrakenAnimatedTentacleRecordingAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0440(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenAnimatedTentacleRecordingAnimationInstance");
		return ptr;
	}


	void StartRecordingAllAnimations();
};


// Class Athena.KrakenDebugFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UKrakenDebugFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenDebugFunctionLibrary");
		return ptr;
	}


	class AKrakenAnimatedTentacle* STATIC_SpawnTentacleAndSuckTarget(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* TentacleClass, const struct FVector& SpawnLocation, class AAthenaCharacter* AthenaCharacter, float AnimPlayRate, float SuckingTellTime);
	void STATIC_SetTimeUntilNextKrakenSpawnAttempt(class UObject* WorldContextObject, float Time);
	void STATIC_RequestKrakenWithShip(class UObject* WorldContextObject, class AShip* ShipTarget);
	void STATIC_OverridePlayRateScaleInKrakenServiceParams(class UObject* WorldContextObject, float OverridePlayRateScale);
	void STATIC_OverrideNumberOfTentaclesSpawnedInKrakenServiceParams(class UObject* WorldContextObject, int OverrideNumberOfTentacles);
	void STATIC_OverrideNewTargetTimeoutInKrakenServiceParams(class UObject* WorldContextObject, float OverrideNewTargetTimeout);
	TArray<struct FVector> STATIC_GenerateKrakenSpawnLocationDistribution(TArray<struct FKrakenSpawnLocationExclusionZone> SeaRockExclusionZones, TArray<struct FKrakenSpawnLocationExclusionZone> IslandExclusionZones, float DistributionWidth, float DistributionHeight, float MinDistanceBetweenSamplePoints, int Seed, const struct FKrakenSpawnLocationParams& SpawnLocationParams);
};


// Class Athena.LadderBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULadderBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LadderBlueprintFunctionLibrary");
		return ptr;
	}


	struct FVector STATIC_GetRelativePositionAtHeight(const TScriptInterface<class ULadderInterface>& LadderInterface, float Height);
};


// Class Athena.OverlapTriggerComponent
// 0x0040 (0x06E0 - 0x06A0)
class UOverlapTriggerComponent : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x06A0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OverlapTriggerComponent");
		return ptr;
	}


	void OnActivationRegionOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnActivationRegionOverlapBegin(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class Athena.Landmark
// 0x0288 (0x06F8 - 0x0470)
class ALandmark : public AActor
{
public:
	unsigned char                                      UnknownData00[0x288];                                     // 0x0470(0x0288) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Landmark");
		return ptr;
	}


	void TriggerLandmarkReactionForNearbyPlayersExplicitList(int LandmarkReactionIndex, TArray<class AAthenaPlayerCharacter*> Players);
};


// Class Athena.LandmarkSphere
// 0x0008 (0x0700 - 0x06F8)
class ALandmarkSphere : public ALandmark
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkSphere");
		return ptr;
	}

};


// Class Athena.LandmarkBox
// 0x0008 (0x0700 - 0x06F8)
class ALandmarkBox : public ALandmark
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkBox");
		return ptr;
	}

};


// Class Athena.LandmarkCapsule
// 0x0008 (0x0700 - 0x06F8)
class ALandmarkCapsule : public ALandmark
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkCapsule");
		return ptr;
	}

};


// Class Athena.LandmarkReactionEvent
// 0x0000 (0x0028 - 0x0028)
class ULandmarkReactionEvent : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkReactionEvent");
		return ptr;
	}

};


// Class Athena.LandmarkReactionEventCallFunction
// 0x0040 (0x0068 - 0x0028)
class ULandmarkReactionEventCallFunction : public ULandmarkReactionEvent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkReactionEventCallFunction");
		return ptr;
	}

};


// Class Athena.LandmarkReactionEventCallInterfaceStartReaction
// 0x0010 (0x0038 - 0x0028)
class ULandmarkReactionEventCallInterfaceStartReaction : public ULandmarkReactionEvent
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkReactionEventCallInterfaceStartReaction");
		return ptr;
	}

};


// Class Athena.LandmarkReactionEventCallInterfaceStopReaction
// 0x0010 (0x0038 - 0x0028)
class ULandmarkReactionEventCallInterfaceStopReaction : public ULandmarkReactionEvent
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkReactionEventCallInterfaceStopReaction");
		return ptr;
	}

};


// Class Athena.LandmarkReactionEventPlayAudio
// 0x0010 (0x0038 - 0x0028)
class ULandmarkReactionEventPlayAudio : public ULandmarkReactionEvent
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkReactionEventPlayAudio");
		return ptr;
	}

};


// Class Athena.LandmarkReactionEventPlayForceFeedback
// 0x0020 (0x0048 - 0x0028)
class ULandmarkReactionEventPlayForceFeedback : public ULandmarkReactionEvent
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLandmarkReactionEventPlayForceFeedbackEntry> ForceFeedbackEntries;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkReactionEventPlayForceFeedback");
		return ptr;
	}

};


// Class Athena.LandmarkReactionEventStartCameraShake
// 0x0020 (0x0048 - 0x0028)
class ULandmarkReactionEventStartCameraShake : public ULandmarkReactionEvent
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShakeInnerRadius;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShakeOuterRadius;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkReactionEventStartCameraShake");
		return ptr;
	}

};


// Class Athena.LandmarkReactionEventStartParticleSystem
// 0x0020 (0x0048 - 0x0028)
class ULandmarkReactionEventStartParticleSystem : public ULandmarkReactionEvent
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ComponentName;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ComponentIndex;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkReactionEventStartParticleSystem");
		return ptr;
	}

};


// Class Athena.LandmarkReactionEventStopParticleSystem
// 0x0020 (0x0048 - 0x0028)
class ULandmarkReactionEventStopParticleSystem : public ULandmarkReactionEvent
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ComponentName;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ComponentIndex;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkReactionEventStopParticleSystem");
		return ptr;
	}

};


// Class Athena.LandmarkReactionPlayer
// 0x0078 (0x04E8 - 0x0470)
class ALandmarkReactionPlayer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0470(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LandmarkReactionPlayer");
		return ptr;
	}

};


// Class Athena.LiquidProjectile
// 0x0190 (0x06F8 - 0x0568)
class ALiquidProjectile : public ALaunchableProjectile
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0568(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LiquidProjectile");
		return ptr;
	}

};


// Class Athena.VomitProjectile
// 0x0018 (0x0710 - 0x06F8)
class AVomitProjectile : public ALiquidProjectile
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x06F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VomitProjectile");
		return ptr;
	}


	void SetImpactCallback(const struct FScriptDelegate& Callback);
	void STATIC_SetChannelToIgnoreInShip(TEnumAsByte<ECollisionChannel> Channel);
	class AVomitProjectile* STATIC_LaunchVomitProjectile(class AActor* Vomiter, const struct FName& LaunchSocketName, float Speed, float AdditionalLiftAngle, float Radius);
};


// Class Athena.LaunchedFromKrakenActionStateId
// 0x0000 (0x0028 - 0x0028)
class ULaunchedFromKrakenActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LaunchedFromKrakenActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoLaunchedFromKrakenActionState(class AActor* Character, class AActor* FiringActor, class AKrakenAnimatedTentacle* Tentacle);
	void STATIC_PopCharacterOutOfLaunchedFromKrakenActionState(class AActor* Character);
};


// Class Athena.LauncherParentInterface
// 0x0000 (0x0028 - 0x0028)
class ULauncherParentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LauncherParentInterface");
		return ptr;
	}


	TArray<class AActor*> GetProjectileIgnoreActors();
	struct FVector GetInheritedLaunchVelocity();
};


// Class Athena.LauncherParentMock
// 0x0018 (0x0488 - 0x0470)
class ALauncherParentMock : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0470(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LauncherParentMock");
		return ptr;
	}

};


// Class Athena.LeaveGhostShipActionStateId
// 0x0000 (0x0028 - 0x0028)
class ULeaveGhostShipActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LeaveGhostShipActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoLeaveGhostShipActionState(class AActor* Character);
};


// Class Athena.LightingControllerSettings
// 0x0300 (0x0328 - 0x0028)
class ULightingControllerSettings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UCurveFloat*                                 FogDensityCurve;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FogStartDistanceCurve;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LightIntensityCurve;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SkyDomeBrightnessCurve;                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SkyDomeMoonVisibilityCurve;                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SkyDomeStarBrightnessCurve;                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SkyDomeSunBrightnessCurve;                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PostLPVIntensityCurve;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PostExposureBiasCurve;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PostLPVOcclusionIntensityCurve;                           // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SkyLightIntensityCurve;                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FogBrightnessNearCurve;                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FogBrightnessFarCurve;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PostBloomIntensityCurve;                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PostBloomThresholdCurve;                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SkyDomeAuraBrightnessCurve;                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PostReflectionProbeBrightnessCurve;                       // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PostReflectionProbeShadowBrightnessCurve;                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 VfxControllerCurve;                                       // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FogMaxOpacityCurve;                                       // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FogScatterExpCurve;                                       // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FogUnderwaterDensityCurve;                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PostLensFlareIntensityCurve;                              // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 EmissiveFoliageCurve;                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 EmissiveLightsCurve;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PostExposureMinBrightnessCurve;                           // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PostExposureMaxBrightnessCurve;                           // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SkyDomeMoonBrightnessCurve;                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SkyDomeHorizonCloudBrightnessCurve;                       // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SkyDomeGreenFlashStrengthCurve;                           // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PostSaturationCurve;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PostContrastCurve;                                        // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CloudRimlightScaleCurve;                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CloudSkylightScaleCurve;                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CloudSunlightScaleCurve;                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CloudGlobalPressureCurve;                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PostUnderWaterBrightnessCurve;                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 VfxCloudBrightnessCurve;                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LightGodRayIntensityCurve;                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CloudBottomBrightnessCurve;                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CloudSunlightShadowingCurve;                              // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SunDiscScaleCurve;                                        // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 WaterSpecularBrightnessCurve;                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 VfxAmbientScaleCurve;                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CloudShadowBrightnessCurve;                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StormCloudShadowBrightnessCurve;                          // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StormPostBloomIntensityCurve;                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StormPostBloomThresholdCurve;                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DirectionalLightShadowSteppingRateCurve;                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SkullBrightnessCurve;                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           FogColourAwayCurve;                                       // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           FogColourTowardsCurve;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           LightSunColourCurve;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           SkyDomeHorizonColourCurve;                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           SkyDomeZenithColourCurve;                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           SkyLightColourCurve;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           PostAmbientShadowColourCurve;                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           FogColourAwayFarCurve;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           FogColourUnderwaterCurve;                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           FogColourAwayUnderwaterCurve;                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           WaterColourCurve;                                         // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           WaterColourShallowCurve;                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           WaterBackLitColourCurve;                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           WaterFoamColourCurve;                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           WaterFoamHighlightColourCurve;                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           WaterAmbientColourCurve;                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           PostReflectionProbeTintCurve;                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           CloudRimlightColourCurve;                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           CloudSkylightColourCurve;                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           CloudSunlightColourCurve;                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           PostUnderWaterTintCurve;                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           SkyDomeMoonColourCurve;                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           PostGammaCurve;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           SkyDomeSunColourCurve;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           VFXFoamColourCurve;                                       // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           VFXWindColourCurve;                                       // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           VFXUnderwaterTintCurve;                                   // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           StormRainColourCurve;                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           StormSkyLightColourCurve;                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           StormPostGammaCurve;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           StormFogColourUnderwaterCurve;                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           StormFogColourAwayUnderwaterCurve;                        // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           StormWaterColourCurve;                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           StormWaterColourShallowCurve;                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           StormWaterBackLitColourCurve;                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           StormWaterFoamColourCurve;                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           StormWaterFoamHighlightColourCurve;                       // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           StormWaterAmbientColourCurve;                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           StormPostReflectionProbeTintCurve;                        // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveLinearColor*                           SkullEyeColourCurve;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SandColourStatic;                                         // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogUnderwaterMaxOpacityStatic;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogUnderwaterScatterExpStatic;                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogUnderwaterStartDistanceStatic;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogUnderwaterBrightnessNearStatic;                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogUnderwaterBrightnessFarStatic;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogDirectionalInscatteringStartStatic;                    // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x141];                                     // 0x01E7(0x0141) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LightingControllerSettings");
		return ptr;
	}


	struct FLightingControllerSettingsOutput STATIC_GetOutput(class ULightingControllerSettings* Settings, float Input);
};


// Class Athena.LightingZoneInterface
// 0x0000 (0x0028 - 0x0028)
class ULightingZoneInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LightingZoneInterface");
		return ptr;
	}


	struct FLightingZoneParametersAndLocation GetLightingZoneParameters();
};


// Class Athena.RainZoneInterface
// 0x0000 (0x0028 - 0x0028)
class URainZoneInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RainZoneInterface");
		return ptr;
	}


	struct FRainZoneParametersAndLocation GetRainZoneParametersAtTime(double InTime);
	struct FRainZoneParametersAndLocation GetRainZoneParameters();
};


// Class Athena.LightingController
// 0x0950 (0x0DC0 - 0x0470)
class ALightingController : public AThreadedActor
{
public:
	unsigned char                                      UnknownData00[0x950];                                     // 0x0470(0x0950) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LightingController");
		return ptr;
	}


	bool IsPlayingInEditor();
	bool IsPlayerInBoatSpace();
	TArray<struct FLightingZoneBlendValues> GetZoneWeights();
	float GetRainWeight();
};


// Class Athena.LightingZoneComponent
// 0x0020 (0x0310 - 0x02F0)
class ULightingZoneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LightingZoneComponent");
		return ptr;
	}

};


// Class Athena.LightingZoneServiceInterface
// 0x0000 (0x0028 - 0x0028)
class ULightingZoneServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LightingZoneServiceInterface");
		return ptr;
	}


	void UnregisterLightingZoneFromService(const TScriptInterface<class ULightingZoneInterface>& LightingZone);
	void RegisterLightingZoneWithService(const TScriptInterface<class ULightingZoneInterface>& LightingZone);
	int GetNumberOfLightingZones();
	struct FLightingZoneParametersAndLocation GetLightingZone(int LightingZoneIndex);
	TArray<struct FLightingZoneParametersAndLocation> GetAllLightingZones();
};


// Class Athena.LightingZoneService
// 0x0018 (0x0040 - 0x0028)
class ULightingZoneService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LightingZoneService");
		return ptr;
	}

};


// Class Athena.LimpingComponent
// 0x00C8 (0x0198 - 0x00D0)
class ULimpingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              TimeUntilSelfHeal;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LimpStickDeflectionCurve;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LimpCameraCurve;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumAntiCheatSamplesOnServer;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAveragePlayerSpeedServerTolerance;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinLimpStrengthToCrossToPlayRumbleAndSfx;                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PredictionValidityTime;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinStickDeflectionToLimp;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UForceFeedbackEffect*                        LimpCrunchRumble;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraSpringAccel;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CamPitchScalar;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CamRollScalar;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 LocalBrokenLegAudioStateEvent;                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DelayUntilStartCheatDetection;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CheatTimeThresholdToApplyServerPenalty;                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveSpeedScalarIfCheating;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CheatTimerDecaySpeed;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CheatPenaltyTime;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CheatPunishmentIncreasePerViolation;                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AAthenaPlayerCharacter*                      Player;                                                   // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsLimping;                                               // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LimpingComponent");
		return ptr;
	}


	void TestForceLimpingOffLocally();
	void StartLimping();
	void PredictStartLimping();
	void OnRep_IsLimping();
	bool IsLimpingPredicted();
	bool IsLimping();
	bool GetHasActiveCameraModifiers();
	float GetCheatPenaltyTimeLeft();
};


// Class Athena.LimpingTestActor
// 0x0008 (0x0478 - 0x0470)
class ALimpingTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LimpingTestActor");
		return ptr;
	}

};


// Class Athena.LiquidContainerInterface
// 0x0000 (0x0028 - 0x0028)
class ULiquidContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LiquidContainerInterface");
		return ptr;
	}


	void SetLiquidLevel(float Level);
	float GetWantedLiquidLevel();
	float GetLiquidLevel();
};


// Class Athena.LiquidContainerComponent
// 0x0060 (0x0130 - 0x00D0)
class ULiquidContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FName                                       LiquidMaterialName;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LiquidMaterialParameterName;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FLiquidTypeParams>                   LiquidTypeParams;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              StartingLiquidLevelNormalised;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TransitionCurve;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TransitionSpeedDecrease;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransitionSpeedIncrease;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            LiquidMaterials;                                          // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LiquidContainerComponent");
		return ptr;
	}


	void SetLiquidType(TEnumAsByte<ELiquidType> LiquidType);
	void SetLiquidLevel(float Level);
	float GetLiquidLevel();
	void CollectLiquidMaterials(class UMeshComponent* MeshComponent);
};


// Class Athena.LiquidContainerTestMaterial
// 0x0000 (0x0A60 - 0x0A60)
class ULiquidContainerTestMaterial : public UMaterial
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LiquidContainerTestMaterial");
		return ptr;
	}

};


// Class Athena.LoadableInterface
// 0x0000 (0x0028 - 0x0028)
class ULoadableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LoadableInterface");
		return ptr;
	}


	bool IsLoaded();
	bool CanBeUnloaded();
	bool CanBeLoaded();
};


// Class Athena.LoadableComponent
// 0x0120 (0x01F0 - 0x00D0)
class ULoadableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              LoadTime;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnloadTime;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DefaultObjectToLoad;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  UnloadingPoint;                                           // 0x01E3(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ELoadableState>                        LoadableState;                                            // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	class UObject*                                     LoadedItem;                                               // 0x01E3(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysLoaded;                                             // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELoadableState>                        ClientPredictedLoadableState;                             // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x01E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LoadableComponent");
		return ptr;
	}


	void OnRepLoadedItem(class UObject* PrevLoadedItem);
	void OnRepLoadableState(TEnumAsByte<ELoadableState> PrevLoadableState);
};


// Class Athena.LoadItemActionStateId
// 0x0000 (0x0028 - 0x0028)
class ULoadItemActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LoadItemActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoLoadItemActionState(class AActor* Character, class AActor* LoadableActor, class AActor* Interactable, class UClass* DefaultItemDesc);
	void STATIC_PopCharacterOutOfLoadItemActionState(class AActor* Character);
};


// Class Athena.LoadoutAsset
// 0x0030 (0x0058 - 0x0028)
class ULoadoutAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LoadoutAsset");
		return ptr;
	}

};


// Class Athena.LoadoutControlInterface
// 0x0000 (0x0028 - 0x0028)
class ULoadoutControlInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LoadoutControlInterface");
		return ptr;
	}


	bool IsRequestLoadoutCompleted();
};


// Class Athena.LoadoutServiceInterface
// 0x0000 (0x0028 - 0x0028)
class ULoadoutServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LoadoutServiceInterface");
		return ptr;
	}

};


// Class Athena.LoadoutComponent
// 0x0038 (0x0108 - 0x00D0)
class ULoadoutComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	bool                                               HaveSourcedLoadout;                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELoadoutPersistence>                   LoadoutPersistence;                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LoadoutComponent");
		return ptr;
	}

};


// Class Athena.LoadoutService
// 0x0808 (0x0830 - 0x0028)
class ULoadoutService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x808];                                     // 0x0028(0x0808) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LoadoutService");
		return ptr;
	}

};


// Class Athena.LoadoutSettings
// 0x0040 (0x0068 - 0x0028)
class ULoadoutSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FStringAssetReference                       DefaultLoadoutAsset;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       InitialLoadoutAsset;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)
	struct FStringAssetReference                       FallbackLoadoutAsset;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LoadoutSettings");
		return ptr;
	}

};


// Class Athena.LoadPlayerActionStateId
// 0x0000 (0x0028 - 0x0028)
class ULoadPlayerActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LoadPlayerActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoLoadPlayerActionState(class AActor* InCharacter, class AActor* InLoadable, class AActor* InInteractable);
};


// Class Athena.LocationProviderInterface
// 0x0000 (0x0028 - 0x0028)
class ULocationProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LocationProviderInterface");
		return ptr;
	}

};


// Class Athena.LocationType
// 0x0000 (0x0028 - 0x0028)
class ULocationType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LocationType");
		return ptr;
	}

};


// Class Athena.KrakenLocationType
// 0x0000 (0x0028 - 0x0028)
class UKrakenLocationType : public ULocationType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenLocationType");
		return ptr;
	}

};


// Class Athena.LocationProviderServiceInterface
// 0x0000 (0x0028 - 0x0028)
class ULocationProviderServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LocationProviderServiceInterface");
		return ptr;
	}

};


// Class Athena.LocationProviderService
// 0x0018 (0x0040 - 0x0028)
class ULocationProviderService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LocationProviderService");
		return ptr;
	}

};


// Class Athena.LockOnCameraModifier
// 0x0030 (0x0078 - 0x0048)
class ULockOnCameraModifier : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	class ULockOnCameraModifierSettings*               Settings;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsYawLocked;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               OwnerInputsIgnored;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LockOnCameraModifier");
		return ptr;
	}

};


// Class Athena.LockOnCameraModifierSettings
// 0x0040 (0x0068 - 0x0028)
class ULockOnCameraModifierSettings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               BlockLowerPriorityCameraModifiers;                        // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DisablePlayerInputDuringLockOn;                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocketName;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              YawSnapStrength;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchSnapStrength;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinYawLerpSpeed;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               LockOnScaledByInput;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InputYawToScaleTo;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InputTowardsTarget_LockOnScale;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ZeroInput_LockOnScale;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InputAwayFromTarget_LockOnScale;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AutoLockAllowed;                                          // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               LimitLockOnByInput;                                       // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InputAwayFromTarget_LockOnClampMultiplier;                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOutEnabled;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FullLockDuration;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LockOnCameraModifierSettings");
		return ptr;
	}

};


// Class Athena.LocomotionActionStateId
// 0x0000 (0x0028 - 0x0028)
class ULocomotionActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LocomotionActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoLocomotionActionState(class AActor* Character);
};


// Class Athena.LocomotionCompositeInputHandler
// 0x0238 (0x0310 - 0x00D8)
class ULocomotionCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x10B];                                     // 0x00D8(0x010B) MISSED OFFSET
	float                                              BaseTurnRate;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              BaseLookUpRate;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class AActor*                                      Owner;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x125];                                     // 0x01EB(0x0125) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LocomotionCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnWalkActivate();
	TEnumAsByte<EInputHandlerResult> OnTurnRate(float Value);
	TEnumAsByte<EInputHandlerResult> OnTurn(float Value);
	TEnumAsByte<EInputHandlerResult> OnToggleItem();
	TEnumAsByte<EInputHandlerResult> OnSprintActivate();
	TEnumAsByte<EInputHandlerResult> OnSecondaryItemUseReleased();
	TEnumAsByte<EInputHandlerResult> OnSecondaryItemUsePressed();
	TEnumAsByte<EInputHandlerResult> OnQuickSwitchWeapon();
	TEnumAsByte<EInputHandlerResult> OnQuickSwitchSecondaryWeapon();
	TEnumAsByte<EInputHandlerResult> OnQuickSwitchPrimaryWeapon();
	TEnumAsByte<EInputHandlerResult> OnQuickSelectItemOfCategory(class UClass* Category, int IndexIntoCategory);
	TEnumAsByte<EInputHandlerResult> OnQuickCycleToWoodPlank();
	TEnumAsByte<EInputHandlerResult> OnQuickCycleToTankard();
	TEnumAsByte<EInputHandlerResult> OnQuickCycleToSpyglass();
	TEnumAsByte<EInputHandlerResult> OnQuickCycleToShovel();
	TEnumAsByte<EInputHandlerResult> OnQuickCycleToPocketWatch();
	TEnumAsByte<EInputHandlerResult> OnQuickCycleToLantern();
	TEnumAsByte<EInputHandlerResult> OnQuickCycleToInstrument();
	TEnumAsByte<EInputHandlerResult> OnQuickCycleToFruit();
	TEnumAsByte<EInputHandlerResult> OnQuickCycleToCompass();
	TEnumAsByte<EInputHandlerResult> OnQuickCycleToCannonball();
	TEnumAsByte<EInputHandlerResult> OnQuickCycleToBucket();
	TEnumAsByte<EInputHandlerResult> OnQuickCycleItemsOfCategory(class UClass* Category);
	TEnumAsByte<EInputHandlerResult> OnPrimaryItemUseReleased();
	TEnumAsByte<EInputHandlerResult> OnPrimaryItemUsePressed();
	TEnumAsByte<EInputHandlerResult> OnMoveRight(float Value);
	TEnumAsByte<EInputHandlerResult> OnMoveForward(float Value);
	TEnumAsByte<EInputHandlerResult> OnLookUpRate(float Value);
	TEnumAsByte<EInputHandlerResult> OnLookUp(float Value);
	TEnumAsByte<EInputHandlerResult> OnJump();
	TEnumAsByte<EInputHandlerResult> OnDropLargeWieldedItem();
	TEnumAsByte<EInputHandlerResult> OnCycleItemUp();
	TEnumAsByte<EInputHandlerResult> OnCycleItemDown();
};


// Class Athena.LookAtOffsetCompositeInputHandler
// 0x0048 (0x0120 - 0x00D8)
class ULookAtOffsetCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00D8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LookAtOffsetCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnYawRate(float Value);
	TEnumAsByte<EInputHandlerResult> OnYaw(float Value);
	TEnumAsByte<EInputHandlerResult> OnPitchRate(float Value);
	TEnumAsByte<EInputHandlerResult> OnPitch(float Value);
};


// Class Athena.ControlIntentCompositeInputHandler
// 0x0020 (0x0140 - 0x0120)
class UControlIntentCompositeInputHandler : public ULookAtOffsetCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0xC3];                                      // 0x0120(0x00C3) MISSED OFFSET
	class UControllableIntentComponent*                ControlledObject;                                         // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControlIntentCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnRightTriggerAnalog(float Value);
	TEnumAsByte<EInputHandlerResult> OnChangeIntent(float Value);
};


// Class Athena.ControlWheelCompositeInputHandler
// 0x0020 (0x0140 - 0x0120)
class UControlWheelCompositeInputHandler : public ULookAtOffsetCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0xC3];                                      // 0x0120(0x00C3) MISSED OFFSET
	class AWheel*                                      Wheel;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ControlWheelCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnRightTrigger(float Value);
	TEnumAsByte<EInputHandlerResult> OnMoveRight(float Value);
};


// Class Athena.UseLadderCompositeInputHandler
// 0x0018 (0x0138 - 0x0120)
class UUseLadderCompositeInputHandler : public ULookAtOffsetCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0120(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UseLadderCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnClimbLadder(float Value);
};


// Class Athena.LookAtOffsetFunctions
// 0x0000 (0x0028 - 0x0028)
class ULookAtOffsetFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LookAtOffsetFunctions");
		return ptr;
	}


	bool STATIC_IsLookAtEnabled(const struct FLookAtOffset& LookAtOffset);
	float STATIC_GetLookAtYaw(const struct FLookAtOffset& LookAtOffset);
	struct FVector STATIC_GetLookAtWorldLocation(const struct FLookAtOffset& LookAtOffset);
	float STATIC_GetLookAtPitch(const struct FLookAtOffset& LookAtOffset);
	void STATIC_AddYawInput(float YawInput, struct FLookAtOffset* LookAtOffset);
	void STATIC_AddPitchInput(float PitchInput, struct FLookAtOffset* LookAtOffset);
};


// Class Athena.LookUpAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class ULookUpAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LookUpAnalogInputId");
		return ptr;
	}

};


// Class Athena.LookUpRateAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class ULookUpRateAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LookUpRateAnalogInputId");
		return ptr;
	}

};


// Class Athena.LookUpRateWithFixedSensitivityAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class ULookUpRateWithFixedSensitivityAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LookUpRateWithFixedSensitivityAnalogInputId");
		return ptr;
	}

};


// Class Athena.LostTargetAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class ULostTargetAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LostTargetAIStrategyId");
		return ptr;
	}

};


// Class Athena.LPVReferenceFrameAdaptationFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULPVReferenceFrameAdaptationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LPVReferenceFrameAdaptationFunctionLibrary");
		return ptr;
	}


	void STATIC_TickLPVAdaptation(float InDeltaTime, struct FLPVAdaptationState* InOutLPVAdaptationState, struct FPostProcessSettings* InOutPostProcessSettings, struct FTransform* InCurrentShipTransform);
	void STATIC_SetLPVAdaptationState(bool bInIsPlayerInLPVRefFrameArea, struct FLPVAdaptationState* InOutLPVAdaptationState, struct FVector* InPlayerPawnLocation, struct FTransform* InCurrentShipTransform);
	void STATIC_InitializeLPVAdaptationStateDefaultOptions(TEnumAsByte<ELPVAdaptationType> InAdaptationType, float InRotationBlendTime, float InTranslationBlendTime, float InAdditionalBlendTime, struct FLPVAdaptationState* InOutLPVAdaptationState);
};


// Class Athena.MapTable
// 0x0160 (0x05D0 - 0x0470)
class AMapTable : public AActor
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0470(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapTable");
		return ptr;
	}


	void Server_SetPins(TArray<struct FVector2D> InMapPins);
	void Server_MoveMap(const struct FVector2D& CentreLocation, float ZoomLevel);
	void Server_LeaveTable(class AActor* Controller);
	void Server_JoinTable(class AActor* Controller);
	void OnRep_ZoomLevel();
	void OnRep_MapPins();
	void OnRep_CentreLocation();
	void OnMapMove(const struct FVector2D& CentreLocation, float ZoomLevel);
	void OnMapActivate(bool IsMapActive, class UTextureRenderTarget2D* Texture);
};


// Class Athena.MapTablePanXAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UMapTablePanXAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapTablePanXAnalogInputId");
		return ptr;
	}

};


// Class Athena.MapTablePanYAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UMapTablePanYAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapTablePanYAnalogInputId");
		return ptr;
	}

};


// Class Athena.MapTableZoomInAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UMapTableZoomInAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapTableZoomInAnalogInputId");
		return ptr;
	}

};


// Class Athena.MapTableZoomOutAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UMapTableZoomOutAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapTableZoomOutAnalogInputId");
		return ptr;
	}

};


// Class Athena.MapTablePanXMouseInputId
// 0x0000 (0x0030 - 0x0030)
class UMapTablePanXMouseInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapTablePanXMouseInputId");
		return ptr;
	}

};


// Class Athena.MapTablePanYMouseInputId
// 0x0000 (0x0030 - 0x0030)
class UMapTablePanYMouseInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapTablePanYMouseInputId");
		return ptr;
	}

};


// Class Athena.MapTableZoomMouseInputId
// 0x0000 (0x0030 - 0x0030)
class UMapTableZoomMouseInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapTableZoomMouseInputId");
		return ptr;
	}

};


// Class Athena.MapTableTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UMapTableTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapTableTestFunctions");
		return ptr;
	}


	void STATIC_ZoomOut(class AMapTable* MapTable, float ZoomValue);
	void STATIC_ZoomIn(class AMapTable* MapTable, float ZoomValue);
	void STATIC_SetMinZoom(class AMapTable* MapTable, float MinValue);
	void STATIC_SetMinPan(class AMapTable* MapTable, const struct FVector2D& MinValue);
	void STATIC_SetMaxZoom(class AMapTable* MapTable, float MaxValue);
	void STATIC_SetMaxPan(class AMapTable* MapTable, const struct FVector2D& MaxValue);
	void STATIC_PanY(class AMapTable* MapTable, float PanValue);
	void STATIC_PanX(class AMapTable* MapTable, float PanValue);
	bool STATIC_IsUnderLocalControl(class AMapTable* MapTable);
	bool STATIC_IsLocationDirty(class AMapTable* MapTable);
	class AMapTableControlPoint* STATIC_GetControlPoint(class AMapTable* MapTable, int PointIndex);
	void STATIC_ConsumeLocationChange(class AMapTable* MapTable, struct FWorldMapSetLocation* Event);
};


// Class Athena.MapTableTogglePinNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UMapTableTogglePinNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapTableTogglePinNotificationInputId");
		return ptr;
	}

};


// Class Athena.MastAudioParams
// 0x0058 (0x0080 - 0x0028)
class UMastAudioParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseEvent*                                 PlaySailLength;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopSailLength;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlaySailLengthStopTop;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlaySailLengthStopBottom;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RtpcSailCompletion;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinCompletionValue;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxCompletionValue;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlaySailAngle;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopSailAngle;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlaySailAngleStopLimit;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RtpcSailAngle;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAngleValue;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MastAudioParams");
		return ptr;
	}

};


// Class Athena.MastDescAsset
// 0x0030 (0x0058 - 0x0028)
class UMastDescAsset : public UShipPartDescAsset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MastDescAsset");
		return ptr;
	}

};


// Class Athena.MastAnimInterface
// 0x0000 (0x0028 - 0x0028)
class UMastAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MastAnimInterface");
		return ptr;
	}


	void SetMastAngle(float Angle);
	void InitializeMast(float FallingLimit);
};


// Class Athena.MaterialInformationInterface
// 0x0000 (0x0028 - 0x0028)
class UMaterialInformationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MaterialInformationInterface");
		return ptr;
	}

};


// Class Athena.MaterialInformationService
// 0x0030 (0x0058 - 0x0028)
class UMaterialInformationService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UDataTable*                                  MaterialTranslationTable;                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  MaterialAudioTable;                                       // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MaterialInformationService");
		return ptr;
	}

};


// Class Athena.MaterialInformationServiceBlueprintFunctions
// 0x0000 (0x0028 - 0x0028)
class UMaterialInformationServiceBlueprintFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MaterialInformationServiceBlueprintFunctions");
		return ptr;
	}


	bool STATIC_GetVFXInformationForSurface(class UObject* WorldContextObject, TEnumAsByte<EPhysicalSurface> SurfaceType, struct FMaterialInformationVFXData* VFXSurfaceData);
	bool STATIC_GetAudioInformationForSurface(class UObject* WorldContextObject, TEnumAsByte<EPhysicalSurface> SurfaceType, struct FMaterialInformationAudioData* AudioSurfaceData);
};


// Class Athena.MatineeUtility
// 0x00E0 (0x0550 - 0x0470)
class AMatineeUtility : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0470(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MatineeUtility");
		return ptr;
	}


	void Multicast_BroadcastStop(class AMatineeActor* MatineeActor);
	void Multicast_BroadcastSetPosition(class AMatineeActor* MatineeActor, float InterpolationPosition, bool Jump);
	void Multicast_BroadcastPlay(class AMatineeActor* MatineeActor);
	void HandleCharacterEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void HandleCharacterDestroyed();
	void BroadcastStop(class AMatineeActor* MatineeActor);
	void BroadcastSetPosition(class AMatineeActor* MatineeActor, float InterpolationPosition, bool Jump);
	void BroadcastPlay(class AMatineeActor* MatineeActor);
};


// Class Athena.MeleeAttackDataAsset
// 0x01A0 (0x01C8 - 0x0028)
class UMeleeAttackDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       AttackName;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WarmUpDuration;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StrikeDuration;                                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoverMissDuration;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoverHitDuration;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LungeMoveStartTime;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LungeMoveDuration;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LungeMoveMaxSpeed;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeleeWeaponMovementSpeed>             AttackMoveSpeed;                                          // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AttackMoveSpeedDeactivationAllowedWindow;                 // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ComboTime;                                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DefenderKnockbackEnabled;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKnockBackInfo                              DefenderKnockback;                                        // 0x01E3(0x0034) (Edit)
	bool                                               DefenderKnockbackWhenBlockingEnabled;                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKnockBackInfo                              DefenderKnockbackWhenBlocking;                            // 0x01E3(0x0034) (Edit)
	bool                                               AttackerKnockbackEnabled;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKnockBackInfo                              AttackerKnockback;                                        // 0x01E3(0x0034) (Edit)
	bool                                               AttackerKnockbackWhenBlockingEnabled;                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKnockBackInfo                              AttackerKnockbackWhenBlocking;                            // 0x01E3(0x0034) (Edit)
	bool                                               LockOnEnabled;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAttackTimingWindow                         UninterruptableWindow;                                    // 0x01E3(0x0008) (Edit)
	float                                              HitStartRange;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitEndRange;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitStartAngle;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitAngleDelta;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitSphereRadius;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitTimeOffset;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitDuration;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackDamage;                                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamagerType;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsUnblockable;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StunOnMiss;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FStunAttackerOnHitSurfacePair>       StunAttackerOnHitSurfaces;                                // 0x01E3(0x0010) (Edit, ZeroConstructor)
	bool                                               StunOnHit;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StunOnHitDuration;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWieldableItemComplexOneShotAnimType>  AnimationLookupType;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           AnimationLookupIndex;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ImpactId;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AttackerHitLandedCameraShake;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UForceFeedbackEffect*                        AttackerHitLandedForceFeedbackEffect;                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefenderHitReceivedCameraShake;                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UForceFeedbackEffect*                        DefenderHitReceivedForceFeedbackEffect;                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClampYawRange;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MeleeAttackDataAsset");
		return ptr;
	}

};


// Class Athena.MeleeAttackFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMeleeAttackFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MeleeAttackFunctionLibrary");
		return ptr;
	}

};


// Class Athena.MeleeAttackLockOnComponentSettings
// 0x0018 (0x0040 - 0x0028)
class UMeleeAttackLockOnComponentSettings : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class ULockOnCameraModifierSettings*               CameraModifierSettings;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BreakDistance;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DelayTargetEvaluationUntilEndOfStrike;                    // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowTargetSwitching;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLockOnAngle;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MeleeAttackLockOnComponentSettings");
		return ptr;
	}

};


// Class Athena.MeleeAttackLockOnComponent
// 0x01B0 (0x0280 - 0x00D0)
class UMeleeAttackLockOnComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UMeleeAttackLockOnComponentSettings*         ComponentSettings;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ULockOnCameraModifier*                       LockOnCameraModifier;                                     // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AAthenaCharacter>             TargetCharacter;                                          // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<TWeakObjectPtr<class AAthenaCharacter>>     PotentialTargets;                                         // 0x01E3(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8D];                                      // 0x01F3(0x008D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MeleeAttackLockOnComponent");
		return ptr;
	}

};


// Class Athena.MeleeAttackProcessorComponent
// 0x0118 (0x01E8 - 0x00D0)
class UMeleeAttackProcessorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FMeleeAttackHitResponses                    PredictiveHitResponses;                                   // 0x01E3(0x0001) (Edit)
	struct FMeleeAttackHitResponses                    ValidatedHitResponses;                                    // 0x01E3(0x0001) (Edit)
	struct FMeleeAttackHitResponses                    AuthoritativeHitResponses;                                // 0x01E3(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MeleeAttackProcessorComponent");
		return ptr;
	}


	void Multicast_RespondToHit(const struct FMeleeAttackHitResponseData& HitResponseData);
	void Client_AttackCompleted(class UMeleeAttackDataAsset* AttackCompleted);
};


// Class Athena.MeleeAttackProcessorComponentMock
// 0x0000 (0x01E8 - 0x01E8)
class UMeleeAttackProcessorComponentMock : public UMeleeAttackProcessorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MeleeAttackProcessorComponentMock");
		return ptr;
	}

};


// Class Athena.MeleeBlockingActionStateId
// 0x0000 (0x0028 - 0x0028)
class UMeleeBlockingActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MeleeBlockingActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoMeleeBlockingActionState(class AActor* Character, class UClass* InputID, float BlockMovementTime);
	void STATIC_PopCharacterOutOfMeleeBlockingActionState(class AActor* Character);
};


// Class Athena.MeleeBlockingCompositeInputHandler
// 0x0018 (0x00F0 - 0x00D8)
class UMeleeBlockingCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MeleeBlockingCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnDodge();
};


// Class Athena.MeleeWeaponMovementSpeedConfig
// 0x0010 (0x0038 - 0x0028)
class UMeleeWeaponMovementSpeedConfig : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MeleeWeaponMovementSpeedConfig");
		return ptr;
	}

};


// Class Athena.MeleeWeaponDataAsset
// 0x0060 (0x0088 - 0x0028)
class UMeleeWeaponDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UMeleeWeaponMovementSpeedConfig*             MovementSpeedConfig;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMeleeAttackDataAsset*>               ComboAttacks;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UMeleeAttackDataAsset*                       HeavyAttack;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeavyAttackChargeDuration;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FItemBlockingParameters                     BlockingParameters;                                       // 0x01E3(0x0004) (Edit)
	class UPhysicalMaterial*                           BlockingPhysicalMaterial;                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeleeWeaponMovementSpeed>             BlockingMovementSpeed;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitBlockingMovementDisableTime;                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TrailParticleSystem_FP;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TrailParticleSystem_TP;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TrailStartSocketName;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       TrailEndSocketName;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrailWidthMode>                       TrailWidthMode;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MeleeWeaponDataAsset");
		return ptr;
	}

};


// Class Athena.MeleeWeaponFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMeleeWeaponFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MeleeWeaponFunctionLibrary");
		return ptr;
	}

};


// Class Athena.MemoryTestPawn
// 0x0020 (0x04F0 - 0x04D0)
class AMemoryTestPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MemoryTestPawn");
		return ptr;
	}


	void Server_SetActorLocationAndRotation(const struct FVector& Location, const struct FRotator& Rotation);
	bool IsFinished();
};


// Class Athena.MenuInputHandler
// 0x0040 (0x0118 - 0x00D8)
class UMenuInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00D8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MenuInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnOpenQuickMenu();
	TEnumAsByte<EInputHandlerResult> OnOpenEscapeMenu();
};


// Class Athena.MerchantCrateProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UMerchantCrateProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantCrateProviderInterface");
		return ptr;
	}


	void CollectCrate(class AActor* Player, class UClass* CrateDesc);
};


// Class Athena.MerchantCrateProviderComponent
// 0x0008 (0x00D8 - 0x00D0)
class UMerchantCrateProviderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantCrateProviderComponent");
		return ptr;
	}

};


// Class Athena.MerchantMapLayout
// 0x00B0 (0x00D8 - 0x0028)
class UMerchantMapLayout : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FTreasureMapWidgetText                      PickupLocation;                                           // 0x01E3(0x0020) (Edit, BlueprintVisible)
	struct FTreasureMapWidgetText                      DeliveryLocation;                                         // 0x01E3(0x0020) (Edit, BlueprintVisible)
	struct FTreasureMapWidgetText                      DeliverByTime;                                            // 0x01E3(0x0020) (Edit, BlueprintVisible)
	TArray<struct FMerchantMapLayoutItem>              Items;                                                    // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTreasureMapWidgetText                      MinHaul;                                                  // 0x01E3(0x0020) (Edit, BlueprintVisible)
	TArray<struct FTreasureMapWidgetTexture>           Images;                                                   // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantMapLayout");
		return ptr;
	}

};


// Class Athena.MerchantQuestData
// 0x0010 (0x0038 - 0x0028)
class UMerchantQuestData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UPopUpMessageDesc*                           ContractCompletePopupDesc;                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantQuestData");
		return ptr;
	}

};


// Class Athena.MerchantQuestDescData
// 0x00A8 (0x00D0 - 0x0028)
class UMerchantQuestDescData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class UClass*>                              AllMerchantCrates;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              AllMerchantCargo;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<TAssetPtr<class UClass>>                    AllFauna;                                                 // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<class UMerchantMapLayout*>                  MerchantMapLayouts;                                       // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FText                                       DeliverByTimeTextFormat;                                  // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01F3(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FText>                               DeliverByTimeHourFormat;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               DeliverByTimeDayFormat;                                   // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UPopUpMessageDesc*                           CollectCratesFromTraderPopupDesc;                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantQuestDescData");
		return ptr;
	}

};


// Class Athena.MerchantQuestItemData
// 0x0048 (0x0070 - 0x0028)
class UMerchantQuestItemData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UMerchantQuestItemPluralisationData*         DisplayNameLookup;                                        // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRewardId                                   HandInOnTimeRewardId;                                     // 0x01E3(0x0008) (Edit, BlueprintVisible)
	struct FRewardId                                   HandInNotOnTimeRewardId;                                  // 0x01E3(0x0008) (Edit, BlueprintVisible)
	class UClass*                                      CrateDesc;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    IconImage;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FaunaSpecies;                                             // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FaunaBreed;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPopUpMessageDesc*                           CrateFilledPopupDesc;                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantQuestItemData");
		return ptr;
	}

};


// Class Athena.MerchantQuestItemPluralisationData
// 0x0010 (0x0038 - 0x0028)
class UMerchantQuestItemPluralisationData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantQuestItemPluralisationData");
		return ptr;
	}

};


// Class Athena.MerchantQuestRequiredItemsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UMerchantQuestRequiredItemsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantQuestRequiredItemsDataAsset");
		return ptr;
	}

};


// Class Athena.MermaidPartsDesc
// 0x0030 (0x0058 - 0x0028)
class UMermaidPartsDesc : public UAIPartsDesc
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FStringAssetReference                       Mesh;                                                     // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       PlaySongEvent;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MermaidPartsDesc");
		return ptr;
	}

};


// Class Athena.MermaidServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UMermaidServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MermaidServiceInterface");
		return ptr;
	}


	void SpawnMermaidForCrewWhoLostShip(const struct FGuid& CrewId, const struct FVector& LostShipPos);
	void DebugEnableMermaidSpawning(bool Flag);
};


// Class Athena.MermaidService
// 0x0118 (0x0588 - 0x0470)
class AMermaidService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0470(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MermaidService");
		return ptr;
	}


	void SetParams(const struct FMermaidServiceParams& P);
	bool IsMermaidActive(class AMermaid* M);
	struct FMermaidServiceParams GetParams();
	int GetNumActiveMermaids();
};


// Class Athena.MetalAIFormComponent
// 0x0098 (0x01E0 - 0x0148)
class UMetalAIFormComponent : public UAthenaAIFormComponent
{
public:
	unsigned char                                      UnknownData00[0x9B];                                      // 0x0148(0x009B) MISSED OFFSET
	class UParticleSystem*                             RustyParticlesTemplate;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCharacterAudioFootfallControllerParams*     DefaultFootfallParams;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCharacterAudioFootfallControllerParams*     RustyFootfallParams;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UMaterial>                         MetalBaseMaterial;                                        // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FName                                       RustShaderParamName;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NotRustyShaderParamValue;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RustyShaderParamValue;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShaderParamBlendSpeed;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SeedShaderParamName;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxSeedShaderValue;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWet;                                                    // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RustyParticleSystemComponent;                             // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDamageableVulnerabilityLayer*               DefaultVulnerabilityLayer;                                // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UDamageableVulnerabilityLayer*               RustyVulnerabilityLayer;                                  // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCharacterHitReactionDamagerTypeToAnimTypeLayer* RustyHitReactionsLayer;                                   // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MetalDynamicMaterialInstance;                             // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MetalAIFormComponent");
		return ptr;
	}


	void OnRep_IsWet();
};


// Class Athena.MetalAIFormDataAsset
// 0x0020 (0x0088 - 0x0068)
class UMetalAIFormDataAsset : public UAthenaAIFormDataAsset
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	float                                              WetCooldown;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WetMovementSpeedMultiplier;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RelativeWaterLevelToGetWet;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RainStrengthToGetWet;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FMetalAIFormRustyDamageResponse>     RustyDamageResponses;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MetalAIFormDataAsset");
		return ptr;
	}

};


// Class Athena.MigrationActionStateId
// 0x0000 (0x0028 - 0x0028)
class UMigrationActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MigrationActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoMigrationActionState(class AAthenaCharacter* Character);
};


// Class Athena.MigrationCompositeInputHandler
// 0x0000 (0x00D8 - 0x00D8)
class UMigrationCompositeInputHandler : public UCompositeInputHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MigrationCompositeInputHandler");
		return ptr;
	}

};


// Class Athena.MigrationServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UMigrationServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MigrationServiceInterface");
		return ptr;
	}

};


// Class Athena.MigrationService
// 0x0388 (0x03B0 - 0x0028)
class UMigrationService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              BeaconRange;                                              // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MigrationSetupRequestTimeoutInSeconds;                    // 0x01E3(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TArray<class UClass*>                              BeaconActorClasses;                                       // 0x01E3(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x1BD];                                     // 0x01F3(0x01BD) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MigrationService");
		return ptr;
	}

};


// Class Athena.MigrationUIContentsDataAsset
// 0x0088 (0x00B0 - 0x0028)
class UMigrationUIContentsDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShowBanner;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       BannerText;                                               // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01E4(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              BannerTextFontScale;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BannerTextPostSpacing;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoemTextFontScale;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PoemTextSpacing;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MaskBorderSize;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FMigrationUIContentsDataAssetEntry>  Poems;                                                    // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              RevealDuration;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MigrationUIContentsDataAsset");
		return ptr;
	}

};


// Class Athena.MigrationUIComponent
// 0x0110 (0x01E0 - 0x00D0)
class UMigrationUIComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UMigrationUIContentsDataAsset*               UIContentsDataAsset;                                      // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCanvasRenderTarget2D*                       TextRenderTarget;                                         // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MigrationUIComponent");
		return ptr;
	}


	void OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height);
};


// Class Athena.MockCharacterWithAthenaPlayerCharacterMovementComponent
// 0x00B0 (0x0710 - 0x0660)
class AMockCharacterWithAthenaPlayerCharacterMovementComponent : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0660(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MockCharacterWithAthenaPlayerCharacterMovementComponent");
		return ptr;
	}

};


// Class Athena.MockControllerWithSubjectInterface
// 0x0028 (0x04F8 - 0x04D0)
class AMockControllerWithSubjectInterface : public AController
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04D0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MockControllerWithSubjectInterface");
		return ptr;
	}

};


// Class Athena.MockInventoryItem
// 0x0008 (0x0478 - 0x0470)
class AMockInventoryItem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MockInventoryItem");
		return ptr;
	}

};


// Class Athena.MockObjectWithSubjectInterface
// 0x0028 (0x0050 - 0x0028)
class UMockObjectWithSubjectInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MockObjectWithSubjectInterface");
		return ptr;
	}

};


// Class Athena.OneShotUsable
// 0x0000 (0x0028 - 0x0028)
class UOneShotUsable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OneShotUsable");
		return ptr;
	}


	void Trigger(class UClass* InputID, class AActor* InTriggeringActor);
	bool CanTrigger(class AActor* InTriggeringActor);
};


// Class Athena.Shovel
// 0x0080 (0x0840 - 0x07C0)
class AShovel : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x07C0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Shovel");
		return ptr;
	}


	void Server_RequestDigRPC();
	void Multicast_DigRPC(TEnumAsByte<EShovelDigType> NewDigType, TEnumAsByte<EBuriedItemType> DigUnearthingType);
	bool GetShouldWielderBeLocked();
	TEnumAsByte<EShovelDigType> GetLastKnownDigTypeOnServer();
	TEnumAsByte<EShovelDigType> GetCurrentDigType();
};


// Class Athena.MockTelemetryDispatcher
// 0x0000 (0x0028 - 0x0028)
class UMockTelemetryDispatcher : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MockTelemetryDispatcher");
		return ptr;
	}


	bool STATIC_ValidateGameEndTelemetryEvent(const struct FPlayerGameEndTelemetryEvent& Event, int MinIdleDuration, int MinActiveDuration, int MinVoiceChatDuration);
	void SeamlessTravelTo(class AAthenaPlayerController* Controller);
	void OnUIScreenTransitionTelemetryEvent(const struct FUIScreenTransitionTelemetryEvent& Event);
	void OnShovelTelemetryEvent(const struct FShovelTelemetryEvent& Event);
	void OnShipSpawnedTelemetryEvent(const struct FShipSpawnedTelemetryEvent& Event);
	void OnShipHeartbeatTelemetryEvent(const struct FShipHeartbeatTelemetryEvent& Event);
	void OnShipDestroyedTelemetryEvent(const struct FShipDestroyedTelemetryEvent& Event);
	void OnShipDamagedTelemetryEvent(const struct FShipDamagedTelemetryEvent& Event);
	void OnPlayerSpawnTelemetryEvent(const struct FPlayerSpawnTelemetryEvent& Event);
	void OnPlayerObjectUsageStartTelemetryEvent(const struct FPlayerObjectUsageStartTelemetryEvent& Event);
	void OnPlayerObjectUsageEndTelemetryEvent(const struct FPlayerObjectUsageEndTelemetryEvent& Event);
	void OnPlayerItemRetrievalFromContainerTelemetryEvent(const struct FPlayerItemRetrievalFromContainerTelemetryEvent& Event);
	void OnPlayerItemEquipTelemetryEvent(const struct FPlayerItemEquipTelemetryEvent& Event);
	void OnPlayerHealthChangeTelemetryEvent(const struct FPlayerHealthChangeTelemetryEvent& Event);
	void OnPlayerGameStartTelemetryEvent(const struct FPlayerGameStartTelemetryEvent& Event);
	void OnPlayerGameEndTelemetryEvent(const struct FPlayerGameEndTelemetryEvent& Event);
	void OnPlayerCapstanUsageStartTelemetryEvent(const struct FPlayerCapstanUsageStartTelemetryEvent& Event);
	void OnPlayerCapstanUsageEndTelemetryEvent(const struct FPlayerCapstanUsageEndTelemetryEvent& Event);
	void OnPlayerAttackTelemetryEvent(const struct FPlayerAttackTelemetryEvent& Event);
	void OnPlayerActionTelemetryEvent(const struct FPlayerActionTelemetryEvent& Event);
	void OnPlayerActionCannonTelemetryEvent(const struct FPlayerActionCannonTelemetryEvent& Event);
	void OnLoadingTelemetryEvent(const struct FLoadingTelemetryEvent& Event);
	void OnCrewPlayerLeftTelemetryEvent(const struct FCrewPlayerLeftTelemetryEvent& Event);
	void OnCrewPlayerJoinedTelemetryEvent(const struct FCrewPlayerJoinedTelemetryEvent& Event);
	void OnCrewDestroyedTelemetryEvent(const struct FCrewDestroyedTelemetryEvent& Event);
	void OnCrewCreatedTelemetryEvent(const struct FCrewCreatedTelemetryEvent& Event);
	bool IsHeartbeatValid(class AAthenaPlayerController* Controller);
};


// Class Athena.PossessionsChestInteraction
// 0x0058 (0x04D8 - 0x0480)
class APossessionsChestInteraction : public AModalInteraction
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0480(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PossessionsChestInteraction");
		return ptr;
	}

};


// Class Athena.ArmoryChestInteraction
// 0x0060 (0x0538 - 0x04D8)
class AArmoryChestInteraction : public APossessionsChestInteraction
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04D8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ArmoryChestInteraction");
		return ptr;
	}


	void Server_ArmoryChestEquipWeapon(class UClass* InItemDesc, int InIndex);
};


// Class Athena.ClothingChestInteraction
// 0x01C0 (0x0698 - 0x04D8)
class AClothingChestInteraction : public APossessionsChestInteraction
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x04D8(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClothingChestInteraction");
		return ptr;
	}


	void Server_ClothingChestUnequipItem(class UClass* InDesc);
	void Server_ClothingChestEquipItem(class UClass* InDesc);
	void Server_ClothingChestChangeClothing(TArray<class UClass*> InAdds, TArray<class UClass*> InRemoves);
	void OnRep_Loadout();
};


// Class Athena.EquipmentChestInteraction
// 0x0060 (0x0538 - 0x04D8)
class AEquipmentChestInteraction : public APossessionsChestInteraction
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04D8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EquipmentChestInteraction");
		return ptr;
	}


	void Server_EquipmentChestEquipItem(class UClass* InItemDesc);
};


// Class Athena.ShipCustomizationChestInteraction
// 0x00B8 (0x0590 - 0x04D8)
class AShipCustomizationChestInteraction : public APossessionsChestInteraction
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x04D8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCustomizationChestInteraction");
		return ptr;
	}


	void Server_ShipCustomizationChestUnequipItem(class UClass* InDesc);
	void Server_ShipCustomizationChestEquipItem(class UClass* InDesc);
};


// Class Athena.ShipwrightInteractionProxy
// 0x0000 (0x0480 - 0x0480)
class AShipwrightInteractionProxy : public AModalInteraction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwrightInteractionProxy");
		return ptr;
	}

};


// Class Athena.ShopkeeperInteractionProxy
// 0x00A0 (0x0520 - 0x0480)
class AShopkeeperInteractionProxy : public AModalInteraction
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0480(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShopkeeperInteractionProxy");
		return ptr;
	}

};


// Class Athena.VoyageProposalContainerInteraction
// 0x0018 (0x0498 - 0x0480)
class AVoyageProposalContainerInteraction : public AModalInteraction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0480(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageProposalContainerInteraction");
		return ptr;
	}


	void Server_VoyageProposalSelected(const class FString& ProposalDescName);
};


// Class Athena.ModalInteractionActionStateId
// 0x0000 (0x0028 - 0x0028)
class UModalInteractionActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ModalInteractionActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoModalInteractionActionState(class AActor* Character, class AModalInteractionProxy* InInteractionProxy);
};


// Class Athena.ModalInteractionCompositeInputHandler
// 0x0018 (0x00F0 - 0x00D8)
class UModalInteractionCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ModalInteractionCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnDisengage();
};


// Class Athena.MountableInterface
// 0x0000 (0x0028 - 0x0028)
class UMountableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MountableInterface");
		return ptr;
	}

};


// Class Athena.MountableType
// 0x0000 (0x0028 - 0x0028)
class UMountableType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MountableType");
		return ptr;
	}

};


// Class Athena.MountableComponent
// 0x0018 (0x00E8 - 0x00D0)
class UMountableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UClass*                                      MountableType;                                            // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ActorCanServerMigrate;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MountableComponent");
		return ptr;
	}

};


// Class Athena.MountpointComponent
// 0x0040 (0x0330 - 0x02F0)
class UMountpointComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02F0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MountpointComponent");
		return ptr;
	}


	void OnRep_ReplicatedMountedItem();
};


// Class Athena.MoveForwardAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UMoveForwardAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MoveForwardAnalogInputId");
		return ptr;
	}

};


// Class Athena.MoveRightAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UMoveRightAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MoveRightAnalogInputId");
		return ptr;
	}

};


// Class Athena.MoveUpAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UMoveUpAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MoveUpAnalogInputId");
		return ptr;
	}

};


// Class Athena.NamedNotificationInputComponent
// 0x0018 (0x00E8 - 0x00D0)
class UNamedNotificationInputComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<struct FNotificationInputDisplayName>       NotificationInputDisplayNames;                            // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NamedNotificationInputComponent");
		return ptr;
	}

};


// Class Athena.NamedObjectMock
// 0x0040 (0x0068 - 0x0028)
class UNamedObjectMock : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NamedObjectMock");
		return ptr;
	}

};


// Class Athena.NameplateComponent
// 0x0020 (0x0310 - 0x02F0)
class UNameplateComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NameplateComponent");
		return ptr;
	}


	struct FVector GetWorldPosition();
};


// Class Athena.AINameplateComponent
// 0x00D0 (0x03E0 - 0x0310)
class UAINameplateComponent : public UNameplateComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0310(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AINameplateComponent");
		return ptr;
	}


	void OnRep_DisplayName();
	void OnRep_DebugDisplayText();
};


// Class Athena.PlayerNameplateComponent
// 0x0070 (0x0380 - 0x0310)
class UPlayerNameplateComponent : public UNameplateComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0310(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerNameplateComponent");
		return ptr;
	}

};


// Class Athena.NameplateServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UNameplateServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NameplateServiceInterface");
		return ptr;
	}

};


// Class Athena.NameplateService
// 0x0018 (0x0040 - 0x0028)
class UNameplateService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NameplateService");
		return ptr;
	}

};


// Class Athena.NervousAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UNervousAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NervousAIStrategyId");
		return ptr;
	}

};


// Class Athena.NetProxy
// 0x0060 (0x04D0 - 0x0470)
class ANetProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0470(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NetProxy");
		return ptr;
	}


	void OnRep_OwningActor();
	void OnOwningActorDestroyed();
};


// Class Athena.ShipNetProxy
// 0x0020 (0x04F0 - 0x04D0)
class AShipNetProxy : public ANetProxy
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipNetProxy");
		return ptr;
	}


	void OnRep_LanternBits();
	void OnLanternStateChanged(unsigned char LanternStateBits);
	unsigned char GetLanternBits();
};


// Class Athena.NetworkedEventsWhitelistDefinition
// 0x0000 (0x0028 - 0x0028)
class UNetworkedEventsWhitelistDefinition : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NetworkedEventsWhitelistDefinition");
		return ptr;
	}

};


// Class Athena.ServerNetworkedEventsWhitelistDefinition
// 0x0010 (0x0038 - 0x0028)
class UServerNetworkedEventsWhitelistDefinition : public UNetworkedEventsWhitelistDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ServerNetworkedEventsWhitelistDefinition");
		return ptr;
	}

};


// Class Athena.TestNeverAllowedServerNetworkedEventsWhitelistDefinition
// 0x0000 (0x0028 - 0x0028)
class UTestNeverAllowedServerNetworkedEventsWhitelistDefinition : public UNetworkedEventsWhitelistDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestNeverAllowedServerNetworkedEventsWhitelistDefinition");
		return ptr;
	}

};


// Class Athena.TestServerNetworkedEventsWhitelistDefinition
// 0x0010 (0x0038 - 0x0028)
class UTestServerNetworkedEventsWhitelistDefinition : public UNetworkedEventsWhitelistDefinition
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestServerNetworkedEventsWhitelistDefinition");
		return ptr;
	}

};


// Class Athena.NoiseMakerComponentParams
// 0x0040 (0x0068 - 0x0028)
class UNoiseMakerComponentParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              TriggerRadiusAroundNoiseMaker;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 LocalNoiseMakerFoliagePlay;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 LocalNoiseMakerFoliageStop;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LocalSpeedRtpc;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SimulatedCharacterFoliagePlay;                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SimulatedCharacterFoliageStop;                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SimulatedCharacterSpeedRtpc;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NoiseMakerComponentParams");
		return ptr;
	}

};


// Class Athena.NoiseMakerComponent
// 0x0030 (0x0340 - 0x0310)
class UNoiseMakerComponent : public UWwiseEmitterComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0310(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NoiseMakerComponent");
		return ptr;
	}

};


// Class Athena.NoiseMakerControllerParams
// 0x0018 (0x0040 - 0x0028)
class UNoiseMakerControllerParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              LookupRadiusAroundListener;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmountOfRemoteNoiseMakers;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NoiseMakerControllerParams");
		return ptr;
	}

};


// Class Athena.NonVagueNonUniqueLandmarkComponent
// 0x0010 (0x0300 - 0x02F0)
class UNonVagueNonUniqueLandmarkComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NonVagueNonUniqueLandmarkComponent");
		return ptr;
	}

};


// Class Athena.NPCAnimInstance
// 0x0000 (0x0440 - 0x0440)
class UNPCAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCAnimInstance");
		return ptr;
	}

};


// Class Athena.NPCDialogComponent
// 0x01B8 (0x0288 - 0x00D0)
class UNPCDialogComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FText                                       WelcomeMessage;                                           // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00D0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UNPCDialogTreeData*                          Data;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InputID;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EActionDisplayPriority>                ActionDisplayPriority;                                    // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     NpcDialoguePool;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 NpcDialogueWelcome;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 NpcDialogueBridge;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 NpcDialogueGoodbye;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CreateInteractionRules;                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DialogueInputFocusTimeout;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AController*                                 InteractingController;                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<uint32_t>                                   DialogOptionUsageCounter;                                 // 0x01E3(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x95];                                      // 0x01F3(0x0095) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogComponent");
		return ptr;
	}

};


// Class Athena.NPCDialogConditional
// 0x0008 (0x0030 - 0x0028)
class UNPCDialogConditional : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogConditional");
		return ptr;
	}

};


// Class Athena.HasRanksNPCDialogConditional
// 0x0010 (0x0040 - 0x0030)
class UHasRanksNPCDialogConditional : public UNPCDialogConditional
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	TArray<class UClass*>                              RequiredRanks;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HasRanksNPCDialogConditional");
		return ptr;
	}

};


// Class Athena.HasEntitlementsNPCDialogConditional
// 0x0010 (0x0040 - 0x0030)
class UHasEntitlementsNPCDialogConditional : public UNPCDialogConditional
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	TArray<class UClass*>                              RequiredEntitlements;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HasEntitlementsNPCDialogConditional");
		return ptr;
	}

};


// Class Athena.FiniteUseNPCDialogConditional
// 0x0010 (0x0040 - 0x0030)
class UFiniteUseNPCDialogConditional : public UNPCDialogConditional
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	int                                                LinkedDialog;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LinkedDialogOption;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfUses;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FiniteUseNPCDialogConditional");
		return ptr;
	}

};


// Class Athena.FeatureToggleNPCDialogConditional
// 0x0008 (0x0038 - 0x0030)
class UFeatureToggleNPCDialogConditional : public UNPCDialogConditional
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FName                                       FeatureName;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.FeatureToggleNPCDialogConditional");
		return ptr;
	}

};


// Class Athena.HasEmblemNPCDialogConditional
// 0x0028 (0x0058 - 0x0030)
class UHasEmblemNPCDialogConditional : public UNPCDialogConditional
{
public:
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	TArray<struct FName>                               RequiredEmblemNames;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.HasEmblemNPCDialogConditional");
		return ptr;
	}

};


// Class Athena.NPCDialogHeader
// 0x0000 (0x0028 - 0x0028)
class UNPCDialogHeader : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogHeader");
		return ptr;
	}

};


// Class Athena.NPCDialogHeaderSimple
// 0x0038 (0x0060 - 0x0028)
class UNPCDialogHeaderSimple : public UNPCDialogHeader
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogHeaderSimple");
		return ptr;
	}

};


// Class Athena.NPCDialogHeaderByRank
// 0x0048 (0x0070 - 0x0028)
class UNPCDialogHeaderByRank : public UNPCDialogHeader
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FNPCDialogRankGatedText>             Text;                                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogHeaderByRank");
		return ptr;
	}

};


// Class Athena.NPCDialogHeaderStorageContainer
// 0x0038 (0x0060 - 0x0028)
class UNPCDialogHeaderStorageContainer : public UNPCDialogHeader
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogHeaderStorageContainer");
		return ptr;
	}

};


// Class Athena.NPCDialogOption
// 0x0018 (0x0040 - 0x0028)
class UNPCDialogOption : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogOption");
		return ptr;
	}

};


// Class Athena.NPCDialogOptionClose
// 0x0038 (0x0078 - 0x0040)
class UNPCDialogOptionClose : public UNPCDialogOption
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogOptionClose");
		return ptr;
	}

};


// Class Athena.NPCDialogOptionDialogSelect
// 0x0040 (0x0080 - 0x0040)
class UNPCDialogOptionDialogSelect : public UNPCDialogOption
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                LinkedDialog;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogOptionDialogSelect");
		return ptr;
	}

};


// Class Athena.NPCDialogOptionGiveMap
// 0x0050 (0x0090 - 0x0040)
class UNPCDialogOptionGiveMap : public UNPCDialogOption
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UVoyageRecipeDataAsset*                      VoyageRecipe;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LinkedDialog;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfUses;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumTimesUsed;                                             // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogOptionGiveMap");
		return ptr;
	}

};


// Class Athena.NPCDialogOptionNoUIPurchase
// 0x0060 (0x00A0 - 0x0040)
class UNPCDialogOptionNoUIPurchase : public UNPCDialogOption
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UCatalogDataAsset*                           Catalog;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCatalogOfferDataAsset*                      CatalogOffer;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPopUpMessageDesc*                           OfferTriggeredPopupDesc;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AController*                                 Interactor;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogOptionNoUIPurchase");
		return ptr;
	}

};


// Class Athena.NPCDialogOptionRefillTankard
// 0x0040 (0x0080 - 0x0040)
class UNPCDialogOptionRefillTankard : public UNPCDialogOption
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                LinkedDialog;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogOptionRefillTankard");
		return ptr;
	}

};


// Class Athena.NPCDialogOptionSellBooty
// 0x0038 (0x0078 - 0x0040)
class UNPCDialogOptionSellBooty : public UNPCDialogOption
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogOptionSellBooty");
		return ptr;
	}

};


// Class Athena.NPCDialogOptionShop
// 0x00A8 (0x00E8 - 0x0040)
class UNPCDialogOptionShop : public UNPCDialogOption
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UShopDesc*                                   ShopDesc;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AController*                                 Interactor;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogOptionShop");
		return ptr;
	}

};


// Class Athena.NPCDialogOptionStorageContainerStore
// 0x00A8 (0x00E8 - 0x0040)
class UNPCDialogOptionStorageContainerStore : public UNPCDialogOption
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       FullText;                                                 // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData02[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       NoItemInInventoryText;                                    // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData03[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogOptionStorageContainerStore");
		return ptr;
	}

};


// Class Athena.NPCDialogOptionStorageContainerTake
// 0x00A8 (0x00E8 - 0x0040)
class UNPCDialogOptionStorageContainerTake : public UNPCDialogOption
{
public:
	unsigned char                                      UnknownData00[0x1A3];                                     // 0x0040(0x01A3) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmptyText;                                                // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData02[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       NoInventorySpaceText;                                     // 0x01E3(0x0018) (Edit)
	unsigned char                                      UnknownData03[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogOptionStorageContainerTake");
		return ptr;
	}

};


// Class Athena.NPCDialogTreeData
// 0x0010 (0x0038 - 0x0028)
class UNPCDialogTreeData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCDialogTreeData");
		return ptr;
	}

};


// Class Athena.NPCReactionBound
// 0x0010 (0x06B0 - 0x06A0)
class UNPCReactionBound : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NPCReactionBound");
		return ptr;
	}


	void OnActivationRegionOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnActivationRegionOverlapBegin(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class Athena.NullItemInventoryTestActor
// 0x0008 (0x0478 - 0x0470)
class ANullItemInventoryTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NullItemInventoryTestActor");
		return ptr;
	}

};


// Class Athena.ObjectUtilities
// 0x0000 (0x0028 - 0x0028)
class UObjectUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ObjectUtilities");
		return ptr;
	}


	class UObject* STATIC_GetDefaultObject(class UClass* Class);
	class UObject* STATIC_CreateObject(class UClass* Class);
};


// Class Athena.OffBottomTransitionLadderActionStateId
// 0x0000 (0x0028 - 0x0028)
class UOffBottomTransitionLadderActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OffBottomTransitionLadderActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoOffBottomTransitionLadderActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AActor* LadderActor, class AActor* Character, float InteractingHeight, unsigned char ClimbId, TEnumAsByte<ELadderTransitionMode> LadderTransitionMode, const struct FLadderDefinition& LadderDefinition);
};


// Class Athena.OffTopTransitionLadderActionStateId
// 0x0000 (0x0028 - 0x0028)
class UOffTopTransitionLadderActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OffTopTransitionLadderActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoOffTopTransitionLadderActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AActor* LadderActor, class AActor* Character, float InteractingHeight, unsigned char ClimbId, TEnumAsByte<ELadderTransitionMode> LadderTransitionMode, const struct FLadderDefinition& LadderDefinition);
};


// Class Athena.OnboardCharacterTrackerInterface
// 0x0000 (0x0028 - 0x0028)
class UOnboardCharacterTrackerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OnboardCharacterTrackerInterface");
		return ptr;
	}

};


// Class Athena.OnboardCharacterTrackerComponent
// 0x00A8 (0x0178 - 0x00D0)
class UOnboardCharacterTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<struct FWeakActorHandle>                    OnboardCharacters;                                        // 0x01E3(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OnboardCharacterTrackerComponent");
		return ptr;
	}

};


// Class Athena.OnboardingIntroLocationComponent
// 0x0020 (0x0310 - 0x02F0)
class UOnboardingIntroLocationComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OnboardingIntroLocationComponent");
		return ptr;
	}

};


// Class Athena.OnBottomTransitionLadderActionStateId
// 0x0000 (0x0028 - 0x0028)
class UOnBottomTransitionLadderActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OnBottomTransitionLadderActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoOnBottomTransitionLadderActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AActor* LadderActor, class AActor* Character, float InteractingHeight, unsigned char ClimbId, TEnumAsByte<ELadderTransitionMode> LadderTransitionMode, const struct FLadderDefinition& LadderDefinition);
};


// Class Athena.OneShotUsableMock
// 0x0010 (0x0038 - 0x0028)
class UOneShotUsableMock : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OneShotUsableMock");
		return ptr;
	}

};


// Class Athena.OnTopTransitionLadderActionStateId
// 0x0000 (0x0028 - 0x0028)
class UOnTopTransitionLadderActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OnTopTransitionLadderActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoOnTopTransitionLadderActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AActor* LadderActor, class AActor* Character, float InteractingHeight, unsigned char ClimbId, TEnumAsByte<ELadderTransitionMode> LadderTransitionMode, const struct FLadderDefinition& LadderDefinition);
};


// Class Athena.OpenChatboxNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UOpenChatboxNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OpenChatboxNotificationInputId");
		return ptr;
	}

};


// Class Athena.OpenEscapeMenuNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UOpenEscapeMenuNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OpenEscapeMenuNotificationInputId");
		return ptr;
	}

};


// Class Athena.OpenQuickMenuNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UOpenQuickMenuNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OpenQuickMenuNotificationInputId");
		return ptr;
	}

};


// Class Athena.OwnerMock
// 0x00A8 (0x0518 - 0x0470)
class AOwnerMock : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0470(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.OwnerMock");
		return ptr;
	}

};


// Class Athena.PacingComponentPublicData
// 0x0038 (0x0060 - 0x0028)
class UPacingComponentPublicData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UCurveFloat*                                 PacingCameraCurve;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PacingMovementSpeedModifier;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraCurveTToPlayRumble;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraCurveTToPlayFootstepSFX;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinStickDeflectionToMove;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraSpringAccel;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CamPitchScalar;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UForceFeedbackEffect*                        TakingAStepRumble;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 TakingAStepAudioStateEvent;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PacingComponentPublicData");
		return ptr;
	}

};


// Class Athena.PacingComponent
// 0x0120 (0x01F0 - 0x00D0)
class UPacingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UPacingComponentPublicData*                  PublicData;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AAthenaPlayerCharacter*                      Player;                                                   // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x01EB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PacingComponent");
		return ptr;
	}


	void StopPacing();
	void StartPacing();
	bool IsPacing();
};


// Class Athena.PartConnectionMock
// 0x0010 (0x0038 - 0x0028)
class UPartConnectionMock : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PartConnectionMock");
		return ptr;
	}


	void Tick(class UObject* WorldContextObject, float DeltaSeconds);
	void AddMultipleConnection(class UObject* WorldContextObject, TEnumAsByte<EMockShipConnectionPartType> ConnectionType, TArray<class AActor*> ActorFromList, class AActor* ActorTo);
	void AddConnection(class UObject* WorldContextObject, TEnumAsByte<EMockShipConnectionPartType> ConnectionType, class AActor* ActorFrom, class AActor* ActorTo);
};


// Class Athena.ParticleSystemPickerAsset
// 0x0020 (0x0048 - 0x0028)
class UParticleSystemPickerAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ParticleSystemPickerAsset");
		return ptr;
	}

};


// Class Athena.PhysicsCollisionFunctions
// 0x0000 (0x0028 - 0x0028)
class UPhysicsCollisionFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PhysicsCollisionFunctions");
		return ptr;
	}


	bool STATIC_IsWorldSpacePositionInsideVolume(class UStaticMeshComponent* Volume, const struct FVector& Position);
};


// Class Athena.PickupActorMock
// 0x0080 (0x06E0 - 0x0660)
class APickupActorMock : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0660(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PickupActorMock");
		return ptr;
	}

};


// Class Athena.PickupObjectActionStateId
// 0x0000 (0x0028 - 0x0028)
class UPickupObjectActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PickupObjectActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoPickupObjectActionState(class AActor* InCharacter, class AActor* InPickupableObject);
};


// Class Athena.PirateGeneratorServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UPirateGeneratorServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PirateGeneratorServiceInterface");
		return ptr;
	}


	void BakeFromDescriptionAsync(const struct FPirateDescription& Desc, TEnumAsByte<EPirateBakeFlags> Flags, const struct FGuid& Guid, const struct FScriptDelegate& AsyncResult);
};


// Class Athena.PirateGeneratorService
// 0x0170 (0x05E0 - 0x0470)
class APirateGeneratorService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0470(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PirateGeneratorService");
		return ptr;
	}

};


// Class Athena.PirateIdentityBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPirateIdentityBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PirateIdentityBlueprintFunctionLibrary");
		return ptr;
	}


	class FString STATIC_GetServicesScopeId(const struct FPirateIdentity& InPirateIdentity);
	struct FPirateIdentity STATIC_GetPirateIdentity(class AActor* InPawn);
};


// Class Athena.PiratePreviewActor
// 0x0310 (0x0780 - 0x0470)
class APiratePreviewActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x310];                                     // 0x0470(0x0310) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PiratePreviewActor");
		return ptr;
	}

};


// Class Athena.PiratePreviewInterface
// 0x0000 (0x0028 - 0x0028)
class UPiratePreviewInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PiratePreviewInterface");
		return ptr;
	}


	void PreCreatePreview();
};


// Class Athena.PiratePreviewComponent
// 0x00C0 (0x01C8 - 0x0108)
class UPiratePreviewComponent : public UCoherentUIGTRenderToTextureLiveView
{
public:
	unsigned char                                      UnknownData00[0xDB];                                      // 0x0108(0x00DB) MISSED OFFSET
	class UClass*                                      ClassToSpawn;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FIntPoint                                   DefaultResolution;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URenderToTextureSceneDetails*                Details;                                                  // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FClothingLoadout                            ClothingLoadout;                                          // 0x01E3(0x0010) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PiratePreviewComponent");
		return ptr;
	}

};


// Class Athena.PirateSelector
// 0x0188 (0x0258 - 0x00D0)
class UPirateSelector : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<class APosablePirate*>                      PirateLineup;                                             // 0x01E3(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    BeginCelebration;                                         // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartGeneratingPirates;                                   // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EndGeneratingPirates;                                     // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GenerateShipSelectionPirate;                              // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SelectionConfirmed;                                       // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SelectionCancelled;                                       // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SelectPirateButtonPressed;                                // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    RefreshPiratesButtonPressed;                              // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FavoritePirateButtonPressed;                              // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LeavingPirateSelectionState;                              // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x65];                                      // 0x01F3(0x0065) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PirateSelector");
		return ptr;
	}


	void WaitForTavernTimerTick();
	void RequestOpenAccountPicker();
	void OnPirateGenerateRequested();
	bool IsSelectedPirateSet();
	bool IsInPirateSelectionState();
	TArray<class UClass*> GetSelectedPirateOutfit();
	struct FPirateDescription GetSelectedPirateDescription();
	void EndCelebration();
	void ConfirmAndSavePirate(const struct FPirateDescription& Description, TArray<class UClass*> Outfit);
};


// Class Athena.PlanarReflectionPlaneComponent
// 0x0000 (0x02F0 - 0x02F0)
class UPlanarReflectionPlaneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlanarReflectionPlaneComponent");
		return ptr;
	}

};


// Class Athena.PlantAIFormComponent
// 0x0088 (0x01D0 - 0x0148)
class UPlantAIFormComponent : public UAthenaAIFormComponent
{
public:
	unsigned char                                      UnknownData00[0x9B];                                      // 0x0148(0x009B) MISSED OFFSET
	class UParticleSystem*                             HealingParticlesTemplate;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StartHealingAudioLoopEvent;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopHealingAudioLoopEvent;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WeakParticlesTemplate;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StartWeakAudioLoopEvent;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopWeakAudioLoopEvent;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UMaterial>                         PlantBaseMaterial;                                        // 0x01E3(0x0020) (Edit, DisableEditOnInstance)
	struct FName                                       HealingShaderParamName;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IsNotHealingShaderParamValue;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IsHealingShaderParamValue;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShaderParamBlendSpeed;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWet;                                                    // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsWeak;                                                   // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    HealingParticleSystemComponent;                           // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    WeakParticleSystemComponent;                              // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    PlantDynamicMaterialInstance;                             // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlantAIFormComponent");
		return ptr;
	}


	void OnRep_IsWet();
	void OnRep_IsWeak();
};


// Class Athena.PlantAIFormDataAsset
// 0x0020 (0x0088 - 0x0068)
class UPlantAIFormDataAsset : public UAthenaAIFormDataAsset
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	float                                              WetCooldown;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WetHealPerSecond;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RelativeWaterLevelToGetWet;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RainStrengthToGetWet;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SunriseTimeHours;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SunsetTimeHours;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeakMovementSpeedMultiplier;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlantAIFormDataAsset");
		return ptr;
	}

};


// Class Athena.PlayerAtmosphericsAudioComponentParams
// 0x0068 (0x0090 - 0x0028)
class UPlayerAtmosphericsAudioComponentParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseEvent*                                 WindStartEvent;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WindStopEvent;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RainStartEvent;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 RainStopEvent;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       GlobalWindSpeedRtpc;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerWindAngleRtpc;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerHeightRtpc;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerVerticalSpeedRtpc;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AtmosphericPressureFreqRtpc;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AtmosphericPressureVolRtpc;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphericPressureFreqTimebase;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphericPressureVolTimebase;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerAtmosphericsAudioComponentParams");
		return ptr;
	}

};


// Class Athena.PlayerAtmosphericsAudioComponent
// 0x0110 (0x0420 - 0x0310)
class UPlayerAtmosphericsAudioComponent : public UWwiseEmitterComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0310(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerAtmosphericsAudioComponent");
		return ptr;
	}


	float GetPoolDensityFactor(class UWwiseObjectPoolWrapper* PoolDensityWrapper);
	struct FVector GetPoolDensityAveragePosition(class UWwiseObjectPoolWrapper* PoolDensityWrapper);
	bool GetIsWindAudioPlaying();
};


// Class Athena.PlayerCompanyControlInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerCompanyControlInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerCompanyControlInterface");
		return ptr;
	}

};


// Class Athena.PlayerCompanyViewInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerCompanyViewInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerCompanyViewInterface");
		return ptr;
	}

};


// Class Athena.PlayerCompanyComponent
// 0x0258 (0x0328 - 0x00D0)
class UPlayerCompanyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FPlayerCompanyProgressCache                 CompanyProgressCache;                                     // 0x01E3(0x0058)
	unsigned char                                      UnknownData01[0xED];                                      // 0x023B(0x00ED) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerCompanyComponent");
		return ptr;
	}

};


// Class Athena.PlayerMuteInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerMuteInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerMuteInterface");
		return ptr;
	}

};


// Class Athena.PlayerCrewComponent
// 0x0058 (0x0128 - 0x00D0)
class UPlayerCrewComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<struct FCrewMemberData>                     CrewMembers;                                              // 0x01E3(0x0010) (Net, ZeroConstructor)
	struct FCrewShipData                               CrewShip;                                                 // 0x01E3(0x0003) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerCrewComponent");
		return ptr;
	}


	void Server_VoteOnSendPlayerToBrig(class AAthenaPlayerState* PlayerState, bool SendIn);
	void Server_VoteOnScuttleShip(bool Scuttle);
	void Server_VoteOnReleasePlayerFromBrig(class AAthenaPlayerState* PlayerState, bool Release);
	void OnRep_CrewShip();
	void OnRep_CrewMembers();
};


// Class Athena.PlayerEntitlementBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPlayerEntitlementBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerEntitlementBlueprintFunctionLibrary");
		return ptr;
	}


	TArray<class UClass*> STATIC_GetEntitlements(const TScriptInterface<class UPlayerEntitlementViewInterface>& InPlayerEntitlementViewInterface, class UClass* InEntitlementType);
};


// Class Athena.PlayerEntitlementControlInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerEntitlementControlInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerEntitlementControlInterface");
		return ptr;
	}

};


// Class Athena.PlayerEntitlementComponent
// 0x02A8 (0x0378 - 0x00D0)
class UPlayerEntitlementComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FPlayerEntitlementsCompact                  ReplicatedEntitlements;                                   // 0x01E3(0x0038) (Net)
	struct FPlayerEntitlements                         Entitlements;                                             // 0x01E3(0x0080) (Edit, DisableEditOnInstance)
	TArray<struct FEntitlementIdInfo>                  ReplicatedEntitlementIds;                                 // 0x01E3(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x185];                                     // 0x01F3(0x0185) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerEntitlementComponent");
		return ptr;
	}


	void ServerRequestEntitlements(TEnumAsByte<ERequestEntitlementBehaviour> InBehaviour);
	void OnRep_Entitlements();
};


// Class Athena.PlayerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPlayerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerFunctionLibrary");
		return ptr;
	}


	void STATIC_DebugRemoveLocalPlayer(class UObject* WorldContextObject, int ControllerId);
};


// Class Athena.PlayerHeroStatsComponent
// 0x0190 (0x0260 - 0x00D0)
class UPlayerHeroStatsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<struct FPlayerHeroStatUnit>                 HeroStats;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<uint32_t, struct FPlayerHeroStatRuntimeUnit>  RuntimeHeroStats;                                         // 0x01E3(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x2D];                                      // 0x0233(0x002D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerHeroStatsComponent");
		return ptr;
	}


	void Client_UpdateValue(uint32_t PlayerStatId, uint64_t AbsoluteValue);
};


// Class Athena.PlayerManagerService
// 0x0118 (0x0588 - 0x0470)
class APlayerManagerService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0470(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerManagerService");
		return ptr;
	}

};


// Class Athena.PlayerMigratableStatusComponent
// 0x0150 (0x0220 - 0x00D0)
class UPlayerMigratableStatusComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x00D0(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerMigratableStatusComponent");
		return ptr;
	}

};


// Class Athena.PlayerMusicControllerParams
// 0x0280 (0x02A8 - 0x0028)
class UPlayerMusicControllerParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       WorldRegionStateGroup;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               WorldRegionStateNames;                                    // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UWwiseEvent*                                 PlayerOnIslandStart;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayerOnIslandStop;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayerAtSeaStart;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayerAtSeaStop;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayerInCaveStart;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayerInCaveStop;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayerUnderwaterStart;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayerUnderwaterStop;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FactorForSwitchingAtSeaMoodMusicOn;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerHeightRtpc;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoatSpeedRtpc;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BoatSpeedRtpcMin;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BoatSpeedRtpcMax;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AtSeaAtSpeedStingCooldownMax;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AtSeaAtSpeedStingCooldownMin;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AtSeaAtSpeedPlay;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SailBillowStingCooldown;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SailBillowOneshotPlay;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AtSeaWildHarpaPlay;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AtSeaWildHarpaStop;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       IslandRevealStateGroup;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       IslandRevealStateInitial;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmallestCaveEnclosedRatio;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmallestCaveSize;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      PredominantCaveSurface;                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkellyProximityDistance;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinSkellies;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxSkellies;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SkeletonProximityMusicStart;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SkeletonProximityMusicStop;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SkeletonPersuitMusicStart;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SkeletonPersuitMusicStop;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SkeletonAmountRtpc;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BountyQuestProgressFactor;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BountyQuestAnticipationStart;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BountyQuestAnticipationStop;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BountyQuestActionStart;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BountyQuestActionStop;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceMaxVolumeCms;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceMinVolumeCms;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BountyQuestDistanceRtpc;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FactorForChangingBountyToActionState;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CooldownForAnticipationMusicRetrigger;                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BountyFortAnticipationStart;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BountyFortAnticipationStop;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BountyFortAnticipationStopHighString;                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BountyFortActionStart;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BountyFortActionStop;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FactorForChangingFortToActionState;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BountyFortSkellyProximityRtpc;                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BountyFortSkellyProximityMax;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 BountyFortSkellyProximityClose;                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       GlobalMusicRtpc;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GlobalMusicRtpcMax;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GlobalMusicRtpcMin;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShipwreckProximityDistance;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayerNearShipwreckStart;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayerNearShipwreckStop;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     SharkPoolForCollection;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SharkProximity;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlaySharkProximity;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopSharkProximity;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlaySharkAttackOneShot;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SharkAttackStateGroupName;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SharkAttackStatePreAttack;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SharkAttackStatePostAttack;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSharkHeightDelta;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ServerMigrationStart;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ServerMigrationStop;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PotentialThreatFactorRtpc;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PotentialThreatMinDistance;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PotentialThreatMaxDistance;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PlayEdgeOfTheWorldMusic;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEdgeOfTheWorldMusic;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EdgeOfTheWorldProximityFactorRtpc;                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceToPlayEdgeOfTheWorldMusic;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceToPlayEdgeOfTheWorldMusic;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CompanyRegionStateGroup;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               CompanyRegionNames;                                       // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UWwiseEvent*                                 CompanyMoodStart;                                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CompanyMoodStop;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FKrakenMusicEvent>                   KrakenMusicEvents;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<class UWwiseEvent*>                         KrakenTentacleTakeHitEvents;                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0xB5];                                      // 0x01F3(0x00B5) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerMusicControllerParams");
		return ptr;
	}

};


// Class Athena.PlayerMuteComponent
// 0x00E8 (0x01B8 - 0x00D0)
class UPlayerMuteComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x00D0(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerMuteComponent");
		return ptr;
	}

};


// Class Athena.PlayerNameplateLocationOverrideInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerNameplateLocationOverrideInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerNameplateLocationOverrideInterface");
		return ptr;
	}

};


// Class Athena.PlayerNameplateLocationOverrideComponent
// 0x0050 (0x0120 - 0x00D0)
class UPlayerNameplateLocationOverrideComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FTransform                                  NameplateLocation;                                        // 0x01E3(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalHeight;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerNameplateLocationOverrideComponent");
		return ptr;
	}

};


// Class Athena.ServerNotificationsServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UServerNotificationsServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ServerNotificationsServiceInterface");
		return ptr;
	}

};


// Class Athena.ServerNotificationsService
// 0x0048 (0x0070 - 0x0028)
class UServerNotificationsService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ServerNotificationsService");
		return ptr;
	}

};


// Class Athena.PlayerNonVerbalComponent
// 0x00A0 (0x0170 - 0x00D0)
class UPlayerNonVerbalComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00D0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerNonVerbalComponent");
		return ptr;
	}


	void Server_SendText(const struct FText& Message);
	void Server_SendPhrase(const class FString& PhraseKey);
	void Client_ReceiveText(class AAthenaPlayerState* SenderPlayerState, const struct FText& Message);
	void Client_ReceivePhrase(class AAthenaPlayerState* SenderPlayerState, const class FString& PhraseKey);
};


// Class Athena.PlayerOceanAudioComponent
// 0x0130 (0x0440 - 0x0310)
class UPlayerOceanAudioComponent : public UWwiseEmitterComponent
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0310(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerOceanAudioComponent");
		return ptr;
	}


	bool GetIsUnderwater();
	bool GetIsPlaying();
	bool GetIsOnIsland();
	struct FVector GetEmitterPosition();
};


// Class Athena.PlayerPermissionsComponent
// 0x0008 (0x00D8 - 0x00D0)
class UPlayerPermissionsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	bool                                               AllowDebugMenuAccess;                                     // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               AllowDebugMenuButtonShortcutsAccess;                      // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               AllowExecuteOnServer;                                     // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               DisableWatermark;                                         // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerPermissionsComponent");
		return ptr;
	}

};


// Class Athena.TestPlayerPermissionsComponent
// 0x0000 (0x00D8 - 0x00D8)
class UTestPlayerPermissionsComponent : public UPlayerPermissionsComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestPlayerPermissionsComponent");
		return ptr;
	}


	void SetAllowExecuteOnServer(bool AllowAccess);
	void SetAllowDebugMenuButtonShortcutsAccess(bool AllowAccess);
	void SetAllowDebugMenuAccess(bool AllowAccess);
	void GrantDebugMenuPermissions(bool AllowAccess);
};


// Class Athena.PlayerPermissionsTestActor
// 0x0008 (0x0478 - 0x0470)
class APlayerPermissionsTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerPermissionsTestActor");
		return ptr;
	}

};


// Class Athena.PlayerRelevancyService
// 0x0020 (0x0048 - 0x0028)
class UPlayerRelevancyService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerRelevancyService");
		return ptr;
	}

};


// Class Athena.PlayerStatsComponent
// 0x00C8 (0x0198 - 0x00D0)
class UPlayerStatsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x00D0(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerStatsComponent");
		return ptr;
	}

};


// Class Athena.MockPlayerTelemetryComponent
// 0x0018 (0x0880 - 0x0868)
class UMockPlayerTelemetryComponent : public UPlayerTelemetryComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0868(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MockPlayerTelemetryComponent");
		return ptr;
	}

};


// Class Athena.TestPlayerTelemetryComponentNoEvents
// 0x0000 (0x0868 - 0x0868)
class UTestPlayerTelemetryComponentNoEvents : public UPlayerTelemetryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestPlayerTelemetryComponentNoEvents");
		return ptr;
	}

};


// Class Athena.WalletComponentInterface
// 0x0000 (0x0028 - 0x0028)
class UWalletComponentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WalletComponentInterface");
		return ptr;
	}

};


// Class Athena.PlayerWalletComponent
// 0x0128 (0x01F8 - 0x00D0)
class UPlayerWalletComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	uint32_t                                           LastKnownBalance;                                         // 0x01E3(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x11];                                      // 0x01E7(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PlayerWalletComponent");
		return ptr;
	}


	void ServerRequestBalance();
	void OnRep_BalanceUpdated();
};


// Class Athena.PointOfInterestTrackerInterface
// 0x0000 (0x0028 - 0x0028)
class UPointOfInterestTrackerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PointOfInterestTrackerInterface");
		return ptr;
	}

};


// Class Athena.PointOfInterestTrackerComponent
// 0x00F8 (0x01C8 - 0x00D0)
class UPointOfInterestTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              SecondsBetweenRevelations;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SecondsAfterInertStateWhereNotificationsAreIgnored;       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PointOfInterestTrackerComponent");
		return ptr;
	}

};


// Class Athena.PopUpNotificationComponent
// 0x0350 (0x0420 - 0x00D0)
class UPopUpNotificationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UPopUpMessageDesc*                           NewTitlesAvailableToBuyPopUp;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x235];                                     // 0x01EB(0x0235) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PopUpNotificationComponent");
		return ptr;
	}

};


// Class Athena.PosablePirate
// 0x00A8 (0x0518 - 0x0470)
class APosablePirate : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0470(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PosablePirate");
		return ptr;
	}


	void OnEndGeneratingPirate();
	void OnBeginGeneratingPirate();
	bool IsPirateLoaded();
	TArray<class UClass*> GetCurrentOutfit();
	struct FPirateDescription GetCurrentDescription();
	void BeginGeneratingPirate(const struct FPirateDescription& Desc, TArray<class UClass*> Outfit);
};


// Class Athena.PrimaryInteractNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UPrimaryInteractNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PrimaryInteractNotificationInputId");
		return ptr;
	}

};


// Class Athena.PrimaryInteractReleasedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UPrimaryInteractReleasedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PrimaryInteractReleasedNotificationInputId");
		return ptr;
	}

};


// Class Athena.PrimaryItemUseHeldNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UPrimaryItemUseHeldNotificationInputId : public UPrimaryItemUsePressedNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PrimaryItemUseHeldNotificationInputId");
		return ptr;
	}

};


// Class Athena.PrimaryItemUseReleasedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UPrimaryItemUseReleasedNotificationInputId : public UPrimaryItemUsePressedNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PrimaryItemUseReleasedNotificationInputId");
		return ptr;
	}

};


// Class Athena.PrimitiveComponentTestFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPrimitiveComponentTestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PrimitiveComponentTestFunctionLibrary");
		return ptr;
	}


	void STATIC_CheckWeldParentMatches(class UPrimitiveComponent* TestComponent, class UPrimitiveComponent* ExpectedParentComponent);
};


// Class Athena.ProjectileServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UProjectileServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ProjectileServiceInterface");
		return ptr;
	}

};


// Class Athena.ProjectileService
// 0x0058 (0x04C8 - 0x0470)
class AProjectileService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0470(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ProjectileService");
		return ptr;
	}

};


// Class Athena.ProjectileServiceDataAsset
// 0x0020 (0x0048 - 0x0028)
class UProjectileServiceDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	unsigned char                                      MaxTrails;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultTrailDistance;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultTrailFalloff;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 TrailsMesh;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ProjectileServiceDataAsset");
		return ptr;
	}

};


// Class Athena.ProjectileWeaponFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UProjectileWeaponFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ProjectileWeaponFunctionLibrary");
		return ptr;
	}

};


// Class Athena.ProjectileWeapon
// 0x0230 (0x09F0 - 0x07C0)
class AProjectileWeapon : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x07C0(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ProjectileWeapon");
		return ptr;
	}


	void ScopeTick(float DeltaSeconds);
	void ScopeOn();
	void ScopeOffImmediate();
	void ScopeOff();
	void RadialBlurOn();
	void RadialBlurOff();
	void OnWeaponFired();
	void OnRep_State();
	void OnRep_AmmoLeft(int PreviousAmmo);
	void Multicast_ReceiveFire(const struct FFireBroadcast& Broadcast);
	void Multicast_ReceiveDryFire();
	void GlintOn();
	void GlintOff();
	int GetNumShotsLeftInClip();
	struct FGuid GetLastAttackId();
	void Client_RequestDenied();
	void Client_CorrectPredictedMiss(TArray<struct FHitResult> CorrectedServerHits);
	bool CanFire();
	void AddBulletsToClip(int NumBullets, bool DoClipSizeCheck);
};


// Class Athena.ProjectileWeaponValidationFunctionLibrary
// 0x0008 (0x0030 - 0x0028)
class UProjectileWeaponValidationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ProjectileWeaponValidationFunctionLibrary");
		return ptr;
	}


	struct FProjectileAim STATIC_ClampAimPositionToWeapon(class AProjectileWeapon* ProjectileWeapon, const struct FProjectileAim& InAim, double RewindTime);
};


// Class Athena.PursuitAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UPursuitAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PursuitAIStrategyId");
		return ptr;
	}

};


// Class Athena.PursuitCircleAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UPursuitCircleAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PursuitCircleAIStrategyId");
		return ptr;
	}

};


// Class Athena.QuestsConfig
// 0x01B8 (0x01E0 - 0x0028)
class UQuestsConfig : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<struct FTreasureMapLOD>                     TreasureMapLODs;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      XMarksTheSpotMapItemInfoDescClass;                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultDigRadius;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceBetweenTreasureLocations;                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultRiddleDigRadius;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RiddleMapItemInfoDescClass;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class URiddleTextPhrasebookDataAsset*              RiddlePhrasebookDataAsset;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class URiddleQuestData*                            RiddleQuestDataAsset;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class URiddleQuestDescGeneratorData*               RiddleQuestDescGeneratorData;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class URiddleQuestValidLocationGeneratorData*      RiddleQuestValidLocationGeneratorData;                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BountyMapItemInfoDescClass;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBountyQuestData*                            BountyQuestData;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBountyQuestDescData*                        BountyQuestDescData;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMerchantQuestDescData*                      MerchantQuestDescData;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMerchantQuestData*                          MerchantQuestData;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MerchantMapItemInfoDescClass;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UVoyageProposalAssetSelector*                VoyageProposalAssetData;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 VoyageSelectionVoteCompletedSound;                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBuriedTreasureChestParams                  BuriedTreasureChestParams;                                // 0x01E3(0x0048) (Edit)
	TArray<struct FVoyageProposalOverride>             VoyageProposalOverrides;                                  // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      VoyageProposal;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      VoyageProposal2;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      VoyageProposal3;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      VoyageProposal4;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AllTreasureArtifactsItemInfoDescs;                        // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              AllMessageInBottles;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       MessageInABottleMapsDiscoveredBackgroundImage;            // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FStringAssetReference>               MessageInABottleMapsDiscoveredImages;                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UBootyItemInfoDataAsset*                     BootyItemInfoAsset;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 TutorialStepStartSfx;                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TutorialCutsceneSpawnpointRotation;                       // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TutorialCutsceneFirstPersonMeshOffset;                    // 0x01E3(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TutorialCutsceneCharacterModelReplacedEventTimeout;       // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TutorialCutsceneTimeBeforeFadeIn;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TutorialCutsceneFadeInDuration;                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FoodToAddToInventoryInEatingTutorial;                     // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TutorialStartingHealth;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MapToAddToInventoryInTutorial;                            // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPopUpMessageDesc*                           TutorialBuyVoyagePopupDesc;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPopUpMessageDesc*                           PlaceVoyageOnCaptainTablePopupDesc;                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPopUpMessageDesc*                           ReturnBootyToTraderPopupDesc;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuestsConfig");
		return ptr;
	}

};


// Class Athena.QuickSwitchPrimaryWeaponNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickSwitchPrimaryWeaponNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickSwitchPrimaryWeaponNotificationInputId");
		return ptr;
	}

};


// Class Athena.QuickSwitchSecondaryWeaponNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UQuickSwitchSecondaryWeaponNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.QuickSwitchSecondaryWeaponNotificationInputId");
		return ptr;
	}

};


// Class Athena.EmotesRadialCompositeInputHandler
// 0x0068 (0x01D0 - 0x0168)
class UEmotesRadialCompositeInputHandler : public URadialCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0168(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EmotesRadialCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnEmotesRadialTriggerNextSetOfPhrases();
	TEnumAsByte<EInputHandlerResult> OnEmotesRadialDeactivatedKeyboard();
	TEnumAsByte<EInputHandlerResult> OnEmotesRadialDeactivatedGamepad();
	TEnumAsByte<EInputHandlerResult> OnEmotesRadialActivatedKeyboard();
	TEnumAsByte<EInputHandlerResult> OnEmotesRadialActivatedGamepad();
};


// Class Athena.PhrasesRadialCompositeInputHandler
// 0x0078 (0x01E0 - 0x0168)
class UPhrasesRadialCompositeInputHandler : public URadialCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0168(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PhrasesRadialCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnPhrasesRadialTriggerNextSetOfPhrases();
	TEnumAsByte<EInputHandlerResult> OnPhrasesRadialInventoryDeactivatedKeyboard();
	TEnumAsByte<EInputHandlerResult> OnPhrasesRadialInventoryDeactivatedGamepad();
	TEnumAsByte<EInputHandlerResult> OnPhrasesRadialInventoryActivatedKeyboard();
	TEnumAsByte<EInputHandlerResult> OnPhrasesRadialInventoryActivatedGamepad();
	TEnumAsByte<EInputHandlerResult> OnBlock();
};


// Class Athena.RadialInventoryCompositeInputHandler
// 0x00C0 (0x0228 - 0x0168)
class URadialInventoryCompositeInputHandler : public URadialCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0168(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RadialInventoryCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnMapRadialInventoryDeactivatedKeyboard();
	TEnumAsByte<EInputHandlerResult> OnMapRadialInventoryDeactivatedGamepad();
	TEnumAsByte<EInputHandlerResult> OnMapRadialInventoryActivatedKeyboard();
	TEnumAsByte<EInputHandlerResult> OnMapRadialInventoryActivatedGamepad();
	TEnumAsByte<EInputHandlerResult> OnItemRadialTriggerNextSetOfItems();
	TEnumAsByte<EInputHandlerResult> OnItemRadialInventoryDeactivatedKeyboard();
	TEnumAsByte<EInputHandlerResult> OnItemRadialInventoryDeactivatedGamepad();
	TEnumAsByte<EInputHandlerResult> OnItemRadialInventoryActivatedKeyboard();
	TEnumAsByte<EInputHandlerResult> OnItemRadialInventoryActivatedGamepad();
};


// Class Athena.MapRadialInventoryComponent
// 0x0000 (0x03B8 - 0x03B8)
class UMapRadialInventoryComponent : public URadialInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MapRadialInventoryComponent");
		return ptr;
	}

};


// Class Athena.RadialInventorySelectionXAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class URadialInventorySelectionXAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RadialInventorySelectionXAnalogInputId");
		return ptr;
	}

};


// Class Athena.RadialInventorySelectionYAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class URadialInventorySelectionYAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RadialInventorySelectionYAnalogInputId");
		return ptr;
	}

};


// Class Athena.RainZoneComponent
// 0x0010 (0x0300 - 0x02F0)
class URainZoneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RainZoneComponent");
		return ptr;
	}

};


// Class Athena.RainZoneServiceInterface
// 0x0000 (0x0028 - 0x0028)
class URainZoneServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RainZoneServiceInterface");
		return ptr;
	}


	void UnregisterRainZoneFromService(const TScriptInterface<class URainZoneInterface>& RainZone);
	void RegisterRainZoneWithService(const TScriptInterface<class URainZoneInterface>& RainZone);
	struct FRainZoneParametersAndLocation GetRainZone(int RainZoneIndex);
	float GetRainStrengthAtTime(const struct FVector& Position, double InTime);
	float GetRainStrength(const struct FVector& Position);
	int GetNumberOfRainZones();
	TArray<struct FRainZoneParametersAndLocation> GetAllRainZones();
};


// Class Athena.RainZoneService
// 0x0018 (0x0040 - 0x0028)
class URainZoneService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RainZoneService");
		return ptr;
	}

};


// Class Athena.RegistrablePartTestInterface
// 0x0000 (0x0028 - 0x0028)
class URegistrablePartTestInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RegistrablePartTestInterface");
		return ptr;
	}

};


// Class Athena.RegistrablePartTestObject
// 0x0000 (0x0028 - 0x0028)
class URegistrablePartTestObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RegistrablePartTestObject");
		return ptr;
	}

};


// Class Athena.RegistrablePartTestObjectWithInterface
// 0x0008 (0x0030 - 0x0028)
class URegistrablePartTestObjectWithInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RegistrablePartTestObjectWithInterface");
		return ptr;
	}

};


// Class Athena.RendererSettingsFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class URendererSettingsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RendererSettingsFunctionLibrary");
		return ptr;
	}


	void STATIC_UpdateRendererSettings();
};


// Class Athena.RepairingInterface
// 0x0000 (0x0028 - 0x0028)
class URepairingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RepairingInterface");
		return ptr;
	}


	class UClass* GetRepairType();
};


// Class Athena.RepairObjectActionStateId
// 0x0000 (0x0028 - 0x0028)
class URepairObjectActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RepairObjectActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoRepairObjectActionState(class AActor* RepairableActor, class AActor* Character, class UClass* InputID);
	void STATIC_PopCharacterOutOfRepairObjectActionState(class AActor* Character);
};


// Class Athena.TestAnotherRepairTypeId
// 0x0000 (0x0028 - 0x0028)
class UTestAnotherRepairTypeId : public URepairTypeId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestAnotherRepairTypeId");
		return ptr;
	}

};


// Class Athena.TestRepairTypeId
// 0x0000 (0x0028 - 0x0028)
class UTestRepairTypeId : public URepairTypeId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestRepairTypeId");
		return ptr;
	}

};


// Class Athena.WoodRepairTypeId
// 0x0000 (0x0028 - 0x0028)
class UWoodRepairTypeId : public URepairTypeId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WoodRepairTypeId");
		return ptr;
	}

};


// Class Athena.ResourceProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UResourceProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ResourceProviderInterface");
		return ptr;
	}

};


// Class Athena.ResourceProviderComponent
// 0x0008 (0x00D8 - 0x00D0)
class UResourceProviderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ResourceProviderComponent");
		return ptr;
	}

};


// Class Athena.UncachedResourceProviderComponent
// 0x0018 (0x00F0 - 0x00D8)
class UUncachedResourceProviderComponent : public UResourceProviderComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UncachedResourceProviderComponent");
		return ptr;
	}

};


// Class Athena.RewardComponent
// 0x00B0 (0x0180 - 0x00D0)
class URewardComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00D0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RewardComponent");
		return ptr;
	}


	void Client_OnRewardRequestSucceededEvent(const struct FRewardRequestSucceededEvent& RewardRequestSucceededEvent);
	void Client_OnRewardRequestFailedEvent(const struct FRewardRequestFailedEvent& RewardRequestFailedEvent);
};


// Class Athena.RewardDefinitionAsset
// 0x0010 (0x0038 - 0x0028)
class URewardDefinitionAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RewardDefinitionAsset");
		return ptr;
	}

};


// Class Athena.RewardDefinitionAssetList
// 0x0018 (0x0040 - 0x0028)
class URewardDefinitionAssetList : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class URewardDefinitionAsset*>              RewardDefinitionAssets;                                   // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RewardDefinitionAssetList");
		return ptr;
	}

};


// Class Athena.RewardServiceInterface
// 0x0000 (0x0028 - 0x0028)
class URewardServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RewardServiceInterface");
		return ptr;
	}

};


// Class Athena.RewardService
// 0x0068 (0x0090 - 0x0028)
class URewardService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RewardService");
		return ptr;
	}

};


// Class Athena.RewindComponent
// 0x0080 (0x0150 - 0x00D0)
class URewindComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FRewindComponentParameters                  Parameters;                                               // 0x01E3(0x0008) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RewindComponent");
		return ptr;
	}

};


// Class Athena.RewindPhysicsServiceInterface
// 0x0000 (0x0028 - 0x0028)
class URewindPhysicsServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RewindPhysicsServiceInterface");
		return ptr;
	}

};


// Class Athena.RewindPhysicsService
// 0x0030 (0x0058 - 0x0028)
class URewindPhysicsService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RewindPhysicsService");
		return ptr;
	}

};


// Class Athena.RiddleQuestData
// 0x0020 (0x0048 - 0x0028)
class URiddleQuestData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseEvent*                                 DefaultGateCompletedAudioCue;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 DefaultGateCompletedMusicCue;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RiddleQuestData");
		return ptr;
	}

};


// Class Athena.RiddleQuestDescGeneratorData
// 0x0040 (0x0068 - 0x0028)
class URiddleQuestDescGeneratorData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              TemporaryLandmarkRadius;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TemporaryLandmarkHeight;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FValidRiddleOptions>                 ValidRiddleOptions;                                       // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FRiddleActionInfo>                   RiddleActionInfo;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FText>                               CompassDirections;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RiddleQuestDescGeneratorData");
		return ptr;
	}

};


// Class Athena.RiddleQuestValidLocationGeneratorData
// 0x0038 (0x0060 - 0x0028)
class URiddleQuestValidLocationGeneratorData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              PacesToCentimetres;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MinNumPaces;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxNumPaces;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MinNumPacesForNonVagueNonUniqueLandmark;                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxNumPacesForNonVagueNonUniqueLandmark;                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IsBlockedTestHeight;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CastDownOffset;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CastDownLength;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleChangeBetweenPaces;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionTestCapsuleHalfHeight;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionTestCapsuleRadius;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionTestYOffset;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     HitTestTraceChannel;                                      // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RiddleQuestValidLocationGeneratorData");
		return ptr;
	}

};


// Class Athena.RiddleTextPhrasebookDataAsset
// 0x0010 (0x0038 - 0x0028)
class URiddleTextPhrasebookDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RiddleTextPhrasebookDataAsset");
		return ptr;
	}

};


// Class Athena.RiddleTextPhraseDataAsset
// 0x0010 (0x0038 - 0x0028)
class URiddleTextPhraseDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RiddleTextPhraseDataAsset");
		return ptr;
	}

};


// Class Athena.RightTriggerAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class URightTriggerAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RightTriggerAnalogInputId");
		return ptr;
	}

};


// Class Athena.Rudder
// 0x0070 (0x04E0 - 0x0470)
class ARudder : public AActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0470(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Rudder");
		return ptr;
	}


	void SetRudderAngleRatio(float InRudderAngleRatio);
	float GetServerAngleRatio();
};


// Class Athena.RumbleHandlerComponent
// 0x0050 (0x0120 - 0x00D0)
class URumbleHandlerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<struct FRumbleParameters>                   RumbleParameters;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RumbleHandlerComponent");
		return ptr;
	}


	void EventFired(const struct FName& InTag);
};


// Class Athena.Sail
// 0x01A8 (0x0618 - 0x0470)
class ASail : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0470(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Sail");
		return ptr;
	}


	void SetTurbulence(float InTurbulence);
	void SetSailLoweredProportion(float Proportion);
	void SetSailAngleRatio(float AngleRatio);
	void SetForceScalarFromBPParams(float Scalar);
	void SetDamageScalar(float Scalar);
	void SetBillowAmount(float InBillowingAmount);
	float GetVisualBillowAmount();
	float GetSailLoweredProportion();
	float GetSailAngleRatio();
	float GetSailAngle();
	float GetMaxRotation();
	float GetBillowAmount();
	float CalculateFurlValue();
};


// Class Athena.SailAngleAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class USailAngleAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SailAngleAnalogInputId");
		return ptr;
	}

};


// Class Athena.SailAnimInterface
// 0x0000 (0x0028 - 0x0028)
class USailAnimInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SailAnimInterface");
		return ptr;
	}


	void UpdateParameters(float Turning, float Billow, float WindStrength, float SailHeight, float Falling, int FallingAnimation);
	void InitialiseSail(float PlayRateMultiplier, bool MainSail);
	void InitialiseMast(float MastFallingLimit);
};


// Class Athena.SailAnimInstance
// 0x0060 (0x04A0 - 0x0440)
class USailAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0440(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SailAnimInstance");
		return ptr;
	}

};


// Class Athena.SailHoistAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class USailHoistAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SailHoistAnalogInputId");
		return ptr;
	}

};


// Class Athena.SailHoistTestFunctions
// 0x0000 (0x0028 - 0x0028)
class USailHoistTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SailHoistTestFunctions");
		return ptr;
	}


	class ASailHoist* STATIC_SetupSailHoistServerSide(class UObject* WorldContextObject, const struct FVector& SpawnLocation, class UClass* SailHoistClass);
	void STATIC_SetupSailHoistClientSideWithProvidedHoist(class UObject* WorldContextObject, class ASailHoist* Hoist);
	class ASailHoist* STATIC_SetupSailHoistClientSide(class UObject* WorldContextObject);
};


// Class Athena.ScreenSpaceVFXComponentParams
// 0x0068 (0x0090 - 0x0028)
class UScreenSpaceVFXComponentParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              EffectStrengthSpringAcceleration;                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 EffectStrengthOverTimeCurve;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ContinuousDamageStrengthSpringAcceleration;               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ContinuousDamageTimeCurve;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ContinuousDamageMaxDamageValue;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ContinuousDamageMaxDamageStrength;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ContinuousDamageCycleTime;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       VFXNameDamage;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      DirectionalDamageIndicatorParameterName;                  // 0x01E3(0x0010) (Edit, ZeroConstructor)
	float                                              DirectionalDamageIndicatorLifetime;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DrowningEffectStrengthOverTimeCurve;                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       VFXNameDrowning;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ScreenSpaceVFXComponentParams");
		return ptr;
	}

};


// Class Athena.ScreenSpaceVFXComponent
// 0x02F0 (0x03C0 - 0x00D0)
class UScreenSpaceVFXComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UScreenSpaceVFXComponentParams*              Params;                                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1D5];                                     // 0x01EB(0x01D5) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ScreenSpaceVFXComponent");
		return ptr;
	}

};


// Class Athena.Seagulls
// 0x0000 (0x0470 - 0x0470)
class ASeagulls : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Seagulls");
		return ptr;
	}


	void Multicast_DismissSeagulls();
	void FadeOut();
	void FadeIn();
};


// Class Athena.SeaIdValidationDataAsset
// 0x0010 (0x0038 - 0x0028)
class USeaIdValidationDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SeaIdValidationDataAsset");
		return ptr;
	}

};


// Class Athena.SecondaryInteractNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class USecondaryInteractNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SecondaryInteractNotificationInputId");
		return ptr;
	}

};


// Class Athena.SecondaryInteractReleasedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class USecondaryInteractReleasedNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SecondaryInteractReleasedNotificationInputId");
		return ptr;
	}

};


// Class Athena.SecondaryItemUseHeldNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class USecondaryItemUseHeldNotificationInputId : public USecondaryItemUsePressedNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SecondaryItemUseHeldNotificationInputId");
		return ptr;
	}

};


// Class Athena.SecondaryItemUseReleasedNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class USecondaryItemUseReleasedNotificationInputId : public USecondaryItemUsePressedNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SecondaryItemUseReleasedNotificationInputId");
		return ptr;
	}

};


// Class Athena.SenseInitialReactionAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class USenseInitialReactionAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SenseInitialReactionAIStrategyId");
		return ptr;
	}

};


// Class Athena.SenseSearchingAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class USenseSearchingAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SenseSearchingAIStrategyId");
		return ptr;
	}

};


// Class Athena.ServerUpdateReportingServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UServerUpdateReportingServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ServerUpdateReportingServiceInterface");
		return ptr;
	}

};


// Class Athena.ServerUpdateReportingService
// 0x02F8 (0x0320 - 0x0028)
class UServerUpdateReportingService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2F8];                                     // 0x0028(0x02F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ServerUpdateReportingService");
		return ptr;
	}

};


// Class Athena.ServiceProviderInterfaceTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UServiceProviderInterfaceTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ServiceProviderInterfaceTestFunctions");
		return ptr;
	}


	bool STATIC_TestRegisterAndGetService(class UObject* WorldContextObject);
	bool STATIC_TestGetServiceUnregistered(class UObject* WorldContextObject);
};


// Class Athena.ShadowAIFormComponent
// 0x00B8 (0x0200 - 0x0148)
class UShadowAIFormComponent : public UAthenaAIFormComponent
{
public:
	unsigned char                                      UnknownData00[0x9B];                                      // 0x0148(0x009B) MISSED OFFSET
	class UParticleSystem*                             LightStateConstantParticlesTemplate;                      // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DarkStateConstantParticlesTemplate;                       // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ToLightTransitionParticlesTemplate;                       // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ToDarkTransitionParticlesTemplate;                        // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicalMaterial*                           ClientLightStatePhysMaterialOverride;                     // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicalMaterial*                           ClientDarkStatePhysMaterialOverride;                      // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StartDarkStateAudioLoopEvent;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopDarkStateAudioLoopEvent;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TAssetPtr<class UMaterial>>                 ShadowBaseMaterials;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       ShadowShaderParamName;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightStateShaderParamValue;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DarkStateShaderParamValue;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShaderParamBlendSpeed;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SeedShaderParamName;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxSeedShaderValue;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EShadowAIFormState>                    CurrentState;                                             // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LightStateConstantParticleSystemComponent;                // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    DarkStateConstantParticleSystemComponent;                 // 0x01E3(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            ShadowDynamicMaterialInstances;                           // 0x01E3(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0xD];                                       // 0x01F3(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShadowAIFormComponent");
		return ptr;
	}


	void OnRep_CurrentState(TEnumAsByte<EShadowAIFormState> PreviousState);
	void Multicast_ChangedToState(TEnumAsByte<EShadowAIFormState> InState);
};


// Class Athena.ShadowAIFormDataAsset
// 0x0020 (0x0088 - 0x0068)
class UShadowAIFormDataAsset : public UAthenaAIFormDataAsset
{
public:
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	float                                              SunriseTimeHours;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SunsetTimeHours;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightStateActivationTime;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightStateCooldown;                                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerLanternIdleLightRange;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayerLanternRaisedLightRange;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightExposureStunDuration;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShadowAIFormDataAsset");
		return ptr;
	}

};


// Class Athena.ShadowAIFormProximityPlayerTracker
// 0x0028 (0x0050 - 0x0028)
class UShadowAIFormProximityPlayerTracker : public UAIPlayerTracker
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShadowAIFormProximityPlayerTracker");
		return ptr;
	}

};


// Class Athena.ShantyInterface
// 0x0000 (0x0028 - 0x0028)
class UShantyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShantyInterface");
		return ptr;
	}


	void RequestInstrumentStop(class AActor* InstrumentActor);
	void RequestInstrumentPlay(class AActor* InstrumentActor, const TScriptInterface<class UPlayerEntitlementViewInterface>& EntitlementInterface);
	int GetNumberOfShantiesPlaying();
	int GetNumberOfInstrumentsPlayingOnEnsemble(int EnsembleIndex);
};


// Class Athena.ShantyService
// 0x0040 (0x0068 - 0x0028)
class UShantyService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TArray<class AEnsemble*>                           EnsembleActors;                                           // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShantyService");
		return ptr;
	}

};


// Class Athena.SharkActionStateCreatorDefinition
// 0x0048 (0x04B8 - 0x0470)
class ASharkActionStateCreatorDefinition : public AActionStateCreatorDefinition
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0470(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SharkActionStateCreatorDefinition");
		return ptr;
	}

};


// Class Athena.SharkPartsDesc
// 0x0010 (0x0038 - 0x0028)
class USharkPartsDesc : public UAIPartsDesc
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SharkPartsDesc");
		return ptr;
	}

};


// Class Athena.SwimmingCreatureMovementInterface
// 0x0000 (0x0028 - 0x0028)
class USwimmingCreatureMovementInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SwimmingCreatureMovementInterface");
		return ptr;
	}

};


// Class Athena.SharkPawn
// 0x03A0 (0x0870 - 0x04D0)
class ASharkPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x3A0];                                     // 0x04D0(0x03A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SharkPawn");
		return ptr;
	}


	void SetAIStrategy(class UClass* InStrategy);
	void OnRep_CurrentAIStrategy(class UClass* OldAIStrategy);
	void Multicast_PlayMontageRPC(int AnimIndex, bool PlayAsDynamicMontage);
	void Multicast_DespawnRPC();
	bool IsDoingQuickDeath();
	int GetIndexForMontage(class UObject* Montage);
	float GetCreatureDistanceFromWaterHeight();
	class UClass* GetAIStrategy();
};


// Class Athena.ShipDynamicsTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UShipDynamicsTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipDynamicsTargetInterface");
		return ptr;
	}

};


// Class Athena.ShipLiveryDescAsset
// 0x0020 (0x0048 - 0x0028)
class UShipLiveryDescAsset : public UShipPartDescAsset
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipLiveryDescAsset");
		return ptr;
	}

};


// Class Athena.ShipLiveryComponent
// 0x0058 (0x0128 - 0x00D0)
class UShipLiveryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<struct FShipLivery>                         LiveryDescs;                                              // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipLiveryComponent");
		return ptr;
	}

};


// Class Athena.TeleportLocationInterface
// 0x0000 (0x0028 - 0x0028)
class UTeleportLocationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TeleportLocationInterface");
		return ptr;
	}


	struct FTeleportLocation GetTeleportLocationForCharacter(class AAthenaCharacter* Character);
	TArray<struct FTeleportLocation> GetAllTeleportLocationsForCharacter(class AAthenaCharacter* Character);
};


// Class Athena.SurfaceWaterComponent
// 0x0090 (0x0700 - 0x0670)
class USurfaceWaterComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0670(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SurfaceWaterComponent");
		return ptr;
	}


	void SetSimulationActive(bool IsActive);
	void OnRep_AddWater();
	class UTexture* GetWaterTexture();
	class UTexture* GetNormalTexture();
	struct FVector ConvertToWaterSpace(const struct FVector& WorldSpacePosition);
	void ClearWaterTexture(const struct FLinearColor& ClearColor);
	void AddWater(const struct FVector& Position, float Radius, float Strength, bool CheckBounds);
};


// Class Athena.Ship
// 0x0AF0 (0x0F60 - 0x0470)
class AShip : public AActor
{
public:
	unsigned char                                      UnknownData00[0xAF0];                                     // 0x0470(0x0AF0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Ship");
		return ptr;
	}


	void ToggleShipWaterReflections(bool EnableReflections);
	void SetVelocity(const struct FVector& Velocity);
	void SetDebugKeelOverSpeedScalar(float Scalar);
	void Replenish();
	void ReduceWaterOcclusionZone(float ReduceWaterOcclusionZoneTime);
	void OnShipPartUnregistered(const struct FName& PartName, class AActor* PartActor);
	void OnShipPartRegistered(const struct FName& PartName, class AActor* PartActor);
	void OnRep_CrewShipManifest();
	void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
	void Multicast_DisableAllShipInteractables();
	bool IsWorldSpacePositionBelowTopDeckPlane(const struct FVector& Position);
	bool IsWorldSpacePositionBelowMidDeckPlane(const struct FVector& Position);
	bool IsOcclusionZoneFullyReduced();
	struct FVector GetShipLocatorPositionChecked(TEnumAsByte<EShipLocation> LocatorID);
	bool GetShipLocatorPosition(TEnumAsByte<EShipLocation> LocatorName, struct FVector* LocatorPosition);
	struct FVector GetSampledSpeed();
	class AShipInternalWater* GetInternalWater();
	float GetHullSubmersedPercentage();
	bool GetHasShipEverSetSail();
	float GetEmpiricalMaxShipSpeedInMPS();
	class USurfaceWaterComponent* GetDeckSurfaceWater();
	struct FVector GetCurrentVelocity();
	void EnableCalmWaterBobbing(bool bEnable);
	void Deplete();
	bool CanBeReplenished();
	bool AreShipInteractablesDisabled();
};


// Class Athena.DebugRegisterDynamicsShip
// 0x0000 (0x0F60 - 0x0F60)
class ADebugRegisterDynamicsShip : public AShip
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.DebugRegisterDynamicsShip");
		return ptr;
	}

};


// Class Athena.ShipErrorOnNonAuthorityPhysicsChange
// 0x0020 (0x0F80 - 0x0F60)
class AShipErrorOnNonAuthorityPhysicsChange : public AShip
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0F60(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipErrorOnNonAuthorityPhysicsChange");
		return ptr;
	}

};


// Class Athena.TestShipActorPhysicsErrorCorrection
// 0x0010 (0x0F70 - 0x0F60)
class ATestShipActorPhysicsErrorCorrection : public AShip
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0F60(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestShipActorPhysicsErrorCorrection");
		return ptr;
	}

};


// Class Athena.ShipAssetClassDatabaseInterface
// 0x0000 (0x0028 - 0x0028)
class UShipAssetClassDatabaseInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipAssetClassDatabaseInterface");
		return ptr;
	}

};


// Class Athena.ShipAssetClassDatabaseService
// 0x0010 (0x0038 - 0x0028)
class UShipAssetClassDatabaseService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipAssetClassDatabaseService");
		return ptr;
	}

};


// Class Athena.ShipAudio
// 0x0078 (0x04E8 - 0x0470)
class AShipAudio : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0470(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipAudio");
		return ptr;
	}

};


// Class Athena.ShipAudioEmitterComponent
// 0x0010 (0x0320 - 0x0310)
class UShipAudioEmitterComponent : public UWwiseEmitterComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0310(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipAudioEmitterComponent");
		return ptr;
	}

};


// Class Athena.ShipHullAudio
// 0x00E0 (0x05C8 - 0x04E8)
class AShipHullAudio : public AShipAudio
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x04E8(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipHullAudio");
		return ptr;
	}

};


// Class Athena.ShipHullAudioLarge
// 0x0000 (0x05C8 - 0x05C8)
class AShipHullAudioLarge : public AShipHullAudio
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipHullAudioLarge");
		return ptr;
	}

};


// Class Athena.ShipHullAudioSmall
// 0x0000 (0x05C8 - 0x05C8)
class AShipHullAudioSmall : public AShipHullAudio
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipHullAudioSmall");
		return ptr;
	}

};


// Class Athena.ShipBuilder
// 0x0060 (0x0088 - 0x0028)
class UShipBuilder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipBuilder");
		return ptr;
	}

};


// Class Athena.ShipCategoryA
// 0x0000 (0x0028 - 0x0028)
class UShipCategoryA : public UShipCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCategoryA");
		return ptr;
	}

};


// Class Athena.ShipCategoryB
// 0x0000 (0x0028 - 0x0028)
class UShipCategoryB : public UShipCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCategoryB");
		return ptr;
	}

};


// Class Athena.ShipCategoryC
// 0x0000 (0x0028 - 0x0028)
class UShipCategoryC : public UShipCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCategoryC");
		return ptr;
	}

};


// Class Athena.ShipCategoryD
// 0x0000 (0x0028 - 0x0028)
class UShipCategoryD : public UShipCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCategoryD");
		return ptr;
	}

};


// Class Athena.ShipCategoryS
// 0x0000 (0x0028 - 0x0028)
class UShipCategoryS : public UShipCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCategoryS");
		return ptr;
	}

};


// Class Athena.ShipCompass
// 0x0068 (0x04D8 - 0x0470)
class AShipCompass : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0470(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCompass");
		return ptr;
	}

};


// Class Athena.ShipCustomizationLoadoutControlInterface
// 0x0000 (0x0028 - 0x0028)
class UShipCustomizationLoadoutControlInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCustomizationLoadoutControlInterface");
		return ptr;
	}


	bool UnequipShipCustomization(class UClass* InDesc);
	void SetShipCustomizationLoadout(const struct FShipCustomizationLoadout& InLoadout);
	bool SetInitialShipCustomizations(TArray<class UClass*> InInitialCustomizations);
	bool EquipShipCustomization(class UClass* InDesc, class AActor* InInstigator);
};


// Class Athena.ShipCustomizationLoadoutViewInterface
// 0x0000 (0x0028 - 0x0028)
class UShipCustomizationLoadoutViewInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCustomizationLoadoutViewInterface");
		return ptr;
	}


	struct FShipCustomizationLoadout GetShipCustomizationLoadout();
	TArray<class UClass*> GetInitialShipCustomizations();
	TArray<struct FPartDesc> GetActivePartCustomizations();
};


// Class Athena.ShipCustomizationLoadoutComponent
// 0x0070 (0x0140 - 0x00D0)
class UShipCustomizationLoadoutComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FShipCustomizationLoadout                   Loadout;                                                  // 0x01E3(0x0028) (Net)
	class AShip*                                       Ship;                                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FShipCustomizationLoadoutPartCustomizations ActivePartCustomizations;                                 // 0x01E3(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCustomizationLoadoutComponent");
		return ptr;
	}


	void OnRep_Loadout();
};


// Class Athena.ShipDescAsset
// 0x0048 (0x0070 - 0x0028)
class UShipDescAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipDescAsset");
		return ptr;
	}

};


// Class Athena.ShipDescConversionFunctions
// 0x0000 (0x0028 - 0x0028)
class UShipDescConversionFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipDescConversionFunctions");
		return ptr;
	}


	bool STATIC_ShipDescToJson(const struct FShipDesc& ShipDesc, class FString* JsonString);
	bool STATIC_ShipDescFromJson(const class FString& JsonString, struct FShipDesc* ShipDesc);
};


// Class Athena.ShipDescGeneratorTestFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UShipDescGeneratorTestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipDescGeneratorTestFunctionLibrary");
		return ptr;
	}


	struct FShipDesc STATIC_GenerateShipDescForTestLargeShip();
};


// Class Athena.ShipDynamicsProviderActor
// 0x0040 (0x04B0 - 0x0470)
class AShipDynamicsProviderActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0470(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipDynamicsProviderActor");
		return ptr;
	}

};


// Class Athena.ShipEmbedToken
// 0x0000 (0x0470 - 0x0470)
class AShipEmbedToken : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipEmbedToken");
		return ptr;
	}

};


// Class Athena.ShipFactory
// 0x0010 (0x0038 - 0x0028)
class UShipFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipFactory");
		return ptr;
	}


	class AActor* SpawnSyncWithDatabase(class UObject* WorldContextObject, const struct FShipDesc& Desc, const TScriptInterface<class UShipAssetClassDatabaseInterface>& ShipAssetClassDatabaseInterface, const struct FVector& Position, const struct FRotator& Rotation);
	class AActor* SpawnSync(class UObject* WorldContextObject, const struct FShipDesc& Desc, const struct FVector& Position, const struct FRotator& Rotation);
	class UShipFactory* STATIC_MakeShipFactory();
};


// Class Athena.ShipFactorySpawnCallbackCounter
// 0x0048 (0x0070 - 0x0028)
class UShipFactorySpawnCallbackCounter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipFactorySpawnCallbackCounter");
		return ptr;
	}


	void OnSuccess(class AActor* InActor);
	void OnFailure();
};


// Class Athena.ShipFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UShipFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipFunctionLibrary");
		return ptr;
	}


	class AActor* STATIC_SpawnShip(const struct FVector& Pos, const struct FRotator& Rotation);
	void STATIC_SpawnFunctioningSmallShipWithCrewId(const struct FVector& Pos, const struct FRotator& Rotation, const struct FGuid& CrewId);
	void STATIC_SpawnFunctioningSmallShip(const struct FVector& Pos, const struct FRotator& Rotation);
	void STATIC_SpawnFunctioningLargeShip(const struct FVector& Pos, const struct FRotator& Rotation);
	TArray<class AWheel*> STATIC_GetWheels(class AActor* Actor);
	TArray<class ASailHoist*> STATIC_GetSailHoists(class AActor* Actor);
	TArray<class ASailAngle*> STATIC_GetSailAnglers(class AActor* Actor);
	TArray<class ALadder*> STATIC_GetLadders(class AActor* Actor);
	TArray<class AActor*> STATIC_GetInteractablesOfClass(class AActor* Actor, class UClass* Class);
	TArray<class AActor*> STATIC_GetInteractables(class AActor* Actor);
	TArray<class ACannon*> STATIC_GetCannons(class AActor* Actor);
};


// Class Athena.ShipSpeedBand
// 0x0008 (0x0030 - 0x0028)
class UShipSpeedBand : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipSpeedBand");
		return ptr;
	}

};


// Class Athena.ShipHullDamageDataAsset
// 0x0010 (0x0038 - 0x0028)
class UShipHullDamageDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipHullDamageDataAsset");
		return ptr;
	}

};


// Class Athena.ShipHullCollisionComponent
// 0x00D8 (0x01A8 - 0x00D0)
class UShipHullCollisionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              SolidCollisionRetainTime;                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LandCollisionRetainTime;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ImpactStrengthToDamageLevelMapping;                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinIntervalBetweenHitDamage;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinIntervalBetweenLandscapeHitDamage;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinIntervalBetweenShipHitDamage;                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UShipHullDamageDataAsset*                    HullDamageDataAsset;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ShipFwdSpeedToFeedbackAmplitude;                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UForceFeedbackEffect*>                HitLandForceFeedbackEffects;                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UCurveFloat*                                 FeedbackStrengthToRumbleIndexMapping;                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinIntervalBetweenHitFeedback;                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StartScrapingEvent;                                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopScrapingEvent;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     ShipDamagePool;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ShipDamageImpactRtpc;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxIntervalToDetermineAudioScrape;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSampledSpeedMagnitudeForMaxScrapeAudio;                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AShip*                                       Ship;                                                     // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipHullCollisionComponent");
		return ptr;
	}


	void StopShipImpactSfx_RPC();
	void PlayShipImpactSfx_RPC();
	bool IsWorldSpacePositionInsideHull(const struct FVector& Position);
	bool IsWorldSpacePositionInsideCabin(const struct FVector& Position);
	bool GetIsShipInContactWithSolidHits();
	bool GetIsShipInContactWithLand();
};


// Class Athena.ShipLiveryCatalogueDataAsset
// 0x0010 (0x0038 - 0x0028)
class UShipLiveryCatalogueDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipLiveryCatalogueDataAsset");
		return ptr;
	}

};


// Class Athena.ShipNamesDataAsset
// 0x0010 (0x0038 - 0x0028)
class UShipNamesDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipNamesDataAsset");
		return ptr;
	}

};


// Class Athena.ShipNosediveBrake
// 0x0020 (0x0048 - 0x0028)
class UShipNosediveBrake : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UCurveFloat*                                 SubmersionVsBrakeFactorCurve;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakeForceScalar;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocalProbePos;                                            // 0x01E3(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipNosediveBrake");
		return ptr;
	}

};


// Class Athena.ShipPartCustomization
// 0x0068 (0x0090 - 0x0028)
class UShipPartCustomization : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipPartCustomization");
		return ptr;
	}


	class UShipPartCustomization* STATIC_MakeSyncShipPartCustomization();
	class UShipPartCustomization* STATIC_MakeAsyncShipPartCustomization();
	void Customize(class AShip* InShip, const struct FPartDesc& PartDesc, const struct FScriptDelegate& OnSuccessCallback, const struct FScriptDelegate& OnFailureCallback);
};


// Class Athena.ShipPartCustomizationTestCallbacks
// 0x0030 (0x0058 - 0x0028)
class UShipPartCustomizationTestCallbacks : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipPartCustomizationTestCallbacks");
		return ptr;
	}


	void OnSuccess(class AActor* InActor);
	void OnFailure(TEnumAsByte<EShipPartCustomizationErrorCode> InErrorCode);
};


// Class Athena.ShipPartCustomizationTestLibrary
// 0x0000 (0x0028 - 0x0028)
class UShipPartCustomizationTestLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipPartCustomizationTestLibrary");
		return ptr;
	}


	bool STATIC_ApplyCustomization(class UShipPartCustomizationComponent* CustomizationComponent, const struct FPartDesc& InPartDesc);
};


// Class Athena.GenericPartDescAsset
// 0x0008 (0x0030 - 0x0028)
class UGenericPartDescAsset : public UShipPartDescAsset
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GenericPartDescAsset");
		return ptr;
	}

};


// Class Athena.ShipPartsCatalogueDataAsset
// 0x0010 (0x0038 - 0x0028)
class UShipPartsCatalogueDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipPartsCatalogueDataAsset");
		return ptr;
	}

};


// Class Athena.ShipPointParticleComponent
// 0x00A0 (0x09A0 - 0x0900)
class UShipPointParticleComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0900(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipPointParticleComponent");
		return ptr;
	}

};


// Class Athena.ShipRolloverCorrector
// 0x0018 (0x0040 - 0x0028)
class UShipRolloverCorrector : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UCurveFloat*                                 TimeRolledOverVSCorrectiveTorque;                         // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RollThresholdToConsiderRolledOver;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipRolloverCorrector");
		return ptr;
	}

};


// Class Athena.ShipService
// 0x0260 (0x06D0 - 0x0470)
class AShipService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x260];                                     // 0x0470(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipService");
		return ptr;
	}


	class AShip* IsWorldPosInsideHull(const struct FVector& Pos);
	class AShip* IsWorldPosInsideCabin(const struct FVector& Pos);
};


// Class Athena.LargeShip
// 0x0000 (0x0028 - 0x0028)
class ULargeShip : public UShipSize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LargeShip");
		return ptr;
	}

};


// Class Athena.MediumShip
// 0x0000 (0x0028 - 0x0028)
class UMediumShip : public UShipSize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MediumShip");
		return ptr;
	}

};


// Class Athena.SmallShip
// 0x0000 (0x0028 - 0x0028)
class USmallShip : public UShipSize
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SmallShip");
		return ptr;
	}

};


// Class Athena.ShipStuckDetectionComponent
// 0x0028 (0x00F8 - 0x00D0)
class UShipStuckDetectionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              MaxShipSpeedToConsiderStationary;                         // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StuckTimeUntilDeletion;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHullSubmersionToConsiderStuckable;                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StuckTimeDecaySpeed;                                      // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PrintDebug;                                               // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AShip*                                       Ship;                                                     // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipStuckDetectionComponent");
		return ptr;
	}


	bool GetDoesShipAppearCurrentlyStuck();
};


// Class Athena.ShipTelemetryComponent
// 0x0110 (0x01E0 - 0x00D0)
class UShipTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x00D0(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipTelemetryComponent");
		return ptr;
	}


	void SetShipHeartbeatInterval(float Interval);
	struct FGuid GetShipIdForWebServices();
};


// Class Athena.ShipTrackerInterface
// 0x0000 (0x0028 - 0x0028)
class UShipTrackerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipTrackerInterface");
		return ptr;
	}

};


// Class Athena.ShipTrackerComponent
// 0x00D8 (0x01A8 - 0x00D0)
class UShipTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	bool                                               bPlayerIsAbandoned;                                       // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipTrackerComponent");
		return ptr;
	}


	bool IsPlayerAbandoned();
};


// Class Athena.GuildShip
// 0x0000 (0x0028 - 0x0028)
class UGuildShip : public UShipType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.GuildShip");
		return ptr;
	}

};


// Class Athena.RentalShip
// 0x0000 (0x0028 - 0x0028)
class URentalShip : public UShipType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RentalShip");
		return ptr;
	}

};


// Class Athena.SoloShip
// 0x0000 (0x0028 - 0x0028)
class USoloShip : public UShipType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SoloShip");
		return ptr;
	}

};


// Class Athena.Shipwreck
// 0x00B0 (0x0520 - 0x0470)
class AShipwreck : public AActor
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0470(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Shipwreck");
		return ptr;
	}


	void OnOverlapEnd(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class Athena.ShipwreckNameGeneratorAbstract
// 0x0000 (0x0028 - 0x0028)
class UShipwreckNameGeneratorAbstract : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwreckNameGeneratorAbstract");
		return ptr;
	}

};


// Class Athena.ShipwreckNameGeneratorDefault
// 0x0028 (0x0050 - 0x0028)
class UShipwreckNameGeneratorDefault : public UShipwreckNameGeneratorAbstract
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwreckNameGeneratorDefault");
		return ptr;
	}

};


// Class Athena.ShipwreckServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UShipwreckServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwreckServiceInterface");
		return ptr;
	}

};


// Class Athena.ShipwreckService
// 0x00C0 (0x0530 - 0x0470)
class AShipwreckService : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0470(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwreckService");
		return ptr;
	}

};


// Class Athena.ShipwreckSiteGeneratorComponent
// 0x0000 (0x00D0 - 0x00D0)
class UShipwreckSiteGeneratorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwreckSiteGeneratorComponent");
		return ptr;
	}

};


// Class Athena.ShipwreckSiteGeneratorNoneComponent
// 0x0000 (0x00D0 - 0x00D0)
class UShipwreckSiteGeneratorNoneComponent : public UShipwreckSiteGeneratorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwreckSiteGeneratorNoneComponent");
		return ptr;
	}

};


// Class Athena.ShipwreckSiteGeneratorRandomComponent
// 0x0048 (0x0118 - 0x00D0)
class UShipwreckSiteGeneratorRandomComponent : public UShipwreckSiteGeneratorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UShipwreckSiteGeneratorRandom*               SiteGenAsset;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwreckSiteGeneratorRandomComponent");
		return ptr;
	}

};


// Class Athena.ShipwreckSiteGeneratorRandomEditorComponent
// 0x0040 (0x0158 - 0x0118)
class UShipwreckSiteGeneratorRandomEditorComponent : public UShipwreckSiteGeneratorRandomComponent
{
public:
	unsigned char                                      UnknownData00[0xCB];                                      // 0x0118(0x00CB) MISSED OFFSET
	float                                              ShipwreckSize;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SphereSegments;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      ShipwreckColor;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      EndOfWorldColor;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      EndOfWorldWarningColor;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      ValidSpawnZoneColor;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      IslandColor;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwreckSiteGeneratorRandomEditorComponent");
		return ptr;
	}

};


// Class Athena.ShipwreckSiteGeneratorRandom
// 0x0038 (0x0060 - 0x0028)
class UShipwreckSiteGeneratorRandom : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	float                                              MinSpawnDistanceFromEndOfWorldZone;                       // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ShipwreckDepthDistribution;                               // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClearanceRadius;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDistanceFromClosestShipwreck;                          // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDistanceFromClosestCrewShip;                           // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDistanceFromClosestIsland;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SiteGenerationThrottle;                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RequestBatchSize;                                         // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwreckSiteGeneratorRandom");
		return ptr;
	}

};


// Class Athena.ShipwreckSiteGeneratorSimulator
// 0x0008 (0x0478 - 0x0470)
class AShipwreckSiteGeneratorSimulator : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0470(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwreckSiteGeneratorSimulator");
		return ptr;
	}


	void SetIslands();
	void ResetShipwrecks();
	void ResetDebugDrawing();
	TArray<struct FIsland> GetIslands();
	void GenerateWreck();
};


// Class Athena.ShipwreckTrackerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UShipwreckTrackerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwreckTrackerServiceInterface");
		return ptr;
	}

};


// Class Athena.ShipwreckTrackerService
// 0x0020 (0x0048 - 0x0028)
class UShipwreckTrackerService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwreckTrackerService");
		return ptr;
	}

};


// Class Athena.ShipwrightServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UShipwrightServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwrightServiceInterface");
		return ptr;
	}

};


// Class Athena.ShipwrightService
// 0x0030 (0x04A0 - 0x0470)
class AShipwrightService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0470(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipwrightService");
		return ptr;
	}

};


// Class Athena.ShopDesc
// 0x0060 (0x0088 - 0x0028)
class UShopDesc : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FText                                       ShopName;                                                 // 0x01E3(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UCatalogDataAsset*                           Catalog;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      Storefront;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UShopDialogue*                               Dialogue;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShopDesc");
		return ptr;
	}

};


// Class Athena.ShopDialogue
// 0x0118 (0x0140 - 0x0028)
class UShopDialogue : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FText                                       ConfirmPurchaseMessage;                                   // 0x01E3(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       PurchaseFailedMessage;                                    // 0x01E3(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       PurchasePendingMessage;                                   // 0x01E3(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       PurchaseSuccessMessage;                                   // 0x01E3(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShopDialogue");
		return ptr;
	}

};


// Class Athena.ShopViewModelComponent
// 0x0218 (0x02E8 - 0x00D0)
class UShopViewModelComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	uint32_t                                           MaxItemOffers;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           MinVoyageOffers;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           MaxVoyagesOwned;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                StockRefreshTime;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x101];                                     // 0x01E7(0x0101) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShopViewModelComponent");
		return ptr;
	}

};


// Class Athena.ShovelDigActionStateId
// 0x0000 (0x0028 - 0x0028)
class UShovelDigActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShovelDigActionStateId");
		return ptr;
	}

};


// Class Athena.ShovelDigInputHandler
// 0x0008 (0x00E0 - 0x00D8)
class UShovelDigInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShovelDigInputHandler");
		return ptr;
	}

};


// Class Athena.SinkingComponent
// 0x0050 (0x0120 - 0x00D0)
class USinkingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FSinkingShipParams                          SinkingParams;                                            // 0x01E3(0x0038) (Edit, BlueprintVisible)
	class AShip*                                       Ship;                                                     // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<EShipState>                            ShipState;                                                // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	int                                                KeelOverConfigIndex;                                      // 0x01E3(0x0004) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SinkingComponent");
		return ptr;
	}


	void SinkShip();
	void SetSinkingParams(const struct FSinkingShipParams& Params);
	void SetDebugKeelOverConfigIndexOverride(int Index);
	void OnRep_ShipState(unsigned char PreviousState);
	bool IsSinking();
	bool IsKeeledOver();
	bool IsDeepEnoughInWaterToSink();
	struct FSinkingShipParams GetSinkingParams();
	TEnumAsByte<EShipState> GetShipState();
	void ForceSinkShip();
	void BeginningToSinkRPC();
};


// Class Athena.SkeletonActionStateCreatorDefinition
// 0x0078 (0x04E8 - 0x0470)
class ASkeletonActionStateCreatorDefinition : public AActionStateCreatorDefinition
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0470(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SkeletonActionStateCreatorDefinition");
		return ptr;
	}

};


// Class Athena.SkeletonFortAIToggler
// 0x0030 (0x0058 - 0x0028)
class USkeletonFortAIToggler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SkeletonFortAIToggler");
		return ptr;
	}

};


// Class Athena.SkellyFort
// 0x02B8 (0x0728 - 0x0470)
class ASkellyFort : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2B8];                                     // 0x0470(0x02B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SkellyFort");
		return ptr;
	}


	void Multicast_OnWaveGroupSpawned(const struct FBountySpawnerNewWaveGroupSpawnedEvent& Ev, class UWwiseEvent* AudioEvent);
	void Multicast_OnFortComplete(const struct FVector& DeathLocation, class UWwiseEvent* AudioEvent);
};


// Class Athena.SkellyFortDataAsset
// 0x0220 (0x0248 - 0x0028)
class USkellyFortDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FWeightedProbabilityRange                   FortProbRange;                                            // 0x01E3(0x0020) (Edit)
	struct FWeightedProbabilityRangeOfRanges           FirstFortRegenInterval;                                   // 0x01E3(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           FortRegenInterval;                                        // 0x01E3(0x0030) (Edit)
	float                                              FindAvailableFortThrottle;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinActivationDistanceFromPlayers;                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FortSignalClass;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UAIBountySpawner*>                    BountySpawners;                                           // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UBountyQuestDescData*                        BountyQuestDescData;                                      // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       NavMeshOverride;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBountyQuestRandomSpawnGeneratorParams      BountyQuestRandomSpawnGeneratorParams;                    // 0x01E3(0x00F0) (Edit)
	class UAISkillsetRankProgression*                  CrewSkillset;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISkillsetRankProgression*                  CaptainSkillset;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UEnvQuery*                                   FindSpawnPosQuery;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRange                   WaveRank;                                                 // 0x01E3(0x0020) (Edit)
	class UAISpawner*                                  AISpawnerWhenFortInactive;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  CannonsAISpawnerWhenFortInactive;                         // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  AISpawnerWhenFortActive;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  CannonsAISpawnerWhenFortActive;                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WaveSpawnSoundEffect;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CaptainSpawnSoundEffect;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 FortCompleteSoundEffect;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WaveSpawnSoundEffectDelay;                                // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnticipationAudioZoneRadiusMetres;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x61];                                      // 0x01E7(0x0061) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SkellyFortDataAsset");
		return ptr;
	}

};


// Class Athena.SkellyFortServiceInterface
// 0x0000 (0x0028 - 0x0028)
class USkellyFortServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SkellyFortServiceInterface");
		return ptr;
	}

};


// Class Athena.SkellyFortService
// 0x00F0 (0x0560 - 0x0470)
class ASkellyFortService : public AActor
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0470(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SkellyFortService");
		return ptr;
	}

};


// Class Athena.SpawnLocationKeywordPriorityListAsset
// 0x0010 (0x0038 - 0x0028)
class USpawnLocationKeywordPriorityListAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SpawnLocationKeywordPriorityListAsset");
		return ptr;
	}

};


// Class Athena.SplineWithEmitterComponent
// 0x0030 (0x0720 - 0x06F0)
class USplineWithEmitterComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x06F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SplineWithEmitterComponent");
		return ptr;
	}

};


// Class Athena.SprintActivationNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class USprintActivationNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SprintActivationNotificationInputId");
		return ptr;
	}

};


// Class Athena.StaggerComponent
// 0x0138 (0x0208 - 0x00D0)
class UStaggerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UCurveFloat*                                 XStickInputOverloaderAmplitude;                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 YStickInputOverloaderAmplitude;                           // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinInputOverloaderSpd;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInputOverloaderSpd;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToChangeDirectionOnSpeedChange;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InputOverloaderSpdChangePerSec;                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinOverloaderSpdChangeTime;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOverloaderSpdChangeTime;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StickInputForMaxInterferenceScalar;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InterferenceScalarAtMinStickInput;                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InterferenceScalarOnLadderStationary;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InterferenceScalarOnLadderMoving;                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxStickDeflectionOnLadderToConsiderStationary;           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StickDeflectionForMaxScalingOnLadder;                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x21];                                      // 0x01E7(0x0021) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StaggerComponent");
		return ptr;
	}


	void SetStaggerStrength(float UnaryStrength);
};


// Class Athena.StartledAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UStartledAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StartledAIStrategyId");
		return ptr;
	}

};


// Class Athena.StarvingInterface
// 0x0000 (0x0028 - 0x0028)
class UStarvingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StarvingInterface");
		return ptr;
	}

};


// Class Athena.StarvingComponent
// 0x0098 (0x0168 - 0x00D0)
class UStarvingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           WeightedTimeToStarveInSeconds;                            // 0x01E3(0x0030) (Edit)
	float                                              StarvingNotificationInterval;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StartStarvingImmediately;                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeSpentStarving;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               HasStartedStarving;                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              TimeToStarveInSeconds;                                    // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StarvingComponent");
		return ptr;
	}

};


// Class Athena.Status
// 0x0000 (0x0028 - 0x0028)
class UStatus : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Status");
		return ptr;
	}

};


// Class Athena.SnakeVenomStatus
// 0x0000 (0x0028 - 0x0028)
class USnakeVenomStatus : public UStatus
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SnakeVenomStatus");
		return ptr;
	}

};


// Class Athena.KrakenGooStatus
// 0x0000 (0x0028 - 0x0028)
class UKrakenGooStatus : public UStatus
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.KrakenGooStatus");
		return ptr;
	}

};


// Class Athena.StatusEffectComponentProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UStatusEffectComponentProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StatusEffectComponentProviderInterface");
		return ptr;
	}


	class UStatusEffectComponent* GetStatusEffectComponent();
};


// Class Athena.VenomSource
// 0x0018 (0x0040 - 0x0028)
class UVenomSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FName                                       VenomEffectParameterName;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VenomSource");
		return ptr;
	}

};


// Class Athena.StatusEffectComponent
// 0x0128 (0x01F8 - 0x00D0)
class UStatusEffectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FVenomStatus                                VenomStatusEffect;                                        // 0x01E3(0x0098) (Edit, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StatusEffectComponent");
		return ptr;
	}


	void OnRep_StatusEffect();
};


// Class Athena.StatusResponse
// 0x0000 (0x0028 - 0x0028)
class UStatusResponse : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StatusResponse");
		return ptr;
	}

};


// Class Athena.StatusEffectManagerComponentProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UStatusEffectManagerComponentProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StatusEffectManagerComponentProviderInterface");
		return ptr;
	}


	class UStatusEffectManagerComponent* GetStatusEffectManagerComponent();
};


// Class Athena.StatusEffectManagerComponent
// 0x0038 (0x0108 - 0x00D0)
class UStatusEffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<struct FStatusVulnerability>                Statuses;                                                 // 0x01E3(0x0010) (Edit, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StatusEffectManagerComponent");
		return ptr;
	}


	void OnRep_Statuses();
};


// Class Athena.StorageContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UStorageContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StorageContainerInterface");
		return ptr;
	}

};


// Class Athena.StorageContainerComponent
// 0x00A8 (0x0178 - 0x00D0)
class UStorageContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FText                                       ContainerDisplayName;                                     // 0x01E3(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00D0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       ItemDisplayName;                                          // 0x01E3(0x0018) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      ItemDesc;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCapacity;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ItemCount;                                                // 0x01E3(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AddItemSfx;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 TakeItemSfx;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StorageContainerComponent");
		return ptr;
	}


	void OnRep_ItemCount(int InOldItemCount);
};


// Class Athena.StorageContainerContentSpawner
// 0x0010 (0x0038 - 0x0028)
class UStorageContainerContentSpawner : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StorageContainerContentSpawner");
		return ptr;
	}

};


// Class Athena.StorageContainerContentTypeSelector
// 0x0010 (0x0038 - 0x0028)
class UStorageContainerContentTypeSelector : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StorageContainerContentTypeSelector");
		return ptr;
	}

};


// Class Athena.StormParams
// 0x0050 (0x0078 - 0x0028)
class UStormParams : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FFixedStepInterpCurveVector2D               PositionCurve;                                            // 0x01E3(0x0018) (Edit, BlueprintVisible)
	TArray<unsigned char>                              StormType;                                                // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      StormClass;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FStormStrengthType>                  StormTypeSettings;                                        // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              StormTypeStepTime;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StormTypeBlendTime;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StormParams");
		return ptr;
	}

};


// Class Athena.Storm
// 0x0428 (0x0898 - 0x0470)
class AStorm : public AActor
{
public:
	unsigned char                                      UnknownData00[0x428];                                     // 0x0470(0x0428) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Storm");
		return ptr;
	}


	void Multicast_QueueLightning(const struct FLightningImpact& LightningImpact);
};


// Class Athena.StormServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UStormServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StormServiceInterface");
		return ptr;
	}

};


// Class Athena.StormServiceAsset
// 0x0010 (0x0038 - 0x0028)
class UStormServiceAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StormServiceAsset");
		return ptr;
	}

};


// Class Athena.StormService
// 0x0038 (0x04A8 - 0x0470)
class AStormService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0470(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StormService");
		return ptr;
	}

};


// Class Athena.StreamingLocationInterface
// 0x0000 (0x0028 - 0x0028)
class UStreamingLocationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StreamingLocationInterface");
		return ptr;
	}

};


// Class Athena.StreamingLocationComponent
// 0x0018 (0x00E8 - 0x00D0)
class UStreamingLocationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FVector                                     StreamingLocationOverride;                                // 0x01E3(0x000C) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StreamingLocationComponent");
		return ptr;
	}

};


// Class Athena.StunnedActionStateId
// 0x0000 (0x0028 - 0x0028)
class UStunnedActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StunnedActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoStunnedActionState(class AAthenaCharacter* Character, const struct FStunnedActionStateParams& Params);
};


// Class Athena.SwallowedByKrakenActionStateId
// 0x0000 (0x0028 - 0x0028)
class USwallowedByKrakenActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SwallowedByKrakenActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoSwallowedByKrakenActionState(class AActor* Character, class AKrakenAnimatedTentacle* Tentacle);
	void STATIC_PopCharacterOutOfSwallowedByKrakenActionState(class AActor* Character);
};


// Class Athena.SwimmingCreatureAnimationInstance
// 0x0120 (0x0560 - 0x0440)
class USwimmingCreatureAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0440(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SwimmingCreatureAnimationInstance");
		return ptr;
	}


	bool RunningOnServer();
};


// Class Athena.SwimmingCreatureMovementComponent
// 0x00E0 (0x0250 - 0x0170)
class USwimmingCreatureMovementComponent : public UFloatingPawnMovement
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0170(0x0073) MISSED OFFSET
	float                                              MinPlayRate;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NetworkSimulatedSmoothLocationTime;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetworkSimulatedSmoothRotationTime;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrestingWaterHeightCheckOffset;                           // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCrestingVelocityHeight;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCrestingDownwardsVelocity;                             // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocitySmoothingFactor;                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SharkFinHeightCheckOffset;                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 SinkingAccelerationOverTime;                              // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PushOutHemisphereSteps;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PushOutStepsOnNarrowestHemisphereBand;                    // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PushOutStepsOnWidestHemisphereBand;                       // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxExtraPushOut;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumStepsToRampUpToMaxPushOut;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCollisionProfileName                       PenetrationPanicCollisionProfile;                         // 0x01E3(0x0008) (Edit, DisableEditOnInstance)
	float                                              SmoothNetUpdateLocationTime;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmoothNetUpdateRotationTime;                              // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESwimmingMode>                         ReplicatedSwimmingMode;                                   // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	TArray<struct FSwimmingCreatureAIStrategyMovementProperties> AIStrategyMovementProperties;                             // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x5D];                                      // 0x01F3(0x005D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SwimmingCreatureMovementComponent");
		return ptr;
	}


	void SetSwimmingMode(TEnumAsByte<ESwimmingMode> InSwimmingMode);
	void OnRep_ReplicatedSwimmingMode();
	void OnHasSolidHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Multicast_SetNewPathFollowingParamsRPC(const struct FVector& ServerGoalLocation, float ServerYawTurnRate, float ServerMaxSpeed, float ServerVelocitySmoothingFactor, bool IsServerCorrectionTurn);
	TEnumAsByte<ESwimmingMode> GetSwimmingMode();
	struct FSwimmingCreatureAIStrategyMovementProperties GetMovementPropertiesForAIStrategy(class UClass* AIStrategy);
	float GetCurrentYawTurnRate();
	float GetCurrentVelocity();
	float GetComponentDistanceFromWaterHeight();
};


// Class Athena.SwimToSurfaceAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class USwimToSurfaceAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SwimToSurfaceAIStrategyId");
		return ptr;
	}

};


// Class Athena.TakeControlActionStateId
// 0x0000 (0x0028 - 0x0028)
class UTakeControlActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TakeControlActionStateId");
		return ptr;
	}

};


// Class Athena.TalkToNPCActionStateId
// 0x0000 (0x0028 - 0x0028)
class UTalkToNPCActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TalkToNPCActionStateId");
		return ptr;
	}


	void STATIC_PushCharIntoActionState(class UNPCDialogComponent* NPCDialogComp, class AActor* Character);
	void STATIC_PopCharOutOfActionState(class UNPCDialogComponent* NPCDialogComp, class AActor* Character);
};


// Class Athena.TankardInterface
// 0x0000 (0x0028 - 0x0028)
class UTankardInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TankardInterface");
		return ptr;
	}

};


// Class Athena.TankardRefillerComponent
// 0x0028 (0x00F8 - 0x00D0)
class UTankardRefillerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	int                                                Capacity;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EActionDisplayPriority>                ActionDisplayPriority;                                    // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NotificationInputId;                                      // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RemainingGrogs;                                           // 0x01E3(0x0004) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TankardRefillerComponent");
		return ptr;
	}

};


// Class Athena.TavernStepsTrigger
// 0x00E8 (0x0558 - 0x0470)
class ATavernStepsTrigger : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0470(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TavernStepsTrigger");
		return ptr;
	}


	void OnRep_StepsState(TEnumAsByte<EStepsTriggerState> LastState);
	void OnEndOverlapTavern(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnEndOverlapStepsListener(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlapTavern(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnBeginOverlapStepsListener(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Multicast_StartAnimatedStepsOpen();
};


// Class Athena.TelemetryDescriptorMockActor
// 0x0028 (0x0498 - 0x0470)
class ATelemetryDescriptorMockActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0470(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TelemetryDescriptorMockActor");
		return ptr;
	}

};


// Class Athena.TeleportActionStateId
// 0x0000 (0x0028 - 0x0028)
class UTeleportActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TeleportActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoTeleportActionStateWithCustomTeleportLocation(class AActor* Character, const struct FTeleportLocation& TeleportLocation, TEnumAsByte<ETeleportActionStateFadeType> TeleportFadeType, TEnumAsByte<ETeleportActionStateConditions> TeleportConditions, int StreamOutLevelId, int StreamInLevelId);
	void STATIC_PushCharacterIntoTeleportActionState(class AActor* Character, TEnumAsByte<ETeleportActionStateFadeType> TeleportFadeType, TEnumAsByte<ETeleportActionStateConditions> TeleportConditions, int StreamOutLevelId, int StreamInLevelId);
};


// Class Athena.TeleportFunctions
// 0x0000 (0x0028 - 0x0028)
class UTeleportFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TeleportFunctions");
		return ptr;
	}


	struct FTeleportLocation STATIC_GetTeleportLocationOnShip(class AAthenaCharacter* InCharacter, class AShip* InShip);
	struct FTeleportLocation STATIC_GetTeleportLocationAroundTarget(class AAthenaCharacter* InCharacter, class AActor* InTarget, float InDistanceFromTarget);
	struct FTeleportLocation STATIC_GetNearestTeleportLocationOnLand(class AAthenaCharacter* InCharacter);
};


// Class Athena.TeleportLocationComponent
// 0x0020 (0x0310 - 0x02F0)
class UTeleportLocationComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TeleportLocationComponent");
		return ptr;
	}

};


// Class Athena.TeleportLocationRetrievalComponent
// 0x00A8 (0x0178 - 0x00D0)
class UTeleportLocationRetrievalComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<struct FTeleportLocation>                   TeleportLocations;                                        // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TeleportLocationRetrievalComponent");
		return ptr;
	}

};


// Class Athena.TestActionControlStateCreatorDefinition
// 0x0048 (0x04B8 - 0x0470)
class ATestActionControlStateCreatorDefinition : public AActionStateCreatorDefinition
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0470(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestActionControlStateCreatorDefinition");
		return ptr;
	}

};


// Class Athena.TestAthenaGameModeWithLoopBackServiceEndpoint
// 0x0018 (0x0580 - 0x0568)
class ATestAthenaGameModeWithLoopBackServiceEndpoint : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0568(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestAthenaGameModeWithLoopBackServiceEndpoint");
		return ptr;
	}

};


// Class Athena.TestClimbingActor
// 0x00A0 (0x0700 - 0x0660)
class ATestClimbingActor : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0660(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestClimbingActor");
		return ptr;
	}

};


// Class Athena.TestDockingActorWithPhrases
// 0x0020 (0x0720 - 0x0700)
class ATestDockingActorWithPhrases : public ATestClimbingActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0700(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestDockingActorWithPhrases");
		return ptr;
	}

};


// Class Athena.TestControlObjectActionStateId
// 0x0000 (0x0028 - 0x0028)
class UTestControlObjectActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestControlObjectActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoTestControlObjectActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AActor* ControlledObject, class AActor* Character, float DockTime);
};


// Class Athena.TestDelayedMeshCharacter
// 0x0010 (0x0670 - 0x0660)
class ATestDelayedMeshCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0660(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestDelayedMeshCharacter");
		return ptr;
	}

};


// Class Athena.TestDockableObject
// 0x00E0 (0x0550 - 0x0470)
class ATestDockableObject : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0470(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestDockableObject");
		return ptr;
	}

};


// Class Athena.TestServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UTestServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestServiceInterface");
		return ptr;
	}

};


// Class Athena.TestGameModeWithServiceProviderGameState
// 0x0000 (0x0568 - 0x0568)
class ATestGameModeWithServiceProviderGameState : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestGameModeWithServiceProviderGameState");
		return ptr;
	}

};


// Class Athena.TestGameStateWithObjectMessagingServiceProvider
// 0x0160 (0x0628 - 0x04C8)
class ATestGameStateWithObjectMessagingServiceProvider : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x04C8(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestGameStateWithObjectMessagingServiceProvider");
		return ptr;
	}

};


// Class Athena.TestLadderActor
// 0x0090 (0x0500 - 0x0470)
class ATestLadderActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0470(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestLadderActor");
		return ptr;
	}

};


// Class Athena.TestMountedWeapon
// 0x0020 (0x0490 - 0x0470)
class ATestMountedWeapon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0470(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestMountedWeapon");
		return ptr;
	}

};


// Class Athena.TestNetworkedEventsFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UTestNetworkedEventsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestNetworkedEventsFunctionLibrary");
		return ptr;
	}


	void STATIC_FireTestEventToServer(class AAthenaPlayerController* PlayerController, int TestEventData);
	void STATIC_FireTestEventToClient(class AAthenaPlayerController* PlayerController, int TestEventData);
};


// Class Athena.TestQuestProxy
// 0x0018 (0x0488 - 0x0470)
class ATestQuestProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0470(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestQuestProxy");
		return ptr;
	}


	void Stop();
	void CreateXMarksTheSpotQuest(class UObject* WorldContext, const struct FXMarksTheSpotQuestDesc& QuestDesc);
	void AddParticipant(class AAthenaPlayerCharacter* Participant);
};


// Class Athena.TestRepairableActor
// 0x0130 (0x05A0 - 0x0470)
class ATestRepairableActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0470(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestRepairableActor");
		return ptr;
	}

};


// Class Athena.TestRepairActor
// 0x0080 (0x06E0 - 0x0660)
class ATestRepairActor : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0660(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestRepairActor");
		return ptr;
	}

};


// Class Athena.TestReturnCompleteAfterTimeoutPlayerRelevancyService
// 0x0038 (0x0060 - 0x0028)
class UTestReturnCompleteAfterTimeoutPlayerRelevancyService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestReturnCompleteAfterTimeoutPlayerRelevancyService");
		return ptr;
	}


	class UTestReturnCompleteAfterTimeoutPlayerRelevancyService* STATIC_CreateTestReturnCompleteAfterTimeoutPlayerRelevancyService(float InTimeoutWanted);
};


// Class Athena.TestService
// 0x0008 (0x0030 - 0x0028)
class UTestService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestService");
		return ptr;
	}

};


// Class Athena.TestShipAssetClassDatabase
// 0x0030 (0x0058 - 0x0028)
class UTestShipAssetClassDatabase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestShipAssetClassDatabase");
		return ptr;
	}


	class UTestShipAssetClassDatabase* STATIC_MakeTestShipAssetClassDatabase();
};


// Class Athena.TestShipDynamicsTarget
// 0x0148 (0x0170 - 0x0028)
class UTestShipDynamicsTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0028(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestShipDynamicsTarget");
		return ptr;
	}

};


// Class Athena.TestShipPart
// 0x0018 (0x0488 - 0x0470)
class ATestShipPart : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0470(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestShipPart");
		return ptr;
	}

};


// Class Athena.TestShipPartThatDestroysItsShip
// 0x0000 (0x0470 - 0x0470)
class ATestShipPartThatDestroysItsShip : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestShipPartThatDestroysItsShip");
		return ptr;
	}

};


// Class Athena.TestStreamingTeleport
// 0x0000 (0x0028 - 0x0028)
class UTestStreamingTeleport : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestStreamingTeleport");
		return ptr;
	}


	void STATIC_GetTeleportPoints(class UObject* WorldContextObject, TEnumAsByte<ECollisionChannel> BlockingChannel, float CharacterRadius, float CharacterHalfHeight, float IntervalSize, const struct FVector& MinExtents, const struct FVector& MaxExtents, TArray<struct FVector>* Points);
};


// Class Athena.TextureFeedbackComponent
// 0x0050 (0x0120 - 0x00D0)
class UTextureFeedbackComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UTextureRenderTarget2D*                      InputTexture1;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  InputTexture2;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TextureSizeX;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TextureSizeY;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    InputData;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      FeedbackTexture;                                          // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextureRenderTarget2D*                      FeedbackTexturePingPong;                                  // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TextureFeedbackComponent");
		return ptr;
	}


	void SetInputTexture1(class UTextureRenderTarget2D* InRenderTargetTexture);
	void SetEffectActive(bool IsActive);
	class UTexture* GetTexture();
	void CopyToTargetTexture(class UObject* WorldContextObject, class UTextureRenderTarget2D* RenderTarget, class UTexture* SourceTexture);
	void ClearTexture(const struct FLinearColor& ClearColor);
};


// Class Athena.ToggleItemNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UToggleItemNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ToggleItemNotificationInputId");
		return ptr;
	}

};


// Class Athena.TrackedActorServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UTrackedActorServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TrackedActorServiceInterface");
		return ptr;
	}

};


// Class Athena.TrackedActorService
// 0x0028 (0x0050 - 0x0028)
class UTrackedActorService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TrackedActorService");
		return ptr;
	}


	void OnTrackedActorDestroyed(class AActor* Actor);
};


// Class Athena.BountyMap
// 0x0150 (0x0990 - 0x0840)
class ABountyMap : public ATreasureMap
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0840(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BountyMap");
		return ptr;
	}


	void RefreshContents();
	void OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height);
	void OnRep_MapInventoryTexturePath();
	void OnRep_Contents(const struct FBountyMapContents& InPreviousContents);
};


// Class Athena.MerchantMap
// 0x01D0 (0x0A10 - 0x0840)
class AMerchantMap : public ATreasureMap
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0840(0x01D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MerchantMap");
		return ptr;
	}


	void RefreshContents();
	void OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height);
	void OnRep_Contents(const struct FMerchantMapContents& InPreviousContents);
};


// Class Athena.RiddleMap
// 0x0120 (0x0960 - 0x0840)
class ARiddleMap : public ATreasureMap
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0840(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.RiddleMap");
		return ptr;
	}


	void TriggerMagicGlow_RPC();
	void StartMagicGlowEffect();
	void RefreshContents();
	void OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height);
	void OnRep_MapInventoryTexturePath();
	void OnRep_Contents(const struct FRiddleMapContents& InPreviousContents);
	void OnMaskCanvasUpdate(class UCanvas* Canvas, int Width, int Height);
};


// Class Athena.TreasureMapCollectionInterface
// 0x0000 (0x0028 - 0x0028)
class UTreasureMapCollectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureMapCollectionInterface");
		return ptr;
	}

};


// Class Athena.XMarksTheSpotMap
// 0x00A8 (0x08E8 - 0x0840)
class AXMarksTheSpotMap : public ATreasureMap
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0840(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.XMarksTheSpotMap");
		return ptr;
	}


	void SetMapData(TAssetPtr<class UTexture> InMapTextureAsset, TAssetPtr<class UTexture> InMapInventoryTextureAsset, TArray<struct FXMarksTheSpotMapMark> InMarks, float InRotation);
	void OnRep_Marks();
	void OnRep_MapTexturePath();
	void OnRep_MapInventoryTexturePath();
	void OnCanvasUpdate(class UCanvas* Canvas, int Width, int Height);
	bool IsMapTextureLoaded();
	class UCanvasRenderTarget2D* GetRenderTarget();
	TArray<struct FXMarksTheSpotMapMark> GetMarks();
	TAssetPtr<class UTexture> GetMapTextureAsset();
	class UMaterialInstanceDynamic* GetDynamicMaterialThird();
	class UMaterialInstanceDynamic* GetDynamicMaterialFirst();
};


// Class Athena.TreasureMapCollectionComponent
// 0x00A8 (0x0178 - 0x00D0)
class UTreasureMapCollectionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UClass*                                      XMarksTheSpotMapType;                                     // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      RiddleMapType;                                            // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      BountyMapType;                                            // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      MerchantMapType;                                          // 0x01E3(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class ATreasureMap*>                        TreasureMaps;                                             // 0x01E3(0x0010) (ZeroConstructor, Transient)
	TArray<struct FName>                               TreasureMapDestinationIslands;                            // 0x01E3(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureMapCollectionComponent");
		return ptr;
	}

};


// Class Athena.TreasureMapDataAsset
// 0x0080 (0x00A8 - 0x0028)
class UTreasureMapDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	TAssetPtr<class UTexture>                          Texture;                                                  // 0x01E3(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TAssetPtr<class UTexture>                          InventoryTexture;                                         // 0x01E3(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureMapDataAsset");
		return ptr;
	}

};


// Class Athena.TreasureMapServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UTreasureMapServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureMapServiceInterface");
		return ptr;
	}

};


// Class Athena.TreasureMapService
// 0x0060 (0x0088 - 0x0028)
class UTreasureMapService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureMapService");
		return ptr;
	}

};


// Class Athena.TriggerObject
// 0x0000 (0x0470 - 0x0470)
class ATriggerObject : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TriggerObject");
		return ptr;
	}


	void Trigger(class AActor* InTriggeringActor);
	void OnTriggerServer(class AActor* InTriggeringActor);
	void OnTriggerClient(class AActor* InTriggeringActor);
	void MulticastTrigger(class AActor* InTriggeringActor);
	bool CanActorTrigger(class AActor* InTriggeringActor);
};


// Class Athena.TeleportTriggerObject
// 0x0050 (0x04C0 - 0x0470)
class ATeleportTriggerObject : public ATriggerObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0470(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TeleportTriggerObject");
		return ptr;
	}


	void OnTriggerTeleportServer(class AActor* InTriggeringActor);
};


// Class Athena.TurnAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UTurnAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TurnAnalogInputId");
		return ptr;
	}

};


// Class Athena.TurnOnTheSpotAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UTurnOnTheSpotAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TurnOnTheSpotAIStrategyId");
		return ptr;
	}

};


// Class Athena.TurnRateAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UTurnRateAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TurnRateAnalogInputId");
		return ptr;
	}

};


// Class Athena.TurnRateWithFixedSensitivityAnalogInputId
// 0x0000 (0x0030 - 0x0030)
class UTurnRateWithFixedSensitivityAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TurnRateWithFixedSensitivityAnalogInputId");
		return ptr;
	}

};


// Class Athena.TutorialComponent
// 0x0018 (0x00E8 - 0x00D0)
class UTutorialComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	bool                                               HasBegun;                                                 // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TutorialComponent");
		return ptr;
	}


	void OnRep_HasBegun();
};


// Class Athena.AthenaTutorialComponent
// 0x0498 (0x0580 - 0x00E8)
class UAthenaTutorialComponent : public UTutorialComponent
{
public:
	unsigned char                                      UnknownData00[0xFB];                                      // 0x00E8(0x00FB) MISSED OFFSET
	struct FMainTutorialSequence                       MainTutorial;                                             // 0x01E3(0x0498) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.AthenaTutorialComponent");
		return ptr;
	}

};


// Class Athena.UITelemetryComponent
// 0x0070 (0x0140 - 0x00D0)
class UUITelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00D0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UITelemetryComponent");
		return ptr;
	}

};


// Class Athena.UnifiedDelegateTestUnifiedDelegate
// 0x0018 (0x0040 - 0x0028)
class UUnifiedDelegateTestUnifiedDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UnifiedDelegateTestUnifiedDelegate");
		return ptr;
	}


	void UnbindDelegate();
	class UUnifiedDelegateTestUnifiedDelegate* STATIC_MakeTestUnifiedDelegate();
	bool IsDelegateBound();
	void BindDelegate(const struct FScriptDelegate& InDynamicDelegate);
};


// Class Athena.UnloadItemActionStateId
// 0x0000 (0x0028 - 0x0028)
class UUnloadItemActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UnloadItemActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoUnloadItemActionState(class AActor* Character, class AActor* UnloadableActor, class AActor* Interactable);
	void STATIC_PopCharacterOutOfUnloadItemActionState(class AActor* Character);
};


// Class Athena.UsableComponent
// 0x0028 (0x00F8 - 0x00D0)
class UUsableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FWieldableItemActionVisuals                 ActionVisuals;                                            // 0x01E3(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UsableComponent");
		return ptr;
	}

};


// Class Athena.TestUsableComponent
// 0x0008 (0x0100 - 0x00F8)
class UTestUsableComponent : public UUsableComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestUsableComponent");
		return ptr;
	}

};


// Class Athena.UsableWieldableComponent
// 0x0038 (0x0108 - 0x00D0)
class UUsableWieldableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<class UClass*>                              OneShotInputNotifications;                                // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FHoldToUseInput>                     ContinuousUseNotification;                                // 0x01E3(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UsableWieldableComponent");
		return ptr;
	}


	void Server_TriggerOneShotUse(class UClass* InputID);
	void Multicast_TriggerOneShotUse(class UClass* InputID);
};


// Class Athena.UseCannonActionStateId
// 0x0000 (0x0028 - 0x0028)
class UUseCannonActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UseCannonActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoUseCannonActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AActor* CannonActor, class AActor* Character);
};


// Class Athena.UseCannonCompositeInputHandler
// 0x0070 (0x0148 - 0x00D8)
class UUseCannonCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00D8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UseCannonCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnSecondaryInteractReleased();
	TEnumAsByte<EInputHandlerResult> OnSecondaryInteract();
	TEnumAsByte<EInputHandlerResult> OnMoveYaw(float Value);
	TEnumAsByte<EInputHandlerResult> OnMovePitch(float Value);
	TEnumAsByte<EInputHandlerResult> OnFireCannon();
};


// Class Athena.UseConcealingObjectNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UUseConcealingObjectNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UseConcealingObjectNotificationInputId");
		return ptr;
	}

};


// Class Athena.UseItemActionStateId
// 0x0000 (0x0028 - 0x0028)
class UUseItemActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UseItemActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoUseItemActionState(class AActor* Character, class AActor* Usable, class UClass* InputID);
	void STATIC_PopCharacterOutOfUseItemActionState(class AActor* Character);
};


// Class Athena.UseLadderActionStateId
// 0x0000 (0x0028 - 0x0028)
class UUseLadderActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UseLadderActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoUseLadderActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AActor* LadderActor, class AActor* Character, float InteractingHeight, unsigned char ClimbId, const struct FLadderDefinition& LadderDefinition);
};


// Class Athena.UseMapTableActionStateId
// 0x0000 (0x0028 - 0x0028)
class UUseMapTableActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UseMapTableActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoUseMapTableActionState(TEnumAsByte<EActionStateMachineTrackId> TrackId, class AActor* MapTableActor, class AActor* Character);
};


// Class Athena.UseMapTableCompositeInputHandler
// 0x0088 (0x0160 - 0x00D8)
class UUseMapTableCompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00D8(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.UseMapTableCompositeInputHandler");
		return ptr;
	}


	TEnumAsByte<EInputHandlerResult> OnZoomOut(float Value);
	TEnumAsByte<EInputHandlerResult> OnZoomIn(float Value);
	TEnumAsByte<EInputHandlerResult> OnTogglePin();
	TEnumAsByte<EInputHandlerResult> OnPanY(float Value);
	TEnumAsByte<EInputHandlerResult> OnPanX(float Value);
	TEnumAsByte<EInputHandlerResult> OnMouseZoom(float Value);
	TEnumAsByte<EInputHandlerResult> OnMousePanY(float Value);
	TEnumAsByte<EInputHandlerResult> OnMousePanX(float Value);
};


// Class Athena.VenomComponent
// 0x0020 (0x00F0 - 0x00D0)
class UVenomComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UClass*                                      VenomSource;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialDamage;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageOverTime;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageOverTimeDuration;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RangeDistance;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeAngle;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VenomComponent");
		return ptr;
	}


	void SprayVenomInDirection(const struct FVector& SourceLocation, const struct FVector& Direction);
	void SprayVenomAtClosestTarget(const struct FVector& SourceLocation);
	void ApplyVenomToTarget(class AActor* Target);
};


// Class Athena.VfxFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UVfxFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VfxFunctionLibrary");
		return ptr;
	}


	void STATIC_WithWorldOwner(struct FVfxSpawner* Spawner);
	void STATIC_WithRelativeScale(const struct FVector& Scale3D, struct FVfxSpawner* Spawner);
	void STATIC_WithOwner(class UObject* InOwner, bool InOwnerOnlySee, bool InOwnerNoSee, struct FVfxSpawner* Spawner);
	void STATIC_WithEffect(class UObject* InEmitterTemplate, bool InAutoDestroy, struct FVfxSpawner* Spawner);
	class UParticleSystemComponent* STATIC_Spawn(class UObject* WorldContextObject, struct FVfxSpawner* Spawner);
	void STATIC_SetUnderwater(bool IsUnderwater, struct FVfxSpawner* Spawner);
	void STATIC_InVfxRegion(TEnumAsByte<EVfxRegion> InRegion, struct FVfxSpawner* Spawner);
	void STATIC_AttachedToSocket(class USceneComponent* InAttachToComponent, const struct FName& InAttachPointName, TEnumAsByte<EAttachLocation> InLocationType, struct FVfxSpawner* Spawner);
	void STATIC_AttachedToComponent(class USceneComponent* InAttachToComponent, TEnumAsByte<EAttachLocation> InLocationType, struct FVfxSpawner* Spawner);
	void STATIC_AtSocketLocation(class USceneComponent* InSocketOwnerComponent, const struct FName& InSocketName, const struct FVector& InLocation, const struct FRotator& InRotation, struct FVfxSpawner* Spawner);
	void STATIC_AtLocation(const struct FVector& InLocation, const struct FRotator& InRotation, struct FVfxSpawner* Spawner);
	class UParticleSystemComponent* STATIC_AthenaSpawnShipRelativeEmitterAtSocketLocation(class UObject* EmitterTemplate, class AAthenaPlayerCharacter* AthenaPlayerCharacter, class USceneComponent* SocketOwnerComponent, const struct FName& SocketName, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy, bool bOwnerOnlySee, bool bOwnerNoSee, bool bIsUnderwater, TEnumAsByte<EVfxRegion> VfxRegion);
	class UParticleSystemComponent* STATIC_AthenaSpawnEmitterAttachedWithOwner(class UObject* EmitterTemplate, class USceneComponent* AttachToComponent, class UObject* Owner, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bOwnerOnlySee, bool bOwnerNoSee, bool bIsUnderwater, TEnumAsByte<EVfxRegion> VfxRegion);
	class UParticleSystemComponent* STATIC_AthenaSpawnEmitterAttachedAndWorldOwned(class UObject* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bIsUnderwater, TEnumAsByte<EVfxRegion> VfxRegion);
	class UParticleSystemComponent* STATIC_AthenaSpawnEmitterAtLocationWithOwner(class UObject* WorldContextObject, class UObject* EmitterTemplate, class AActor* Owner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, bool bAutoDestroy, bool bOwnerOnlySee, bool bOwnerNoSee, bool bIsUnderwater, TEnumAsByte<EVfxRegion> VfxRegion);
	class UParticleSystemComponent* STATIC_AthenaSpawnEmitterAtLocation(class UObject* WorldContextObject, class UObject* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy, bool bIsUnderwater, TEnumAsByte<EVfxRegion> VfxRegion);
};


// Class Athena.VfxSelectorDataAsset
// 0x0060 (0x0088 - 0x0028)
class UVfxSelectorDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FVfxSelectorEntry                           MinDefaultEffectParams;                                   // 0x01E3(0x0028) (Edit)
	TArray<struct FVfxSelectorRange>                   Ranges;                                                   // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VfxSelectorDataAsset");
		return ptr;
	}

};


// Class Athena.VfxSelectorFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UVfxSelectorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VfxSelectorFunctionLibrary");
		return ptr;
	}


	class UParticleSystemComponent* STATIC_SelectUpdateVfxWithOwner(class UVfxSelectorDataAsset* SelectorAsset, float Value, class AActor* Owner, class UParticleSystemComponent* ExistingVfx, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, TEnumAsByte<EAttachLocation> LocationType, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy, bool bOwnerOnlySee, bool bOwnerNoSee, bool bIsUnderwater);
	class UParticleSystemComponent* STATIC_SelectSpawnVfxAttachedWithOwner(class UVfxSelectorDataAsset* SelectorAsset, float Value, class USceneComponent* AttachToComponent, class AActor* Owner, const struct FName& AttachPointName, TEnumAsByte<EAttachLocation> LocationType, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy, bool bOwnerOnlySee, bool bOwnerNoSee, bool bIsUnderwater);
	class UParticleSystemComponent* STATIC_SelectSpawnVfx(class AActor* Actor, class UVfxSelectorDataAsset* SelectorAsset, float Value, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy, bool bOwnerOnlySee, bool bOwnerNoSee, bool bIsUnderwater);
};


// Class Athena.ViewModelComponentBase
// 0x0060 (0x0130 - 0x00D0)
class UViewModelComponentBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00D0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ViewModelComponentBase");
		return ptr;
	}

};


// Class Athena.PossessionsChestViewModel
// 0x0048 (0x0178 - 0x0130)
class UPossessionsChestViewModel : public UViewModelComponentBase
{
public:
	unsigned char                                      UnknownData00[0xB3];                                      // 0x0130(0x00B3) MISSED OFFSET
	struct FText                                       AllTabLabel;                                              // 0x01E3(0x0018)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0130(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FStringAssetReference                       AllTabIcon;                                               // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PossessionsChestViewModel");
		return ptr;
	}

};


// Class Athena.ArmoryChestViewModelComponent
// 0x0028 (0x01A0 - 0x0178)
class UArmoryChestViewModelComponent : public UPossessionsChestViewModel
{
public:
	unsigned char                                      UnknownData00[0x6B];                                      // 0x0178(0x006B) MISSED OFFSET
	TArray<class UClass*>                              Categories;                                               // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               IncludeAllCategory;                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ArmoryChestViewModelComponent");
		return ptr;
	}

};


// Class Athena.ClothingChestViewModelComponent
// 0x0068 (0x01E0 - 0x0178)
class UClothingChestViewModelComponent : public UPossessionsChestViewModel
{
public:
	unsigned char                                      UnknownData00[0x6B];                                      // 0x0178(0x006B) MISSED OFFSET
	TArray<struct FClothingChestRandomFilter>          RandomFilters;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       RandomiseIcon;                                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       ClearIcon;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor)
	bool                                               WithRandomiseButtons;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               WithClearButtons;                                         // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Categories;                                               // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               IncludeAllCategory;                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ClothingChestViewModelComponent");
		return ptr;
	}

};


// Class Athena.EquipmentChestViewModelComponent
// 0x0028 (0x01A0 - 0x0178)
class UEquipmentChestViewModelComponent : public UPossessionsChestViewModel
{
public:
	unsigned char                                      UnknownData00[0x6B];                                      // 0x0178(0x006B) MISSED OFFSET
	TArray<class UClass*>                              Categories;                                               // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               IncludeAllCategory;                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.EquipmentChestViewModelComponent");
		return ptr;
	}

};


// Class Athena.ShipCustomizationChestViewModelComponent
// 0x0028 (0x01A0 - 0x0178)
class UShipCustomizationChestViewModelComponent : public UPossessionsChestViewModel
{
public:
	unsigned char                                      UnknownData00[0x6B];                                      // 0x0178(0x006B) MISSED OFFSET
	TArray<class UClass*>                              Categories;                                               // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               IncludeAllCategory;                                       // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.ShipCustomizationChestViewModelComponent");
		return ptr;
	}

};


// Class Athena.VoyageInventoryViewModelComponent
// 0x0000 (0x0130 - 0x0130)
class UVoyageInventoryViewModelComponent : public UViewModelComponentBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageInventoryViewModelComponent");
		return ptr;
	}

};


// Class Athena.VoiceChatComponent
// 0x0170 (0x0460 - 0x02F0)
class UVoiceChatComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x02F0(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoiceChatComponent");
		return ptr;
	}

};


// Class Athena.VomitComponent
// 0x0290 (0x0930 - 0x06A0)
class UVomitComponent : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData00[0x290];                                     // 0x06A0(0x0290) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VomitComponent");
		return ptr;
	}


	void VomitActivate(const struct FName& VomitType, float Duration);
	void OnOverlapBegin(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Multicast_VomitImpact(const struct FHitResult& Result);
	void Multicast_VomitActivate(const struct FName& VomitType, float Duration);
	bool IsFaceCoveredWithVomit();
	bool DidVomitVFXSpawn();
	void Client_VomitHit();
};


// Class Athena.VotableBaseComponent
// 0x0000 (0x00D0 - 0x00D0)
class UVotableBaseComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VotableBaseComponent");
		return ptr;
	}

};


// Class Athena.VotableWithSessionComponent
// 0x0178 (0x0248 - 0x00D0)
class UVotableWithSessionComponent : public UVotableBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UVotingSessionBinder*                        SessionBinder;                                            // 0x01E3(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       VoteTooltipText;                                          // 0x01E3(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01EB(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      VoteActionInputId;                                        // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      VoteActionReleaseInputId;                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5D];                                      // 0x01EB(0x005D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VotableWithSessionComponent");
		return ptr;
	}


	void SetVoteDataIndex(int InVoteDataIndex);
	bool IsSessionLocked();
	int GetVoteDataIndex();
};


// Class Athena.VotableVoyageProposalComponent
// 0x00A0 (0x02E8 - 0x0248)
class UVotableVoyageProposalComponent : public UVotableWithSessionComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0248(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VotableVoyageProposalComponent");
		return ptr;
	}

};


// Class Athena.CancelVoyageVotableComponent
// 0x0000 (0x02E8 - 0x02E8)
class UCancelVoyageVotableComponent : public UVotableVoyageProposalComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CancelVoyageVotableComponent");
		return ptr;
	}

};


// Class Athena.VoteOnVoyageVotableComponent
// 0x0030 (0x0318 - 0x02E8)
class UVoteOnVoyageVotableComponent : public UVotableVoyageProposalComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02E8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoteOnVoyageVotableComponent");
		return ptr;
	}

};


// Class Athena.VotingSessionBinder
// 0x0000 (0x0028 - 0x0028)
class UVotingSessionBinder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VotingSessionBinder");
		return ptr;
	}

};


// Class Athena.BindToParentShipCrewVotingSession
// 0x0038 (0x0060 - 0x0028)
class UBindToParentShipCrewVotingSession : public UVotingSessionBinder
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class ACrewShipManifest*                           BoundManifest;                                            // 0x01E3(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BindToParentShipCrewVotingSession");
		return ptr;
	}


	void OnRep_Manifest();
};


// Class Athena.BindToParentShipCrewVoyageCancelVotingSession
// 0x0000 (0x0060 - 0x0060)
class UBindToParentShipCrewVoyageCancelVotingSession : public UBindToParentShipCrewVotingSession
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BindToParentShipCrewVoyageCancelVotingSession");
		return ptr;
	}

};


// Class Athena.BindToParentShipCrewVoyageProposalVotingSession
// 0x0000 (0x0060 - 0x0060)
class UBindToParentShipCrewVoyageProposalVotingSession : public UBindToParentShipCrewVotingSession
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BindToParentShipCrewVoyageProposalVotingSession");
		return ptr;
	}

};


// Class Athena.VoyageGeneratorSim
// 0x0000 (0x0470 - 0x0470)
class AVoyageGeneratorSim : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageGeneratorSim");
		return ptr;
	}


	void SimulateVoyageChain(int Count, int Seed, int MaxHistory, const struct FVector& StartingLocation, TArray<struct FIsland> Islands, class UVoyageRecipeDataAsset* Recipe);
	void ProcessSimulatedVoyage(class UVoyageGeneratorSimResult* Voyage);
	void OnEndSimulationRun();
	void OnBeginSimulationRun();
};


// Class Athena.VoyageGeneratorSimBlackboardFunctions
// 0x0000 (0x0028 - 0x0028)
class UVoyageGeneratorSimBlackboardFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageGeneratorSimBlackboardFunctions");
		return ptr;
	}


	void STATIC_PrintBlackboard(const struct FVoyageGeneratorSimBlackboard& Blackboard);
	TArray<int> STATIC_GetValuesFromBlackboardByNameInt(const struct FVoyageGeneratorSimBlackboard& Blackboard, const struct FName& Name);
	TArray<class FString> STATIC_GetValuesFromBlackboardByName(const struct FVoyageGeneratorSimBlackboard& Blackboard, const struct FName& Name);
	struct FVoyageGeneratorSimBlackboard STATIC_CombineBlackboards(const struct FVoyageGeneratorSimBlackboard& A, const struct FVoyageGeneratorSimBlackboard& B);
};


// Class Athena.VoyageGeneratorSimFunctions
// 0x0000 (0x0028 - 0x0028)
class UVoyageGeneratorSimFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageGeneratorSimFunctions");
		return ptr;
	}


	struct FVector STATIC_GetIslandLocation(TArray<struct FIsland> Islands, const struct FName& InName);
	class UVoyageGeneratorSimResult* STATIC_GenerateVoyageFromRecipe(const struct FVector& StartingLocation, class UVoyageRecipeDataAsset* Recipe, TArray<struct FIsland> Islands, int Seed, class UObject* WorldContextObject);
	TArray<int> STATIC_GenerateDistributionFromRecipe(class UVoyageRecipeDataAsset* Recipe, int Seed);
};


// Class Athena.VoyageGeneratorSimResult
// 0x00A0 (0x00C8 - 0x0028)
class UVoyageGeneratorSimResult : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageGeneratorSimResult");
		return ptr;
	}


	struct FVoyageGeneratorSimBlackboard VisitChapter(int Index);
	struct FVoyageGeneratorSimBlackboard Visit();
	struct FText GetTitle();
	int GetNumQuests();
	int GetNumChapters();
};


// Class Athena.VoyageProposalAssetSelector
// 0x0010 (0x0038 - 0x0028)
class UVoyageProposalAssetSelector : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageProposalAssetSelector");
		return ptr;
	}

};


// Class Athena.VoyageRecipesDebugMenuEntryGenerator
// 0x0038 (0x0060 - 0x0028)
class UVoyageRecipesDebugMenuEntryGenerator : public UDebugMenuEntryGenerator
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	bool                                               Regenerate;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FStringAssetReference>               Recipes;                                                  // 0x01E3(0x0010) (Edit, ZeroConstructor)
	TArray<struct FStringClassReference>               Proposals;                                                // 0x01E3(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageRecipesDebugMenuEntryGenerator");
		return ptr;
	}

};


// Class Athena.VoyageSettings
// 0x0008 (0x0030 - 0x0028)
class UVoyageSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.VoyageSettings");
		return ptr;
	}

};


// Class Athena.WaitForDemoResetActionStateId
// 0x0000 (0x0028 - 0x0028)
class UWaitForDemoResetActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WaitForDemoResetActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoWaitForDemoResetActionState(class AActor* Character);
};


// Class Athena.WaitingToSpawnActionStateId
// 0x0000 (0x0028 - 0x0028)
class UWaitingToSpawnActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WaitingToSpawnActionStateId");
		return ptr;
	}


	void STATIC_PushCharacterIntoWaitingToSpawnActionState(class AAthenaCharacter* InCharacter, class AActor* InStartSpot, bool InReceiveLoadout, bool InReceiveEntitlement, bool InWaitForStreaming);
};


// Class Athena.WalkActivationNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UWalkActivationNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WalkActivationNotificationInputId");
		return ptr;
	}

};


// Class Athena.WallClock
// 0x0068 (0x04D8 - 0x0470)
class AWallClock : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0470(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WallClock");
		return ptr;
	}

};


// Class Athena.WanderAIStrategyId
// 0x0000 (0x0028 - 0x0028)
class UWanderAIStrategyId : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WanderAIStrategyId");
		return ptr;
	}

};


// Class Athena.WaterHeightProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UWaterHeightProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WaterHeightProviderInterface");
		return ptr;
	}


	bool HasValidWaterHeight();
	float GetWaterHeight();
	bool GetValidWaterHeightAtomic(float* OutWaterHeight);
};


// Class Athena.WaterHeightProviderComponent
// 0x0038 (0x0108 - 0x00D0)
class UWaterHeightProviderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00D0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WaterHeightProviderComponent");
		return ptr;
	}


	bool HasValidWaterHeight();
	float GetWaterHeight();
	bool GetValidWaterHeightAtomic(float* OutWaterHeight);
};


// Class Athena.WatermarkComponent
// 0x0088 (0x0158 - 0x00D0)
class UWatermarkComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00D0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WatermarkComponent");
		return ptr;
	}

};


// Class Athena.WaterModifierZoneType
// 0x0000 (0x0028 - 0x0028)
class UWaterModifierZoneType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WaterModifierZoneType");
		return ptr;
	}

};


// Class Athena.WaterModifierZoneType_Default
// 0x0000 (0x0028 - 0x0028)
class UWaterModifierZoneType_Default : public UWaterModifierZoneType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WaterModifierZoneType_Default");
		return ptr;
	}

};


// Class Athena.WaterModifierZoneType_Murk
// 0x0000 (0x0028 - 0x0028)
class UWaterModifierZoneType_Murk : public UWaterModifierZoneType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WaterModifierZoneType_Murk");
		return ptr;
	}

};


// Class Athena.WaterModifierZoneComponent
// 0x0050 (0x0340 - 0x02F0)
class UWaterModifierZoneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x02F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WaterModifierZoneComponent");
		return ptr;
	}

};


// Class Athena.MurkWaterModifierZoneComponent
// 0x0030 (0x0370 - 0x0340)
class UMurkWaterModifierZoneComponent : public UWaterModifierZoneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0340(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MurkWaterModifierZoneComponent");
		return ptr;
	}


	void OnRep_State(TEnumAsByte<EMurkWaterModifierZoneState> PreviousState);
};


// Class Athena.WaterModifierZoneService
// 0x0018 (0x0040 - 0x0028)
class UWaterModifierZoneService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WaterModifierZoneService");
		return ptr;
	}

};


// Class Athena.WaterSplashComponent
// 0x00C0 (0x0190 - 0x00D0)
class UWaterSplashComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	class UObject*                                     EnterWaterParticleSystem;                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 EnterWaterSfx;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     EnterWaterSfxWisePoolToUse;                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ExitWaterParticleSystem;                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ExitWaterSfx;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     ExitWaterSfxWisePoolToUse;                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       ParticleSystemAttachLocation;                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEnteredWater;                                           // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnExitedWater;                                            // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReachedDeepWater;                                       // 0x01E3(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               SpawnParticleSystemsAttached;                             // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnParticleSystemsAlignedVertically;                    // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerOnEntry;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerOnExit;                                            // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowRepeatedEntryTriggers;                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowRepeatedExitTriggers;                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DeepWaterThreshold;                                       // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WaterSplashComponent");
		return ptr;
	}


	void OnWaterSplashReachedDeepWaterDelegate__DelegateSignature();
	void OnWaterSplashExitWaterDelegate__DelegateSignature();
	void OnWaterSplashEnterWaterDelegate__DelegateSignature();
};


// Class Athena.WaterVolume
// 0x0070 (0x04E0 - 0x0470)
class AWaterVolume : public AActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0470(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WaterVolume");
		return ptr;
	}


	void RegisterComponents(class UFlatWaterMeshComponent* FlatWaterMesh, class UFlatWaterPlaneComponent* FlatWaterPlane);
};


// Class Athena.WeakActorHandleTestsFunctionLib
// 0x0000 (0x0028 - 0x0028)
class UWeakActorHandleTestsFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WeakActorHandleTestsFunctionLib");
		return ptr;
	}


	bool STATIC_TestCreatingWeakActorHandleFromConsoleStringWithValidNetGuidInvalidName(class AActor* Actor);
};


// Class Athena.WeepingComponent
// 0x01A0 (0x0270 - 0x00D0)
class UWeepingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	float                                              FillRate;                                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinWeepDuration;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWeepDuration;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinCalmDuration;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxCalmDuration;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaterialBlendInTime;                                      // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaterialBlendOutTime;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecalBlendInTime;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecalBlendOutTime;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialRevealTimeParameterName;                          // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DecalRevealTimeParameterName;                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SFXEmitterHeightOffset;                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StartWeepingSFX;                                          // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopWeepingSFX;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     WeepingSFXPool;                                           // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DecalMaterial;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeepingState>                         State;                                                    // 0x01E3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       SupressableEmitterTag;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            ParticleEmitters;                                         // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x7D];                                      // 0x01F3(0x007D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WeepingComponent");
		return ptr;
	}


	void OnRep_State();
};


// Class Athena.WeightedRewardTableAsset
// 0x0010 (0x0038 - 0x0028)
class UWeightedRewardTableAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WeightedRewardTableAsset");
		return ptr;
	}

};


// Class Athena.WetnessComponent
// 0x0048 (0x0118 - 0x00D0)
class UWetnessComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	struct FVector                                     MaxWaterLevel;                                            // 0x01E3(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MinWaterLevel;                                            // 0x01E3(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DryingTime;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastWaterLevel;                                           // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastWetTime;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaterLevel;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Rep_WetData;                                              // 0x01E3(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x01E3(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WetnessComponent");
		return ptr;
	}


	void SetWet(const struct FVector& WorldSpaceWaterPos, bool FullyWet);
	void OnRep_WetData();
	float GetWet();
};


// Class Athena.WheelAnimInstance
// 0x0010 (0x0450 - 0x0440)
class UWheelAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0440(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WheelAnimInstance");
		return ptr;
	}

};


// Class Athena.WheelInteractableFunctionLib
// 0x0000 (0x0028 - 0x0028)
class UWheelInteractableFunctionLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WheelInteractableFunctionLib");
		return ptr;
	}


	struct FWheelAdditiveAlphaSets STATIC_UpdateAdditiveIdles(float Rate, float AnimationTime, const struct FWheelAdditiveProperties& WithinRange, const struct FWheelAdditiveAlphaSets& SetAdditiveIdles, const struct FBlendAdditiveValues& SetAdditiveBlendValues, TEnumAsByte<EWheelAnimationType> WheelTurnType);
	struct FWheelArmIKBoolSets STATIC_CharacterWheelAnimationUpdate(class AActor* Wheel, const struct FSocketId& LeftHandSocketName, const struct FSocketId& RightHandSocketName, float WheelTime, float Rate, bool LeftArm, bool RightArm, TEnumAsByte<EWheelAnimationType> WheelTurnType, const struct FWheelArmIKDownWithinRange& WithinRange, struct FTransform* LeftHandTransform, struct FTransform* RightHandTransform);
};


// Class Athena.WheelMock
// 0x0010 (0x0480 - 0x0470)
class AWheelMock : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WheelMock");
		return ptr;
	}


	float GetNormalizedWheelPosition();
};


// Class Athena.MusicalInstrument
// 0x00D8 (0x0898 - 0x07C0)
class AMusicalInstrument : public AWieldableItem
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x07C0(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MusicalInstrument");
		return ptr;
	}


	void TriggerMagicGlow_Multicast_RPC();
	void StartMagicGlowEffect();
};


// Class Athena.MusicalInstrumentStaticMesh
// 0x0000 (0x0898 - 0x0898)
class AMusicalInstrumentStaticMesh : public AMusicalInstrument
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MusicalInstrumentStaticMesh");
		return ptr;
	}

};


// Class Athena.MusicalInstrumentSkeletalMesh
// 0x0000 (0x0898 - 0x0898)
class AMusicalInstrumentSkeletalMesh : public AMusicalInstrument
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MusicalInstrumentSkeletalMesh");
		return ptr;
	}

};


// Class Athena.PoseableMeshWieldableItem
// 0x0000 (0x07C0 - 0x07C0)
class APoseableMeshWieldableItem : public AWieldableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PoseableMeshWieldableItem");
		return ptr;
	}

};


// Class Athena.Compass
// 0x0060 (0x0820 - 0x07C0)
class ACompass : public APoseableMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x07C0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Compass");
		return ptr;
	}

};


// Class Athena.Bucket
// 0x0118 (0x08D8 - 0x07C0)
class ABucket : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x07C0(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Bucket");
		return ptr;
	}


	void Server_OnThrow(const struct FProjectileAim& AimData);
	void OnRep_FillState();
	void Multicast_Throw();
	void Multicast_Scoop();
	TEnumAsByte<EBucketFillState> GetFillState();
	void FillWithVomit();
	bool CanBeVomitedInto();
};


// Class Athena.PocketWatch
// 0x00A0 (0x0860 - 0x07C0)
class APocketWatch : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x07C0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PocketWatch");
		return ptr;
	}

};


// Class Athena.TestProjectileWeapon
// 0x00A0 (0x0A90 - 0x09F0)
class ATestProjectileWeapon : public AProjectileWeapon
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x09F0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestProjectileWeapon");
		return ptr;
	}


	TEnumAsByte<EProjectileWeaponState> TestGetState();
	void SpoofFireRequest(const struct FFireRequest& Request);
	void RegisterAndWield(class AActor* TargetOwner);
	TArray<struct FHitResult> GenerateAndFireProjectiles();
	void FireInstantly();
};


// Class Athena.SimpleBootyWieldableItem
// 0x0000 (0x07C0 - 0x07C0)
class ASimpleBootyWieldableItem : public ASkeletalMeshWieldableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SimpleBootyWieldableItem");
		return ptr;
	}

};


// Class Athena.StaticSimpleBootyWieldableItem
// 0x0000 (0x07C0 - 0x07C0)
class AStaticSimpleBootyWieldableItem : public AStaticMeshWieldableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StaticSimpleBootyWieldableItem");
		return ptr;
	}

};


// Class Athena.Spyglass
// 0x0070 (0x0830 - 0x07C0)
class ASpyglass : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x07C0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Spyglass");
		return ptr;
	}


	void ScopeOn();
	void ScopeOff();
	void GlintOn();
	void GlintOff();
	void ForceScopeOff();
};


// Class Athena.TestSkeletalWieldableInventoryItem
// 0x0008 (0x07C8 - 0x07C0)
class ATestSkeletalWieldableInventoryItem : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestSkeletalWieldableInventoryItem");
		return ptr;
	}

};


// Class Athena.TreasureChest
// 0x0000 (0x07C0 - 0x07C0)
class ATreasureChest : public ASkeletalMeshWieldableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TreasureChest");
		return ptr;
	}

};


// Class Athena.TutorialMap
// 0x0000 (0x0840 - 0x0840)
class ATutorialMap : public ATreasureMap
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TutorialMap");
		return ptr;
	}

};


// Class Athena.BountyReward
// 0x0000 (0x07C0 - 0x07C0)
class ABountyReward : public AStaticMeshWieldableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.BountyReward");
		return ptr;
	}

};


// Class Athena.CannonBall
// 0x0010 (0x07D0 - 0x07C0)
class ACannonBall : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CannonBall");
		return ptr;
	}

};


// Class Athena.Fruit
// 0x0070 (0x0830 - 0x07C0)
class AFruit : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x07C0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Fruit");
		return ptr;
	}


	void Multicast_EatRPC();
};


// Class Athena.Lantern
// 0x0128 (0x08E8 - 0x07C0)
class ALantern : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x07C0(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Lantern");
		return ptr;
	}


	void TriggerGlow();
	void Server_RequestChangeLight(bool InLightOn, bool Raised);
	void Server_ExternalLightFactorChange(float ExternalLightFactor);
	void ReceiveWieldThirdPerson();
	void ReceiveWieldFirstPerson();
	void ReceiveTurnOnOffOneshotFx(bool On);
	void ReceiveLightChange();
	void PreMeshChangedBPEvent();
	void PostMeshChangedBPEvent();
	void OnRep_Raised();
	void OnRep_LightOn();
	void Multicast_PlayTurnOnOffOneshotFx(bool TurnOn);
	float GetUnaryRaisedBlendFactor();
	float GetUnaryActiveBlendFactor();
	void FlareLight_Multicast_RPC();
};


// Class Athena.MeleeWeapon
// 0x0250 (0x0A10 - 0x07C0)
class AMeleeWeapon : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x07C0(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.MeleeWeapon");
		return ptr;
	}


	void Server_RequestAttack(TEnumAsByte<EMeleeWeaponAttackType> Type, int Index);
	void OnBlockedAttack(const struct FEventBlocked& Event);
	void Multicast_TriggerAttack(TEnumAsByte<EMeleeWeaponAttackType> Type, int Index);
	void Client_RequestAttackResponse(bool Accepted);
};


// Class Athena.SpeakingTrumpet
// 0x0030 (0x07F0 - 0x07C0)
class ASpeakingTrumpet : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x07C0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SpeakingTrumpet");
		return ptr;
	}

};


// Class Athena.StrongholdKey
// 0x0000 (0x07C0 - 0x07C0)
class AStrongholdKey : public AStaticMeshWieldableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.StrongholdKey");
		return ptr;
	}

};


// Class Athena.Tankard
// 0x0070 (0x0830 - 0x07C0)
class ATankard : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x07C0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.Tankard");
		return ptr;
	}


	void SetLiquidLevel(float Level);
	void OnRep_RemainingVolume();
	float GetWantedLiquidLevel();
	float GetLiquidLevel();
};


// Class Athena.TaxiHorn
// 0x0040 (0x0800 - 0x07C0)
class ATaxiHorn : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x07C0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TaxiHorn");
		return ptr;
	}

};


// Class Athena.TestObscuringItemActor
// 0x0010 (0x07D0 - 0x07C0)
class ATestObscuringItemActor : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestObscuringItemActor");
		return ptr;
	}

};


// Class Athena.TestStaticWieldableInventoryItem
// 0x0008 (0x07C8 - 0x07C0)
class ATestStaticWieldableInventoryItem : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestStaticWieldableInventoryItem");
		return ptr;
	}

};


// Class Athena.WieldableMockActor
// 0x0028 (0x07E8 - 0x07C0)
class AWieldableMockActor : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x07C0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableMockActor");
		return ptr;
	}

};


// Class Athena.LargeWieldableMockActor
// 0x0000 (0x07E8 - 0x07E8)
class ALargeWieldableMockActor : public AWieldableMockActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.LargeWieldableMockActor");
		return ptr;
	}

};


// Class Athena.WieldableNonStowableMockItem
// 0x0000 (0x07C0 - 0x07C0)
class AWieldableNonStowableMockItem : public AStaticMeshWieldableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableNonStowableMockItem");
		return ptr;
	}

};


// Class Athena.WieldableWeaponMock
// 0x0008 (0x07C8 - 0x07C0)
class AWieldableWeaponMock : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableWeaponMock");
		return ptr;
	}

};


// Class Athena.WoodPlank
// 0x0010 (0x07D0 - 0x07C0)
class AWoodPlank : public AStaticMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WoodPlank");
		return ptr;
	}

};


// Class Athena.TestRepairingActor
// 0x0028 (0x07E8 - 0x07C0)
class ATestRepairingActor : public AWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x07C0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestRepairingActor");
		return ptr;
	}

};


// Class Athena.TestWieldableInventoryItem
// 0x0008 (0x07C8 - 0x07C0)
class ATestWieldableInventoryItem : public AWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.TestWieldableInventoryItem");
		return ptr;
	}

};


// Class Athena.WieldableItemAnimationInterface
// 0x0000 (0x0028 - 0x0028)
class UWieldableItemAnimationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableItemAnimationInterface");
		return ptr;
	}


	void TriggerOneShotAnimation(class UClass* InputID);
	void StartUnequipAnimation();
	void StartOutOfContinuousUseAnimation(class UClass* InputID);
	void StartIntoContinuousAnimation(class UClass* InputID);
	void StartEquipAnimation();
	void StartContinuousAnimation(class UClass* InputID);
	void ReturnToIdle();
	bool IsEquipAnimationPlaying();
};


// Class Athena.WieldableItemAnimationInstance
// 0x01F0 (0x0630 - 0x0440)
class UWieldableItemAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0440(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableItemAnimationInstance");
		return ptr;
	}


	void OnUseStopped(class UClass* InputID);
	void OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
	void OnOneShotUseTriggered(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals);
};


// Class Athena.PocketWatchAnimationInstance
// 0x0010 (0x0640 - 0x0630)
class UPocketWatchAnimationInstance : public UWieldableItemAnimationInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0630(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.PocketWatchAnimationInstance");
		return ptr;
	}

};


// Class Athena.WieldableItemFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWieldableItemFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableItemFunctionLibrary");
		return ptr;
	}


	bool STATIC_IsThirdPersonMeshComponentTickEnabled(class AWieldableItem* InWieldable);
	bool STATIC_IsFirstPersonMeshComponentTickEnabled(class AWieldableItem* InWieldable);
};


// Class Athena.WieldableItemSetComponent
// 0x0028 (0x00F8 - 0x00D0)
class UWieldableItemSetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x113];                                     // 0x00D0(0x0113) MISSED OFFSET
	TArray<struct FWieldedItemData>                    WieldableItems;                                           // 0x01E3(0x0010) (Net, ZeroConstructor)
	TArray<class UClass*>                              LockedCategories;                                         // 0x01E3(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableItemSetComponent");
		return ptr;
	}


	bool RemoveItem(class AActor* Item);
	void OnRep_Items();
	void OnItemDestroyed(class AActor* Actor);
	class UClass* GetSlotForItem(int Index);
	int GetNumItemsOfType(class UClass* Type);
	int GetNumItems();
	TArray<class AActor*> GetItemsOfCategory(class UClass* ItemCategory);
	int GetItemIndexInCategorySet(class AActor* Item, class UClass* ItemCategory);
	int GetItemIndex(class AActor* Item);
	class AActor* GetItemFromSlot(class UClass* ItemCategory);
	class AActor* GetItem(int Index);
	bool ContainsItemOfType(class UClass* ItemType);
	bool Contains(class AActor* Item);
	bool AddItemToSlot(class AActor* Item, class UClass* ItemCategory);
	bool AddItem(class AActor* Item);
};


// Class Athena.NullItemTestWieldableItemSetComponent
// 0x0000 (0x00F8 - 0x00F8)
class UNullItemTestWieldableItemSetComponent : public UWieldableItemSetComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.NullItemTestWieldableItemSetComponent");
		return ptr;
	}

};


// Class Athena.WieldableItemSetMockCharacter
// 0x0000 (0x0660 - 0x0660)
class AWieldableItemSetMockCharacter : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableItemSetMockCharacter");
		return ptr;
	}

};


// Class Athena.WieldableItemVfxComponent
// 0x0048 (0x0118 - 0x00D0)
class UWieldableItemVfxComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00D0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableItemVfxComponent");
		return ptr;
	}

};


// Class Athena.WieldableTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UWieldableTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldableTestFunctions");
		return ptr;
	}


	void STATIC_ChangeItemSize(class AWieldableItem* InWieldable, TEnumAsByte<EWieldableItemSize> InNewSize);
};


// Class Athena.WieldedItemComponent
// 0x0120 (0x0410 - 0x02F0)
class UWieldedItemComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x02F0(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WieldedItemComponent");
		return ptr;
	}


	TEnumAsByte<EWieldItemReturnCode> WieldItem(const TScriptInterface<class UWieldableInterface>& Item, bool Fast);
	void UnstashItem(TEnumAsByte<EStashReason> Reason);
	void StashItem(TEnumAsByte<EStashReason> Reason);
	void SlowStashItem(TEnumAsByte<EStashReason> Reason);
	void Server_WieldRPC(class AActor* Item, int InEpochId);
	void OnRep_HeldItem();
	bool IsItemWielded(class AActor* ItemActor);
	bool IsItemStashed();
	TScriptInterface<class UWieldableInterface> GetWieldedItemIfNotStashed();
	TScriptInterface<class UWieldableInterface> GetWieldedItem();
	void Client_WieldItemCorrectionRPC(class AActor* Item);
	void Client_WieldItem(const struct FNetActorPtr& Item, int InEpochId, bool Fast);
};


// Class Athena.WorldMapIslandDataAsset
// 0x0050 (0x0078 - 0x0028)
class UWorldMapIslandDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UTexture*                                    Texture;                                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FWorldMapIslandDataCaptureParams            CaptureParams;                                            // 0x01E3(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WorldMapIslandDataAsset");
		return ptr;
	}

};


// Class Athena.WorldRegionBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWorldRegionBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WorldRegionBlueprintFunctionLibrary");
		return ptr;
	}


	class UClass* STATIC_GetSeaIdFromWorldSpaceLocation(const struct FVector& InLocation);
};


// Class Athena.WorldRegionComponent
// 0x0030 (0x0320 - 0x02F0)
class UWorldRegionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.WorldRegionComponent");
		return ptr;
	}

};


// Class Athena.CompanyRegionComponent
// 0x0000 (0x0320 - 0x0320)
class UCompanyRegionComponent : public UWorldRegionComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.CompanyRegionComponent");
		return ptr;
	}

};


// Class Athena.SeaRegionComponent
// 0x0000 (0x0320 - 0x0320)
class USeaRegionComponent : public UWorldRegionComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Athena.SeaRegionComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
