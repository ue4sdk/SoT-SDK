#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AshenTomeVol1_03_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AshenTomeVol1_03_ItemInfo.BP_AshenTomeVol1_03_ItemInfo_C
// 0x0010 (0x07C0 - 0x07B0)
class ABP_AshenTomeVol1_03_ItemInfo_C : public ABootyItemInfo
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AshenTomeVol1_03_ItemInfo.BP_AshenTomeVol1_03_ItemInfo_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AshenTomeVol1_03_ItemInfo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
