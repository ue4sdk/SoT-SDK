#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VaultOuterDoor_DevilsRidge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VaultOuterDoor_DevilsRidge.BP_VaultOuterDoor_DevilsRidge_C
// 0x0048 (0x05D8 - 0x0590)
class ABP_VaultOuterDoor_DevilsRidge_C : public ABP_VaultDoorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    vfx_vault_outerdoor_open_top_4;                           // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_vault_outerdoor_open_top_3;                           // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_vault_outerdoor_open_top_2;                           // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable3;                                            // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TotemMesh;                                                // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PlinthPlatform;                                           // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULockComponent*                              Lock;                                                     // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PlinthMesh;                                               // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VaultOuterDoor_DevilsRidge.BP_VaultOuterDoor_DevilsRidge_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Lock_K2Node_ComponentBoundEvent_9_OnLockOpenedDelegate__DelegateSignature();
	void ExecuteUbergraph_BP_VaultOuterDoor_DevilsRidge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
