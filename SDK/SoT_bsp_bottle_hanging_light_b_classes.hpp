#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_bottle_hanging_light_b_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bsp_bottle_hanging_light_b.bsp_bottle_hanging_light_b_C
// 0x0020 (0x04C0 - 0x04A0)
class Absp_bottle_hanging_light_b_C : public AStaticMeshActor
{
public:
	class UPointLightComponent*                        PointLight1;                                              // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass bsp_bottle_hanging_light_b.bsp_bottle_hanging_light_b_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
