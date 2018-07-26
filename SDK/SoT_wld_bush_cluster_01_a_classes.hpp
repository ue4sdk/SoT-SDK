#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_bush_cluster_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wld_bush_cluster_01_a.wld_bush_cluster_01_a_C
// 0x0020 (0x04E0 - 0x04C0)
class Awld_bush_cluster_01_a_C : public ABP_Placement_HeightDrop_C
{
public:
	class UStaticMeshComponent*                        wld_bush_03_a;                                            // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wld_bush_banana_01_a;                                     // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wld_bush_banana_01_b;                                     // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wld_bush_cluster_01_a.wld_bush_cluster_01_a_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
