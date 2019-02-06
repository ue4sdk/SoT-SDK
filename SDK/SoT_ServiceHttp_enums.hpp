#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ServiceHttp.EServiceHttpMetricsLevel
enum class EServiceHttpMetricsLevel : uint8_t
{
	EServiceHttpMetricsLevel__None = 0,
	EServiceHttpMetricsLevel__Failed = 1,
	EServiceHttpMetricsLevel__All  = 2,
	EServiceHttpMetricsLevel__EServiceHttpMetricsLevel_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
