#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_fod_PomegranateFresh_00_a_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_fod_PomegranateFresh_00_a_ItemInfo.BP_fod_PomegranateFresh_00_a_ItemInfo_C
// 0x0020 (0x0570 - 0x0550)
class ABP_fod_PomegranateFresh_00_a_ItemInfo_C : public AItemInfo
{
public:
	class UMaterialManipulationSettingsComponent*      MaterialManipulationSettings;                             // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    LightweightStatusEffectManager;                           // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCookableComponent*                          Cookable;                                                 // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_fod_PomegranateFresh_00_a_ItemInfo.BP_fod_PomegranateFresh_00_a_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
