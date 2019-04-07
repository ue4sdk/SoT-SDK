#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RevengeOfTheMorningstar_Definition_Dev_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RevengeOfTheMorningstar_Definition_Dev.RevengeOfTheMorningstar_Definition_Dev_C
// 0x0108 (0x0130 - 0x0028)
class URevengeOfTheMorningstar_Definition_Dev_C : public UObject
{
public:
	struct FDS_RevengeOfTheMorningstar_definition      Definition;                                               // 0x0028(0x00E8) (Edit, BlueprintVisible)
	class UQuestBookPageBundle*                        InitialBundle;                                            // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UQuestBookPageBundle*                        TracyNote;                                                // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UQuestBookPageBundle*                        RawboneNote;                                              // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UQuestBookPageBundle*                        ThickskullNote;                                           // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass RevengeOfTheMorningstar_Definition_Dev.RevengeOfTheMorningstar_Definition_Dev_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
