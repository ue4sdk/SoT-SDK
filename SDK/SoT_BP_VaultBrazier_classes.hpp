#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VaultBrazier_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VaultBrazier.BP_VaultBrazier_C
// 0x0000 (0x0828 - 0x0828)
class ABP_VaultBrazier_C : public ABeacon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VaultBrazier.BP_VaultBrazier_C"));
		return ptr;
	}


	struct FText GetObjectDisplayName();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
