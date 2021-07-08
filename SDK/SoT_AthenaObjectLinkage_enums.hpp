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

// Enum AthenaObjectLinkage.EAddLinkResult
enum class EAddLinkResult : uint8_t
{
	EAddLinkResult__Success_Set    = 0,
	EAddLinkResult__Success_Pending = 1,
	EAddLinkResult__Failed_SourceEndpointIdInvalid = 2,
	EAddLinkResult__Failed_TargetEndpointIdInvalid = 3,
	EAddLinkResult__Failed_CoincidentEndpointIds = 4,
	EAddLinkResult__Failed_Duplicate = 5,
	EAddLinkResult__EAddLinkResult_MAX = 6
};


// Enum AthenaObjectLinkage.EAddEndpointResult
enum class EAddEndpointResult : uint8_t
{
	EAddEndpointResult__Success    = 0,
	EAddEndpointResult__Failed_InvalidInstance = 1,
	EAddEndpointResult__Failed_InvalidId = 2,
	EAddEndpointResult__Failed_DuplicateId = 3,
	EAddEndpointResult__Failed_DoesntImplementEndpointInterface = 4,
	EAddEndpointResult__EAddEndpointResult_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
