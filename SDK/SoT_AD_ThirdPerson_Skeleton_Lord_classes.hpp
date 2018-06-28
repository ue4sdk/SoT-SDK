#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_ThirdPerson_Skeleton_Lord_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_ThirdPerson_Skeleton_Lord.AD_ThirdPerson_Skeleton_Lord_C
// 0x0000 (0x05D8 - 0x05D8)
class UAD_ThirdPerson_Skeleton_Lord_C : public UAD_ThirdPerson_Skeleton_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AD_ThirdPerson_Skeleton_Lord.AD_ThirdPerson_Skeleton_Lord_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
