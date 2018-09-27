#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RowboatMountpoint_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RowboatMountpoint_Base.BP_RowboatMountpoint_Base_C
// 0x0000 (0x0710 - 0x0710)
class ABP_RowboatMountpoint_Base_C : public AMountpointActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_RowboatMountpoint_Base.BP_RowboatMountpoint_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
