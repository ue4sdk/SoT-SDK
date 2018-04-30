#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Tavern_B_AudioLayer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C
// 0x0048 (0x04B8 - 0x0470)
class ABP_Tavern_B_AudioLayer_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0470(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Tavern_B_AudioLayer.BP_Tavern_B_AudioLayer_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_Tavern_B_AudioLayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
