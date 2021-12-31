#pragma once

// Sea of Thieves (2) SDK

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
// 0x00F8 (0x04C8 - 0x03D0)
class ADrawDebugService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	TArray<FDrawDebugItemMessage>                      MessagesReplicated;                                       // 0x03D8(0x0010) (Net, ZeroConstructor)
	TArray<FDrawDebugItemSphere>                       SpheresReplicated;                                        // 0x03E8(0x0010) (Net, ZeroConstructor)
	TArray<FDrawDebugItemBox>                          BoxesReplicated;                                          // 0x03F8(0x0010) (Net, ZeroConstructor)
	TArray<FDrawDebugItemCapsule>                      CapsulesReplicated;                                       // 0x0408(0x0010) (Net, ZeroConstructor)
	TArray<FDrawDebugItemLine>                         LinesReplicated;                                          // 0x0418(0x0010) (Net, ZeroConstructor)
	TArray<FDrawDebugItemSector>                       SectorsReplicated;                                        // 0x0428(0x0010) (Net, ZeroConstructor)
	TArray<FDrawDebugItemString>                       StringsReplicated;                                        // 0x0438(0x0010) (Net, ZeroConstructor)
	bool                                               IsDrawDebugActive;                                        // 0x0448(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7F];                                      // 0x0449(0x007F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaDebug.DrawDebugService"));
		return ptr;
	}


	void OnRep_PersistentShapeChanged();
	void OnRep_IsDrawDebugActiveChanged();
	void Multicast_ClearGroup(const FName& GroupName);
	void Multicast_AddStrings(TArray<FDrawDebugItemString> Strings);
	void Multicast_AddSpheres(TArray<FDrawDebugItemSphere> Spheres);
	void Multicast_AddSectors(TArray<FDrawDebugItemSector> Sectors);
	void Multicast_AddLines(TArray<FDrawDebugItemLine> Lines);
	void Multicast_AddCapsules(TArray<FDrawDebugItemCapsule> Capsules);
	void Multicast_AddBoxes(TArray<FDrawDebugItemBox> Boxes);
};


// Class AthenaDebug.ShippingDebugActorSphereCollection
// 0x0010 (0x03E0 - 0x03D0)
class AShippingDebugActorSphereCollection : public AActor
{
public:
	TArray<FSphereData>                                SphereList;                                               // 0x03D0(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaDebug.ShippingDebugActorSphereCollection"));
		return ptr;
	}

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
// 0x0028 (0x03F8 - 0x03D0)
class AVideprinter : public AActor
{
public:
	TArray<FString>                                    OutputRingBuffer;                                         // 0x03D0(0x0010) (Net, ZeroConstructor)
	int                                                AddAt;                                                    // 0x03E0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	FName                                              Id;                                                       // 0x03E4(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x03EC(0x000C) MISSED OFFSET

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
	TArray<AVideprinter*>                              Videprinters;                                             // 0x0030(0x0010) (ZeroConstructor)

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
