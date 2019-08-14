#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_SnakeBasketProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_SnakeBasketProxy.BP_MerchantCrate_SnakeBasketProxy_C
// 0x0010 (0x0858 - 0x0848)
class ABP_MerchantCrate_SnakeBasketProxy_C : public AMerchantCrateItemProxy
{
public:
	class UMountpointComponent*                        Mountpoint;                                               // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_SnakeBasketProxy.BP_MerchantCrate_SnakeBasketProxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
