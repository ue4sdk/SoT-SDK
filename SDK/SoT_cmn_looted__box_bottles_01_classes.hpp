#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_looted__box_bottles_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cmn_looted__box_bottles_01.cmn_looted__box_bottles_01_C
// 0x0090 (0x0540 - 0x04B0)
class Acmn_looted__box_bottles_01_C : public ABP_Placement_HeightDrop_C
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x04B0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cmn_looted__box_bottles_01.cmn_looted__box_bottles_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
