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

// Enum ServiceHttp.EServiceHttpMetricsLevel
enum class EServiceHttpMetricsLevel : uint8_t
{
	EServiceHttpMetricsLevel__None = 0,
	EServiceHttpMetricsLevel__Failed = 1,
	EServiceHttpMetricsLevel__FailedOrAborted = 2,
	EServiceHttpMetricsLevel__FailedOrAbortedOrNonSuccess = 3,
	EServiceHttpMetricsLevel__All  = 4,
	EServiceHttpMetricsLevel__EServiceHttpMetricsLevel_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
