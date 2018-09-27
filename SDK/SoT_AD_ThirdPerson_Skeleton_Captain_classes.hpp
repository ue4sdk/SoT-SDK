#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_ThirdPerson_Skeleton_Captain_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_ThirdPerson_Skeleton_Captain.AD_ThirdPerson_Skeleton_Captain_C
// 0x0000 (0x07A8 - 0x07A8)
class UAD_ThirdPerson_Skeleton_Captain_C : public UAD_ThirdPerson_Skeleton_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AD_ThirdPerson_Skeleton_Captain.AD_ThirdPerson_Skeleton_Captain_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
