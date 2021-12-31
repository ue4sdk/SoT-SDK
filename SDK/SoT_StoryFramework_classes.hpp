#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StoryFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class StoryFramework.StoryServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UStoryServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StoryServiceInterface"));
		return ptr;
	}

};


// Class StoryFramework.StoryService
// 0x0090 (0x0460 - 0x03D0)
class AStoryService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03D0(0x0020) MISSED OFFSET
	TArray<FStoryInfo>                                 Stories;                                                  // 0x03F0(0x0010) (ZeroConstructor)
	TArray<FStoryInfo>                                 ActiveStories;                                            // 0x0400(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0410(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class StoryFramework.StoryService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
