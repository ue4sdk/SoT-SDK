#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VaultOuterDoor_CrooksHollow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VaultOuterDoor_CrooksHollow.BP_VaultOuterDoor_CrooksHollow_C
// 0x0040 (0x0500 - 0x04C0)
class ABP_VaultOuterDoor_CrooksHollow_C : public ABP_VaultDoorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    vfx_vault_outerdoor_open_top_3;                           // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_vault_outerdoor_open_2;                               // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_vault_outerdoor_open_top_2;                           // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TotemMesh;                                                // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PlinthPlatform;                                           // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULockComponent*                              Lock;                                                     // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PlinthMesh;                                               // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VaultOuterDoor_CrooksHollow.BP_VaultOuterDoor_CrooksHollow_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Lock_K2Node_ComponentBoundEvent_9_OnLockOpenedDelegate__DelegateSignature();
	void ExecuteUbergraph_BP_VaultOuterDoor_CrooksHollow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
