#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CargoRunCrate_Cloth_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CargoRunCrate_Cloth_Proxy.BP_CargoRunCrate_Cloth_Proxy_C
// 0x0030 (0x0878 - 0x0848)
class ABP_CargoRunCrate_Cloth_Proxy_C : public ACargoRunCrateItemProxy
{
public:
	class UUnderwaterEffectsComponent*                 UnderwaterEffects;                                        // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWaterSensitiveComponent*                    WaterSensitive;                                           // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWaterExposureComponent*                     WaterExposure;                                            // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWaterHeightProviderComponent*               WaterHeightProvider;                                      // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShelteredComponent*                         Sheltered;                                                // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_CargoRunCrate_Cloth_Proxy.BP_CargoRunCrate_Cloth_Proxy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
