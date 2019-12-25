#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AshenLordEncounterSpawnContext_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AshenLordEncounterSpawnContext.AshenLordEncounterSpawnContext_C
// 0x0000 (0x0028 - 0x0028)
class UAshenLordEncounterSpawnContext_C : public UAISpawnContextId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AshenLordEncounterSpawnContext.AshenLordEncounterSpawnContext_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
