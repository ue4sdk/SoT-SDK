#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Drum_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Drum.BP_Drum_C
// 0x0000 (0x0850 - 0x0850)
class ABP_Drum_C : public AMusicalInstrumentStaticMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Drum.BP_Drum_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
