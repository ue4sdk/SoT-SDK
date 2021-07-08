#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TheSunkenCrystal_DriveDownFloatingDebris_05_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TheSunkenCrystal_DriveDownFloatingDebris_05.BP_TheSunkenCrystal_DriveDownFloatingDebris_05_C
// 0x0040 (0x0728 - 0x06E8)
class ABP_TheSunkenCrystal_DriveDownFloatingDebris_05_C : public ABuoyantStorageContainer
{
public:
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint5;                              // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint4;                              // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint3;                              // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint2;                              // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint1;                              // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint;                               // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTelemetrySubjectComponent*                  TelemetrySubject;                                         // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TheSunkenCrystal_DriveDownFloatingDebris_05.BP_TheSunkenCrystal_DriveDownFloatingDebris_05_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
