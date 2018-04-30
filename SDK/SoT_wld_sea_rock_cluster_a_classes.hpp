#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_sea_rock_cluster_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wld_sea_rock_cluster_a.wld_sea_rock_cluster_a_C
// 0x0058 (0x04C8 - 0x0470)
class Awld_sea_rock_cluster_a_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0470(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wld_sea_rock_cluster_a.wld_sea_rock_cluster_a_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
