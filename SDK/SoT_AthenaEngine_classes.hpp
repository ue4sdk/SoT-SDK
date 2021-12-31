#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaEngine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaEngine.ForceFeedbackCondition
// 0x0000 (0x0028 - 0x0028)
class UForceFeedbackCondition : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.ForceFeedbackCondition"));
		return ptr;
	}


	bool CanPlayForceFeedback(AActor* InOwner);
};


// Class AthenaEngine.AthenaEngineInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaEngineInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.AthenaEngineInterface"));
		return ptr;
	}

};


// Class AthenaEngine.BoxedRpcDispatcherInterface
// 0x0000 (0x0028 - 0x0028)
class UBoxedRpcDispatcherInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.BoxedRpcDispatcherInterface"));
		return ptr;
	}

};


// Class AthenaEngine.BoxedRpcDispatcherComponent
// 0x0008 (0x00D0 - 0x00C8)
class UBoxedRpcDispatcherComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.BoxedRpcDispatcherComponent"));
		return ptr;
	}


	void Server_SendRpc(const FSerialisedRpc& Event);
	void NetMulticastExcludeServer_SendRpc(const FSerialisedRpc& Event);
	void Client_SendRpc(const FSerialisedRpc& Event);
};


// Class AthenaEngine.DynamicColourPointLightComponent
// 0x0130 (0x05B0 - 0x0480)
class UDynamicColourPointLightComponent : public UPointLightComponent
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0480(0x0078) MISSED OFFSET
	FRuntimeFloatCurve                                 DeactivationCurve;                                        // 0x04F8(0x0080) (Edit)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0578(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.DynamicColourPointLightComponent"));
		return ptr;
	}


	void DeactivateLight(bool Blend);
	void ActivateLight(bool Blend);
};


// Class AthenaEngine.EmptyObject
// 0x0000 (0x0028 - 0x0028)
class UEmptyObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.EmptyObject"));
		return ptr;
	}

};


// Class AthenaEngine.GameInstanceSessionIdProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UGameInstanceSessionIdProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.GameInstanceSessionIdProviderInterface"));
		return ptr;
	}

};


// Class AthenaEngine.NestedWorldRootDataAsset
// 0x0010 (0x0038 - 0x0028)
class UNestedWorldRootDataAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.NestedWorldRootDataAsset"));
		return ptr;
	}

};


// Class AthenaEngine.OnlinePlayerPermissionsRetrieverInterface
// 0x0000 (0x0028 - 0x0028)
class UOnlinePlayerPermissionsRetrieverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.OnlinePlayerPermissionsRetrieverInterface"));
		return ptr;
	}

};


// Class AthenaEngine.PlayModeHelpers
// 0x0000 (0x0028 - 0x0028)
class UPlayModeHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.PlayModeHelpers"));
		return ptr;
	}


	static void SetPlayModeVariantOverride(TEnumAsByte<EPlayModeVariant> NewPlayModeVariantOverride);
	static void SetPlayModeOverride(TEnumAsByte<EPlayMode> NewPlayModeOverride);
	static TEnumAsByte<EPlayModeVariant> GetPlayModeVariant(UObject* WorldContext);
	static TEnumAsByte<EPlayMode> GetPlayMode(UObject* WorldContext);
	static void ClearPlayModeVariantOverride();
	static void ClearPlayModeOverride();
};


// Class AthenaEngine.PlayModeInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayModeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.PlayModeInterface"));
		return ptr;
	}

};


// Class AthenaEngine.PrimitiveCollisionExtentAdjustOverTimeComponent
// 0x0040 (0x0108 - 0x00C8)
class UPrimitiveCollisionExtentAdjustOverTimeComponent : public UActorComponent
{
public:
	float                                              DelayBeforeExtentAdjustment;                              // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00CC(0x002C) MISSED OFFSET
	UWorld*                                            CachedWorld;                                              // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.PrimitiveCollisionExtentAdjustOverTimeComponent"));
		return ptr;
	}

};


