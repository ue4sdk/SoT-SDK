#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PetMonkeyActionStateCreatorDefinition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PetMonkeyActionStateCreatorDefinition.BP_PetMonkeyActionStateCreatorDefinition_C
// 0x0008 (0x0548 - 0x0540)
class ABP_PetMonkeyActionStateCreatorDefinition_C : public APetActionStateCreatorDefinition
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PetMonkeyActionStateCreatorDefinition.BP_PetMonkeyActionStateCreatorDefinition_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
