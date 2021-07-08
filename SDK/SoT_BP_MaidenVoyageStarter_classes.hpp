#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MaidenVoyageStarter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MaidenVoyageStarter.BP_MaidenVoyageStarter_C
// 0x0000 (0x0060 - 0x0060)
class UBP_MaidenVoyageStarter_C : public UMaidenVoyageStarter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MaidenVoyageStarter.BP_MaidenVoyageStarter_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
