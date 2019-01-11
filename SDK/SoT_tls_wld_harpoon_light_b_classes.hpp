#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_tls_wld_harpoon_light_b_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass tls_wld_harpoon_light_b.tls_wld_harpoon_light_b_C
// 0x0010 (0x04B0 - 0x04A0)
class Atls_wld_harpoon_light_b_C : public AStaticMeshActor
{
public:
	class USpotLightComponent*                         SpotLight;                                                // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass tls_wld_harpoon_light_b.tls_wld_harpoon_light_b_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
