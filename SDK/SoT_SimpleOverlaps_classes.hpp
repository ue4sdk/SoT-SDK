#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SimpleOverlaps_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SimpleOverlaps.OverlapTestActor
// 0x0018 (0x04A8 - 0x0490)
class AOverlapTestActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0490(0x0010) MISSED OFFSET
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SimpleOverlaps.OverlapTestActor");
		return ptr;
	}

};


// Class SimpleOverlaps.SimpleOverlapCollectionKey
// 0x0000 (0x0028 - 0x0028)
class USimpleOverlapCollectionKey : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SimpleOverlaps.SimpleOverlapCollectionKey");
		return ptr;
	}

};


// Class SimpleOverlaps.TestObjectMessagingDispatcherInterface
// 0x00A8 (0x0538 - 0x0490)
class ATestObjectMessagingDispatcherInterface : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0490(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SimpleOverlaps.TestObjectMessagingDispatcherInterface");
		return ptr;
	}

};


// Class SimpleOverlaps.TestOverlapBroadcasterActor
// 0x0120 (0x05B0 - 0x0490)
class ATestOverlapBroadcasterActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0490(0x0030) MISSED OFFSET
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE8];                                      // 0x04C8(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SimpleOverlaps.TestOverlapBroadcasterActor");
		return ptr;
	}

};


// Class SimpleOverlaps.TestOverlapShapeActor
// 0x0010 (0x04A0 - 0x0490)
class ATestOverlapShapeActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0490(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SimpleOverlaps.TestOverlapShapeActor");
		return ptr;
	}

};


// Class SimpleOverlaps.TestSimpleOverlapsGameState
// 0x0060 (0x0548 - 0x04E8)
class ATestSimpleOverlapsGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04E8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class SimpleOverlaps.TestSimpleOverlapsGameState");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
