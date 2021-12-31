#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShip_StandardHull_InternalShipWater_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C
// 0x0018 (0x0638 - 0x0620)
class ABP_LargeShip_StandardHull_InternalShipWater_C : public AShipInternalWater
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UDynamicFlowComponent*                             DynamicFlow;                                              // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCurveFloat*                                       Foaminess;                                                // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LargeShip_StandardHull_InternalShipWater.BP_LargeShip_StandardHull_InternalShipWater_C"));
		return ptr;
	}


	void GetLineIntersectionFromPlane(const FVector& LineStart, const FVector& LineEnd, bool* Intersect, FVector* IntersectionPoint);
	void GetWaterLevel(float* WaterLevel);
	void GetDistanceFromPlane(const FVector& Location, float* Distance);
	void UserConstructionScript();
	void AddWater(float Water_Amount);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LargeShip_StandardHull_InternalShipWater(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
