#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TheArtOfTheTricksterDefinition_Dev_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TheArtOfTheTricksterDefinition_Dev.TheArtOfTheTricksterDefinition_Dev_C
// 0x0150 (0x0178 - 0x0028)
class UTheArtOfTheTricksterDefinition_Dev_C : public UObject
{
public:
	struct FDS_TheArtOfTheTrickster_Definition         Definition;                                               // 0x0028(0x0138) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        InitialBundle;                                            // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  TrapmakersLabSpawner;                                     // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawner*                                  VaultSpawner;                                             // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TheArtOfTheTricksterDefinition_Dev.TheArtOfTheTricksterDefinition_Dev_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
