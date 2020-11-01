#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_CannonBall_ChainShot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C
// 0x0028 (0x06D8 - 0x06B0)
class ABP_Projectile_CannonBall_ChainShot_C : public ACannonProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMeshRotatorComponent*                       MeshRotator;                                              // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxCollisionExtentAdjustOverTimeComponent*  BoxCollisionExtentAdjustOverTime;                         // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        chainshot;                                                // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Collision;                                                // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Projectile_CannonBall_ChainShot.BP_Projectile_CannonBall_ChainShot_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Projectile_CannonBall_ChainShot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
