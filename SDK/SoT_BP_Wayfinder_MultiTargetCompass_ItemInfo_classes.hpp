#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Wayfinder_MultiTargetCompass_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Wayfinder_MultiTargetCompass_ItemInfo.BP_Wayfinder_MultiTargetCompass_ItemInfo_C
// 0x0011 (0x0561 - 0x0550)
class ABP_Wayfinder_MultiTargetCompass_ItemInfo_C : public AItemInfo
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x0560(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Wayfinder_MultiTargetCompass_ItemInfo.BP_Wayfinder_MultiTargetCompass_ItemInfo_C"));
		return ptr;
	}


	void OnRep_NewVar_1();
	void UserConstructionScript();
	void ExecuteUbergraph_BP_Wayfinder_MultiTargetCompass_ItemInfo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
