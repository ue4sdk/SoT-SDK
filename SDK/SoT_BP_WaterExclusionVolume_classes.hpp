#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaterExclusionVolume_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WaterExclusionVolume.BP_WaterExclusionVolume_C
// 0x0008 (0x0488 - 0x0480)
class ABP_WaterExclusionVolume_C : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0480(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaterExclusionVolume.BP_WaterExclusionVolume_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
