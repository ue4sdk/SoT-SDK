#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_FateOfTheMorningstarDefinition_Dev_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FateOfTheMorningstarDefinition_Dev.FateOfTheMorningstarDefinition_Dev_C
// 0x0118 (0x0140 - 0x0028)
class UFateOfTheMorningstarDefinition_Dev_C : public UObject
{
public:
	struct FDS_FateOfTheMorningstar_Definition         Definition;                                               // 0x0028(0x0110) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UQuestBookPageBundle*                        InitialBundle;                                            // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FateOfTheMorningstarDefinition_Dev.FateOfTheMorningstarDefinition_Dev_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
