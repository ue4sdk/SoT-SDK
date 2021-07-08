#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CylinderLightingZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CylinderLightingZone.BP_CylinderLightingZone_C
// 0x0044 (0x0414 - 0x03D0)
class ABP_CylinderLightingZone_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           InnerCapsule;                                             // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           OuterCapsule;                                             // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULightingZoneComponent*                      LightingZone;                                             // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Outer_Radius;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Outer_Half_Height;                                        // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Inner_Radius;                                             // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Inner_Half_Height;                                        // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Priority_Layer;                                           // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Lighting_Set;                                             // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CylinderLightingZone.BP_CylinderLightingZone_C"));
		return ptr;
	}


	void DrawCylinder();
	void Update_3D_Lighting_Zone();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DrawDebugCylinder();
	void ClearDebugCylinder();
	void ExecuteUbergraph_BP_CylinderLightingZone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
