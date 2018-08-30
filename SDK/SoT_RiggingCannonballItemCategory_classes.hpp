#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RiggingCannonballItemCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RiggingCannonballItemCategory.RiggingCannonballItemCategory_C
// 0x0000 (0x0080 - 0x0080)
class URiggingCannonballItemCategory_C : public UCannonballItemCategory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RiggingCannonballItemCategory.RiggingCannonballItemCategory_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
