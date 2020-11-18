#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WwiseAudioUnitTests_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WwiseAudioUnitTests.MockAudioComponent
// 0x0010 (0x00D8 - 0x00C8)
class UMockAudioComponent : public UActorComponent
{
public:
	class UWwiseObjectPoolWrapper*                     SfxPool;                                                  // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 SfxEvent;                                                 // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudioUnitTests.MockAudioComponent"));
		return ptr;
	}

};


// Class WwiseAudioUnitTests.MockWwiseInputManager
// 0x0018 (0x0040 - 0x0028)
class UMockWwiseInputManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudioUnitTests.MockWwiseInputManager"));
		return ptr;
	}

};


// Class WwiseAudioUnitTests.WwiseEmitterComponentBlueprintLibraryTestActor
// 0x0000 (0x0470 - 0x0470)
class AWwiseEmitterComponentBlueprintLibraryTestActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudioUnitTests.WwiseEmitterComponentBlueprintLibraryTestActor"));
		return ptr;
	}

};


// Class WwiseAudioUnitTests.WwiseEventTest1
// 0x0000 (0x0050 - 0x0050)
class UWwiseEventTest1 : public UWwiseEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudioUnitTests.WwiseEventTest1"));
		return ptr;
	}

};


// Class WwiseAudioUnitTests.WwiseEventTest2
// 0x0000 (0x0050 - 0x0050)
class UWwiseEventTest2 : public UWwiseEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudioUnitTests.WwiseEventTest2"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
