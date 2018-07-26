#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_tls_wld_torch_skull_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass tls_wld_torch_skull_a.tls_wld_torch_skull_a_C
// 0x0010 (0x04A0 - 0x0490)
class Atls_wld_torch_skull_a_C : public AStaticMeshActor
{
public:
	class UPointLightComponent*                        PointLight;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Fire;                                                     // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass tls_wld_torch_skull_a.tls_wld_torch_skull_a_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
