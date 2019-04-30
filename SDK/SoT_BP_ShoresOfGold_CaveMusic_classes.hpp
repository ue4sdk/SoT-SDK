#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShoresOfGold_CaveMusic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShoresOfGold_CaveMusic.BP_ShoresOfGold_CaveMusic_C
// 0x0010 (0x04B8 - 0x04A8)
class ABP_ShoresOfGold_CaveMusic_C : public AActor
{
public:
	class UBP_Shroudbreaker_CaveMusicZoneComponent_C*  BP_Shroudbreaker_CaveMusicZoneComponent;                  // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShoresOfGold_CaveMusic.BP_ShoresOfGold_CaveMusic_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
