#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SailAnim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_SailAnim.BP_SailAnim_C
// 0x0A11 (0x0EB1 - 0x04A0)
class UBP_SailAnim_C : public USailAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xA11];                                     // 0x04A0(0x0A11) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_SailAnim.BP_SailAnim_C");
		return ptr;
	}


	void Set_Billow_Animation_Rate();
	void InitialiseSail(float* PlayRateMultiplier, bool* MainSail);
	void ExecuteUbergraph_BP_SailAnim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
