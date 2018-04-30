#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Bucket_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Bucket.BP_Anim_Bucket_C
// 0x00B0 (0x06E0 - 0x0630)
class UBP_Anim_Bucket_C : public UWieldableItemAnimationInstance
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0630(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Bucket.BP_Anim_Bucket_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_Bucket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
