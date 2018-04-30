#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FlyingCreature_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FlyingCreature.BP_FlyingCreature_C
// 0x011D (0x05E5 - 0x04C8)
class ABP_FlyingCreature_C : public AFlyingCreature
{
public:
	unsigned char                                      UnknownData00[0x11D];                                     // 0x04C8(0x011D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlyingCreature.BP_FlyingCreature_C");
		return ptr;
	}


	void CreateCreature();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
