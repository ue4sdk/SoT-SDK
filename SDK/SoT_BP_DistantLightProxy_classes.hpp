#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DistantLightProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DistantLightProxy.BP_DistantLightProxy_C
// 0x0028 (0x03F8 - 0x03D0)
class ABP_DistantLightProxy_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                      // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPointLightProxy>                    LightList;                                                // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DistantLightProxy.BP_DistantLightProxy_C"));
		return ptr;
	}


	void FindExistingLight(const class FString& Name, bool* Result, int* Index);
	void Create_Lights();
	void UserConstructionScript();
	void Add_Light(const struct FVector& Location, float Size, class UMaterialInterface* Material, const class FString& Name);
	void ExecuteUbergraph_BP_DistantLightProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
