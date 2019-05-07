#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShip_StandardHull_Art_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MediumShip_StandardHull_Art.BP_MediumShip_StandardHull_Art_C
// 0x0018 (0x04C0 - 0x04A8)
class ABP_MediumShip_StandardHull_Art_C : public AActor
{
public:
	class USurfaceWaterComponent*                      SurfaceWater;                                             // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_rain_occlusion;                                 // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_galleon_main_deck_01_a;                               // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MediumShip_StandardHull_Art.BP_MediumShip_StandardHull_Art_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
