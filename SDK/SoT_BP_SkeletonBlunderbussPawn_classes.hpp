#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SkeletonBlunderbussPawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkeletonBlunderbussPawn.BP_SkeletonBlunderbussPawn_C
// 0x0000 (0x10F8 - 0x10F8)
class ABP_SkeletonBlunderbussPawn_C : public ABP_SkeletonPawnBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SkeletonBlunderbussPawn.BP_SkeletonBlunderbussPawn_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
