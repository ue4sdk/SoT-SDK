#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Linstock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Linstock.BP_Linstock_C
// 0x0018 (0x0488 - 0x0470)
class ABP_Linstock_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0470(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Linstock.BP_Linstock_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Linstock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
