#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_sea_rock_cluster_b_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wld_sea_rock_cluster_b.wld_sea_rock_cluster_b_C
// 0x0060 (0x04D0 - 0x0470)
class Awld_sea_rock_cluster_b_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0470(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wld_sea_rock_cluster_b.wld_sea_rock_cluster_b_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
