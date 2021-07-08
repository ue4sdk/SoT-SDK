#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_fod_MangoFresh_00_a_ItemProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_fod_MangoFresh_00_a_ItemProxy.BP_fod_MangoFresh_00_a_ItemProxy_C
// 0x0000 (0x07A0 - 0x07A0)
class ABP_fod_MangoFresh_00_a_ItemProxy_C : public ABP_ProxyIngestible_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_fod_MangoFresh_00_a_ItemProxy.BP_fod_MangoFresh_00_a_ItemProxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
