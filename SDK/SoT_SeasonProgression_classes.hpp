#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SeasonProgression_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SeasonProgression.IsExcludedFromSeasonProgressionStatCondition
// 0x0000 (0x0030 - 0x0030)
class UIsExcludedFromSeasonProgressionStatCondition : public UTargetedStatCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgression.IsExcludedFromSeasonProgressionStatCondition"));
		return ptr;
	}

};


// Class SeasonProgression.PlayerSeasonProgressionComponent
// 0x00C0 (0x0188 - 0x00C8)
class UPlayerSeasonProgressionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x00C8(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgression.PlayerSeasonProgressionComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
