#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_fod_SplashTail_03_UmberCooked_00_a_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_fod_SplashTail_03_UmberCooked_00_a_ItemInfo.BP_fod_SplashTail_03_UmberCooked_00_a_ItemInfo_C
// 0x0020 (0x0600 - 0x05E0)
class ABP_fod_SplashTail_03_UmberCooked_00_a_ItemInfo_C : public ARewardableItemInfo
{
public:
	class UMaterialManipulationSettingsComponent*      MaterialManipulationSettings;                             // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULightWeightStatusEffectManagerComponent*    LightweightStatusEffectManager;                           // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCookableComponent*                          Cookable;                                                 // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_fod_SplashTail_03_UmberCooked_00_a_ItemInfo.BP_fod_SplashTail_03_UmberCooked_00_a_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
