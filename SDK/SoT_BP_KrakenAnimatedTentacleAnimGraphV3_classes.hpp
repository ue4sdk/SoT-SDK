#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_KrakenAnimatedTentacleAnimGraphV3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_KrakenAnimatedTentacleAnimGraphV3.BP_KrakenAnimatedTentacleAnimGraphV3_C
// 0x0110 (0x0680 - 0x0570)
class UBP_KrakenAnimatedTentacleAnimGraphV3_C : public UKrakenAnimatedTentacleAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_347B3A8247B56C030097BDA1D1D1C13F;      // 0x0578(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8A0FF8BC4F174EB679817397C9FBFF3F;      // 0x05C0(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E09CF02F4AC57E91F5EB89A903831134;      // 0x0620(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_KrakenAnimatedTentacleAnimGraphV3.BP_KrakenAnimatedTentacleAnimGraphV3_C"));
		return ptr;
	}


	void ExecuteUbergraph_BP_KrakenAnimatedTentacleAnimGraphV3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
