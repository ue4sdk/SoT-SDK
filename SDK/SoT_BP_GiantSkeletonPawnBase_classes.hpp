#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GiantSkeletonPawnBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GiantSkeletonPawnBase.BP_GiantSkeletonPawnBase_C
// 0x0008 (0x1248 - 0x1240)
class ABP_GiantSkeletonPawnBase_C : public ABP_SkeletonPawnBase_C
{
public:
	class UHealthStageHandlerComponent*                HealthStageHandler;                                       // 0x1240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GiantSkeletonPawnBase.BP_GiantSkeletonPawnBase_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
