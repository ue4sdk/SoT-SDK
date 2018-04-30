#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CustomisableLadder_PointToPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C
// 0x0028 (0x0704 - 0x06DC)
class ABP_CustomisableLadder_PointToPoint_C : public ABP_CustomisableLadder_C
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x06DC(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C");
		return ptr;
	}


	void Orientate_Ladder(const struct FVector& Point_A, const struct FVector& Point_B);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CustomisableLadder_PointToPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
