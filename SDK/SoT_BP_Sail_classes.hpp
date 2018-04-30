#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Sail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Sail.BP_Sail_C
// 0x0020 (0x0638 - 0x0618)
class ABP_Sail_C : public ASail
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0618(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sail.BP_Sail_C");
		return ptr;
	}


	void Debug();
	void Initialise(bool IsMainSail, float SailForceScalar);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
