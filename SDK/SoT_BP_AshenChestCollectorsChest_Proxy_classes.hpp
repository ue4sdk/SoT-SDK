#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AshenChestCollectorsChest_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AshenChestCollectorsChest_Proxy.BP_AshenChestCollectorsChest_Proxy_C
// 0x0000 (0x0921 - 0x0921)
class ABP_AshenChestCollectorsChest_Proxy_C : public ABP_BaseLockableCollectorsChest_Proxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AshenChestCollectorsChest_Proxy.BP_AshenChestCollectorsChest_Proxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
