#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_wsp_sea_rocks_e3_d_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cmn_wsp_sea_rocks_e3_d.cmn_wsp_sea_rocks_e3_d_C
// 0x0080 (0x04F0 - 0x0470)
class Acmn_wsp_sea_rocks_e3_d_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0470(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cmn_wsp_sea_rocks_e3_d.cmn_wsp_sea_rocks_e3_d_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
