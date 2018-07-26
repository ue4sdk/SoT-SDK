#pragma once

// Sea of Thieves (1.1.6) SDK

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
// 0x0008 (0x0498 - 0x0490)
class ABP_WaterExclusionVolume_C : public AStaticMeshActor
{
public:
	class UWaterPlaneExclusionComponent*               WaterPlaneExclusion;                                      // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
