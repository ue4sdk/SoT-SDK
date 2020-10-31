#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaEngineTests_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaEngineTests.MockBoxedRpcDispatcherComponent
// 0x0040 (0x0108 - 0x00C8)
class UMockBoxedRpcDispatcherComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C8(0x0020) MISSED OFFSET
	class UScriptStruct*                               ReceivedEvent;                                            // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UScriptStruct*                               ReceivedServerEvent;                                      // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UScriptStruct*                               ReceivedClientEvent;                                      // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UScriptStruct*                               ReceivedClientsExcludeServerEvent;                        // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngineTests.MockBoxedRpcDispatcherComponent"));
		return ptr;
	}

};


// Class AthenaEngineTests.MockResourceProviderComponent
// 0x0040 (0x0108 - 0x00C8)
class UMockResourceProviderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<class UObject*>                             Resources;                                                // 0x00D0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x00E0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngineTests.MockResourceProviderComponent"));
		return ptr;
	}

};


// Class AthenaEngineTests.MockSyncedRandomRetrievalComponent
// 0x0018 (0x00E0 - 0x00C8)
class UMockSyncedRandomRetrievalComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngineTests.MockSyncedRandomRetrievalComponent"));
		return ptr;
	}

};


// Class AthenaEngineTests.TestActorWithDynamicColourPointLightComponent
// 0x0008 (0x0468 - 0x0460)
class ATestActorWithDynamicColourPointLightComponent : public AActor
{
public:
	class UDynamicColourPointLightComponent*           LightComponent;                                           // 0x0460(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngineTests.TestActorWithDynamicColourPointLightComponent"));
		return ptr;
	}

};


// Class AthenaEngineTests.TestActorWithRotateMeshToActorComponent
// 0x0010 (0x0470 - 0x0460)
class ATestActorWithRotateMeshToActorComponent : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotateMeshToActorComponent*                 RotateMeshToActorComponent;                               // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngineTests.TestActorWithRotateMeshToActorComponent"));
		return ptr;
	}

};


// Class AthenaEngineTests.TestBoxedRpcDispatcherComponent
// 0x00B0 (0x0180 - 0x00D0)
class UTestBoxedRpcDispatcherComponent : public UBoxedRpcDispatcherComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00D0(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngineTests.TestBoxedRpcDispatcherComponent"));
		return ptr;
	}

};


// Class AthenaEngineTests.TestForceFeedbackCondition
// 0x0010 (0x0038 - 0x0028)
class UTestForceFeedbackCondition : public UForceFeedbackCondition
{
public:
	class AActor*                                      CanPlayForceFeedbackOwnerInput;                           // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngineTests.TestForceFeedbackCondition"));
		return ptr;
	}

};


// Class AthenaEngineTests.TestPrimitiveCollisionExtentAdjustOverTimeComponent
// 0x0008 (0x0110 - 0x0108)
class UTestPrimitiveCollisionExtentAdjustOverTimeComponent : public UPrimitiveCollisionExtentAdjustOverTimeComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaEngineTests.TestPrimitiveCollisionExtentAdjustOverTimeComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
