#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SeasonProgressionFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SeasonProgressionFramework.PlayerSeasonProgressionComponent
// 0x0088 (0x0150 - 0x00C8)
class UPlayerSeasonProgressionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00C8(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionFramework.PlayerSeasonProgressionComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
