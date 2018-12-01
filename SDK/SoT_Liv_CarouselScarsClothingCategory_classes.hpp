#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Liv_CarouselScarsClothingCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Liv_CarouselScarsClothingCategory.Liv_CarouselScarsClothingCategory_C
// 0x0000 (0x00A0 - 0x00A0)
class ULiv_CarouselScarsClothingCategory_C : public UClothingCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Liv_CarouselScarsClothingCategory.Liv_CarouselScarsClothingCategory_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
