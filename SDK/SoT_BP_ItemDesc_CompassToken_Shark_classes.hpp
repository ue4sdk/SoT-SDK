#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ItemDesc_CompassToken_Shark_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ItemDesc_CompassToken_Shark.BP_ItemDesc_CompassToken_Shark_C
// 0x0000 (0x0120 - 0x0120)
class UBP_ItemDesc_CompassToken_Shark_C : public UBootyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ItemDesc_CompassToken_Shark.BP_ItemDesc_CompassToken_Shark_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
