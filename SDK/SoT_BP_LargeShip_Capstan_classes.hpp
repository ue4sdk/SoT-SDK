#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShip_Capstan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeShip_Capstan.BP_LargeShip_Capstan_C
// 0x0020 (0x07F8 - 0x07D8)
class ABP_LargeShip_Capstan_C : public ABP_Base_Capstan_C
{
public:
	UChildActorComponent*                              Arm1;                                                     // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              Arm4;                                                     // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              Arm3;                                                     // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              Arm2;                                                     // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LargeShip_Capstan.BP_LargeShip_Capstan_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
