#pragma once

// Sea of Thieves (1.4) SDK

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
// 0x0028 (0x0724 - 0x06FC)
class ABP_CustomisableLadder_PointToPoint_C : public ABP_CustomisableLadder_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06FC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0700(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Ladder_Roll;                                              // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Ladder_Top_Target;                                        // 0x070C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Ladder_Bottom_Target;                                     // 0x0718(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C");
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
