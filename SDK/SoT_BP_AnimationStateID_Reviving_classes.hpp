#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AnimationStateID_Reviving_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AnimationStateID_Reviving.BP_AnimationStateID_Reviving_C
// 0x0000 (0x0028 - 0x0028)
class UBP_AnimationStateID_Reviving_C : public UAnimationStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AnimationStateID_Reviving.BP_AnimationStateID_Reviving_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
