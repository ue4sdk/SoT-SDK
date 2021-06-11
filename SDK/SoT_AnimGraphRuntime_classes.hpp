#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AnimGraphRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnimGraphRuntime.AnimSequencerInstance
// 0x01A0 (0x05E0 - 0x0440)
class UAnimSequencerInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0440(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AnimGraphRuntime.AnimSequencerInstance"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
