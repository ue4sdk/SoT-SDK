#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_CannonBall_Cur_Anchor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_CannonBall_Cur_Anchor.BP_Projectile_CannonBall_Cur_Anchor_C
// 0x0000 (0x05E0 - 0x05E0)
class ABP_Projectile_CannonBall_Cur_Anchor_C : public ABP_Projectile_CannonBall_Cursed_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Projectile_CannonBall_Cur_Anchor.BP_Projectile_CannonBall_Cur_Anchor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
