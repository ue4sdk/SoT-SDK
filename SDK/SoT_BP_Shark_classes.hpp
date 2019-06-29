#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shark_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shark.BP_Shark_C
// 0x00A8 (0x0A18 - 0x0970)
class ABP_Shark_C : public ASharkPawn
{
public:
	class UAIItemSpawnComponent*                       AIItemSpawn;                                              // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAINameplateComponent*                       AINameplate;                                              // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      NewSharkStrategyHandle;                                   // 0x0988(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      Shark_Death_Handle;                                       // 0x09D0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Shark.BP_Shark_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
