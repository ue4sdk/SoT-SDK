#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CursedRogueDefinition_LordBalance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CursedRogueDefinition_LordBalance.CursedRogueDefinition_LordBalance_C
// 0x0118 (0x0140 - 0x0028)
class UCursedRogueDefinition_LordBalance_C : public UTaleQuestDefinition
{
public:
	struct FDS_CursedRogue_Definition                  Definition;                                               // 0x0028(0x0110) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        InitialBundle;                                            // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CursedRogueDefinition_LordBalance.CursedRogueDefinition_LordBalance_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
