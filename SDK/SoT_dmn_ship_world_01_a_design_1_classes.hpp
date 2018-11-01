#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_dmn_ship_world_01_a_design_1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass dmn_ship_world_01_a_design_1.dmn_ship_world_01_a_design_C
// 0x0040 (0x04D8 - 0x0498)
class Admn_ship_world_01_a_design_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_WellOfFates_C*                           BP_WellOfFates_ExecuteUbergraph_dmn_ship_world_01_a_design_RefProperty;// 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          ghosthands6_ExecuteUbergraph_dmn_ship_world_01_a_design_RefProperty;// 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          ghosthands1_ExecuteUbergraph_dmn_ship_world_01_a_design_RefProperty;// 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          ghosthands2_ExecuteUbergraph_dmn_ship_world_01_a_design_RefProperty;// 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          ghosthands3_ExecuteUbergraph_dmn_ship_world_01_a_design_RefProperty;// 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          ghosthands4_ExecuteUbergraph_dmn_ship_world_01_a_design_RefProperty;// 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          ghosthands5_ExecuteUbergraph_dmn_ship_world_01_a_design_RefProperty;// 0x04D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass dmn_ship_world_01_a_design_1.dmn_ship_world_01_a_design_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_dmn_ship_world_01_a_design(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
