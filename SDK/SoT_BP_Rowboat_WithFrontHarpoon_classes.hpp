#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Rowboat_WithFrontHarpoon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rowboat_WithFrontHarpoon.BP_Rowboat_WithFrontHarpoon_C
// 0x0008 (0x0A90 - 0x0A88)
class ABP_Rowboat_WithFrontHarpoon_C : public ABP_Rowboat_C
{
public:
	class UChildActorComponent*                        Harpoon;                                                  // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Rowboat_WithFrontHarpoon.BP_Rowboat_WithFrontHarpoon_C"));
		return ptr;
	}


	unsigned char GetPxActorCapacityForPhysXAggregate();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
