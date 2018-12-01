#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ALK_ThirdPerson_Male_Unfit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALK_ThirdPerson_Male_Unfit.ALK_ThirdPerson_Male_Unfit_C
// 0x0000 (0x0028 - 0x0028)
class UALK_ThirdPerson_Male_Unfit_C : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ALK_ThirdPerson_Male_Unfit.ALK_ThirdPerson_Male_Unfit_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
