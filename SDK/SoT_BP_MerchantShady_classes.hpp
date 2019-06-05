#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantShady_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantShady.BP_MerchantShady_C
// 0x0040 (0x05D8 - 0x0598)
class ABP_MerchantShady_C : public ACompanyShopkeeper
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0598(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           SolidHits;                                                // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialogSellCrate;                                       // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMerchantCrateProviderComponent*             MerchantCrateProvider;                                    // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      cmp_pocket_watch_mrh_01_e;                                // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantShady.BP_MerchantShady_C"));
		return ptr;
	}


	void UserConstructionScript();
	void PlayItemAnimation();
	void ExecuteUbergraph_BP_MerchantShady(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
