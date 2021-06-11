#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FaunaActionStateCreatorDefinition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FaunaActionStateCreatorDefinition.BP_FaunaActionStateCreatorDefinition_C
// 0x0008 (0x0480 - 0x0478)
class ABP_FaunaActionStateCreatorDefinition_C : public ASharkActionStateCreatorDefinition
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FaunaActionStateCreatorDefinition.BP_FaunaActionStateCreatorDefinition_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
