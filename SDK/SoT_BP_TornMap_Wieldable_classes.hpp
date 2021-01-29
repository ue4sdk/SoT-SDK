#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TornMap_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TornMap_Wieldable.BP_TornMap_Wieldable_C
// 0x0010 (0x0940 - 0x0930)
class ABP_TornMap_Wieldable_C : public ATornMap
{
public:
	class UUserSettingsMapMarkProviderComponent*       UserSettingsMapMarkProvider;                              // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UIslandServiceIslandTextureProviderComponent* IslandServiceIslandTextureProvider;                       // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TornMap_Wieldable.BP_TornMap_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
