#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Volcano_SeaBased_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Volcano_SeaBased.BP_Volcano_SeaBased_C
// 0x0000 (0x0658 - 0x0658)
class ABP_Volcano_SeaBased_C : public ABP_Volcano_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Volcano_SeaBased.BP_Volcano_SeaBased_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
