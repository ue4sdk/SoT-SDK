#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TheAshenDragon_RandalCaptainSkull_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TheAshenDragon_RandalCaptainSkull_Proxy.BP_TheAshenDragon_RandalCaptainSkull_Proxy_C
// 0x0000 (0x0880 - 0x0880)
class ABP_TheAshenDragon_RandalCaptainSkull_Proxy_C : public ABP_BountyRewardSkull_Proxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TheAshenDragon_RandalCaptainSkull_Proxy.BP_TheAshenDragon_RandalCaptainSkull_Proxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
