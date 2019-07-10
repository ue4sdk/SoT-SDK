#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AIShipWheel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AIShipWheel.BP_AIShipWheel_C
// 0x0018 (0x0618 - 0x0600)
class ABP_AIShipWheel_C : public AAIDockableWheel
{
public:
	class UPlayerNameplateLocationOverrideComponent*   PlayerNameplateLocationOverride;                          // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DockLocation;                                             // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AIShipWheel.BP_AIShipWheel_C"));
		return ptr;
	}


	struct FDockableInfo GetDockableInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
