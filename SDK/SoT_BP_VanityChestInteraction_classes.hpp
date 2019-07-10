#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VanityChestInteraction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VanityChestInteraction.BP_VanityChestInteraction_C
// 0x0008 (0x0768 - 0x0760)
class ABP_VanityChestInteraction_C : public AClothingChestInteraction
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VanityChestInteraction.BP_VanityChestInteraction_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
