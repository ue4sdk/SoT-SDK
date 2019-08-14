#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Emote_MakeFriends_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Emote_MakeFriends_Desc.BP_Emote_MakeFriends_Desc_C
// 0x0000 (0x00F0 - 0x00F0)
class UBP_Emote_MakeFriends_Desc_C : public UEmoteDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Emote_MakeFriends_Desc.BP_Emote_MakeFriends_Desc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
