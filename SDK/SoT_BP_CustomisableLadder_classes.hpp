#pragma once

// Sea of Thieves (1.0.5) SDK

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
// 0x007C (0x06DC - 0x0660)
class ABP_CustomisableLadder_C : public ALadder
{
public:
	unsigned char                                      UnknownData00[0x7C];                                      // 0x0660(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CustomisableLadder.BP_CustomisableLadder_C");
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
