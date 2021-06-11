#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ExplosionFramework.EExplosionReceiverCurveType
enum class EExplosionReceiverCurveType : uint8_t
{
	EExplosionReceiverCurveType__None = 0,
	EExplosionReceiverCurveType__Other = 1,
	EExplosionReceiverCurveType__Player = 2,
	EExplosionReceiverCurveType__EExplosionReceiverCurveType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
