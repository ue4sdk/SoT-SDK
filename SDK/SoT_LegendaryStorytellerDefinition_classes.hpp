#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LegendaryStorytellerDefinition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LegendaryStorytellerDefinition.LegendaryStorytellerDefinition_C
// 0x00A0 (0x00C8 - 0x0028)
class ULegendaryStorytellerDefinition_C : public UTaleQuestDefinition
{
public:
	struct FDS_LegendaryStorytellerDefinition          Definition;                                               // 0x0028(0x0098) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        InitialBundle_LS;                                         // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass LegendaryStorytellerDefinition.LegendaryStorytellerDefinition_C"));
		return ptr;
	}


	void GetIslandForActor(TAssetPtr<class AActor> Actor, struct FName* Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
