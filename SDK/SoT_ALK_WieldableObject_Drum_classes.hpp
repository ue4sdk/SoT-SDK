#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ALK_WieldableObject_Drum_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALK_WieldableObject_Drum.ALK_WieldableObject_Drum_C
// 0x0000 (0x0028 - 0x0028)
class UALK_WieldableObject_Drum_C : public UWieldableItemAnimationStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ALK_WieldableObject_Drum.ALK_WieldableObject_Drum_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
