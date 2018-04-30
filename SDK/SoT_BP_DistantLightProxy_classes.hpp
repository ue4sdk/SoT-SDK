#pragma once

// Sea of Thieves (1.0.5) SDK

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
// 0x0028 (0x0498 - 0x0470)
class ABP_DistantLightProxy_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0470(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DistantLightProxy.BP_DistantLightProxy_C");
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
