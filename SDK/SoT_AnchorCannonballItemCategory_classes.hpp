#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AnchorCannonballItemCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnchorCannonballItemCategory.AnchorCannonballItemCategory_C
// 0x0000 (0x0080 - 0x0080)
class UAnchorCannonballItemCategory_C : public UCannonballItemCategory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnchorCannonballItemCategory.AnchorCannonballItemCategory_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
