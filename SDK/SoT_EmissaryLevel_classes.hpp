#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmissaryLevel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EmissaryLevel.EmissaryActionRewardBoostComponent
// 0x0010 (0x00D8 - 0x00C8)
class UEmissaryActionRewardBoostComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryActionRewardBoostComponent"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryActiveTableVisualiserComponent
// 0x0090 (0x0158 - 0x00C8)
class UEmissaryActiveTableVisualiserComponent : public UActorComponent
{
public:
	class UClass*                                      TargetCompany;                                            // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FMaterialVisualisation>              MaterialChanges;                                          // 0x00D0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
	TArray<struct FLightVisualisation>                 LightChanges;                                             // 0x00F0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0100(0x0010) MISSED OFFSET
	TArray<struct FParticleVisualisation>              ParticleChanges;                                          // 0x0110(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0120(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryActiveTableVisualiserComponent"));
		return ptr;
	}


	void OnControllerEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
};


// Class EmissaryLevel.EmissaryEntitlementCategory
// 0x0000 (0x0080 - 0x0080)
class UEmissaryEntitlementCategory : public UItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryEntitlementCategory"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryEntitlementDesc
// 0x0000 (0x00D8 - 0x00D8)
class UEmissaryEntitlementDesc : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryEntitlementDesc"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryFlotsamItemInfo
// 0x0018 (0x07E0 - 0x07C8)
class AEmissaryFlotsamItemInfo : public ABootyItemInfo
{
public:
	struct FCompanySpecificBootyReward                 HandInOwnFlotsamReward;                                   // 0x07C8(0x0018) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryFlotsamItemInfo"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent
// 0x0080 (0x04B0 - 0x0430)
class UEmissaryFlotsamItemSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0430(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryFlotsamTooltipCustomizerComponent
// 0x0028 (0x00F0 - 0x00C8)
class UEmissaryFlotsamTooltipCustomizerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	bool                                               CheckForDelivery;                                         // 0x00D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckForPickup;                                           // 0x00D9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x16];                                      // 0x00DA(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryFlotsamTooltipCustomizerComponent"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryLevelSettingsAsset
// 0x0040 (0x0068 - 0x0028)
class UEmissaryLevelSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryLevelEntry>                 EmissaryLevelData;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FEmissaryPointBoostMultipliers              BoostMultiplers;                                          // 0x0038(0x0008) (Edit, DisableEditOnInstance)
	struct FEmissaryFlagMeshReferences                 DefaultEmissaryFlagAssetReferences;                       // 0x0040(0x0020) (Edit, DisableEditOnInstance)
	uint32_t                                           NumberOfCustomisedShipPartsToGainBoost;                   // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryLevelSettingsAsset"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryLevelService
// 0x02B0 (0x0720 - 0x0470)
class AEmissaryLevelService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0470(0x0068) MISSED OFFSET
	class UEmissaryLevelSettingsAsset*                 Settings;                                                 // 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEmissaryRewardSettingsAsset*                RewardSettings;                                           // 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x238];                                     // 0x04E8(0x0238) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryLevelService"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryMaxRankQuestProvider
// 0x0098 (0x0160 - 0x00C8)
class UEmissaryMaxRankQuestProvider : public UActorComponent
{
public:
	class UClass*                                      MaxRankQuestNotificationID;                               // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EActionDisplayPriority>                MaxRankQuestToolTipPriority;                              // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FText                                       StartMaxRankQuestToolTipText;                             // 0x00D8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       CannotStartMaxRankQuestToolTipText;                       // 0x0110(0x0038) (Edit, DisableEditOnInstance)
	struct FStringAssetReference                       QuestDesc;                                                // 0x0148(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      Company;                                                  // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryMaxRankQuestProvider"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryParticipantComponent
// 0x0038 (0x0100 - 0x00C8)
class UEmissaryParticipantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	int                                                EmissaryLevel;                                            // 0x00D0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              EmissaryLevelProgress;                                    // 0x00D4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FName                                       AffiliatedCompany;                                        // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsAtMaxRank;                                              // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsEmissaryMaxRankQuestBeenActivatedThisSession;           // 0x00E1(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x16];                                      // 0x00E2(0x0016) MISSED OFFSET
	struct FName                                       VotedCompany;                                             // 0x00F8(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryParticipantComponent"));
		return ptr;
	}


	void OnRep_EmissaryLevel();
	void OnRep_AffiliatedCompany(const struct FName& PreviousId);
};


// Class EmissaryLevel.EmissaryRepresentationMeshComponent
// 0x0000 (0x05D0 - 0x05D0)
class UEmissaryRepresentationMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryRepresentationMeshComponent"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryRewardSettingsAsset
// 0x0018 (0x0040 - 0x0028)
class UEmissaryRewardSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryRewardEntry>                EmissaryRewardData;                                       // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              PlayerKilledExpiryTime;                                   // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryRewardSettingsAsset"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent
// 0x0070 (0x0300 - 0x0290)
class UEmissaryShipAffiliationTrackerComponent : public USceneComponent
{
public:
	class UClass*                                      TrackedCompany;                                           // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            EmissaryRepresentationMesh;                               // 0x0298(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FTransform>                          EmissaryRepresentationTransforms;                         // 0x02B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                EmissaryRepresentationMeshes;                             // 0x02C8(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UClass*                                      LoadedEmissaryRepresentationMesh;                         // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent"));
		return ptr;
	}


