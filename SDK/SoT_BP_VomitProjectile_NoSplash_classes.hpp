#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VomitProjectile_NoSplash_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VomitProjectile_NoSplash.BP_VomitProjectile_NoSplash_C
// 0x0000 (0x0778 - 0x0778)
class ABP_VomitProjectile_NoSplash_C : public ABP_VomitProjectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VomitProjectile_NoSplash.BP_VomitProjectile_NoSplash_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
