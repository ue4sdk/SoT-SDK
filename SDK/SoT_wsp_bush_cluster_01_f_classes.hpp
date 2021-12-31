#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_bush_cluster_01_f_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_bush_cluster_01_f.wsp_bush_cluster_01_f_C
// 0x0010 (0x0420 - 0x0410)
class Awsp_bush_cluster_01_f_C : public ABP_Placement_HeightDrop_C
{
public:
	UStaticMeshComponent*                              wsp_bush_cheese_01_a;                                     // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              wsp_bush_06_a7_1;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wsp_bush_cluster_01_f.wsp_bush_cluster_01_f_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
