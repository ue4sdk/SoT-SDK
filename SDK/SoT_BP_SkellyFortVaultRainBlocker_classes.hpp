#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SkellyFortVaultRainBlocker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkellyFortVaultRainBlocker.BP_SkellyFortVaultRainBlocker_C
// 0x0000 (0x0480 - 0x0480)
class ABP_SkellyFortVaultRainBlocker_C : public AStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SkellyFortVaultRainBlocker.BP_SkellyFortVaultRainBlocker_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
