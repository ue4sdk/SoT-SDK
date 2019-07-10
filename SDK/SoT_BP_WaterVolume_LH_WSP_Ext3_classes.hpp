#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaterVolume_LH_WSP_Ext3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WaterVolume_LH_WSP_Ext3.BP_WaterVolume_LH_WSP_Ext3_C
// 0x0000 (0x0564 - 0x0564)
class ABP_WaterVolume_LH_WSP_Ext3_C : public ABP_WaterVolume_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WaterVolume_LH_WSP_Ext3.BP_WaterVolume_LH_WSP_Ext3_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
