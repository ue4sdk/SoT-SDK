#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SeasonProgressionFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SeasonProgressionFramework.SeasonProgressionExclusionInterface
// 0x0000 (0x0028 - 0x0028)
class USeasonProgressionExclusionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionFramework.SeasonProgressionExclusionInterface"));
		return ptr;
	}

};


// Class SeasonProgressionFramework.SeasonProgressionExclusionComponent
// 0x0010 (0x00D8 - 0x00C8)
class USeasonProgressionExclusionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	bool                                               ShouldBeExcludedFromSeasonProgessionValue;                // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SeasonProgressionFramework.SeasonProgressionExclusionComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
