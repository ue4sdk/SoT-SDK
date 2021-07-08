#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OceanCrawlersAnimation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OceanCrawlersAnimation.OceanCrawlerAnimationData
// 0x0090 (0x00B8 - 0x0028)
class UOceanCrawlerAnimationData : public UAnimationData
{
public:
	struct FOceanCrawlerAnimationDataStructure         OceanCrawlerAnimationDataStructure;                       // 0x0028(0x0090) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OceanCrawlersAnimation.OceanCrawlerAnimationData"));
		return ptr;
	}

};


// Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance
// 0x02E0 (0x0720 - 0x0440)
class UOceanCrawlerAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0440(0x0018) MISSED OFFSET
	struct FOceanCrawlerAnimationDataStructure         LoadedAnimations;                                         // 0x0458(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FActorVelocityData                          MovementData;                                             // 0x04E8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              CurrentDirection;                                         // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	struct FAthenaAnimationWeapon                      AttackAnims;                                              // 0x0508(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	bool                                               UseDefaultAnimations;                                     // 0x05C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AnimationsLoaded;                                         // 0x05C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SporeBreathActive;                                        // 0x05C2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x05C3(0x0001) MISSED OFFSET
	struct FName                                       PropAttachmentSocket;                                     // 0x05C4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	struct FCustomAnimationMontageStateMachine         MontagePlayer;                                            // 0x05D0(0x00D8)
	struct FHitReactionAnimationState                  HitReacts;                                                // 0x06A8(0x0028) (BlueprintVisible)
	unsigned char                                      UnknownData04[0x50];                                      // 0x06D0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance"));
		return ptr;
	}


	void ClearActiveAttack();
	void BeginNewAttack();
};


// Class OceanCrawlersAnimation.OceanCrawlerAnimationServerData
// 0x0020 (0x0048 - 0x0028)
class UOceanCrawlerAnimationServerData : public UAnimationServerData
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UClass*                                      AnimInstanceType;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpawnAnimDuration;                                     // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              MaxSpawnOnShipAnimDuration;                               // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              MaxSpawnBoardingAnimDuration;                             // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class OceanCrawlersAnimation.OceanCrawlerAnimationServerData"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
