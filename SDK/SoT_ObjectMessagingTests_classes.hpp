#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ObjectMessagingTests_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ObjectMessagingTests.ObjectMessagingDispatcherTestObject
// 0x00A8 (0x0550 - 0x04A8)
class AObjectMessagingDispatcherTestObject : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x04A8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ObjectMessagingTests.ObjectMessagingDispatcherTestObject"));
		return ptr;
	}

};


// Class ObjectMessagingTests.ObjectMessagingListenerTestObject
// 0x0018 (0x0040 - 0x0028)
class UObjectMessagingListenerTestObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ObjectMessagingTests.ObjectMessagingListenerTestObject"));
		return ptr;
	}


	void TestFunctionWithEventData(struct FObjectMessagingEventTestData* InEventData);
	void TestFunction(int Data);
	int InvalidEventFunctionWithReturn(struct FObjectMessagingEventTestData* InEventData);
	void InvalidEventFunctionWithNoArguments();
	void InvalidEventFunctionWithIncorrectArgument(int Value);
};


// Class ObjectMessagingTests.TestGameStateWithObjectMessagingDispatcher
// 0x00A8 (0x05A8 - 0x0500)
class ATestGameStateWithObjectMessagingDispatcher : public AGameState
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0500(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ObjectMessagingTests.TestGameStateWithObjectMessagingDispatcher"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
