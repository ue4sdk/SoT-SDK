#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CustomisableLadder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CustomisableLadder.BP_CustomisableLadder_C
// 0x0088 (0x0678 - 0x05F0)
class ABP_CustomisableLadder_C : public ALadder
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInteractableComponent*                      InteractableComponent;                                    // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Ladder_Cap;                                               // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCustomisableLadderDefinitionStruct         LadderCustomisationDefinition;                            // 0x0608(0x0020) (Edit, BlueprintVisible)
	TArray<struct FVector>                             OffTopSplineComponentPositions;                           // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             OnTopSplineComponentPositions;                            // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Steps;                                                    // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x064C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Material_Override;                                        // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StepHeight;                                               // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Interactable_Position;                                    // 0x065C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Interactable_Scale;                                       // 0x0668(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Minimum_Steps;                                            // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CustomisableLadder.BP_CustomisableLadder_C"));
		return ptr;
	}


	struct FDockableInfo GetDockableInfo();
	void Construct_Ladder();
	void Get_Total_Height_Before_Cap(float* Height);
	void Get_Steps(int* Num_Steps);
	struct FTransform GetBottomLadderRungTransform();
	struct FTransform GetTopLadderRungTransform();
	void Get_World_Loc_at_Height_Along_Z(float Relative_Z, struct FVector* Return_Value);
	void SetupSpline(class USplineComponent* Spline_Component, TArray<struct FVector>* Positions);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CustomisableLadder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
