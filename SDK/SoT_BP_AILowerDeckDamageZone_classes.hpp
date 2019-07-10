#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AILowerDeckDamageZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AILowerDeckDamageZone.BP_AILowerDeckDamageZone_C
// 0x0000 (0x0888 - 0x0888)
class ABP_AILowerDeckDamageZone_C : public ABP_BaseInternalDamageZone_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AILowerDeckDamageZone.BP_AILowerDeckDamageZone_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
