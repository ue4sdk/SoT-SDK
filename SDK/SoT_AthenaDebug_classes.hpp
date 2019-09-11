#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaDebug_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaDebug.DrawDebugServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UDrawDebugServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaDebug.DrawDebugServiceInterface"));
		return ptr;
	}

};


// Class AthenaDebug.DrawDebugService
// 0x0078 (0x0520 - 0x04A8)
class ADrawDebugService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET
	TArray<struct FDrawDebugItemSphere>                Spheres;                                                  // 0x04B0(0x0010) (Net, ZeroConstructor)
	TArray<struct FDrawDebugItemBox>                   Boxes;                                                    // 0x04C0(0x0010) (Net, ZeroConstructor)
	TArray<struct FDrawDebugItemCapsule>               Capsules;                                                 // 0x04D0(0x0010) (Net, ZeroConstructor)
	TArray<struct FDrawDebugItemLine>                  Lines;                                                    // 0x04E0(0x0010) (Net, ZeroConstructor)
	TArray<struct FDrawDebugItemMessage>               Messages;                                                 // 0x04F0(0x0010) (Net, ZeroConstructor)
	TArray<struct FDrawDebugItemString>                Strings;                                                  // 0x0500(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0510(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaDebug.DrawDebugService"));
		return ptr;
	}


	void OnRep_ReplicatedItems();
};


// Class AthenaDebug.TickableDebugDrawingServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UTickableDebugDrawingServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaDebug.TickableDebugDrawingServiceInterface"));
		return ptr;
	}

};


// Class AthenaDebug.Videprinter
// 0x0028 (0x04D0 - 0x04A8)
class AVideprinter : public AActor
{
public:
	TArray<class FString>                              OutputRingBuffer;                                         // 0x04A8(0x0010) (Net, ZeroConstructor)
	int                                                AddAt;                                                    // 0x04B8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       Id;                                                       // 0x04BC(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x04C4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaDebug.Videprinter"));
		return ptr;
	}

};


// Class AthenaDebug.VideprinterServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UVideprinterServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaDebug.VideprinterServiceInterface"));
		return ptr;
	}

};


// Class AthenaDebug.VideprinterService
// 0x0018 (0x0040 - 0x0028)
class UVideprinterService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<class AVideprinter*>                        Videprinters;                                             // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaDebug.VideprinterService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
