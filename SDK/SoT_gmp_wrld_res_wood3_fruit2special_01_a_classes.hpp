#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_gmp_wrld_res_wood3_fruit2special_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass gmp_wrld_res_wood3_fruit2special_01_a.gmp_wrld_res_wood3_fruit2special_01_a_C
// 0x0030 (0x0468 - 0x0438)
class Agmp_wrld_res_wood3_fruit2special_01_a_C : public ACluster
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClusterStaticMeshComponent*                 Mango1;                                                   // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClusterStaticMeshComponent*                 ClusterStaticMeshWood3;                                   // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClusterStaticMeshComponent*                 ClusterStaticMeshWood2;                                   // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClusterStaticMeshComponent*                 Mango2;                                                   // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClusterStaticMeshComponent*                 ClusterStaticMeshWood1;                                   // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass gmp_wrld_res_wood3_fruit2special_01_a.gmp_wrld_res_wood3_fruit2special_01_a_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
