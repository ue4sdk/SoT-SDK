#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmn_cannon_ball_01_a_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_cmn_cannon_ball_01_a_Wieldable.BP_cmn_cannon_ball_01_a_Wieldable_C
// 0x0000 (0x07F8 - 0x07F8)
class ABP_cmn_cannon_ball_01_a_Wieldable_C : public ABP_CannonBall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_cmn_cannon_ball_01_a_Wieldable.BP_cmn_cannon_ball_01_a_Wieldable_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
