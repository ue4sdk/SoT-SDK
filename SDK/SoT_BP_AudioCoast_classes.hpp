#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AudioCoast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AudioCoast.BP_AudioCoast_C
// 0x0024 (0x0494 - 0x0470)
class ABP_AudioCoast_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0470(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AudioCoast.BP_AudioCoast_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_AudioCoast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
