#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_looted__box_bottles_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cmn_looted__box_bottles_02.cmn_looted__box_bottles_02_C
// 0x0050 (0x0500 - 0x04B0)
class Acmn_looted__box_bottles_02_C : public ABP_Placement_HeightDrop_C
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x04B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cmn_looted__box_bottles_02.cmn_looted__box_bottles_02_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
