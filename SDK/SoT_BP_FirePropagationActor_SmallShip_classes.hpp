#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FirePropagationActor_SmallShip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FirePropagationActor_SmallShip.BP_FirePropagationActor_SmallShip_C
// 0x0010 (0x0440 - 0x0430)
class ABP_FirePropagationActor_SmallShip_C : public AActor
{
public:
	class UShipFirePropagationComponent*               ShipFirePropagation;                                      // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FirePropagationActor_SmallShip.BP_FirePropagationActor_SmallShip_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
