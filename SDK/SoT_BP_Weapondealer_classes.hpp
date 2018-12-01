#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Weapondealer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Weapondealer.BP_Weapondealer_C
// 0x0020 (0x0598 - 0x0578)
class ABP_Weapondealer_C : public AShopkeeper
{
public:
	class UCargoRunParticipantComponent*               CargoRunParticipant;                                      // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SolidHits;                                                // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Weapondealer.BP_Weapondealer_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
