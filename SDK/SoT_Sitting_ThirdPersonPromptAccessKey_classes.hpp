#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Sitting_ThirdPersonPromptAccessKey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sitting_ThirdPersonPromptAccessKey.Sitting_ThirdPersonPromptAccessKey_C
// 0x0000 (0x0038 - 0x0038)
class USitting_ThirdPersonPromptAccessKey_C : public UPromptCounterAccessKey
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Sitting_ThirdPersonPromptAccessKey.Sitting_ThirdPersonPromptAccessKey_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
