#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_BoomBones_SkeletonExploder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_BoomBones_SkeletonExploder.Title_BoomBones_SkeletonExploder_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_BoomBones_SkeletonExploder_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Title_BoomBones_SkeletonExploder.Title_BoomBones_SkeletonExploder_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
