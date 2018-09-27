#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ArmoryChestInteraction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ArmoryChestInteraction.BP_ArmoryChestInteraction_C
// 0x0008 (0x0560 - 0x0558)
class ABP_ArmoryChestInteraction_C : public AArmoryChestInteraction
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ArmoryChestInteraction.BP_ArmoryChestInteraction_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
