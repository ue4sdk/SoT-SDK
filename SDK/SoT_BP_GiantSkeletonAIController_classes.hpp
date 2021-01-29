#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GiantSkeletonAIController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GiantSkeletonAIController.BP_GiantSkeletonAIController_C
// 0x0000 (0x0B80 - 0x0B80)
class ABP_GiantSkeletonAIController_C : public ABP_SkeletonAIController_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GiantSkeletonAIController.BP_GiantSkeletonAIController_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
