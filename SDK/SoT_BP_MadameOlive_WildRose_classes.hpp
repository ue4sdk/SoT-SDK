#pragma once

// Sea of Thieves (1.4) SDK

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
// 0x000C (0x1830 - 0x1824)
class UBP_MadameOlive_WildRose_C : public UBP_Anim_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1824(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1828(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

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
