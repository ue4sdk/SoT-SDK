#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Bait_Proxy_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bait_Proxy_Base.BP_Bait_Proxy_Base_C
// 0x0008 (0x0838 - 0x0830)
class ABP_Bait_Proxy_Base_C : public ABP_ProxyIngestible_C
{
public:
	class UTetherCustomisationComponent*               TetherCustomisation;                                      // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Bait_Proxy_Base.BP_Bait_Proxy_Base_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
