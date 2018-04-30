#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_riddle_trigger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_riddle_trigger.BP_riddle_trigger_C
// 0x001C (0x048C - 0x0470)
class ABP_riddle_trigger_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0470(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_riddle_trigger.BP_riddle_trigger_C");
		return ptr;
	}


	void Destroy();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
