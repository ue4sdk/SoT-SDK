#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Placement_HeightDrop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Placement_HeightDrop.BP_Placement_HeightDrop_C
// 0x0040 (0x04F0 - 0x04B0)
class ABP_Placement_HeightDrop_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Drop_Components_to_Floor;                                 // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04B9(0x0003) MISSED OFFSET
	float                                              Vertical_Displacement;                                    // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Match_Surface_Orientation;                                // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	float                                              Maximum_Deviation_Angle;                                  // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     ComponentsToDrop;                                         // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Check_For_Movable_Components;                             // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CreateParentBoundsVolume;                                 // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04DA(0x0002) MISSED OFFSET
	float                                              ParentBoundsPadding;                                      // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UPhysicalMaterial*>                   Physical_Materials_To_Ignore;                             // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Placement_HeightDrop.BP_Placement_HeightDrop_C"));
		return ptr;
	}


	void CreateComponentList();
	void CreateParentBounds();
	void CheckMobilityState();
	void Get_Valid_Collision(bool Hit_Success, class USceneComponent* Current_Component, TArray<struct FHitResult>* Hit_Results, bool* Return_Value, struct FVector* Impact_Position, struct FVector* Impact_Normal);
	void Drop_Components();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
