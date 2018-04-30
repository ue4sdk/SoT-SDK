#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Spyglass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Spyglass.BP_Spyglass_C
// 0x0048 (0x0878 - 0x0830)
class ABP_Spyglass_C : public ASpyglass
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0830(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spyglass.BP_Spyglass_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ScopeOn();
	void ScopeOff();
	void GlintOn();
	void GlintOff();
	void ForceScopeOff();
	void ExecuteUbergraph_BP_Spyglass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
