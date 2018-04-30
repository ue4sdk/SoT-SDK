#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CapstanArm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CapstanArm.BP_CapstanArm_C
// 0x0010 (0x05E0 - 0x05D0)
class ABP_CapstanArm_C : public ACapstanArm
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CapstanArm.BP_CapstanArm_C");
		return ptr;
	}


	struct FVector GetFrontFacingVector();
	bool DoesRequireFacingFront();
	struct FDockableInfo GetDockableInfo();
	struct FVector GetClosestInteractionPoint(struct FVector* ReferencePosition, float* OutInteractionPointRadius);
	struct FVector GetLookAtPos();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
