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

// Enum NetworkRegions.ENetworkRegion
enum class ENetworkRegion : uint8_t
{
	ENetworkRegion__MainWorld      = 0,
	ENetworkRegion__DeepSea        = 1,
	ENetworkRegion__Max            = 2,
	ENetworkRegion__ENetworkRegion_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
