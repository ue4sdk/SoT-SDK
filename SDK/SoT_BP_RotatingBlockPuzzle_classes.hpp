#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RotatingBlockPuzzle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RotatingBlockPuzzle.BP_RotatingBlockPuzzle_C
// 0x0000 (0x0648 - 0x0648)
class ABP_RotatingBlockPuzzle_C : public ARotatingBlockPuzzle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RotatingBlockPuzzle.BP_RotatingBlockPuzzle_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
