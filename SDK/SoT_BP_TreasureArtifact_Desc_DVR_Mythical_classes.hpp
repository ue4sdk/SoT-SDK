#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureArtifact_Desc_DVR_Mythical_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureArtifact_Desc_DVR_Mythical.BP_TreasureArtifact_Desc_DVR_Mythical_C
// 0x0000 (0x0130 - 0x0130)
class UBP_TreasureArtifact_Desc_DVR_Mythical_C : public UBootyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureArtifact_Desc_DVR_Mythical.BP_TreasureArtifact_Desc_DVR_Mythical_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
