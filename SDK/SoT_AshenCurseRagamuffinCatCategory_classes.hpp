#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AshenCurseRagamuffinCatCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AshenCurseRagamuffinCatCategory.AshenCurseRagamuffinCatCategory_C
// 0x0000 (0x0088 - 0x0088)
class UAshenCurseRagamuffinCatCategory_C : public UCatCategory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AshenCurseRagamuffinCatCategory.AshenCurseRagamuffinCatCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
