#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_sea_rock_cluster_d_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wld_sea_rock_cluster_d.wld_sea_rock_cluster_d_C
// 0x0068 (0x04D8 - 0x0470)
class Awld_sea_rock_cluster_d_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0470(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wld_sea_rock_cluster_d.wld_sea_rock_cluster_d_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
