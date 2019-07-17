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
// 0x00A8 (0x05B0 - 0x0508)
class AMockControllerWithMessagingDispatcher : public AController
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0508(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.MockControllerWithMessagingDispatcher"));
		return ptr;
	}

};


// Class TestUtilities.MockObjectWithMessagingDispatcher
// 0x00F8 (0x0120 - 0x0028)
class UMockObjectWithMessagingDispatcher : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.MockObjectWithMessagingDispatcher"));
		return ptr;
	}

};


// Class TestUtilities.ObjectCollectorGameState
// 0x0060 (0x0560 - 0x0500)
class AObjectCollectorGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0500(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.ObjectCollectorGameState"));
		return ptr;
	}

};


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


// Class TestUtilities.TestActor
// 0x0000 (0x04A8 - 0x04A8)
class ATestActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestActor"));
		return ptr;
	}

};


// Class TestUtilities.TestActorWithCapsule
// 0x0008 (0x04B0 - 0x04A8)
class ATestActorWithCapsule : public AActor
{
public:
	class UCapsuleComponent*                           BaseComponent;                                            // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestActorWithCapsule"));
		return ptr;
	}

};


// Class TestUtilities.TestActorWithObjectMessagingDispatcher
// 0x00A8 (0x0550 - 0x04A8)
class ATestActorWithObjectMessagingDispatcher : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x04A8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestActorWithObjectMessagingDispatcher"));
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


// Class TestUtilities.TestPawnWithCapsule
// 0x0008 (0x0518 - 0x0510)
class ATestPawnWithCapsule : public APawn
{
public:
	class UCapsuleComponent*                           BaseComponent;                                            // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestPawnWithCapsule"));
		return ptr;
	}

};


// Class TestUtilities.TestPrimitiveComponent
// 0x0010 (0x05B0 - 0x05A0)
class UTestPrimitiveComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TestUtilities.TestPrimitiveComponent"));
		return ptr;
	}


	TEnumAsByte<ECollisionChannel> GetCollisionObjectType();
};


// Class TestUtilities.TestStaticMeshComponent
// 0x0010 (0x0610 - 0x0600)
class UTestStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0600(0x0010) MISSED OFFSET

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
