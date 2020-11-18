#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_IslandCannon_FateOfTheMorningStar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IslandCannon_FateOfTheMorningStar.BP_IslandCannon_FateOfTheMorningStar_C
// 0x0008 (0x0B90 - 0x0B88)
class ABP_IslandCannon_FateOfTheMorningStar_C : public ABP_Cannon_C
{
public:
	class UAthenaAIInteractableComponent*              AthenaAIInteractable;                                     // 0x0B88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_IslandCannon_FateOfTheMorningStar.BP_IslandCannon_FateOfTheMorningStar_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
