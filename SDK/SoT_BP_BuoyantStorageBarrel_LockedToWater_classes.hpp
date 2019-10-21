#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BuoyantStorageBarrel_LockedToWater_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C
// 0x0020 (0x07D0 - 0x07B0)
class ABP_BuoyantStorageBarrel_LockedToWater_C : public ABuoyantStorageContainer
{
public:
	class USphereComponent*                            Sphere;                                                   // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReplenishableComponent*                     Replenishable;                                            // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTelemetrySubjectComponent*                  TelemetrySubject;                                         // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BuoyantStorageBarrel_LockedToWater.BP_BuoyantStorageBarrel_LockedToWater_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
