#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TheArtOfTheTricksterDefinition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TheArtOfTheTricksterDefinition.TheArtOfTheTricksterDefinition_C
// 0x01C8 (0x01F0 - 0x0028)
class UTheArtOfTheTricksterDefinition_C : public UTaleQuestDefinition
{
public:
	struct FDS_TheArtOfTheTrickster_Definition         Definition;                                               // 0x0028(0x01B8) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        InitialBundle;                                            // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  TrapmakersLabSpawner;                                     // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TheArtOfTheTricksterDefinition.TheArtOfTheTricksterDefinition_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
