#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwreckService_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipwreckService.BP_ShipwreckService_C
// 0x0008 (0x0558 - 0x0550)
class ABP_ShipwreckService_C : public AShipwreckService
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ShipwreckService.BP_ShipwreckService_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
