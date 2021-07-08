#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_fod_MangoFresh_00_a_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_fod_MangoFresh_00_a_ItemInfo.BP_fod_MangoFresh_00_a_ItemInfo_C
// 0x0020 (0x0528 - 0x0508)
class ABP_fod_MangoFresh_00_a_ItemInfo_C : public AItemInfo
{
public:
	class UMaterialManipulationSettingsComponent*      MaterialManipulationSettings;                             // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    LightweightStatusEffectManager;                           // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCookableComponent*                          Cookable;                                                 // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_fod_MangoFresh_00_a_ItemInfo.BP_fod_MangoFresh_00_a_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
