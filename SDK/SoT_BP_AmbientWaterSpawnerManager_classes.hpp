#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AmbientWaterSpawnerManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AmbientWaterSpawnerManager.BP_AmbientWaterSpawnerManager_C
// 0x0000 (0x0620 - 0x0620)
class ABP_AmbientWaterSpawnerManager_C : public AAmbientWaterSpawnerManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AmbientWaterSpawnerManager.BP_AmbientWaterSpawnerManager_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
