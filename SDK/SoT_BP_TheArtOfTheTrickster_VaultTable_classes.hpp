#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TheArtOfTheTrickster_VaultTable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C
// 0x0061 (0x0529 - 0x04C8)
class ABP_TheArtOfTheTrickster_VaultTable_C : public AInteractableBase
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
	int                                                VFXIndex;                                                 // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            ParticleSystems;                                          // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Initialised;                                              // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TheArtOfTheTrickster_VaultTable.BP_TheArtOfTheTrickster_VaultTable_C"));
		return ptr;
	}


	void Initialise();
	struct FText GetObjectDisplayName();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Lock_K2Node_ComponentBoundEvent_96_OnIndividualLockOpenedDelegate__DelegateSignature();
	void BndEvt__Lock_K2Node_ComponentBoundEvent_109_OnLockOpenedDelegate__DelegateSignature();
	void Multicast_Play_Sequential_VFX();
	void Multicast_Play_All_VFX();
	void ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultTable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
