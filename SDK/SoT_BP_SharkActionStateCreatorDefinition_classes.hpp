#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SharkActionStateCreatorDefinition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SharkActionStateCreatorDefinition.BP_SharkActionStateCreatorDefinition_C
// 0x0008 (0x04F8 - 0x04F0)
class ABP_SharkActionStateCreatorDefinition_C : public ASharkActionStateCreatorDefinition
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SharkActionStateCreatorDefinition.BP_SharkActionStateCreatorDefinition_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
