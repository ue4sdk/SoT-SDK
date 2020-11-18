#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TestUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TestUtilities.SampleUObject
// 0x0000 (0x0028 - 0x0028)
class USampleUObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.SampleUObject"));
		return ptr;
	}

};


// Class TestUtilities.AnotherSampleUObject
// 0x0000 (0x0028 - 0x0028)
class UAnotherSampleUObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.AnotherSampleUObject"));
		return ptr;
	}

};


// Class TestUtilities.DelegateTester
// 0x0008 (0x0030 - 0x0028)
class UDelegateTester : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.DelegateTester"));
		return ptr;
	}


	void Callback();
};


// Class TestUtilities.MockControllerWithMessagingDispatcher
// 0x00A8 (0x0578 - 0x04D0)
class AMockControllerWithMessagingDispatcher : public AController
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x04D0(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.MockControllerWithMessagingDispatcher"));
		return ptr;
	}

};


// Class TestUtilities.MockObjectCollectorComponent
// 0x0060 (0x0128 - 0x00C8)
class UMockObjectCollectorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00C8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.MockObjectCollectorComponent"));
		return ptr;
	}

};


// Class TestUtilities.MockObjectWithMessagingDispatcher
// 0x0070 (0x0098 - 0x0028)
class UMockObjectWithMessagingDispatcher : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.MockObjectWithMessagingDispatcher"));
		return ptr;
	}

};


// Class TestUtilities.MockPlayerControllerWithMessagingDispatcher
// 0x00A8 (0x0870 - 0x07C8)
class AMockPlayerControllerWithMessagingDispatcher : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x07C8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.MockPlayerControllerWithMessagingDispatcher"));
		return ptr;
	}

};


// Class TestUtilities.ObjectCollectorGameState
// 0x0060 (0x0528 - 0x04C8)
class AObjectCollectorGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04C8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.ObjectCollectorGameState"));
		return ptr;
	}

};


// Class TestUtilities.TestActor
// 0x0000 (0x0470 - 0x0470)
class ATestActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestActor"));
		return ptr;
	}

};


// Class TestUtilities.TestActorWithBoxedRpcDispatcherComponent
// 0x0008 (0x04E0 - 0x04D8)
class ATestActorWithBoxedRpcDispatcherComponent : public APawn
{
public:
	class UBoxedRpcDispatcherComponent*                BoxedRpcDispatcherComponent;                              // 0x04D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestActorWithBoxedRpcDispatcherComponent"));
		return ptr;
	}

};


// Class TestUtilities.TestActorWithCapsule
// 0x0008 (0x0478 - 0x0470)
class ATestActorWithCapsule : public AActor
{
public:
	class UCapsuleComponent*                           BaseComponent;                                            // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestActorWithCapsule"));
		return ptr;
	}

};


// Class TestUtilities.TestActorWithObjectMessagingDispatcher
// 0x00A8 (0x0518 - 0x0470)
class ATestActorWithObjectMessagingDispatcher : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0470(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestActorWithObjectMessagingDispatcher"));
		return ptr;
	}

};


// Class TestUtilities.MockActorWithMessagingDispatcherAndSceneComponent
// 0x0008 (0x0520 - 0x0518)
class AMockActorWithMessagingDispatcherAndSceneComponent : public ATestActorWithObjectMessagingDispatcher
{
public:
	class USceneComponent*                             SceneComponent;                                           // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.MockActorWithMessagingDispatcherAndSceneComponent"));
		return ptr;
	}

};


// Class TestUtilities.TestController
// 0x0000 (0x04D0 - 0x04D0)
class ATestController : public AController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestController"));
		return ptr;
	}

};


// Class TestUtilities.TestEnvQueryContextPoints
// 0x0000 (0x0028 - 0x0028)
class UTestEnvQueryContextPoints : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestEnvQueryContextPoints"));
		return ptr;
	}

};


// Class TestUtilities.TestEnvQueryContextActors
// 0x0000 (0x0028 - 0x0028)
class UTestEnvQueryContextActors : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestEnvQueryContextActors"));
		return ptr;
	}

};


// Class TestUtilities.TestGameInstanceWithObjectMessagingAndUserGameSettingsRetrievalInterface
// 0x0248 (0x02D0 - 0x0088)
class UTestGameInstanceWithObjectMessagingAndUserGameSettingsRetrievalInterface : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0088(0x01A8) MISSED OFFSET
	struct FObjectMessagingDispatcher                  EventDispatcher;                                          // 0x0230(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestGameInstanceWithObjectMessagingAndUserGameSettingsRetrievalInterface"));
		return ptr;
	}

};


// Class TestUtilities.TestObjectWithObjectMessagingDispatcher
// 0x00A8 (0x00D0 - 0x0028)
class UTestObjectWithObjectMessagingDispatcher : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestObjectWithObjectMessagingDispatcher"));
		return ptr;
	}

};


// Class TestUtilities.TestPawnWithCapsule
// 0x0008 (0x04E0 - 0x04D8)
class ATestPawnWithCapsule : public APawn
{
public:
	class UCapsuleComponent*                           BaseComponent;                                            // 0x04D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestPawnWithCapsule"));
		return ptr;
	}

};


// Class TestUtilities.TestPrimitiveComponent
// 0x0010 (0x0580 - 0x0570)
class UTestPrimitiveComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0570(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestPrimitiveComponent"));
		return ptr;
	}


	TEnumAsByte<ECollisionChannel> GetCollisionObjectType();
};


// Class TestUtilities.TestSkeletalMeshComponent
// 0x0040 (0x09B0 - 0x0970)
class UTestSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0970(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestSkeletalMeshComponent"));
		return ptr;
	}

};


// Class TestUtilities.TestStaticMeshComponent
// 0x0010 (0x05E0 - 0x05D0)
class UTestStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestStaticMeshComponent"));
		return ptr;
	}


	void AddForce(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
