#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LightingZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LightingZone.BP_LightingZone_C
// 0x003C (0x04AC - 0x0470)
class ABP_LightingZone_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0470(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightingZone.BP_LightingZone_C");
		return ptr;
	}


	void Update_Lighting_Zone();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LightingZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
