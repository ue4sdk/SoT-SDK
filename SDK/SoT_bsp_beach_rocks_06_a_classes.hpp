#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_beach_rocks_06_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bsp_beach_rocks_06_a.bsp_beach_rocks_06_a_C
// 0x0050 (0x0520 - 0x04D0)
class Absp_beach_rocks_06_a_C : public ABP_Placement_HeightDrop_C
{
public:
	class UStaticMeshComponent*                        wsp_rock_pebbles_a_02;                                    // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_rock_pebbles_c_02;                                    // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_rock_xtra_small_e_01;                                 // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_rock_pebbles_f_02;                                    // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_rock_xtra_small_a_01;                                 // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_rock_pebbles_e_02;                                    // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_rock_pebbles_b_02;                                    // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_rock_pebbles_e_01;                                    // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_rock_xtra_small_d_01;                                 // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        wsp_rock_pebbles_d_02;                                    // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass bsp_beach_rocks_06_a.bsp_beach_rocks_06_a_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
