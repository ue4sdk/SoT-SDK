#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_PocketWatch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_PocketWatch.BP_Anim_PocketWatch_C
// 0x02B0 (0x08F0 - 0x0640)
class UBP_Anim_PocketWatch_C : public UPocketWatchAnimationInstance
{
public:
	unsigned char                                      UnknownData00[0x2B0];                                     // 0x0640(0x02B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_PocketWatch.BP_Anim_PocketWatch_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_PocketWatch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
