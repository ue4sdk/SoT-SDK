#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_bottle_light_stand_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bsp_bottle_light_stand_a.bsp_bottle_light_stand_a_C
// 0x0040 (0x04E0 - 0x04A0)
class Absp_bottle_light_stand_a_C : public AStaticMeshActor
{
public:
	class UPointLightComponent*                        PointLight3;                                              // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight2;                                              // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight1;                                              // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ptn_cure_01_c;                                            // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ptn_pois_01_b;                                            // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        cmn_bottle_01_a;                                          // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass bsp_bottle_light_stand_a.bsp_bottle_light_stand_a_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
