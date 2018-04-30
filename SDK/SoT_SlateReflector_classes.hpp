#pragma once

// Sea of Thieves (1.0.5) SDK

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
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FGeometry                                   Geometry;                                                 // 0x01E3(0x0034) (IsPlainOldData)
	TArray<class UWidgetReflectorNodeBase*>            ChildNodes;                                               // 0x01E3(0x0010) (ZeroConstructor)

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
	unsigned char                                      UnknownData00[0x163];                                     // 0x0080(0x0163) MISSED OFFSET
	struct FText                                       CachedWidgetType;                                         // 0x01E3(0x0018)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0080(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       CachedWidgetVisibilityText;                               // 0x01E3(0x0018)
	unsigned char                                      UnknownData02[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       CachedWidgetReadableLocation;                             // 0x01E3(0x0018)
	unsigned char                                      UnknownData03[0x20];                                      // 0x021B(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class FString                                      CachedWidgetFile;                                         // 0x01E3(0x0010) (ZeroConstructor)
	int                                                CachedWidgetLineNumber;                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CachedWidgetAssetName;                                    // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CachedWidgetDesiredSize;                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 CachedWidgetForegroundColor;                              // 0x01E3(0x0030)
	class FString                                      CachedWidgetAddress;                                      // 0x01E3(0x0010) (ZeroConstructor)
	bool                                               CachedWidgetEnabled;                                      // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)

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
