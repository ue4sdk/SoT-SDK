#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_StandardHull_InternalShipWater_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C
// 0x0018 (0x06A8 - 0x0690)
class ABP_SmallShip_StandardHull_InternalShipWater_C : public AShipInternalWater
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDynamicFlowComponent*                       DynamicFlow;                                              // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Foaminess;                                                // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallShip_StandardHull_InternalShipWater.BP_SmallShip_StandardHull_InternalShipWater_C"));
		return ptr;
	}


	void GetLineIntersectionFromPlane(const struct FVector& LineStart, const struct FVector& LineEnd, bool* Intersect, struct FVector* IntersectionPoint);
	void GetWaterLevel(float* WaterLevel);
	void GetDistanceFromPlane(const struct FVector& Location, float* Distance);
	void UserConstructionScript();
	void AddWater(float Water_Amount);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SmallShip_StandardHull_InternalShipWater(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
