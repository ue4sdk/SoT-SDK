#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Riddle_TheRiddleoftheAncientLoot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Riddle_TheRiddleoftheAncientLoot.Riddle_TheRiddleoftheAncientLoot_C
// 0x0000 (0x0138 - 0x0138)
class URiddle_TheRiddleoftheAncientLoot_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Riddle_TheRiddleoftheAncientLoot.Riddle_TheRiddleoftheAncientLoot_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
