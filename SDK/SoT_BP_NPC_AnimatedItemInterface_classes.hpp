#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_NPC_AnimatedItemInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NPC_AnimatedItemInterface.BP_NPC_AnimatedItemInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_NPC_AnimatedItemInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_AnimatedItemInterface.BP_NPC_AnimatedItemInterface_C");
		return ptr;
	}


	void PlayItemAnimation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
