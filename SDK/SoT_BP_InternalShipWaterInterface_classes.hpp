#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_InternalShipWaterInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_InternalShipWaterInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_InternalShipWaterInterface.BP_InternalShipWaterInterface_C"));
		return ptr;
	}


	void GetLineIntersectionFromPlane(const struct FVector& LineStart, const struct FVector& LineEnd, bool* Intersect, struct FVector* IntersectionPoint);
	void GetDistanceFromPlane(const struct FVector& Location, float* Distance);
	void GetWaterLevel(float* WaterLevel);
	void AddWater(float Water_Amount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
