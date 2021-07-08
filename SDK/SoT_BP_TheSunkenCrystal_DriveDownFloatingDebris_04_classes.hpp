#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TheSunkenCrystal_DriveDownFloatingDebris_04_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TheSunkenCrystal_DriveDownFloatingDebris_04.BP_TheSunkenCrystal_DriveDownFloatingDebris_04_C
// 0x0070 (0x0758 - 0x06E8)
class ABP_TheSunkenCrystal_DriveDownFloatingDebris_04_C : public ABuoyantStorageContainer
{
public:
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint11;                             // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint10;                             // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint9;                              // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint8;                              // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint7;                              // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint6;                              // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint5;                              // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint4;                              // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint3;                              // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint2;                              // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint1;                              // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint;                               // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTelemetrySubjectComponent*                  TelemetrySubject;                                         // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TheSunkenCrystal_DriveDownFloatingDebris_04.BP_TheSunkenCrystal_DriveDownFloatingDebris_04_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
