#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WandaCaptainAIClassId_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WandaCaptainAIClassId.WandaCaptainAIClassId_C
// 0x0000 (0x0028 - 0x0028)
class UWandaCaptainAIClassId_C : public UAIClassId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WandaCaptainAIClassId.WandaCaptainAIClassId_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
