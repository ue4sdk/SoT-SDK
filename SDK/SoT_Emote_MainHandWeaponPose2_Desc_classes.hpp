#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Emote_MainHandWeaponPose2_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Emote_MainHandWeaponPose2_Desc.Emote_MainHandWeaponPose2_Desc_C
// 0x0000 (0x0128 - 0x0128)
class UEmote_MainHandWeaponPose2_Desc_C : public UEmoteFlourishDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Emote_MainHandWeaponPose2_Desc.Emote_MainHandWeaponPose2_Desc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
