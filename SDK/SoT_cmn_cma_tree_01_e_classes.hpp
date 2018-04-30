#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_cma_tree_01_e_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cmn_cma_tree_01_e.cmn_cma_tree_01_e_C
// 0x0018 (0x04A0 - 0x0488)
class Acmn_cma_tree_01_e_C : public ACoveredMeshActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0488(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cmn_cma_tree_01_e.cmn_cma_tree_01_e_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
