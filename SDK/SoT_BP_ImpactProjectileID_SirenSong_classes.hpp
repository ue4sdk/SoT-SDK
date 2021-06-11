#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ImpactProjectileID_SirenSong_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ImpactProjectileID_SirenSong.BP_ImpactProjectileID_SirenSong_C
// 0x0000 (0x0028 - 0x0028)
class UBP_ImpactProjectileID_SirenSong_C : public UImpactProjectileId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ImpactProjectileID_SirenSong.BP_ImpactProjectileID_SirenSong_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
