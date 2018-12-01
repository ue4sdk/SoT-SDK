#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_PigCrate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_PigCrate.BP_MerchantCrate_PigCrate_C
// 0x0030 (0x0848 - 0x0818)
class ABP_MerchantCrate_PigCrate_C : public AStaticMerchantCrate
{
public:
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupableComponent*                        Pickupable;                                               // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNamedNotificationInputComponent*            NamedNotificationInput;                                   // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFeedingComponent*                           Feeding;                                                  // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMountpointComponent*                        Mountpoint;                                               // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MerchantCrate_PigCrate.BP_MerchantCrate_PigCrate_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
