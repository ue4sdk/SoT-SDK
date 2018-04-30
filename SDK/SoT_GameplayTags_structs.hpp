#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTags.GameplayTag
// 0x0008
struct FGameplayTag
{
	struct FName                                       TagName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct GameplayTags.GameplayTagQuery
// 0x0048
struct FGameplayTagQuery
{
	class FString                                      AutoDescription;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	int                                                TokenStreamVersion;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayTag>                        TagDictionary;                                            // 0x01E3(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              QueryTokenStream;                                         // 0x01E3(0x0010) (ZeroConstructor)
	class FString                                      UserDescription;                                          // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct GameplayTags.GameplayTagContainer
// 0x0028
struct FGameplayTagContainer
{
	TArray<struct FName>                               Tags;                                                     // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FGameplayTag>                        GameplayTags;                                             // 0x01E3(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct GameplayTags.GameplayTagNode
// 0x0078
struct FGameplayTagNode
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x0047 (0x0048 - 0x0001)
struct FGameplayTagTableRow : public FTableRowBase
{
	struct FText                                       CategoryText;                                             // 0x0000(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0001(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	class FString                                      Tag;                                                      // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
