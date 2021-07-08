#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MultiCrewSkeletonThrone_Cannon_Cove_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MultiCrewSkeletonThrone_Cannon_Cove.BP_MultiCrewSkeletonThrone_Cannon_Cove_C
// 0x0000 (0x0450 - 0x0450)
class ABP_MultiCrewSkeletonThrone_Cannon_Cove_C : public ABP_MultiCrewSkeletonThrone_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MultiCrewSkeletonThrone_Cannon_Cove.BP_MultiCrewSkeletonThrone_Cannon_Cove_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
