#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Pig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Pig.BP_Pig_C
// 0x0028 (0x0B58 - 0x0B30)
class ABP_Pig_C : public ABP_Fauna_C
{
public:
	class UNoiseMakerComponent*                        NoiseMaker;                                               // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIItemSpawnComponent*                       AIItemSpawn;                                              // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFeedingComponent*                           Feeding;                                                  // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStarvingComponent*                          Starving;                                                 // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Pig_SkeletalMesh;                                         // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Pig.BP_Pig_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
