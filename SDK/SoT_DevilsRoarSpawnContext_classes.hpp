#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DevilsRoarSpawnContext_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DevilsRoarSpawnContext.DevilsRoarSpawnContext_C
// 0x0000 (0x0028 - 0x0028)
class UDevilsRoarSpawnContext_C : public UAISpawnContextId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DevilsRoarSpawnContext.DevilsRoarSpawnContext_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
