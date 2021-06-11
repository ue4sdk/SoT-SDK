#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StrongholdGunpowderBootyCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StrongholdGunpowderBootyCategory.StrongholdGunpowderBootyCategory_C
// 0x0000 (0x0080 - 0x0080)
class UStrongholdGunpowderBootyCategory_C : public UBootyCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass StrongholdGunpowderBootyCategory.StrongholdGunpowderBootyCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
