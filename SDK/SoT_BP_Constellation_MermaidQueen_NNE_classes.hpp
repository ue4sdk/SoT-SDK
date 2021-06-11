#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Constellation_MermaidQueen_NNE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Constellation_MermaidQueen_NNE.BP_Constellation_MermaidQueen_NNE_C
// 0x0000 (0x04D0 - 0x04D0)
class ABP_Constellation_MermaidQueen_NNE_C : public ABP_Constellation_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Constellation_MermaidQueen_NNE.BP_Constellation_MermaidQueen_NNE_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
