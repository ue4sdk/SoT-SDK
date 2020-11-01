#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SkeletonAlsatianDog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SkeletonAlsatianDog.SkeletonAlsatianDog_C
// 0x0000 (0x0088 - 0x0088)
class USkeletonAlsatianDog_C : public UDogCategory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SkeletonAlsatianDog.SkeletonAlsatianDog_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
