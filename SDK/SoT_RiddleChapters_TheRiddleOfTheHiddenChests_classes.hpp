#pragma once

// Sea of Thieves (1.1.6) SDK

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
// 0x0000 (0x0120 - 0x0120)
class URiddleChapters_TheRiddleOfTheHiddenChests_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RiddleChapters_TheRiddleOfTheHiddenChests.RiddleChapters_TheRiddleOfTheHiddenChests_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
