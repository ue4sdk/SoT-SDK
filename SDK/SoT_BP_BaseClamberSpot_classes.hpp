#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BaseClamberSpot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseClamberSpot.BP_BaseClamberSpot_C
// 0x0010 (0x0660 - 0x0650)
class ABP_BaseClamberSpot_C : public AClamberSpot
{
public:
	TArray<struct FVector>                             ClamberSplinePoints;                                      // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BaseClamberSpot.BP_BaseClamberSpot_C"));
		return ptr;
	}


	void SetupClamberSpline();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