	void OnRep_EmissaryCount();
};


// Class EmissaryLevel.EmissaryVotingService
// 0x00F8 (0x0568 - 0x0470)
class AEmissaryVotingService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET
	TArray<struct FCrewMemberVotes>                    Votes;                                                    // 0x0480(0x0010) (Net, ZeroConstructor, Transient)
	class UBoxedRpcDispatcherComponent*                RpcDispatcher;                                            // 0x0490(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD0];                                      // 0x0498(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryVotingService"));
		return ptr;
	}


	void OnRep_Votes();
};


// Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase
// 0x00C8 (0x00F8 - 0x0030)
class UEmissaryVoyageInlineVoteConsumerBase : public UVoteConsumerInlineBase
{
public:
	class UEmissaryVoyageVoteValidatorBase*            Validator;                                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET
	struct FText                                       VoyageCinematicHeader;                                    // 0x0068(0x0038) (Edit, DisableEditOnInstance)
	struct FName                                       VoyageCinematicTag;                                       // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00A8(0x0048) MISSED OFFSET
	class AActor*                                      OwningActor;                                              // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase"));
		return ptr;
	}

};


// Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer
// 0x01A0 (0x0298 - 0x00F8)
class UStartEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
{
public:
	struct FText                                       EmissaryVotingCastVote;                                   // 0x00F8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVote;                                   // 0x0130(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonCrewShipOutsideRange;         // 0x0168(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonNoEmissaryEntitlement;        // 0x01A0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonHasActiveVoteForDifferentCompany;// 0x01D8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingRemoveVote;                                 // 0x0210(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantRemoveVote;                             // 0x0248(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0280(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer"));
		return ptr;
	}

};


// Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer
// 0x0168 (0x0260 - 0x00F8)
class UStopEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
{
public:
	struct FText                                       EmissaryVotingCastVote;                                   // 0x00F8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVote;                                   // 0x0130(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonCrewShipOutsideRange;         // 0x0168(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantVoteReasonActiveForDifferentCompany;    // 0x01A0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingRemoveVote;                                 // 0x01D8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       EmissaryVotingCantRemoveVote;                             // 0x0210(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0248(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryVoyageVoteValidatorBase
// 0x0078 (0x00A8 - 0x0030)
class UEmissaryVoyageVoteValidatorBase : public UVoteValidatorInlineBase
{
public:
	class UClass*                                      TargetCompany;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RequiredEntitlement;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0040(0x0060) MISSED OFFSET
	class UEmissaryVoyageInlineVoteConsumerBase*       Consumer;                                                 // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryVoyageVoteValidatorBase"));
		return ptr;
	}

};


// Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator
// 0x0000 (0x00A8 - 0x00A8)
class UStartEmissaryVoyageInlineVoteValidator : public UEmissaryVoyageVoteValidatorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator"));
		return ptr;
	}

};


// Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator
// 0x0000 (0x00A8 - 0x00A8)
class UStopEmissaryVoyageInlineVoteValidator : public UEmissaryVoyageVoteValidatorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator"));
		return ptr;
	}

};


// Class EmissaryLevel.IsEmissaryStatCondition
// 0x0010 (0x0038 - 0x0028)
class UIsEmissaryStatCondition : public UStatCondition
{
public:
	class UClass*                                      RequiredEmissaryCompany;                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresMaxEmissaryLevel;                                 // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.IsEmissaryStatCondition"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
