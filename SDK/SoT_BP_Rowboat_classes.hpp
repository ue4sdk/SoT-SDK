#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Rowboat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rowboat.BP_Rowboat_C
// 0x0028 (0x0A58 - 0x0A30)
class ABP_Rowboat_C : public ARowboat
{
public:
	class UWaterInteractionComponent*                  WaterInteraction;                                         // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImpulseThrottlerComponent*                  ImpulseThrottler;                                         // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BackSeat;                                                 // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MiddleRightSeat;                                          // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MiddleLeftSeat;                                           // 0x0A50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Rowboat.BP_Rowboat_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
