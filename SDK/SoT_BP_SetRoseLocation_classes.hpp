#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SetRoseLocation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SetRoseLocation.BP_SetRoseLocation_C
// 0x0018 (0x00B0 - 0x0098)
class UBP_SetRoseLocation_C : public UBlueprintStepBase
{
public:
	class UClass*                                      Pendant;                                                  // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Rose;                                                     // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      RoseLocation;                                             // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SetRoseLocation.BP_SetRoseLocation_C"));
		return ptr;
	}


	void OnBeginCustom(TArray<TAssetPtr<class AActor>>* PendantLocations, class AActor** RoseLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
