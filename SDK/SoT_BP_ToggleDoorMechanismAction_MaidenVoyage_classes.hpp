#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ToggleDoorMechanismAction_MaidenVoyage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ToggleDoorMechanismAction_MaidenVoyage.BP_ToggleDoorMechanismAction_MaidenVoyage_C
// 0x0018 (0x0700 - 0x06E8)
class ABP_ToggleDoorMechanismAction_MaidenVoyage_C : public AToggleAnimatedMechanismAction
{
public:
	class UBoxComponent*                               Box1;                                                     // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DoorMesh;                                                 // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ToggleDoorMechanismAction_MaidenVoyage.BP_ToggleDoorMechanismAction_MaidenVoyage_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
