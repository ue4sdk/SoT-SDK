#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RowboatMountpoint_MediumShip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RowboatMountpoint_MediumShip.BP_RowboatMountpoint_MediumShip_C
// 0x0000 (0x0728 - 0x0728)
class ABP_RowboatMountpoint_MediumShip_C : public ABP_RowboatMountpoint_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_RowboatMountpoint_MediumShip.BP_RowboatMountpoint_MediumShip_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
