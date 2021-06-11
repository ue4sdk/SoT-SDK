#pragma once

// Sea of Thieves (2.1) SDK

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
// 0x003C (0x046C - 0x0430)
class ABP_LightingZone_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            InnerSphere;                                              // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            OuterSphere;                                              // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULightingZoneComponent*                      LightingZone;                                             // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Outer_Radius;                                             // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Inner_Radius;                                             // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Priority_Layer;                                           // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Lighting_Set;                                             // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LightingZone.BP_LightingZone_C"));
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
