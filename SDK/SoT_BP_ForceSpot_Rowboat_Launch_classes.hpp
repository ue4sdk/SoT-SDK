#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ForceSpot_Rowboat_Launch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C
// 0x0010 (0x0648 - 0x0638)
class ABP_ForceSpot_Rowboat_Launch_C : public AForceSpot
{
public:
	TArray<struct FVector>                             InteractionSplinePoints;                                  // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C"));
		return ptr;
	}


	void SetupClamberSpline();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
