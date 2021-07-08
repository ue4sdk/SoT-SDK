#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GameNarrationCoordinator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameNarrationCoordinator.BP_GameNarrationCoordinator_C
// 0x0000 (0x01A8 - 0x01A8)
class UBP_GameNarrationCoordinator_C : public UGameNarrationCoordinator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GameNarrationCoordinator.BP_GameNarrationCoordinator_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
