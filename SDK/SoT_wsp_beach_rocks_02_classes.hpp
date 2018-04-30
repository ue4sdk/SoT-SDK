#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_beach_rocks_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_beach_rocks_02.wsp_beach_rocks_02_C
// 0x0068 (0x0518 - 0x04B0)
class Awsp_beach_rocks_02_C : public ABP_Placement_HeightDrop_C
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x04B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wsp_beach_rocks_02.wsp_beach_rocks_02_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
