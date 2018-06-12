#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_GH_HoarderOfBarnacledGold_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_GH_HoarderOfBarnacledGold.Title_GH_HoarderOfBarnacledGold_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_GH_HoarderOfBarnacledGold_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Title_GH_HoarderOfBarnacledGold.Title_GH_HoarderOfBarnacledGold_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
