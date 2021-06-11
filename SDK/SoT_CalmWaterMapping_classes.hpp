#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CalmWaterMapping_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CalmWaterMapping.CalmWaterMappingInterface
// 0x0000 (0x0028 - 0x0028)
class UCalmWaterMappingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CalmWaterMapping.CalmWaterMappingInterface"));
		return ptr;
	}


	float GetDampeningFactor(const struct FVector2D& InPosition);
	float GetChoppinessFactor(const struct FVector2D& InPosition);
};


// Class CalmWaterMapping.AthenaCalmWaterZone
// 0x0020 (0x0458 - 0x0438)
class AAthenaCalmWaterZone : public ACalmWaterZone
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0438(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CalmWaterMapping.AthenaCalmWaterZone"));
		return ptr;
	}

};


// Class CalmWaterMapping.CalmWaterMappingService
// 0x0028 (0x0050 - 0x0028)
class UCalmWaterMappingService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CalmWaterMapping.CalmWaterMappingService"));
		return ptr;
	}


	static float GetMaxWindSpeed();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
