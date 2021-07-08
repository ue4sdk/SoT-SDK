#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TheSunkenCrystal_DriveDownFloatingDebris_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TheSunkenCrystal_DriveDownFloatingDebris_03.BP_TheSunkenCrystal_DriveDownFloatingDebris_03_C
// 0x00E0 (0x07C8 - 0x06E8)
class ABP_TheSunkenCrystal_DriveDownFloatingDebris_03_C : public ABuoyantStorageContainer
{
public:
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint25;                             // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint24;                             // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint23;                             // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint22;                             // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint21;                             // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint20;                             // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint19;                             // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint18;                             // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint17;                             // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint16;                             // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint15;                             // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint14;                             // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint13;                             // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint12;                             // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint11;                             // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint10;                             // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint9;                              // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint8;                              // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint7;                              // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint6;                              // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint5;                              // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint4;                              // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint3;                              // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint2;                              // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint1;                              // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint;                               // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTelemetrySubjectComponent*                  TelemetrySubject;                                         // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TheSunkenCrystal_DriveDownFloatingDebris_03.BP_TheSunkenCrystal_DriveDownFloatingDebris_03_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
