#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FotD_RitualLocation_ContendedResource_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FotD_RitualLocation_ContendedResource.BP_FotD_RitualLocation_ContendedResource_C
// 0x0010 (0x03E0 - 0x03D0)
class ABP_FotD_RitualLocation_ContendedResource_C : public AActor
{
public:
	class UContendedResourceComponent*                 ContendedResource;                                        // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FotD_RitualLocation_ContendedResource.BP_FotD_RitualLocation_ContendedResource_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
