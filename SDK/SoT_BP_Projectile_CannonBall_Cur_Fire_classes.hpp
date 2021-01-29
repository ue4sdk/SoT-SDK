#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_CannonBall_Cur_Fire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_CannonBall_Cur_Fire.BP_Projectile_CannonBall_Cur_Fire_C
// 0x0008 (0x0698 - 0x0690)
class ABP_Projectile_CannonBall_Cur_Fire_C : public ABP_Projectile_CannonBall_Cursed_C
{
public:
	class UMeshRotatorComponent*                       MeshRotator;                                              // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Projectile_CannonBall_Cur_Fire.BP_Projectile_CannonBall_Cur_Fire_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
