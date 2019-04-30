#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_MedallionLockMechanism_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C
// 0x009C (0x0564 - 0x04C8)
class ABP_Shroudbreaker_MedallionLockMechanism_C : public AInteractableBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULockComponent*                              Lock;                                                     // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RightParticleSystem;                                      // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    MiddleParticleSystem;                                     // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    LeftParticleSystem;                                       // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                Meshes;                                                   // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    KeyReceived;                                              // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                MeshElementIndex;                                         // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	TArray<class UMaterialInstance*>                   Materials;                                                // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MaterialElementIndex;                                     // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	class ABP_PuzzleVault_C*                           PuzzleVault;                                              // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               IsInitialised;                                            // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0549(0x0007) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            ParticleSystems;                                          // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                VFXIndex;                                                 // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Shroudbreaker_MedallionLockMechanism.BP_Shroudbreaker_MedallionLockMechanism_C"));
		return ptr;
	}


	void InitialiseVariables(class ABP_PuzzleVault_C* Puzzle_Vault, TArray<class UMaterialInstance*>* Materials);
	void IncrementVaultTableMaterial();
	struct FText GetObjectDisplayName();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void Multicast_Play_VFX();
	void Multicast_Play_All_VFX();
	void BndEvt__Lock_K2Node_ComponentBoundEvent_19_OnIndividualLockOpenedDelegate__DelegateSignature();
	void BndEvt__Lock_K2Node_ComponentBoundEvent_57_OnLockOpenedDelegate__DelegateSignature();
	void ExecuteUbergraph_BP_Shroudbreaker_MedallionLockMechanism(int EntryPoint);
	void KeyReceived__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
