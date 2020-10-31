#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_Trail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Trail.BP_Projectile_Trail_C
// 0x0010 (0x0480 - 0x0470)
class ABP_Projectile_Trail_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Projectile_Trail.BP_Projectile_Trail_C"));
		return ptr;
	}


	void SetVelocity(const struct FVector& Velocity);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void KillTrail();
	void ExecuteUbergraph_BP_Projectile_Trail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
