#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SkeletonFortStorageBarrel_Cannonball_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkeletonFortStorageBarrel_Cannonball_DVR.BP_SkeletonFortStorageBarrel_Cannonball_DVR_C
// 0x0018 (0x0568 - 0x0550)
class ABP_SkeletonFortStorageBarrel_Cannonball_DVR_C : public AStorageContainer
{
public:
	class UReplenishableComponent*                     Replenishable;                                            // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UIslandTelemetrySubjectComponent*            IslandTelemetrySubject;                                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SkeletonFortStorageBarrel_Cannonball_DVR.BP_SkeletonFortStorageBarrel_Cannonball_DVR_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
