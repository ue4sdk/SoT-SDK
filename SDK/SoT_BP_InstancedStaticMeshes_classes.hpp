#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_InstancedStaticMeshes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_InstancedStaticMeshes.BP_InstancedStaticMeshes_C
// 0x001C (0x0494 - 0x0478)
class ABP_InstancedStaticMeshes_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FInstance_Struct>                    Instances;                                                // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DrawDistance;                                             // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InstancedStaticMeshes.BP_InstancedStaticMeshes_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
