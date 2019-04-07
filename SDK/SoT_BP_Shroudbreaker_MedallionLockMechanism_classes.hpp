#pragma once

// Sea of Thieves (1.4) SDK

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
// 0x0081 (0x0541 - 0x04C0)
class ABP_Shroudbreaker_MedallionLockMechanism_C : public AInteractableBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULockComponent*                              Lock;                                                     // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh3;                                              // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                Meshes;                                                   // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    KeyReceived;                                              // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                MeshElementIndex;                                         // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	TArray<class UMaterialInstance*>                   Materials;                                                // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                MaterialElementIndex;                                     // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	class ABP_PuzzleVault_C*                           PuzzleVault;                                              // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               IsInitialised;                                            // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	void ReceiveTick(float DeltaSeconds);
	void KeyReceived_Event();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_Shroudbreaker_MedallionLockMechanism(int EntryPoint);
	void KeyReceived__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
