#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cannon_PlayerLoadingInteractionPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cannon_PlayerLoadingInteractionPoint.BP_Cannon_PlayerLoadingInteractionPoint_C
// 0x0000 (0x05C0 - 0x05C0)
class ABP_Cannon_PlayerLoadingInteractionPoint_C : public APlayerLoadingInteractionPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Cannon_PlayerLoadingInteractionPoint.BP_Cannon_PlayerLoadingInteractionPoint_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
