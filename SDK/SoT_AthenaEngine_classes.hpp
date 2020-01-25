#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaEngine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

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


// Class AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent
// 0x0030 (0x00F8 - 0x00C8)
class UBoxCollisionExtentAdjustOverTimeComponent : public UActorComponent
{
public:
	float                                              DelayBeforeExtentAdjustment;                              // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldAdjustBoxExtentX;                                   // 0x00CC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	float                                              PostAdjustmentBoxExtentX;                                 // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldAdjustBoxExtentY;                                   // 0x00D4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	float                                              PostAdjustmentBoxExtentY;                                 // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldAdjustBoxExtentZ;                                   // 0x00DC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	float                                              PostAdjustmentBoxExtentZ;                                 // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class UBoxComponent*                               BoxCollisionToAdjust;                                     // 0x00E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWorld*                                      CachedWorld;                                              // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngine.BoxCollisionExtentAdjustOverTimeComponent"));
		return ptr;
	}


	void SetBoxCollisionToAdjust(class UBoxComponent* InBoxComponent);
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


	bool CanPlayForceFeedback(class AActor* InOwner);
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
// 0x0020 (0x0048 - 0x0028)
class UNestedWorldRootDataAsset : public UDataAsset
{
public:
	TArray<TAssetPtr<class UWorld>>                    WorldRoots;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

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


// Class AthenaEngine.StringToAssetClassMap
// 0x0028 (0x0050 - 0x0028)
class UStringToAssetClassMap : public UDataAsset
{
public:
	TArray<struct FStringAssetClassPair>               StringAssetClassPairs;                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
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
