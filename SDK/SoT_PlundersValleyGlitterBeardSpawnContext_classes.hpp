#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PlundersValleyGlitterBeardSpawnContext_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlundersValleyGlitterBeardSpawnContext.PlundersValleyGlitterBeardSpawnContext_C
// 0x0000 (0x0030 - 0x0030)
class UPlundersValleyGlitterBeardSpawnContext_C : public UAISpawnContextId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PlundersValleyGlitterBeardSpawnContext.PlundersValleyGlitterBeardSpawnContext_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
