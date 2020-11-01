#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AshenTomeVol1_03_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AshenTomeVol1_03_Proxy.BP_AshenTomeVol1_03_Proxy_C
// 0x0000 (0x0858 - 0x0858)
class ABP_AshenTomeVol1_03_Proxy_C : public ABP_BountyRewardSkull_Proxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AshenTomeVol1_03_Proxy.BP_AshenTomeVol1_03_Proxy_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