// Class AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent
// 0x0030 (0x0138 - 0x0108)
class UBoxCollisionExtentAdjustOverTimeComponent : public UPrimitiveCollisionExtentAdjustOverTimeComponent
{
public:
	bool                                               ShouldAdjustBoxExtentX;                                   // 0x0108(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              PostAdjustmentBoxExtentX;                                 // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldAdjustBoxExtentY;                                   // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	float                                              PostAdjustmentBoxExtentY;                                 // 0x0114(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldAdjustBoxExtentZ;                                   // 0x0118(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              PostAdjustmentBoxExtentZ;                                 // 0x011C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FVector                                            ServerSizeScale;                                          // 0x0120(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	UBoxComponent*                                     BoxCollisionToAdjust;                                     // 0x0130(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent"));
		return ptr;
	}

};


// Class AthenaEngine.SphereCollisionExtentAdjustOverTimeComponent
// 0x0018 (0x0120 - 0x0108)
class USphereCollisionExtentAdjustOverTimeComponent : public UPrimitiveCollisionExtentAdjustOverTimeComponent
{
public:
	bool                                               ShouldAdjustSphereRadius;                                 // 0x0108(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              PostAdjustmentSphereRadius;                               // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ServerSizeScale;                                          // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	USphereComponent*                                  SphereCollisionToAdjust;                                  // 0x0118(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.SphereCollisionExtentAdjustOverTimeComponent"));
		return ptr;
	}

};


// Class AthenaEngine.ResourceProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UResourceProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.ResourceProviderInterface"));
		return ptr;
	}

};


// Class AthenaEngine.RotateMeshToActorComponent
// 0x0030 (0x00F8 - 0x00C8)
class URotateMeshToActorComponent : public UActorComponent
{
public:
	UMeshComponent*                                    MeshToRotate;                                             // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	AActor*                                            ActorToRotateTo;                                          // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CloseProximityRadius;                                     // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use2DDistanceForCloseProximityRadius;                     // 0x00DC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WhenInCloseProximityKeepLastYaw;                          // 0x00DD(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00DE(0x0002) MISSED OFFSET
	float                                              RotationSpeed;                                            // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreventPitchModification;                                 // 0x00E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	float                                              MaxPitch;                                                 // 0x00E8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              CloseProximityYawRotation;                                // 0x00EC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.RotateMeshToActorComponent"));
		return ptr;
	}


	void SnapMeshToLookAtActor();
	void Initialise(UMeshComponent* InMeshToRotate, AActor* InActorToRotateTo);
};


// Class AthenaEngine.RotateMeshToLocalPlayerComponent
// 0x0000 (0x00F8 - 0x00F8)
class URotateMeshToLocalPlayerComponent : public URotateMeshToActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.RotateMeshToLocalPlayerComponent"));
		return ptr;
	}

};


// Class AthenaEngine.ServicesStampIdInterface
// 0x0000 (0x0028 - 0x0028)
class UServicesStampIdInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.ServicesStampIdInterface"));
		return ptr;
	}

};


// Class AthenaEngine.SkeletalMeshAggregateTickComponent
// 0x0030 (0x00F8 - 0x00C8)
class USkeletalMeshAggregateTickComponent : public UActorComponent
{
public:
	USkeletalMeshComponent*                            Mesh;                                                     // 0x00C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.SkeletalMeshAggregateTickComponent"));
		return ptr;
	}

};


// Class AthenaEngine.StringToAssetClassMap
// 0x0028 (0x0050 - 0x0028)
class UStringToAssetClassMap : public UDataAsset
{
public:
	TArray<FStringAssetClassPair>                      StringAssetClassPairs;                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.StringToAssetClassMap"));
		return ptr;
	}

};


// Class AthenaEngine.SyncedRandomRetrievalInterface
// 0x0000 (0x0028 - 0x0028)
class USyncedRandomRetrievalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.SyncedRandomRetrievalInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
