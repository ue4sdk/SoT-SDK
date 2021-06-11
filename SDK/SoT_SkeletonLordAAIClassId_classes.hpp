#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SkeletonLordAAIClassId_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SkeletonLordAAIClassId.SkeletonLordAAIClassId_C
// 0x0000 (0x0028 - 0x0028)
class USkeletonLordAAIClassId_C : public UAIClassId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SkeletonLordAAIClassId.SkeletonLordAAIClassId_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
