#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_sea_rock_cluster_f_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_sea_rock_cluster_f.wsp_sea_rock_cluster_f_C
// 0x0038 (0x04A8 - 0x0470)
class Awsp_sea_rock_cluster_f_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0470(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wsp_sea_rock_cluster_f.wsp_sea_rock_cluster_f_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
