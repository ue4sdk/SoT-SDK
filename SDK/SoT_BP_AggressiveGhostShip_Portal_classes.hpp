#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AggressiveGhostShip_Portal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C
// 0x0040 (0x0458 - 0x0418)
class ABP_AggressiveGhostShip_Portal_C : public AAggressiveGhostShipPortal
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UParticleSystemComponent*                          Portal_VFX;                                               // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWwiseEmitterComponent*                            WwiseEmitter;                                             // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Portal;                                                   // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Shroud;                                                   // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USceneComponent*                                   SharedRoot;                                               // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<UMaterialInstanceDynamic*>                  DynamicMaterials;                                         // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void StartOpening();
	void StartClosing();
	void End();
	void ExecuteUbergraph_BP_AggressiveGhostShip_Portal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
