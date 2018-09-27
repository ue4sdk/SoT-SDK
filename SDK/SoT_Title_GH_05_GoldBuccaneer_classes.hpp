#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_GH_05_GoldBuccaneer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_GH_05_GoldBuccaneer.Title_GH_05_GoldBuccaneer_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_GH_05_GoldBuccaneer_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Title_GH_05_GoldBuccaneer.Title_GH_05_GoldBuccaneer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
