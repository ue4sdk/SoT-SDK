#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RiddleChapters_TheRiddleOfTheHiddenChests_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RiddleChapters_TheRiddleOfTheHiddenChests.RiddleChapters_TheRiddleOfTheHiddenChests_C
// 0x0000 (0x0138 - 0x0138)
class URiddleChapters_TheRiddleOfTheHiddenChests_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass RiddleChapters_TheRiddleOfTheHiddenChests.RiddleChapters_TheRiddleOfTheHiddenChests_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
