#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RowboatMountpoint_SmallShip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RowboatMountpoint_SmallShip.BP_RowboatMountpoint_SmallShip_C
// 0x0000 (0x0658 - 0x0658)
class ABP_RowboatMountpoint_SmallShip_C : public ABP_RowboatMountpoint_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RowboatMountpoint_SmallShip.BP_RowboatMountpoint_SmallShip_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
