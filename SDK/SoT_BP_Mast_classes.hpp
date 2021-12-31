#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Mast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Mast.BP_Mast_C
// 0x00A0 (0x09F8 - 0x0958)
class ABP_Mast_C : public AMast
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0958(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UStaticMeshComponent*                              MastTopComponent;                                         // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              TopgallantActor;                                          // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              MainsailActor;                                            // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UChildActorComponent*                              TopsailActor;                                             // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Main_Yard;                                                // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Topgallant_Yard;                                          // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              Top_Yard;                                                 // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              MastBaseComponent;                                        // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<FBP_SailStructure>                          Sail_Parameters;                                          // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<UStaticMeshComponent*>                      Yards;                                                    // 0x09B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<UChildActorComponent*>                      Sails;                                                    // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMaterialInstance*                                 Sail_Material;                                            // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<ABP_Sail_C*>                                SailActors;                                               // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	UDecalComponent*                                   DamageDecalRight;                                         // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UDecalComponent*                                   DamageDecalLeft;                                          // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Mast.BP_Mast_C"));
		return ptr;
	}


	void AttemptToAddDamageDecal(TEnumAsByte<ERepairableState> RepairableState, const FTransform& RelativeTransform, UMaterialInterface* NewDecalMaterial, UDecalComponent** DecalComponent);
	bool IsMastVisuallyFractured();
	void Customise_Static_Mesh(UStaticMesh* New_Static_Mesh, UStaticMeshComponent* Static_Mesh_Component);
	void Trim_Array_Func(int Size, TArray<UObject*>* TargetArray);
	void Initialise_Sail_Parameters();
	void Populate_Lists_of_Yards_and_Sails();
	void Cull_Excess_Components(TArray<UActorComponent*>* TargetArray);
	void Initialise_Sails();
	void UserConstructionScript();
	void OnMastDescLoaded(UMastDescAsset* MastDesc);
	void OnMastMeshSwapRequested(UStaticMesh* NewMeshBottom, UStaticMesh* NewMeshTop);
	void BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<ERepairableState> State, TEnumAsByte<ERepairableState> PreviousState, URepairableComponent* RepairableComponent);
	void BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<ERepairableState> State, TEnumAsByte<ERepairableState> PreviousState, URepairableComponent* RepairableComponent);
	void BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<ERepairableState> State, TEnumAsByte<ERepairableState> PreviousState, URepairableComponent* RepairableComponent);
	void ExecuteUbergraph_BP_Mast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
