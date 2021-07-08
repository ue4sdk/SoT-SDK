#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum LostShipmentsClueFramework.EClueSiteLootType
enum class EClueSiteLootType : uint8_t
{
	EClueSiteLootType__Loot        = 0,
	EClueSiteLootType__Debris      = 1,
	EClueSiteLootType__None        = 2,
	EClueSiteLootType__EClueSiteLootType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
