#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MaleCaptainAIClassId_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MaleCaptainAIClassId.MaleCaptainAIClassId_C
// 0x0000 (0x0028 - 0x0028)
class UMaleCaptainAIClassId_C : public UAIClassId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MaleCaptainAIClassId.MaleCaptainAIClassId_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
