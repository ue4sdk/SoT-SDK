#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_shop_mrh_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_shop_mrh_01_a.BP_shop_mrh_01_a_C
// 0x00B8 (0x0548 - 0x0490)
class ABP_shop_mrh_01_a_C : public AActor
{
public:
	class USpotLightComponent*                         SpotLight4;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight3;                                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCompanyRegionComponent*                     CompanyRegion;                                            // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight2;                                               // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight1;                                               // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight2;                                              // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ChildActor;                                               // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight1;                                              // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        bp_light_volume_sphere_orange_a;                          // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        tls_wld_Orb_light_a;                                      // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        wsp_light_plate_a;                                        // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_candle_01_tavern;                                     // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_shop_globe_mrh_01_a;                                  // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_par_lantern_01_a;                                     // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_shop_blackboard_mch_01_a;                             // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_shop_map_board_mch_01_a;                              // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_mer_shop_01_a;                                        // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_shop_wood_box_03_a;                                   // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_shop_wood_box_01_a;                                   // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_shop_mrh_01_a.BP_shop_mrh_01_a_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
