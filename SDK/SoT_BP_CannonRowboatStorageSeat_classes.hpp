#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CannonRowboatStorageSeat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CannonRowboatStorageSeat.BP_CannonRowboatStorageSeat_C
// 0x0000 (0x06B0 - 0x06B0)
class ABP_CannonRowboatStorageSeat_C : public ABP_RowboatStorageSeat_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CannonRowboatStorageSeat.BP_CannonRowboatStorageSeat_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
