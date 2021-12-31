#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_beach_rocks_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_beach_rocks_02.wsp_beach_rocks_02_C
// 0x0068 (0x0478 - 0x0410)
class Awsp_beach_rocks_02_C : public ABP_Placement_HeightDrop_C
{
public:
	UStaticMeshComponent*                              wsp_rock_xtra_small__c10_1;                               // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              wsp_rock_xtra_small__e4_1;                                // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              wsp_rock_xtra_small__e3_1;                                // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              wsp_rock_xtra_small__c6_1;                                // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              wsp_rock_xtra_small__c5_1;                                // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              wsp_rock_xtra_small__c9_1;                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              wsp_rock_xtra_small__c8_1;                                // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              wsp_rock_xtra_small__c7_1;                                // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              wsp_rock_xtra_small__c4_1;                                // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              wsp_rock_xtra_small__e2_1;                                // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              wsp_rock_cliff_o8_1;                                      // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              wsp_rock_cliff_o9_1;                                      // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USceneComponent*                                   Scene;                                                    // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wsp_beach_rocks_02.wsp_beach_rocks_02_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
