#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Placement_Garden_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Placement_Garden.BP_Placement_Garden_C
// 0x00A5 (0x0515 - 0x0470)
class ABP_Placement_Garden_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA5];                                      // 0x0470(0x00A5) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Placement_Garden.BP_Placement_Garden_C");
		return ptr;
	}


	void Set_Garden_Parameters(float Radius, int Int, bool* Instances_Created);
	void Create_Garden();
	void Initialise_Instances();
	void UserConstructionScript();
	void Force_Create_Garden();
	void ExecuteUbergraph_BP_Placement_Garden(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
