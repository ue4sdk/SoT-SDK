#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_FateOfTheMorningstarDefinition_Additional_Puzzles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FateOfTheMorningstarDefinition_Additional_Puzzles.FateOfTheMorningstarDefinition_Additional_Puzzles_C
// 0x0118 (0x0140 - 0x0028)
class UFateOfTheMorningstarDefinition_Additional_Puzzles_C : public UTaleQuestDefinition
{
public:
	class UQuestBookPageBundle*                        InitialBundle;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDS_FateOfTheMorningstar_Definition         Definition;                                               // 0x0030(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FateOfTheMorningstarDefinition_Additional_Puzzles.FateOfTheMorningstarDefinition_Additional_Puzzles_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
