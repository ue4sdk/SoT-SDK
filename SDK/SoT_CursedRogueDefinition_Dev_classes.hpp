#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CursedRogueDefinition_Dev_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CursedRogueDefinition_Dev.CursedRogueDefinition_Dev_C
// 0x00F8 (0x0120 - 0x0028)
class UCursedRogueDefinition_Dev_C : public UObject
{
public:
	struct FDS_CursedRogue_Definition                  Definition;                                               // 0x0028(0x00F0) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        InitialBundle;                                            // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CursedRogueDefinition_Dev.CursedRogueDefinition_Dev_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
