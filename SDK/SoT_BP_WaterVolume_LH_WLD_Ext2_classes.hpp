#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaterVolume_LH_WLD_Ext2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WaterVolume_LH_WLD_Ext2.BP_WaterVolume_LH_WLD_Ext2_C
// 0x0000 (0x04E4 - 0x04E4)
class ABP_WaterVolume_LH_WLD_Ext2_C : public ABP_WaterVolume_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WaterVolume_LH_WLD_Ext2.BP_WaterVolume_LH_WLD_Ext2_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
