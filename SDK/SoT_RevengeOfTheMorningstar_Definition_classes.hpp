#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RevengeOfTheMorningstar_Definition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RevengeOfTheMorningstar_Definition.RevengeOfTheMorningstar_Definition_C
// 0x0180 (0x01A8 - 0x0028)
class URevengeOfTheMorningstar_Definition_C : public UTaleQuestDefinition
{
public:
	struct FDS_RevengeOfTheMorningstar_definition      Definition;                                               // 0x0028(0x0158) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        InitialBundle;                                            // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UQuestBookPageBundle*                        TracyNote;                                                // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UQuestBookPageBundle*                        RawboneNote;                                              // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UQuestBookPageBundle*                        ThickskullNote;                                           // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UQuestBookPageBundle*                        RuneKey;                                                  // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass RevengeOfTheMorningstar_Definition.RevengeOfTheMorningstar_Definition_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
