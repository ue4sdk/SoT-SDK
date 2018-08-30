#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwreckStorageBarrel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipwreckStorageBarrel.BP_ShipwreckStorageBarrel_C
// 0x0018 (0x05B8 - 0x05A0)
class ABP_ShipwreckStorageBarrel_C : public AStorageContainer
{
public:
	class UReplenishableComponent*                     Replenishable;                                            // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UIslandTelemetrySubjectComponent*            IslandTelemetrySubject;                                   // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipwreckStorageBarrel.BP_ShipwreckStorageBarrel_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
