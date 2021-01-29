#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Emote_PropShovelDance1_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Emote_PropShovelDance1_Desc.Emote_PropShovelDance1_Desc_C
// 0x0000 (0x0110 - 0x0110)
class UEmote_PropShovelDance1_Desc_C : public UEmoteDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Emote_PropShovelDance1_Desc.Emote_PropShovelDance1_Desc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
