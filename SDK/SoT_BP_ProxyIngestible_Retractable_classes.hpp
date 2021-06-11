#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ProxyIngestible_Retractable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProxyIngestible_Retractable.BP_ProxyIngestible_Retractable_C
// 0x0008 (0x0808 - 0x0800)
class ABP_ProxyIngestible_Retractable_C : public ABP_ProxyIngestible_C
{
public:
	class URetractableItemProxyComponent*              RetractableItemProxy;                                     // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProxyIngestible_Retractable.BP_ProxyIngestible_Retractable_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
