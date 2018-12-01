#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SnakeCannonballItemCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SnakeCannonballItemCategory.SnakeCannonballItemCategory_C
// 0x0000 (0x0080 - 0x0080)
class USnakeCannonballItemCategory_C : public UCannonballItemCategory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SnakeCannonballItemCategory.SnakeCannonballItemCategory_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
