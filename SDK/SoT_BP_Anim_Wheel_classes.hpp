#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Wheel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Wheel.BP_Anim_Wheel_C
// 0x0810 (0x0C60 - 0x0450)
class UBP_Anim_Wheel_C : public UWheelAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x810];                                     // 0x0450(0x0810) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Wheel.BP_Anim_Wheel_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_Wheel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
