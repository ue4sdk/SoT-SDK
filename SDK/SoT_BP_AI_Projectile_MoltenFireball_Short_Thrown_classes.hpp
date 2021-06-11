#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AI_Projectile_MoltenFireball_Short_Thrown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AI_Projectile_MoltenFireball_Short_Thrown.BP_AI_Projectile_MoltenFireball_Short_Thrown_C
// 0x0000 (0x06D0 - 0x06D0)
class ABP_AI_Projectile_MoltenFireball_Short_Thrown_C : public ABP_Projectile_CannonBall_Cursed_ComplexWaterHits_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AI_Projectile_MoltenFireball_Short_Thrown.BP_AI_Projectile_MoltenFireball_Short_Thrown_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
