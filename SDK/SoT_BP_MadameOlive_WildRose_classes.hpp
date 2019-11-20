#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MadameOlive_WildRose_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_MadameOlive_WildRose.BP_MadameOlive_WildRose_C
// 0x000B (0x1900 - 0x18F5)
class UBP_MadameOlive_WildRose_C : public UBP_Anim_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x18F5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x18F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_MadameOlive_WildRose.BP_MadameOlive_WildRose_C"));
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BP_MadameOlive_WildRose(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
