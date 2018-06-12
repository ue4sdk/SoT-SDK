#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SlateReflector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SlateReflector.WidgetReflectorNodeBase
// 0x0058 (0x0080 - 0x0028)
class UWidgetReflectorNodeBase : public UObject
{
public:
	struct FGeometry                                   Geometry;                                                 // 0x0028(0x0034) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<class UWidgetReflectorNodeBase*>            ChildNodes;                                               // 0x0060(0x0010) (ZeroConstructor)
	struct FLinearColor                                Tint;                                                     // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateReflector.WidgetReflectorNodeBase");
		return ptr;
	}

};


// Class SlateReflector.LiveWidgetReflectorNode
// 0x0018 (0x0098 - 0x0080)
class ULiveWidgetReflectorNode : public UWidgetReflectorNodeBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0080(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateReflector.LiveWidgetReflectorNode");
		return ptr;
	}

};


// Class SlateReflector.SnapshotWidgetReflectorNode
// 0x0118 (0x0198 - 0x0080)
class USnapshotWidgetReflectorNode : public UWidgetReflectorNodeBase
{
public:
	struct FText                                       CachedWidgetType;                                         // 0x0080(0x0018)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       CachedWidgetVisibilityText;                               // 0x00B8(0x0018)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00B8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       CachedWidgetReadableLocation;                             // 0x00F0(0x0018)
	unsigned char                                      UnknownData02[0x20];                                      // 0x00F0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class FString                                      CachedWidgetFile;                                         // 0x0128(0x0010) (ZeroConstructor)
	int                                                CachedWidgetLineNumber;                                   // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CachedWidgetAssetName;                                    // 0x013C(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CachedWidgetDesiredSize;                                  // 0x0144(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x014C(0x0004) MISSED OFFSET
	struct FSlateColor                                 CachedWidgetForegroundColor;                              // 0x0150(0x0030)
	class FString                                      CachedWidgetAddress;                                      // 0x0180(0x0010) (ZeroConstructor)
	bool                                               CachedWidgetEnabled;                                      // 0x0190(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0191(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateReflector.SnapshotWidgetReflectorNode");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
