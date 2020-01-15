#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FlintlockPistol_AI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FlintlockPistol_AI.BP_FlintlockPistol_AI_C
// 0x0000 (0x0A40 - 0x0A40)
class ABP_FlintlockPistol_AI_C : public ABP_FlintlockPistol_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FlintlockPistol_AI.BP_FlintlockPistol_AI_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
