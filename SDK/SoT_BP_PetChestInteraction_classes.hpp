#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PetChestInteraction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PetChestInteraction.BP_PetChestInteraction_C
// 0x0008 (0x06D0 - 0x06C8)
class ABP_PetChestInteraction_C : public APetChestInteraction
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PetChestInteraction.BP_PetChestInteraction_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
