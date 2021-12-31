#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AthenaGameState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AthenaGameState.BP_AthenaGameState_C
// 0x0010 (0x0AD8 - 0x0AC8)
class ABP_AthenaGameState_C : public AAthenaGameState
{
public:
	UWorldMarkerRoutingComponent*                      WorldMarkerRouting;                                       // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USceneComponent*                                   DefaultSceneRoot;                                         // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AthenaGameState.BP_AthenaGameState_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
