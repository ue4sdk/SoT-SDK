#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GoldhoarderShady_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GoldhoarderShady.BP_GoldhoarderShady_C
// 0x0020 (0x0568 - 0x0548)
class ABP_GoldhoarderShady_C : public ACompanyShopkeeper
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0548(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GoldhoarderShady.BP_GoldhoarderShady_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GoldhoarderShady(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
