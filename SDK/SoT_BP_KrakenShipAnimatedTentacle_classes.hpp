#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_KrakenShipAnimatedTentacle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_KrakenShipAnimatedTentacle.BP_KrakenShipAnimatedTentacle_C
// 0x0000 (0x0A78 - 0x0A78)
class ABP_KrakenShipAnimatedTentacle_C : public ABP_KrakenAnimatedTentacle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_KrakenShipAnimatedTentacle.BP_KrakenShipAnimatedTentacle_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
