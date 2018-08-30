#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TestUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TestUtilities.MockObjectWithMessagingDispatcher
// 0x00F8 (0x0120 - 0x0028)
class UMockObjectWithMessagingDispatcher : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.MockObjectWithMessagingDispatcher");
		return ptr;
	}

};


// Class TestUtilities.TestActor
// 0x0000 (0x0490 - 0x0490)
class ATestActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestActor");
		return ptr;
	}

};


// Class TestUtilities.TestActorWithCapsule
// 0x0008 (0x0498 - 0x0490)
class ATestActorWithCapsule : public AActor
{
public:
	class UCapsuleComponent*                           BaseComponent;                                            // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestActorWithCapsule");
		return ptr;
	}

};


// Class TestUtilities.TestActorWithObjectMessagingDispatcher
// 0x00A8 (0x0538 - 0x0490)
class ATestActorWithObjectMessagingDispatcher : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0490(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TestUtilities.TestActorWithObjectMessagingDispatcher");
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
		static auto ptr = UObject::FindClass("Class TestUtilities.TestEnvQueryContextPoints");
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
		static auto ptr = UObject::FindClass("Class TestUtilities.TestEnvQueryContextActors");
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
		static auto ptr = UObject::FindClass("Class TestUtilities.TestPrimitiveComponent");
		return ptr;
	}


	TEnumAsByte<ECollisionChannel> GetCollisionObjectType();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
