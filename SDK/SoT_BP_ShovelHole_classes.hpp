#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShovelHole_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShovelHole.BP_ShovelHole_C
// 0x0030 (0x04E0 - 0x04B0)
class ABP_ShovelHole_C : public AShovelHole
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x04B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShovelHole.BP_ShovelHole_C");
		return ptr;
	}


	void SetFadeInParameters(float FadeTime);
	void SetFadeOutParameters(float FadeTime);
	void UserConstructionScript();
	void OnStateChanged(TEnumAsByte<EHoleState>* InState);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ShovelHole(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
