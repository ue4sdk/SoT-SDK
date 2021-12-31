#pragma once

// Sea of Thieves (2) SDK

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
	UClass*                                            TargetCompany;                                            // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<FMaterialVisualisation>                     MaterialChanges;                                          // 0x00D0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
	TArray<FLightVisualisation>                        LightChanges;                                             // 0x00F0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0100(0x0010) MISSED OFFSET
	TArray<FParticleVisualisation>                     ParticleChanges;                                          // 0x0110(0x0010) (Edit, ZeroConstructor)
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
// 0x0018 (0x0720 - 0x0708)
class AEmissaryFlotsamItemInfo : public ABootyItemInfo
{
public:
	FCompanySpecificBootyReward                        HandInOwnFlotsamReward;                                   // 0x0708(0x0018) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryFlotsamItemInfo"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent
// 0x0080 (0x0520 - 0x04A0)
class UEmissaryFlotsamItemSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x04A0(0x0080) MISSED OFFSET

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
	TArray<FEmissaryLevelEntry>                        EmissaryLevelData;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FEmissaryPointBoostMultipliers                     BoostMultiplers;                                          // 0x0038(0x0008) (Edit, DisableEditOnInstance)
	FEmissaryFlagMeshReferences                        DefaultEmissaryFlagAssetReferences;                       // 0x0040(0x0020) (Edit, DisableEditOnInstance)
	uint32_t                                           NumberOfCustomisedShipPartsToGainBoost;                   // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryLevelSettingsAsset"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryLevelService
// 0x02E8 (0x06B8 - 0x03D0)
class AEmissaryLevelService : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x03D0(0x00A0) MISSED OFFSET
	UEmissaryLevelSettingsAsset*                       Settings;                                                 // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData)
	UEmissaryRewardSettingsAsset*                      RewardSettings;                                           // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x238];                                     // 0x0480(0x0238) MISSED OFFSET

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
	UClass*                                            MaxRankQuestNotificationID;                               // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EActionDisplayPriority>                MaxRankQuestToolTipPriority;                              // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	FText                                              StartMaxRankQuestToolTipText;                             // 0x00D8(0x0038) (Edit, DisableEditOnInstance)
	FText                                              CannotStartMaxRankQuestToolTipText;                       // 0x0110(0x0038) (Edit, DisableEditOnInstance)
	FStringAssetReference                              QuestDesc;                                                // 0x0148(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UClass*                                            Company;                                                  // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryMaxRankQuestProvider"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryParticipantComponent
// 0x0048 (0x0110 - 0x00C8)
class UEmissaryParticipantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	int                                                EmissaryLevel;                                            // 0x00D0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              EmissaryLevelProgress;                                    // 0x00D4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	FName                                              AffiliatedCompany;                                        // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsAtMaxRank;                                              // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsEmissaryMaxRankQuestBeenActivatedThisSession;           // 0x00E1(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00E2(0x0006) MISSED OFFSET
	TArray<FMysteriousNotesCompletionEventsModelEntry> NoteCompletionIdents;                                     // 0x00E8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET
	FName                                              VotedCompany;                                             // 0x0108(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryParticipantComponent"));
		return ptr;
	}


	void OnRep_EmissaryLevel();
	void OnRep_AffiliatedCompany(const FName& PreviousId);
};


// Class EmissaryLevel.EmissaryRepresentationMeshComponent
// 0x0000 (0x05F0 - 0x05F0)
class UEmissaryRepresentationMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryRepresentationMeshComponent"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryRewardCampaignSettingsAsset
// 0x0010 (0x0038 - 0x0028)
class UEmissaryRewardCampaignSettingsAsset : public UDataAsset
{
public:
	TArray<FEmissaryCompanyCampaignSettings>           Companies;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryRewardCampaignSettingsAsset"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryRewardSettingsAsset
// 0x0020 (0x0048 - 0x0028)
class UEmissaryRewardSettingsAsset : public UDataAsset
{
public:
	TArray<FEmissaryRewardEntry>                       EmissaryRewardData;                                       // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              PlayerKilledExpiryTime;                                   // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	UEmissaryRewardCampaignSettingsAsset*              CampaignSettings;                                         // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryRewardSettingsAsset"));
		return ptr;
	}

};


// Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent
// 0x0070 (0x0320 - 0x02B0)
class UEmissaryShipAffiliationTrackerComponent : public USceneComponent
{
public:
	int                                                EmissaryCount;                                            // 0x02B0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	UClass*                                            TrackedCompany;                                           // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            EmissaryRepresentationMesh;                               // 0x02C0(0x0020) (Edit, DisableEditOnInstance)
	TArray<FTransform>                                 EmissaryRepresentationTransforms;                         // 0x02E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<UStaticMeshComponent*>                      EmissaryRepresentationMeshes;                             // 0x02F0(0x0010) (ExportObject, ZeroConstructor, Transient)
	UClass*                                            LoadedEmissaryRepresentationMesh;                         // 0x0300(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0308(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent"));
		return ptr;
	}


	void OnRep_EmissaryCount();
};


// Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase
// 0x00F8 (0x0128 - 0x0030)
class UEmissaryVoyageInlineVoteConsumerBase : public UVoteConsumerInlineBase
{
public:
	UEmissaryVoyageVoteValidatorBase*                  Validator;                                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET
	FText                                              VoyageCinematicHeader;                                    // 0x0080(0x0038) (Edit, DisableEditOnInstance)
	FName                                              VoyageCinematicTag;                                       // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET
	TArray<FCrewMemberVotes>                           Votes;                                                    // 0x00E0(0x0010) (Net, ZeroConstructor)
	UBoxedRpcDispatcherComponent*                      RpcDispatcher;                                            // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x00F8(0x0020) MISSED OFFSET
	AActor*                                            OwningActor;                                              // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase"));
		return ptr;
	}


	void OnRep_Votes();
};


// Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer
// 0x01A0 (0x02C8 - 0x0128)
class UStartEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
{
public:
	FText                                              EmissaryVotingCastVote;                                   // 0x0128(0x0038) (Edit, DisableEditOnInstance)
	FText                                              EmissaryVotingCantVote;                                   // 0x0160(0x0038) (Edit, DisableEditOnInstance)
	FText                                              EmissaryVotingCantVoteReasonCrewShipOutsideRange;         // 0x0198(0x0038) (Edit, DisableEditOnInstance)
	FText                                              EmissaryVotingCantVoteReasonNoEmissaryEntitlement;        // 0x01D0(0x0038) (Edit, DisableEditOnInstance)
	FText                                              EmissaryVotingCantVoteReasonHasActiveVoteForDifferentCompany;// 0x0208(0x0038) (Edit, DisableEditOnInstance)
	FText                                              EmissaryVotingRemoveVote;                                 // 0x0240(0x0038) (Edit, DisableEditOnInstance)
	FText                                              EmissaryVotingCantRemoveVote;                             // 0x0278(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x02B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer"));
		return ptr;
	}

};


// Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer
// 0x0168 (0x0290 - 0x0128)
class UStopEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
{
public:
	FText                                              EmissaryVotingCastVote;                                   // 0x0128(0x0038) (Edit, DisableEditOnInstance)
	FText                                              EmissaryVotingCantVote;                                   // 0x0160(0x0038) (Edit, DisableEditOnInstance)
	FText                                              EmissaryVotingCantVoteReasonCrewShipOutsideRange;         // 0x0198(0x0038) (Edit, DisableEditOnInstance)
	FText                                              EmissaryVotingCantVoteReasonActiveForDifferentCompany;    // 0x01D0(0x0038) (Edit, DisableEditOnInstance)
	FText                                              EmissaryVotingRemoveVote;                                 // 0x0208(0x0038) (Edit, DisableEditOnInstance)
	FText                                              EmissaryVotingCantRemoveVote;                             // 0x0240(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0278(0x0018) MISSED OFFSET

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
	UClass*                                            TargetCompany;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UClass*                                            RequiredEntitlement;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0040(0x0060) MISSED OFFSET
	UEmissaryVoyageInlineVoteConsumerBase*             Consumer;                                                 // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

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


// Class EmissaryLevel.IsAnEmissaryStatCondition
// 0x0000 (0x0030 - 0x0030)
class UIsAnEmissaryStatCondition : public UTargetedStatCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmissaryLevel.IsAnEmissaryStatCondition"));
		return ptr;
	}

};


// Class EmissaryLevel.IsEmissaryStatCondition
// 0x0010 (0x0038 - 0x0028)
class UIsEmissaryStatCondition : public UStatCondition
{
public:
	UClass*                                            RequiredEmissaryCompany;                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
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
