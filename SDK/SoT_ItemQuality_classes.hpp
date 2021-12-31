#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ItemQuality_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ItemQuality.ItemQualityInterface
// 0x0000 (0x0028 - 0x0028)
class UItemQualityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ItemQuality.ItemQualityInterface"));
		return ptr;
	}

};


// Class ItemQuality.ItemQualityComponent
// 0x0040 (0x0108 - 0x00C8)
class UItemQualityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TEnumAsByte<EEmissaryQualityLevel>                 ItemQualityLevel;                                         // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	TArray<FPerComanyItemQualityEntry>                 CompanySpecificItemQualityLevels;                         // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<FPerComanyComplexItemQualityEntry>          CompanySpecificComplexItemQualityLevels;                  // 0x00E8(0x0010) (Edit, ZeroConstructor)
	TArray<FPerComanyComplexItemQualityEntry>          CompanySpecificComplexItemQualityLevelsHandin;            // 0x00F8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ItemQuality.ItemQualityComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
