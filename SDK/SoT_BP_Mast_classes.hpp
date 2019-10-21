#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x00A8 (0x0B10 - 0x0A68)
class ABP_Mast_C : public AMast
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A68(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        MastTopComponent;                                         // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MastBaseComponent;                                        // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TopgallantActor;                                          // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        TopsailActor;                                             // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Topgallant_Yard;                                          // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Top_Yard;                                                 // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Main_Yard;                                                // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MainsailActor;                                            // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_SailStructure>                   Sail_Parameters;                                          // 0x0AB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UStaticMeshComponent*>                Yards;                                                    // 0x0AC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UChildActorComponent*>                Sails;                                                    // 0x0AD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Mast_Falling_Limit;                                       // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AE4(0x0004) MISSED OFFSET
	class UMaterialInstance*                           Sail_Material;                                            // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_Sail_C*>                          SailActors;                                               // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UDecalComponent*                             DamageDecalRight;                                         // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDecalComponent*                             DamageDecalLeft;                                          // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Mast.BP_Mast_C"));
		return ptr;
	}


	void AttemptToAddDamageDecal(TEnumAsByte<ERepairableState> RepairableState, const struct FTransform& RelativeTransform, class UMaterialInterface* NewDecalMaterial, class UDecalComponent** DecalComponent);
	bool IsMastVisuallyFractured();
	void DrawDebugSkeleton();
	void Customise_Static_Mesh(class UStaticMesh* New_Static_Mesh, class UStaticMeshComponent* Static_Mesh_Component);
	void Trim_Array_Func(int Size, TArray<class UObject*>* TargetArray);
	void Initialise_Sail_Parameters();
	void Populate_Lists_of_Yards_and_Sails();
	void Cull_Excess_Components(TArray<class UActorComponent*>* TargetArray);
	void Initialise_Sails();
	void UserConstructionScript();
	void OnMastDescLoaded(class UMastDescAsset* MastDesc);
	void OnMastMeshSwapRequested(class UStaticMesh* NewMeshBottom, class UStaticMesh* NewMeshTop);
	void BndEvt__RepairableComponentFirst_K2Node_ComponentBoundEvent_3_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<ERepairableState> State);
	void BndEvt__RepairableComponentSecond_K2Node_ComponentBoundEvent_6_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<ERepairableState> State);
	void BndEvt__RepairableComponentThird_K2Node_ComponentBoundEvent_10_RepairableStateChangedDelegate__DelegateSignature(TEnumAsByte<ERepairableState> State);
	void ExecuteUbergraph_BP_Mast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
