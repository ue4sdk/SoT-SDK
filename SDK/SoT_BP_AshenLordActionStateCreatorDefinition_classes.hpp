#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AshenLordActionStateCreatorDefinition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AshenLordActionStateCreatorDefinition.BP_AshenLordActionStateCreatorDefinition_C
// 0x0008 (0x04D0 - 0x04C8)
class ABP_AshenLordActionStateCreatorDefinition_C : public ASkeletonActionStateCreatorDefinition
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AshenLordActionStateCreatorDefinition.BP_AshenLordActionStateCreatorDefinition_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
