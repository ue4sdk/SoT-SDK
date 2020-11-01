#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaterVolume_RPR_Ext_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WaterVolume_RPR_Ext.BP_WaterVolume_RPR_Ext_C
// 0x0000 (0x0514 - 0x0514)
class ABP_WaterVolume_RPR_Ext_C : public ABP_WaterVolume_Optimized_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WaterVolume_RPR_Ext.BP_WaterVolume_RPR_Ext_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
