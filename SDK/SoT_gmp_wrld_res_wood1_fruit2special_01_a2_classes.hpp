#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_gmp_wrld_res_wood1_fruit2special_01_a2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass gmp_wrld_res_wood1_fruit2special_01_a2.gmp_wrld_res_wood1_fruit2special_01_a2_C
// 0x0018 (0x0410 - 0x03F8)
class Agmp_wrld_res_wood1_fruit2special_01_a2_C : public ACluster
{
public:
	class UClusterStaticMeshComponent*                 ClusterStaticMeshPomegranate;                             // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClusterStaticMeshComponent*                 ClusterStaticMeshBanana1;                                 // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClusterStaticMeshComponent*                 ClusterStaticMeshWood;                                    // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass gmp_wrld_res_wood1_fruit2special_01_a2.gmp_wrld_res_wood1_fruit2special_01_a2_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
