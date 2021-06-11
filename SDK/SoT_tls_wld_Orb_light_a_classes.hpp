#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_tls_wld_Orb_light_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass tls_wld_Orb_light_a.tls_wld_Orb_light_a_C
// 0x0008 (0x0448 - 0x0440)
class Atls_wld_Orb_light_a_C : public AStaticMeshActor
{
public:
	class UPointLightComponent*                        PointLight;                                               // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass tls_wld_Orb_light_a.tls_wld_Orb_light_a_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
