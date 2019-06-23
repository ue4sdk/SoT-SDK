#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShoresOfGoldDefinition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShoresOfGoldDefinition.ShoresOfGoldDefinition_C
// 0x0208 (0x0230 - 0x0028)
class UShoresOfGoldDefinition_C : public UTaleQuestDefinition
{
public:
	struct FDS_ShoresOfGoldDefinition                  Definition;                                               // 0x0028(0x0200) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        InitialPages;                                             // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ShoresOfGoldDefinition.ShoresOfGoldDefinition_C"));
		return ptr;
	}


	void GetIslandForActor(TAssetPtr<class AActor> Actor, struct FName* Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
