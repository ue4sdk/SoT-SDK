#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ALK_WieldableObject_Tankard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALK_WieldableObject_Tankard.ALK_WieldableObject_Tankard_C
// 0x0000 (0x0028 - 0x0028)
class UALK_WieldableObject_Tankard_C : public UWieldableItemAnimationStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ALK_WieldableObject_Tankard.ALK_WieldableObject_Tankard_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
