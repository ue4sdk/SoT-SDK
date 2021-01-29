#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_OnlineAthenaPlayerController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OnlineAthenaPlayerController.BP_OnlineAthenaPlayerController_C
// 0x0008 (0x1538 - 0x1530)
class ABP_OnlineAthenaPlayerController_C : public AOnlineAthenaPlayerController
{
public:
	class UBP_Component_Tutorial2019_C*                VisitShopkeepersTutorialComponent;                        // 0x1530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_OnlineAthenaPlayerController.BP_OnlineAthenaPlayerController_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
