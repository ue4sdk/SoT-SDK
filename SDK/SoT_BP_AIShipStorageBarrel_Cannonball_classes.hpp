#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AIShipStorageBarrel_Cannonball_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AIShipStorageBarrel_Cannonball.BP_AIShipStorageBarrel_Cannonball_C
// 0x0018 (0x05C0 - 0x05A8)
class ABP_AIShipStorageBarrel_Cannonball_C : public AStorageContainer
{
public:
	class UReplenishableComponent*                     Replenishable;                                            // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipTelemetrySubjectComponent*              ShipTelemetrySubject;                                     // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AIShipStorageBarrel_Cannonball.BP_AIShipStorageBarrel_Cannonball_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
