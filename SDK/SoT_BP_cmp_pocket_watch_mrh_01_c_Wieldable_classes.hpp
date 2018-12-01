#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmp_pocket_watch_mrh_01_c_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_cmp_pocket_watch_mrh_01_c_Wieldable.BP_cmp_pocket_watch_mrh_01_c_Wieldable_C
// 0x0000 (0x0888 - 0x0888)
class ABP_cmp_pocket_watch_mrh_01_c_Wieldable_C : public ABP_PocketWatch_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_cmp_pocket_watch_mrh_01_c_Wieldable.BP_cmp_pocket_watch_mrh_01_c_Wieldable_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
