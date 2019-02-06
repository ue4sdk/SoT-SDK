#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_NetworkingUtilsMacroLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NetworkingUtilsMacroLibrary.BP_NetworkingUtilsMacroLibrary_C
// 0x0000 (0x0498 - 0x0498)
class ABP_NetworkingUtilsMacroLibrary_C : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_NetworkingUtilsMacroLibrary.BP_NetworkingUtilsMacroLibrary_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
