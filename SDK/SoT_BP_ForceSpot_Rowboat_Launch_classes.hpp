#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ForceSpot_Rowboat_Launch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C
// 0x0008 (0x0630 - 0x0628)
class ABP_ForceSpot_Rowboat_Launch_C : public AForceSpot
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ForceSpot_Rowboat_Launch.BP_ForceSpot_Rowboat_Launch_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
