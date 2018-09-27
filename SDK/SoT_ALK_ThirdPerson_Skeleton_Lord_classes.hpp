#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ALK_ThirdPerson_Skeleton_Lord_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALK_ThirdPerson_Skeleton_Lord.ALK_ThirdPerson_Skeleton_Lord_C
// 0x0000 (0x0028 - 0x0028)
class UALK_ThirdPerson_Skeleton_Lord_C : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ALK_ThirdPerson_Skeleton_Lord.ALK_ThirdPerson_Skeleton_Lord_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
