#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureArtifact_ItemInfo_impressive_03_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureArtifact_ItemInfo_impressive_03_a.BP_TreasureArtifact_ItemInfo_impressive_03_a_C
// 0x0008 (0x0720 - 0x0718)
class ABP_TreasureArtifact_ItemInfo_impressive_03_a_C : public ATreasureChestItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureArtifact_ItemInfo_impressive_03_a.BP_TreasureArtifact_ItemInfo_impressive_03_a_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
