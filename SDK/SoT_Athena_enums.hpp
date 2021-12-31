#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Athena.EHealthChangedReason
enum class EHealthChangedReason : uint8_t
{
	EHealthChangedReason__NoChange = 0,
	EHealthChangedReason__Test     = 1,
	EHealthChangedReason__Reset    = 2,
	EHealthChangedReason__CannonProjectile = 3,
	EHealthChangedReason__CannonBallSplashDamage = 4,
	EHealthChangedReason__FallDamage = 5,
	EHealthChangedReason__HealedFromFood = 6,
	EHealthChangedReason__Drowning = 7,
	EHealthChangedReason__DamagedBySwimmingCreature = 8,
	EHealthChangedReason__StruckByLightning = 9,
	EHealthChangedReason__Blunderbuss_Default = 10,
	EHealthChangedReason__Pistol_Default = 11,
	EHealthChangedReason__EyeOfReach_Default = 12,
	EHealthChangedReason__Cutlass  = 13,
	EHealthChangedReason__GunpowderBarrelExplosion = 14,
	EHealthChangedReason__IngestedByKrakenTentacle = 15,
	EHealthChangedReason__PowerSlammedByKrakenTentacle = 16,
	EHealthChangedReason__StarvedToDeath = 17,
	EHealthChangedReason__SkeletonFormsHeal = 18,
	EHealthChangedReason__Venom    = 19,
	EHealthChangedReason__Fire     = 20,
	EHealthChangedReason__Emote    = 21,
	EHealthChangedReason__TinySharkBite = 22,
	EHealthChangedReason__SunkenCurseSelfHeal = 23,
	EHealthChangedReason__SunkenCurseDamage = 24,
	EHealthChangedReason__TinySharkRespawn = 25,
	EHealthChangedReason__Lava     = 26,
	EHealthChangedReason__Boiling  = 27,
	EHealthChangedReason__StateTransfer = 28,
	EHealthChangedReason__Fragile  = 29,
	EHealthChangedReason__Rainfall = 30,
	EHealthChangedReason__Submerged = 31,
	EHealthChangedReason__LiquidProjectile = 32,
	EHealthChangedReason__Dry      = 33,
	EHealthChangedReason__StrainDamage = 34,
	EHealthChangedReason__VolcanoInstantKill = 35,
	EHealthChangedReason__VolcanicRock = 36,
	EHealthChangedReason__DevilsShroud = 37,
	EHealthChangedReason__Regeneration = 38,
	EHealthChangedReason__HarpoonProjectile = 39,
	EHealthChangedReason__Mechanism = 40,
	EHealthChangedReason__KnockbackAIAbility = 41,
	EHealthChangedReason__SpikePit = 42,
	EHealthChangedReason__ChestOfRage = 43,
	EHealthChangedReason__Scalded  = 44,
	EHealthChangedReason__Geyser   = 45,
	EHealthChangedReason__Flamethrower = 46,
	EHealthChangedReason__AshenLordFireBreath = 47,
	EHealthChangedReason__AshenWindsSkull = 48,
	EHealthChangedReason__AshenWindsSkullCharge = 49,
	EHealthChangedReason__Revive   = 50,
	EHealthChangedReason__HealedByAbility = 51,
	EHealthChangedReason__Shocked  = 52,
	EHealthChangedReason__Siren    = 53,
	EHealthChangedReason__KrakenBite = 54,
	EHealthChangedReason__Firework = 55,
	EHealthChangedReason__Sleeping = 56,
	EHealthChangedReason__MAX      = 57,
	EHealthChangedReason__EHealthChangedReason_MAX = 58
};


// Enum Athena.EShipPartCustomizationErrorCode
enum class EShipPartCustomizationErrorCode : uint8_t
{
	EShipPartCustomizationErrorCode__AlreadyInProgress = 0,
	EShipPartCustomizationErrorCode__FailedToCustomize = 1,
	EShipPartCustomizationErrorCode__InvalidParameters = 2,
	EShipPartCustomizationErrorCode__EShipPartCustomizationErrorCode_MAX = 3
};


// Enum Athena.ERequestState
enum class ERequestState : uint8_t
{
	ERequestState__Invalid         = 0,
	ERequestState__Waiting         = 1,
	ERequestState__Complete        = 2,
	ERequestState__Timeout         = 3,
	ERequestState__Cancelled       = 4,
	ERequestState__ERequestState_MAX = 5
};


// Enum Athena.EPointSelectionMethod
enum class EPointSelectionMethod : uint8_t
{
	EPointSelectionMethod__GetRandom = 0,
	EPointSelectionMethod__GetFirst = 1,
	EPointSelectionMethod__EPointSelectionMethod_MAX = 2
};


// Enum Athena.ESpaceType
enum class ESpaceType : uint8_t
{
	ESpaceType__WorldSpace         = 0,
	ESpaceType__LocalSpace         = 1,
	ESpaceType__ESpaceType_MAX     = 2
};


// Enum Athena.EProjectileCollisionResponse
enum class EProjectileCollisionResponse : uint8_t
{
	EProjectileCollisionResponse__Ignore = 0,
	EProjectileCollisionResponse__Block = 1,
	EProjectileCollisionResponse__EProjectileCollisionResponse_MAX = 2
};


// Enum Athena.ESprintLockReason
enum class ESprintLockReason : uint8_t
{
	ESprintLockReason__WieldedItem = 0,
	ESprintLockReason__WieldedItemAction = 1,
	ESprintLockReason__Environment = 2,
	ESprintLockReason__ESprintLockReason_MAX = 3
};


// Enum Athena.ESwimAttackableType
enum class ESwimAttackableType : uint8_t
{
	ESwimAttackableType__TakesDamage = 0,
	ESwimAttackableType__SmallItem = 1,
	ESwimAttackableType__LargeItem = 2,
	ESwimAttackableType__ESwimAttackableType_MAX = 3
};


// Enum Athena.EAllianceStatus
enum class EAllianceStatus : uint8_t
{
	EAllianceStatus__IsInAlliance  = 0,
	EAllianceStatus__IsNotInAlliance = 1,
	EAllianceStatus__EAllianceStatus_MAX = 2
};


// Enum Athena.ENPCCustomAnimationState
enum class ENPCCustomAnimationState : uint8_t
{
	ENPCCustomAnimationState__None = 0,
	ENPCCustomAnimationState__InOneShot = 1,
	ENPCCustomAnimationState__InContinuousIn = 2,
	ENPCCustomAnimationState__InContinuousLoopA = 3,
	ENPCCustomAnimationState__InContinuousLoopB = 4,
	ENPCCustomAnimationState__InContinuousOut = 5,
	ENPCCustomAnimationState__ENPCCustomAnimationState_MAX = 6
};


// Enum Athena.EAthenaNPCObjectSlot
enum class EAthenaNPCObjectSlot : uint8_t
{
	EAthenaNPCObjectSlot__Slot     = 0,
	EAthenaNPCObjectSlot__Slot01   = 1,
	EAthenaNPCObjectSlot__Slot02   = 2,
	EAthenaNPCObjectSlot__Slot03   = 3,
	EAthenaNPCObjectSlot__Slot04   = 4,
	EAthenaNPCObjectSlot__Slot05   = 5,
	EAthenaNPCObjectSlot__Slot06   = 6,
	EAthenaNPCObjectSlot__Slot07   = 7,
	EAthenaNPCObjectSlot__Slot08   = 8,
	EAthenaNPCObjectSlot__Slot09   = 9,
	EAthenaNPCObjectSlot__Slot_MAX = 10
};


// Enum Athena.EAthenaNPCSpawnHand
enum class EAthenaNPCSpawnHand : uint8_t
{
	EAthenaNPCSpawnHand__Left      = 0,
	EAthenaNPCSpawnHand__Right     = 1,
	EAthenaNPCSpawnHand__EAthenaNPCSpawnHand_MAX = 2
};


// Enum Athena.EAnimNotifyUnderwaterMode
enum class EAnimNotifyUnderwaterMode : uint8_t
{
	EAnimNotifyUnderwaterMode__AutoDetect = 0,
	EAnimNotifyUnderwaterMode__AlwaysUnder = 1,
	EAnimNotifyUnderwaterMode__AlwaysAbove = 2,
	EAnimNotifyUnderwaterMode__EAnimNotifyUnderwaterMode_MAX = 3
};


// Enum Athena.EMeleeSpecialState
enum class EMeleeSpecialState : uint8_t
{
	EMeleeSpecialState__None       = 0,
	EMeleeSpecialState__Lunge      = 1,
	EMeleeSpecialState__Knockback  = 2,
	EMeleeSpecialState__Stunned    = 3,
	EMeleeSpecialState__Dodge      = 4,
	EMeleeSpecialState__MAX        = 5,
	EMeleeSpecialState__EMeleeSpecialState_MAX = 6
};


// Enum Athena.ESkeletonShipCaptainDockedAnimationState
enum class ESkeletonShipCaptainDockedAnimationState : uint8_t
{
	ESkeletonShipCaptainDockedAnimationState__None = 0,
	ESkeletonShipCaptainDockedAnimationState__Taunt = 1,
	ESkeletonShipCaptainDockedAnimationState__Ram = 2,
	ESkeletonShipCaptainDockedAnimationState__RamImpact = 3,
	ESkeletonShipCaptainDockedAnimationState__ESkeletonShipCaptainDockedAnimationState_MAX = 4
};


// Enum Athena.ESkeletonActiveAnimSystem
enum class ESkeletonActiveAnimSystem : uint8_t
{
	ESkeletonActiveAnimSystem__Sensing = 0,
	ESkeletonActiveAnimSystem__EmoteAction = 1,
	ESkeletonActiveAnimSystem__ESkeletonActiveAnimSystem_MAX = 2
};


// Enum Athena.ESkeletonEmoteActionState
enum class ESkeletonEmoteActionState : uint8_t
{
	ESkeletonEmoteActionState__None = 0,
	ESkeletonEmoteActionState__Taunt = 1,
	ESkeletonEmoteActionState__Cheer = 2,
	ESkeletonEmoteActionState__ESkeletonEmoteActionState_MAX = 3
};


// Enum Athena.ESkeletonSensingState
enum class ESkeletonSensingState : uint8_t
{
	ESkeletonSensingState__None    = 0,
	ESkeletonSensingState__InitialReaction = 1,
	ESkeletonSensingState__Searching = 2,
	ESkeletonSensingState__AlertingOthers = 3,
	ESkeletonSensingState__Pursuit = 4,
	ESkeletonSensingState__ESkeletonSensingState_MAX = 5
};


// Enum Athena.EKnockbackAnimDirection
enum class EKnockbackAnimDirection : uint8_t
{
	EKnockbackAnimDirection__Forwards = 0,
	EKnockbackAnimDirection__Backwards = 1,
	EKnockbackAnimDirection__EKnockbackAnimDirection_MAX = 2
};


// Enum Athena.EStunAnimationType
enum class EStunAnimationType : uint8_t
{
	EStunAnimationType__None       = 0,
	EStunAnimationType__Normal     = 1,
	EStunAnimationType__ShadowSkeletonLightExposure = 2,
	EStunAnimationType__SkeletonDrunk = 3,
	EStunAnimationType__SkeletonDance = 4,
	EStunAnimationType__SkeletonSleep = 5,
	EStunAnimationType__EStunAnimationType_MAX = 6
};


// Enum Athena.EArmOverlayState
enum class EArmOverlayState : uint8_t
{
	EArmOverlayState__Idle         = 0,
	EArmOverlayState__Locomotion   = 1,
	EArmOverlayState__Swimming     = 2,
	EArmOverlayState__Turning      = 3,
	EArmOverlayState__JumpingStart = 4,
	EArmOverlayState__JumpingCycle = 5,
	EArmOverlayState__JumpingPreImpact = 6,
	EArmOverlayState__JumpingLandLight = 7,
	EArmOverlayState__Equipping    = 8,
	EArmOverlayState__UnEquipping  = 9,
	EArmOverlayState__OneShotAction = 10,
	EArmOverlayState__ContinuousActionIn = 11,
	EArmOverlayState__ContinuousActionCycle = 12,
	EArmOverlayState__ContinuousActionOut = 13,
	EArmOverlayState__ContinuousActionLocomotion = 14,
	EArmOverlayState__ContinuousActionJumpStart = 15,
	EArmOverlayState__ContinuousActionJumpCycle = 16,
	EArmOverlayState__ContinuousActionJumpPreImpact = 17,
	EArmOverlayState__ContinuousActionJumpLandLight = 18,
	EArmOverlayState__ContinuousActionSwimming = 19,
	EArmOverlayState__ComplexOneShotWarmUp = 20,
	EArmOverlayState__ComplexOneShotAction = 21,
	EArmOverlayState__ComplexOneShotRecover = 22,
	EArmOverlayState__BlockingInto = 23,
	EArmOverlayState__BlockingLocomotion = 24,
	EArmOverlayState__BlockingFeedbackA = 25,
	EArmOverlayState__BlockingFeedbackB = 26,
	EArmOverlayState__BlockingOutOf = 27,
	EArmOverlayState__Force_FullBody = 28,
	EArmOverlayState__Force_UpperBody = 29,
	EArmOverlayState__Force_2H     = 30,
	EArmOverlayState__EArmOverlayState_MAX = 31
};


// Enum Athena.EOceanCrawlerAIType
enum class EOceanCrawlerAIType : uint8_t
{
	EOceanCrawlerAIType__OceanCrawler = 0,
	EOceanCrawlerAIType__Crab      = 1,
	EOceanCrawlerAIType__Eel       = 2,
	EOceanCrawlerAIType__Hermit    = 3,
	EOceanCrawlerAIType__EOceanCrawlerAIType_MAX = 4
};


// Enum Athena.ECharacterSwimmingMode
enum class ECharacterSwimmingMode : uint8_t
{
	ECharacterSwimmingMode__Surface = 0,
	ECharacterSwimmingMode__Submerged = 1,
	ECharacterSwimmingMode__Total  = 2,
	ECharacterSwimmingMode__ECharacterSwimmingMode_MAX = 3
};


// Enum Athena.EAICharacterMaxSpeedModificationReason
enum class EAICharacterMaxSpeedModificationReason : uint8_t
{
	EAICharacterMaxSpeedModificationReason__SkeletonFormsConstant = 0,
	EAICharacterMaxSpeedModificationReason__SkeletonFormsEffects = 1,
	EAICharacterMaxSpeedModificationReason__SkeletonLimpCurse = 2,
	EAICharacterMaxSpeedModificationReason__EAICharacterMaxSpeedModificationReason_MAX = 3
};


// Enum Athena.EVoyageLocationType
enum class EVoyageLocationType : uint8_t
{
	EVoyageLocationType__Fixed     = 0,
	EVoyageLocationType__Random    = 1,
	EVoyageLocationType__Closest   = 2,
	EVoyageLocationType__EVoyageLocationType_MAX = 3
};


// Enum Athena.EFlameOfFateType
enum class EFlameOfFateType : uint8_t
{
	EFlameOfFateType__Default      = 0,
	EFlameOfFateType__Cursed       = 1,
	EFlameOfFateType__DiedByShark  = 2,
	EFlameOfFateType__DiedByVolcano = 3,
	EFlameOfFateType__DiedBySkeleton = 4,
	EFlameOfFateType__DiedByLightning = 5,
	EFlameOfFateType__DiedByVenom  = 6,
	EFlameOfFateType__DiedByPlayer = 7,
	EFlameOfFateType__MAX          = 8,
	EFlameOfFateType__EFlameOfFateType_MAX = 9
};


// Enum Athena.EReapersMarkTrackedBootyItemType
enum class EReapersMarkTrackedBootyItemType : uint8_t
{
	EReapersMarkTrackedBootyItemType__None = 0,
	EReapersMarkTrackedBootyItemType__GenericBooty = 1,
	EReapersMarkTrackedBootyItemType__FOTDKey = 2,
	EReapersMarkTrackedBootyItemType__ReapersBounty = 3,
	EReapersMarkTrackedBootyItemType__DoubloonReapersChest = 4,
	EReapersMarkTrackedBootyItemType__LegendaryFortKey = 5,
	EReapersMarkTrackedBootyItemType__EReapersMarkTrackedBootyItemType_MAX = 6
};


// Enum Athena.EReapersMarkTrackedVoyageType
enum class EReapersMarkTrackedVoyageType : uint8_t
{
	EReapersMarkTrackedVoyageType__None = 0,
	EReapersMarkTrackedVoyageType__NonAllianceVoyage = 1,
	EReapersMarkTrackedVoyageType__AllianceVoyage = 2,
	EReapersMarkTrackedVoyageType__EReapersMarkTrackedVoyageType_MAX = 3
};


// Enum Athena.EVoyageDisplayState
enum class EVoyageDisplayState : uint8_t
{
	Default                        = 0,
	Proposed                       = 1,
	EVoyageDisplayState_MAX        = 2
};


// Enum Athena.EOverlapType
enum class EOverlapType : uint8_t
{
	EOverlapType__PhysX            = 0,
	EOverlapType__SimpleOverlaps   = 1,
	EOverlapType__Ticking          = 2,
	EOverlapType__EOverlapType_MAX = 3
};


// Enum Athena.ECharacterFootImpactType
enum class ECharacterFootImpactType : uint8_t
{
	ECharacterFootImpactType__None = 0,
	ECharacterFootImpactType__Walk = 1,
	ECharacterFootImpactType__Jump = 2,
	ECharacterFootImpactType__Pace = 3,
	ECharacterFootImpactType__ECharacterFootImpactType_MAX = 4
};


// Enum Athena.EFlameColourType
enum class EFlameColourType : uint8_t
{
	EFlameColourType__Light        = 0,
	EFlameColourType__FX           = 1,
	EFlameColourType__Glow         = 2,
	EFlameColourType__Flame        = 3,
	EFlameColourType__EFlameColourType_MAX = 4
};


// Enum Athena.EBlendedFadeState
enum class EBlendedFadeState : uint8_t
{
	EBlendedFadeState__FadingIn    = 0,
	EBlendedFadeState__FadingOut   = 1,
	EBlendedFadeState__Active      = 2,
	EBlendedFadeState__Idle        = 3,
	EBlendedFadeState__EBlendedFadeState_MAX = 4
};


// Enum Athena.EQuestBookPageRenderingMode
enum class EQuestBookPageRenderingMode : uint8_t
{
	EQuestBookPageRenderingMode__NoPagesRendered = 0,
	EQuestBookPageRenderingMode__DrawLeftPageAsCurrentOnly = 1,
	EQuestBookPageRenderingMode__DrawLeftPageAsPreviousAndRightPageAsCurrent = 2,
	EQuestBookPageRenderingMode__DrawLeftPageAsCurrentAndRightPageAsNext = 3,
	EQuestBookPageRenderingMode__EQuestBookPageRenderingMode_MAX = 4
};


// Enum Athena.EBT_ShipOwnership
enum class EBT_ShipOwnership : uint8_t
{
	EBT_ShipOwnership__Any         = 0,
	EBT_ShipOwnership__Crew        = 1,
	EBT_ShipOwnership__Alliance    = 2,
	EBT_ShipOwnership__AI          = 3,
	EBT_ShipOwnership__EBT_MAX     = 4
};


// Enum Athena.ECannonInteractionState
enum class ECannonInteractionState : uint8_t
{
	ECannonInteractionState__AllInteractions = 0,
	ECannonInteractionState__AimingEnabledLoadingDisabled = 1,
	ECannonInteractionState__LoadingEnabledAimingDisabled = 2,
	ECannonInteractionState__NoInteractions = 3,
	ECannonInteractionState__ECannonInteractionState_MAX = 4
};


// Enum Athena.EShipCurseTag
enum class EShipCurseTag : uint8_t
{
	EShipCurseTag__None            = 0,
	EShipCurseTag__Ballast         = 1,
	EShipCurseTag__Barrel          = 2,
	EShipCurseTag__Capstan         = 3,
	EShipCurseTag__Helm            = 4,
	EShipCurseTag__Rigging         = 5,
	EShipCurseTag__Peace           = 6,
	EShipCurseTag__EShipCurseTag_MAX = 7
};


// Enum Athena.ECurseTag
enum class ECurseTag : uint8_t
{
	ECurseTag__None                = 0,
	ECurseTag__ToggleInteractionsForCapstan = 1,
	ECurseTag__ToggleInteractionsForShipStorageContainers = 2,
	ECurseTag__ToggleInteractionsForRigging = 3,
	ECurseTag__ToggleInteractionsForShipCannons = 4,
	ECurseTag__ToggleLockOnWheel   = 5,
	ECurseTag__ECurseTag_MAX       = 6
};


// Enum Athena.EShipSurfacingState
enum class EShipSurfacingState : uint8_t
{
	EShipSurfacingState__Sailing   = 0,
	EShipSurfacingState__Surfacing = 1,
	EShipSurfacingState__Diving    = 2,
	EShipSurfacingState__EShipSurfacingState_MAX = 3
};


// Enum Athena.EContainerType
enum class EContainerType : uint8_t
{
	EContainerType__None           = 0,
	EContainerType__Bucket         = 1,
	EContainerType__Stomach        = 2,
	EContainerType__Kraken         = 3,
	EContainerType__Total          = 4,
	EContainerType__EContainerType_MAX = 5
};


// Enum Athena.EThrowableLiquidType
enum class EThrowableLiquidType : uint8_t
{
	EThrowableLiquidType__Empty    = 0,
	EThrowableLiquidType__Water    = 1,
	EThrowableLiquidType__Vomit    = 2,
	EThrowableLiquidType__BoilingWater = 3,
	EThrowableLiquidType__Total    = 4,
	EThrowableLiquidType__EThrowableLiquidType_MAX = 5
};


// Enum Athena.EBucketProjectileDestination
enum class EBucketProjectileDestination : uint8_t
{
	EBucketProjectileDestination__Ahead = 0,
	EBucketProjectileDestination__AtWielder = 1,
	EBucketProjectileDestination__Max = 2,
	EBucketProjectileDestination__EBucketProjectileDestination_MAX = 3
};


// Enum Athena.EBucketState
enum class EBucketState : uint8_t
{
	EBucketState__Idle             = 0,
	EBucketState__Scooping         = 1,
	EBucketState__Throwing         = 2,
	EBucketState__DrenchingWielder = 3,
	EBucketState__Max              = 4,
	EBucketState__Pad              = 5,
	EBucketState__EBucketState_MAX = 6
};


// Enum Athena.ELocationGeneratorSampleType
enum class ELocationGeneratorSampleType : uint8_t
{
	ELocationGeneratorSampleType__None = 0,
	ELocationGeneratorSampleType__Usable = 1,
	ELocationGeneratorSampleType__Unusable_NoContact = 2,
	ELocationGeneratorSampleType__Unusable_SurfaceType = 3,
	ELocationGeneratorSampleType__Unusable_Proximity = 4,
	ELocationGeneratorSampleType__Unusable_Slope = 5,
	ELocationGeneratorSampleType__Unusable_BelowWater = 6,
	ELocationGeneratorSampleType__ELocationGeneratorSampleType_MAX = 7
};


// Enum Athena.EBurrowEruptState
enum class EBurrowEruptState : uint8_t
{
	EBurrowEruptState__Dormant     = 0,
	EBurrowEruptState__Erupt       = 1,
	EBurrowEruptState__EBurrowEruptState_MAX = 2
};


// Enum Athena.ESirenTridentProjectileState
enum class ESirenTridentProjectileState : uint8_t
{
	ESirenTridentProjectileState__None = 0,
	ESirenTridentProjectileState__Small = 1,
	ESirenTridentProjectileState__Medium = 2,
	ESirenTridentProjectileState__Large = 3,
	ESirenTridentProjectileState__MAX = 4,
	ESirenTridentProjectileState__ESirenTridentProjectileState_MAX = 5
};


// Enum Athena.EHasBeenWieldedState
enum class EHasBeenWieldedState : uint8_t
{
	EHasBeenWieldedState__InitialState = 0,
	EHasBeenWieldedState__HasNotBeenWielded = 1,
	EHasBeenWieldedState__HasBeenWielded = 2,
	EHasBeenWieldedState__EHasBeenWieldedState_MAX = 3
};


// Enum Athena.ECarouselPirateBodyshapeDirection
enum class ECarouselPirateBodyshapeDirection : uint8_t
{
	ECarouselPirateBodyshapeDirection__None = 0,
	ECarouselPirateBodyshapeDirection__N = 1,
	ECarouselPirateBodyshapeDirection__NW = 2,
	ECarouselPirateBodyshapeDirection__W = 3,
	ECarouselPirateBodyshapeDirection__SW = 4,
	ECarouselPirateBodyshapeDirection__S = 5,
	ECarouselPirateBodyshapeDirection__SE = 6,
	ECarouselPirateBodyshapeDirection__E = 7,
	ECarouselPirateBodyshapeDirection__NE = 8,
	ECarouselPirateBodyshapeDirection__ECarouselPirateBodyshapeDirection_MAX = 9
};


// Enum Athena.EPlayerMusicState
enum class EPlayerMusicState : uint8_t
{
	EPlayerMusicState__InCave      = 0,
	EPlayerMusicState__InPuzzleVault = 1,
	EPlayerMusicState__InsideShip  = 2,
	EPlayerMusicState__Fishing     = 3,
	EPlayerMusicState__KrakenEncounter = 4,
	EPlayerMusicState__MusicZone_PriorityHigh = 5,
	EPlayerMusicState__MusicZone_PriorityMed = 6,
	EPlayerMusicState__MusicZone_PriorityLow = 7,
	EPlayerMusicState__NoMusicState = 8,
	EPlayerMusicState__OnBountyQuestPreAction = 9,
	EPlayerMusicState__OnBountyQuestAction = 10,
	EPlayerMusicState__OnBountyFortAnticipation = 11,
	EPlayerMusicState__OnBountyFortPreAction = 12,
	EPlayerMusicState__OnBountyFortAction = 13,
	EPlayerMusicState__OnIsland    = 14,
	EPlayerMusicState__OnIslandNearCompany = 15,
	EPlayerMusicState__OutAtSea    = 16,
	EPlayerMusicState__ServerMigration = 17,
	EPlayerMusicState__Shipwreck   = 18,
	EPlayerMusicState__SkellyShipEncounter = 19,
	EPlayerMusicState__SkellyShipEmergentEncounter = 20,
	EPlayerMusicState__TinySharkEncounter = 21,
	EPlayerMusicState__UnderWater  = 22,
	EPlayerMusicState__InDeepSeaRegion = 23,
	EPlayerMusicState__EPlayerMusicState_MAX = 24
};


// Enum Athena.ECharacterSocketCollisionResultType
enum class ECharacterSocketCollisionResultType : uint8_t
{
	CollisionsOnly                 = 0,
	NonCollisionsOnly              = 1,
	CollisionsAndNonCollisions     = 2,
	ECharacterSocketCollisionResultType_MAX = 3
};


// Enum Athena.ECharacterSocketCollisionTraceType
enum class ECharacterSocketCollisionTraceType : uint8_t
{
	WorldUp                        = 0,
	WorldDown                      = 1,
	WorldLeft                      = 2,
	WorldRight                     = 3,
	TravelForwards                 = 4,
	TravelBackwards                = 5,
	ECharacterSocketCollisionTraceType_MAX = 6
};


// Enum Athena.ERageState
enum class ERageState : uint8_t
{
	ERageState__Disabled           = 0,
	ERageState__Dormant            = 1,
	ERageState__RageBuilding       = 2,
	ERageState__Steaming           = 3,
	ERageState__OnFire             = 4,
	ERageState__ERageState_MAX     = 5
};


// Enum Athena.EUIInputFocusType
enum class EUIInputFocusType : uint8_t
{
	EUIInputFocusType__None        = 0,
	EUIInputFocusType__MouseCaptureOnly = 1,
	EUIInputFocusType__FullCapture = 2,
	EUIInputFocusType__EUIInputFocusType_MAX = 3
};


// Enum Athena.EItemLoadoutDestroyBehaviour
enum class EItemLoadoutDestroyBehaviour : uint8_t
{
	EItemLoadoutDestroyBehaviour__DoNotDestroy = 0,
	EItemLoadoutDestroyBehaviour__Destroy = 1,
	EItemLoadoutDestroyBehaviour__EItemLoadoutDestroyBehaviour_MAX = 2
};


// Enum Athena.EVirtualKeyboardInputScope
enum class EVirtualKeyboardInputScope : uint8_t
{
	EVirtualKeyboardInputScope__Alphanumeric = 0,
	EVirtualKeyboardInputScope__Default = 1,
	EVirtualKeyboardInputScope__Email = 2,
	EVirtualKeyboardInputScope__Number = 3,
	EVirtualKeyboardInputScope__Password = 4,
	EVirtualKeyboardInputScope__Search = 5,
	EVirtualKeyboardInputScope__TelephoneNumber = 6,
	EVirtualKeyboardInputScope__Url = 7,
	EVirtualKeyboardInputScope__EVirtualKeyboardInputScope_MAX = 8
};


// Enum Athena.EVirtualKeyboardTextUsage
enum class EVirtualKeyboardTextUsage : uint8_t
{
	EVirtualKeyboardTextUsage__TextChat = 0,
	EVirtualKeyboardTextUsage__PetName = 1,
	EVirtualKeyboardTextUsage__GenericText = 2,
	EVirtualKeyboardTextUsage__EVirtualKeyboardTextUsage_MAX = 3
};


// Enum Athena.EScoreReason
enum class EScoreReason : uint8_t
{
	EScoreReason__None             = 0,
	EScoreReason__SoldChest        = 1,
	EScoreReason__SoldStolenChest  = 2,
	EScoreReason__CrewShipSunk     = 3,
	EScoreReason__DownedOpponent   = 4,
	EScoreReason__KilledOpponent   = 5,
	EScoreReason__ChestDugUp       = 6,
	EScoreReason__MastHit          = 7,
	EScoreReason__CapstanHit       = 8,
	EScoreReason__WheelHit         = 9,
	EScoreReason__HullHit          = 10,
	EScoreReason__EScoreReason_MAX = 11
};


// Enum Athena.ESpecialEvents
enum class ESpecialEvents : uint8_t
{
	ESpecialEvents__None           = 0,
	ESpecialEvents__StartBlinds    = 1,
	ESpecialEvents__Leaderboard    = 2,
	ESpecialEvents__TavernCeremony = 3,
	ESpecialEvents__ESpecialEvents_MAX = 4
};


// Enum Athena.EContestStagePivot
enum class EContestStagePivot : uint8_t
{
	EContestStagePivot__Beginning  = 0,
	EContestStagePivot__Quater     = 1,
	EContestStagePivot__HalfTime   = 2,
	EContestStagePivot__ThirdQuater = 3,
	EContestStagePivot__End        = 4,
	EContestStagePivot__EContestStagePivot_MAX = 5
};


// Enum Athena.EContestEventStages
enum class EContestEventStages : uint8_t
{
	EContestEventStages__Staging   = 0,
	EContestEventStages__Contest   = 1,
	EContestEventStages__PostContest = 2,
	EContestEventStages__Reward    = 3,
	EContestEventStages__EContestEventStages_MAX = 4
};


// Enum Athena.EMuteState
enum class EMuteState : uint8_t
{
	EMuteState__NotMuted           = 0,
	EMuteState__VoiceMuted         = 1,
	EMuteState__ChatMuted          = 2,
	EMuteState__VoiceAndChatMuted  = 3,
	EMuteState__NonVerbalMuted     = 4,
	EMuteState__VoiceAndNonVerbalMuted = 5,
	EMuteState__ChatAndNonVerbalMuted = 6,
	EMuteState__AllMuted           = 7,
	EMuteState__EMuteState_MAX     = 8
};


// Enum Athena.ECrewOwnershipState
enum class ECrewOwnershipState : uint8_t
{
	ECrewOwnershipState__Neutral   = 0,
	ECrewOwnershipState__Assigned  = 1,
	ECrewOwnershipState__ECrewOwnershipState_MAX = 2
};


// Enum Athena.ECrewSpawnState
enum class ECrewSpawnState : uint8_t
{
	ECrewSpawnState__Invalid       = 0,
	ECrewSpawnState__Onboarding    = 1,
	ECrewSpawnState__AtDock        = 2,
	ECrewSpawnState__OnShip        = 3,
	ECrewSpawnState__AtSinkLocation = 4,
	ECrewSpawnState__AtMermaid     = 5,
	ECrewSpawnState__InBrig        = 6,
	ECrewSpawnState__InHideout     = 7,
	ECrewSpawnState__InContestTavern = 8,
	ECrewSpawnState__AtProgressionLocation = 9,
	ECrewSpawnState__ECrewSpawnState_MAX = 10
};


// Enum Athena.EDamageTargetType
enum class EDamageTargetType : uint8_t
{
	EDamageTargetType__Player      = 0,
	EDamageTargetType__Ship        = 1,
	EDamageTargetType__EDamageTargetType_MAX = 2
};


// Enum Athena.EDiggingState
enum class EDiggingState : uint8_t
{
	EDiggingState__Initial         = 0,
	EDiggingState__BeingDug        = 1,
	EDiggingState__WaitingForPickup = 2,
	EDiggingState__EDiggingState_MAX = 3
};


// Enum Athena.EDrunkennessType
enum class EDrunkennessType : uint8_t
{
	EDrunkennessType__FromDrinkingAlcohol = 0,
	EDrunkennessType__FromDrunkenChest = 1,
	EDrunkennessType__NumTypes     = 2,
	EDrunkennessType__EDrunkennessType_MAX = 3
};


// Enum Athena.EConeWeightingMethod
enum class EConeWeightingMethod : uint8_t
{
	EConeWeightingMethod__Weighted = 0,
	EConeWeightingMethod__Absolute = 1,
	EConeWeightingMethod__EConeWeightingMethod_MAX = 2
};


// Enum Athena.EShipHullDamageType
enum class EShipHullDamageType : uint8_t
{
	EShipHullDamageType__Landscape = 0,
	EShipHullDamageType__RammingSpur = 1,
	EShipHullDamageType__EShipHullDamageType_MAX = 2
};


// Enum Athena.EFogState
enum class EFogState : uint8_t
{
	EFogState__NotSetUpYet         = 0,
	EFogState__SetUp               = 1,
	EFogState__FadingIn            = 2,
	EFogState__Active              = 3,
	EFogState__FadingOut           = 4,
	EFogState__EFogState_MAX       = 5
};


// Enum Athena.EGlintCondition
enum class EGlintCondition : uint8_t
{
	EGlintCondition__OnShip        = 0,
	EGlintCondition__Floating      = 1,
	EGlintCondition__SpawnedAsSunkenSalvage = 2,
	EGlintCondition__SpawnedAsTallTaleQuestItem = 3,
	EGlintCondition__SpawnedAsTreasureVaultReward = 4,
	EGlintCondition__EGlintCondition_MAX = 5
};


// Enum Athena.EHarpoonLauncherReelingState
enum class EHarpoonLauncherReelingState : uint8_t
{
	EHarpoonLauncherReelingState__NotReeling = 0,
	EHarpoonLauncherReelingState__ReelingIn = 1,
	EHarpoonLauncherReelingState__ReelingLocked = 2,
	EHarpoonLauncherReelingState__EHarpoonLauncherReelingState_MAX = 3
};


// Enum Athena.EHarpoonLauncherRetractReason
enum class EHarpoonLauncherRetractReason : uint8_t
{
	EHarpoonLauncherRetractReason__Default = 0,
	EHarpoonLauncherRetractReason__PlayerInstigated = 1,
	EHarpoonLauncherRetractReason__TetherLengthExeeded = 2,
	EHarpoonLauncherRetractReason__EHarpoonLauncherRetractReason_MAX = 3
};


// Enum Athena.EHarpoonProjectileState
enum class EHarpoonProjectileState : uint8_t
{
	EHarpoonProjectileState__Docked = 0,
	EHarpoonProjectileState__InFlight = 1,
	EHarpoonProjectileState__Attached = 2,
	EHarpoonProjectileState__EHarpoonProjectileState_MAX = 3
};


// Enum Athena.EHoleState
enum class EHoleState : uint8_t
{
	EHoleState__Alive              = 0,
	EHoleState__Dead               = 1,
	EHoleState__EHoleState_MAX     = 2
};


// Enum Athena.ELeakEffectState
enum class ELeakEffectState : uint8_t
{
	ELeakEffectState__Off          = 0,
	ELeakEffectState__LeakingWater = 1,
	ELeakEffectState__LeakingWaterPlugged = 2,
	ELeakEffectState__LeakingBubbles = 3,
	ELeakEffectState__LeakingBubblesPlugged = 4,
	ELeakEffectState__ELeakEffectState_MAX = 5
};


// Enum Athena.ELeakState
enum class ELeakState : uint8_t
{
	ELeakState__Open               = 0,
	ELeakState__Plugged            = 1,
	ELeakState__ELeakState_MAX     = 2
};


// Enum Athena.EShipLeakerUpdateType
enum class EShipLeakerUpdateType : uint8_t
{
	EShipLeakerUpdateType__Iterative = 0,
	EShipLeakerUpdateType__ForceAll = 1,
	EShipLeakerUpdateType__EShipLeakerUpdateType_MAX = 2
};


// Enum Athena.EVaultAudioSettings
enum class EVaultAudioSettings : uint8_t
{
	EVaultAudioSettings__Default   = 0,
	EVaultAudioSettings__NoWater   = 1,
	EVaultAudioSettings__NoMusic   = 2,
	EVaultAudioSettings__TreasureVault = 3,
	EVaultAudioSettings__EVaultAudioSettings_MAX = 4
};


// Enum Athena.EInventoryManipulatorAutoEquipPolicy
enum class EInventoryManipulatorAutoEquipPolicy : uint8_t
{
	EInventoryManipulatorAutoEquipPolicy__LastIn = 0,
	EInventoryManipulatorAutoEquipPolicy__MatchingItemDescIfPossible = 1,
	EInventoryManipulatorAutoEquipPolicy__RawMeatLast = 2,
	EInventoryManipulatorAutoEquipPolicy__EInventoryManipulatorAutoEquipPolicy_MAX = 3
};


// Enum Athena.EActionQueueEntryStatus
enum class EActionQueueEntryStatus : uint8_t
{
	EActionQueueEntryStatus__Unset = 0,
	EActionQueueEntryStatus__Set   = 1,
	EActionQueueEntryStatus__Playing = 2,
	EActionQueueEntryStatus__Completed = 3,
	EActionQueueEntryStatus__EActionQueueEntryStatus_MAX = 4
};


// Enum Athena.EProjectileSpawnedState
enum class EProjectileSpawnedState : uint8_t
{
	EProjectileSpawnedState__NotSpawned = 0,
	EProjectileSpawnedState__Spawned = 1,
	EProjectileSpawnedState__EProjectileSpawnedState_MAX = 2
};


// Enum Athena.ELightningHitTarget
enum class ELightningHitTarget : uint8_t
{
	ELightningHitTarget__RandomLocation = 0,
	ELightningHitTarget__Player    = 1,
	ELightningHitTarget__NearPlayer = 2,
	ELightningHitTarget__Ship      = 3,
	ELightningHitTarget__ShipNearMiss = 4,
	ELightningHitTarget__HighPriorityPlayer = 5,
	ELightningHitTarget__EnemyGhostShip = 6,
	ELightningHitTarget__EnemyGhostShipNearMiss = 7,
	ELightningHitTarget__Total     = 8,
	ELightningHitTarget__ELightningHitTarget_MAX = 9
};


// Enum Athena.ELoadoutPersistence
enum class ELoadoutPersistence : uint8_t
{
	ELoadoutPersistence__Temporary = 0,
	ELoadoutPersistence__Persistent = 1,
	ELoadoutPersistence__ELoadoutPersistence_MAX = 2
};


// Enum Athena.ELPVAdaptationType
enum class ELPVAdaptationType : uint8_t
{
	ELPVAdaptationType__Full       = 0,
	ELPVAdaptationType__CutTranslation = 1,
	ELPVAdaptationType__None       = 2,
	ELPVAdaptationType__ELPVAdaptationType_MAX = 3
};


// Enum Athena.EWorldMapShipType
enum class EWorldMapShipType : uint8_t
{
	EWorldMapShipType__None        = 0,
	EWorldMapShipType__IsInAlliance = 1,
	EWorldMapShipType__IsOwnedShip = 2,
	EWorldMapShipType__IsContestShip = 3,
	EWorldMapShipType__IsReapersTrackedShip = 4,
	EWorldMapShipType__IsInTunnel  = 5,
	EWorldMapShipType__EWorldMapShipType_MAX = 6
};


// Enum Athena.EPlayerAbandonedReason
enum class EPlayerAbandonedReason : uint8_t
{
	EPlayerAbandonedReason__None   = 0,
	EPlayerAbandonedReason__NoCrewShip = 1,
	EPlayerAbandonedReason__FarFromShipAndOnLand = 2,
	EPlayerAbandonedReason__FarFromShipInWater = 3,
	EPlayerAbandonedReason__OnShip = 4,
	EPlayerAbandonedReason__CloseEnoughToCrewShip = 5,
	EPlayerAbandonedReason__OnWatercraft = 6,
	EPlayerAbandonedReason__CloseEnoughToWatercraft = 7,
	EPlayerAbandonedReason__InTheDeepSea = 8,
	EPlayerAbandonedReason__EPlayerAbandonedReason_MAX = 9
};


// Enum Athena.EPlayerAbandoned
enum class EPlayerAbandoned : uint8_t
{
	EPlayerAbandoned__Yes          = 0,
	EPlayerAbandoned__No           = 1,
	EPlayerAbandoned__DontKnow     = 2,
	EPlayerAbandoned__EPlayerAbandoned_MAX = 3
};


// Enum Athena.EPlayerHeroStatsSuccess
enum class EPlayerHeroStatsSuccess : uint8_t
{
	EPlayerHeroStatsSuccess__Success = 0,
	EPlayerHeroStatsSuccess__Success_Zero = 1,
	EPlayerHeroStatsSuccess__NotAutonomousProxy = 2,
	EPlayerHeroStatsSuccess__NoLocalUser = 3,
	EPlayerHeroStatsSuccess__PlayerIdInvalid = 4,
	EPlayerHeroStatsSuccess__NoClientData = 5,
	EPlayerHeroStatsSuccess__StartOfSessionValueNotSet = 6,
	EPlayerHeroStatsSuccess__NoServerData = 7,
	EPlayerHeroStatsSuccess__NoHeroStatData = 8,
	EPlayerHeroStatsSuccess__OnlineStatsPtrNull = 9,
	EPlayerHeroStatsSuccess__OnlineStats_UnknownError = 10,
	EPlayerHeroStatsSuccess__OnlineStats_InvalidStatId = 11,
	EPlayerHeroStatsSuccess__OnlineStats_InvalidArgument = 12,
	EPlayerHeroStatsSuccess__OnlineStats_InvalidUser = 13,
	EPlayerHeroStatsSuccess__EPlayerHeroStatsSuccess_MAX = 14
};


// Enum Athena.EShovelState
enum class EShovelState : uint8_t
{
	EShovelState__Idle             = 0,
	EShovelState__Exhuming         = 1,
	EShovelState__Burying          = 2,
	EShovelState__EShovelState_MAX = 3
};


// Enum Athena.EPossessionsChestType
enum class EPossessionsChestType : uint8_t
{
	EPossessionsChestType__Unknown = 0,
	EPossessionsChestType__EquipmentChest = 1,
	EPossessionsChestType__ClothingChest = 2,
	EPossessionsChestType__VanityChest = 3,
	EPossessionsChestType__ArmoryChest = 4,
	EPossessionsChestType__ShipCustomizationChest = 5,
	EPossessionsChestType__ShipFlagCustomizationChest = 6,
	EPossessionsChestType__PetChest = 7,
	EPossessionsChestType__EPossessionsChestType_MAX = 8
};


// Enum Athena.EOverlapShapeType
enum class EOverlapShapeType : uint8_t
{
	EOverlapShapeType__Mesh        = 0,
	EOverlapShapeType__Box         = 1,
	EOverlapShapeType__EOverlapShapeType_MAX = 2
};


// Enum Athena.ENonVerbalRadialCategory
enum class ENonVerbalRadialCategory : uint8_t
{
	ENonVerbalRadialCategory__QuickAccess = 0,
	ENonVerbalRadialCategory__Strategy = 1,
	ENonVerbalRadialCategory__WieldedItem = 2,
	ENonVerbalRadialCategory__ControlledObject = 3,
	ENonVerbalRadialCategory__Invalid = 4,
	ENonVerbalRadialCategory__ENonVerbalRadialCategory_MAX = 5
};


// Enum Athena.ENPCIdleVariantType
enum class ENPCIdleVariantType : uint8_t
{
	ENPCIdleVariantType__Standard  = 0,
	ENPCIdleVariantType__Inactive  = 1,
	ENPCIdleVariantType__Interact  = 2,
	ENPCIdleVariantType__ENPCIdleVariantType_MAX = 3
};


// Enum Athena.ETutorialDialogOption
enum class ETutorialDialogOption : uint8_t
{
	ETutorialDialogOption__None    = 0,
	ETutorialDialogOption__ReturnToStrangerCompanyVoyageDialogOption = 1,
	ETutorialDialogOption__ReturnToStrangerTallTaleDialogOption = 2,
	ETutorialDialogOption__ReturnToStrangerGoItAloneDialogOption = 3,
	ETutorialDialogOption__ETutorialDialogOption_MAX = 4
};


// Enum Athena.ETutorialDialogStep
enum class ETutorialDialogStep : uint8_t
{
	ETutorialDialogStep__None      = 0,
	ETutorialDialogStep__StartedTalkedToMysteriousStranger = 1,
	ETutorialDialogStep__FinishedTalkingToMysteriousStranger = 2,
	ETutorialDialogStep__ETutorialDialogStep_MAX = 3
};


// Enum Athena.EStartGameNarrativeMediaSize
enum class EStartGameNarrativeMediaSize : uint8_t
{
	EStartGameNarrativeMediaSize__Undefined = 0,
	EStartGameNarrativeMediaSize__Default = 1,
	EStartGameNarrativeMediaSize__LargeWide = 2,
	EStartGameNarrativeMediaSize__EStartGameNarrativeMediaSize_MAX = 3
};


// Enum Athena.EStartGameNarrativePositionY
enum class EStartGameNarrativePositionY : uint8_t
{
	EStartGameNarrativePositionY__Undefined = 0,
	EStartGameNarrativePositionY__Top = 1,
	EStartGameNarrativePositionY__Middle = 2,
	EStartGameNarrativePositionY__Bottom = 3,
	EStartGameNarrativePositionY__EStartGameNarrativePositionY_MAX = 4
};


// Enum Athena.EStartGameNarrativePositionX
enum class EStartGameNarrativePositionX : uint8_t
{
	EStartGameNarrativePositionX__Undefined = 0,
	EStartGameNarrativePositionX__Left = 1,
	EStartGameNarrativePositionX__Middle = 2,
	EStartGameNarrativePositionX__Right = 3,
	EStartGameNarrativePositionX__EStartGameNarrativePositionX_MAX = 4
};


// Enum Athena.EMockShipConnectionPartType
enum class EMockShipConnectionPartType : uint8_t
{
	EMockShipConnectionPartType__HoistToMast = 0,
	EMockShipConnectionPartType__AngleToMast = 1,
	EMockShipConnectionPartType__Total = 2,
	EMockShipConnectionPartType__EMockShipConnectionPartType_MAX = 3
};


// Enum Athena.EPLSectionType
enum class EPLSectionType : uint8_t
{
	EPLSectionType__Module         = 0,
	EPLSectionType__Link           = 1,
	EPLSectionType__Count          = 2,
	EPLSectionType__EPLSectionType_MAX = 3
};


// Enum Athena.EPiratePreviewRTTState
enum class EPiratePreviewRTTState : uint8_t
{
	EPiratePreviewRTTState__Uninitialized = 0,
	EPiratePreviewRTTState__Busy   = 1,
	EPiratePreviewRTTState__ReadyToCapture = 2,
	EPiratePreviewRTTState__CompletedCapture = 3,
	EPiratePreviewRTTState__EPiratePreviewRTTState_MAX = 4
};


// Enum Athena.ECompanyStatus
enum class ECompanyStatus : uint8_t
{
	ECompanyStatus__Invalid        = 0,
	ECompanyStatus__Pending        = 1,
	ECompanyStatus__Valid          = 2,
	ECompanyStatus__ECompanyStatus_MAX = 3
};


// Enum Athena.EPlayerCurseTag
enum class EPlayerCurseTag : uint8_t
{
	EPlayerCurseTag__None          = 0,
	EPlayerCurseTag__Limping       = 1,
	EPlayerCurseTag__Poisoned      = 2,
	EPlayerCurseTag__Drunk         = 3,
	EPlayerCurseTag__Silenced      = 4,
	EPlayerCurseTag__Dancing       = 5,
	EPlayerCurseTag__Sleeping      = 6,
	EPlayerCurseTag__Vomit         = 7,
	EPlayerCurseTag__EPlayerCurseTag_MAX = 8
};


// Enum Athena.ERefreshEntitlementBehaviour
enum class ERefreshEntitlementBehaviour : uint8_t
{
	ERefreshEntitlementBehaviour__TryUsingCachedServicesEntitlements = 0,
	ERefreshEntitlementBehaviour__FullRefresh = 1,
	ERefreshEntitlementBehaviour__ERefreshEntitlementBehaviour_MAX = 2
};


// Enum Athena.EWalletBalanceStatus
enum class EWalletBalanceStatus : uint8_t
{
	EWalletBalanceStatus__Unknown  = 0,
	EWalletBalanceStatus__Valid    = 1,
	EWalletBalanceStatus__EWalletBalanceStatus_MAX = 2
};


// Enum Athena.EChestEntitlementActionType
enum class EChestEntitlementActionType : uint8_t
{
	EChestEntitlementActionType__Equip = 0,
	EChestEntitlementActionType__Unequip = 1,
	EChestEntitlementActionType__Clear = 2,
	EChestEntitlementActionType__Randomise = 3,
	EChestEntitlementActionType__RadialEquip = 4,
	EChestEntitlementActionType__EChestEntitlementActionType_MAX = 5
};


// Enum Athena.EPremiumCatalogOfferType
enum class EPremiumCatalogOfferType : uint8_t
{
	EPremiumCatalogOfferType__Undefined = 0,
	EPremiumCatalogOfferType__Tab  = 1,
	EPremiumCatalogOfferType__BundleSet = 2,
	EPremiumCatalogOfferType__ItemSet = 3,
	EPremiumCatalogOfferType__Cards = 4,
	EPremiumCatalogOfferType__Item = 5,
	EPremiumCatalogOfferType__Offer = 6,
	EPremiumCatalogOfferType__EPremiumCatalogOfferType_MAX = 7
};


// Enum Athena.ECatalogOfferAvailability
enum class ECatalogOfferAvailability : uint8_t
{
	ECatalogOfferAvailability__Available = 0,
	ECatalogOfferAvailability__AlreadyOwned = 1,
	ECatalogOfferAvailability__Locked = 2,
	ECatalogOfferAvailability__Info = 3,
	ECatalogOfferAvailability__Hide = 4,
	ECatalogOfferAvailability__Unaffordable = 5,
	ECatalogOfferAvailability__ECatalogOfferAvailability_MAX = 6
};


// Enum Athena.EPremiumStoreLandingPageItemType
enum class EPremiumStoreLandingPageItemType : uint8_t
{
	EPremiumStoreLandingPageItemType__Bundle = 0,
	EPremiumStoreLandingPageItemType__Set = 1,
	EPremiumStoreLandingPageItemType__Cards = 2,
	EPremiumStoreLandingPageItemType__Item = 3,
	EPremiumStoreLandingPageItemType__EPremiumStoreLandingPageItemType_MAX = 4
};


// Enum Athena.EProjectileLauncherMechanismMode
enum class EProjectileLauncherMechanismMode : uint8_t
{
	EProjectileLauncherMechanismMode__OneShot = 0,
	EProjectileLauncherMechanismMode__Continuous = 1,
	EProjectileLauncherMechanismMode__EProjectileLauncherMechanismMode_MAX = 2
};


// Enum Athena.EProjectileWeaponFireType
enum class EProjectileWeaponFireType : uint8_t
{
	EProjectileWeaponFireType__Aiming = 0,
	EProjectileWeaponFireType__HipFire = 1,
	EProjectileWeaponFireType__MAX = 2,
	EProjectileWeaponFireType__EProjectileWeaponFireType_MAX = 3
};


// Enum Athena.EProjectileWeaponType
enum class EProjectileWeaponType : uint8_t
{
	EProjectileWeaponType__Pistol  = 0,
	EProjectileWeaponType__Blunderbuss = 1,
	EProjectileWeaponType__EyeOfReach = 2,
	EProjectileWeaponType__MAX     = 3,
	EProjectileWeaponType__EProjectileWeaponType_MAX = 4
};


// Enum Athena.EProjectileWeaponState
enum class EProjectileWeaponState : uint8_t
{
	EProjectileWeaponState__Equipping = 0,
	EProjectileWeaponState__Idle   = 1,
	EProjectileWeaponState__Aiming = 2,
	EProjectileWeaponState__Recoil = 3,
	EProjectileWeaponState__Reloading = 4,
	EProjectileWeaponState__InterruptedReload = 5,
	EProjectileWeaponState__EProjectileWeaponState_MAX = 6
};


// Enum Athena.EPuzzleStatueActivatedMechanismType
enum class EPuzzleStatueActivatedMechanismType : uint8_t
{
	EPuzzleStatueActivatedMechanismType__Generic = 0,
	EPuzzleStatueActivatedMechanismType__WaterLevelUp = 1,
	EPuzzleStatueActivatedMechanismType__WaterLevelDown = 2,
	EPuzzleStatueActivatedMechanismType__EPuzzleStatueActivatedMechanismType_MAX = 3
};


// Enum Athena.EReactionSequenceState
enum class EReactionSequenceState : uint8_t
{
	EReactionSequenceState__None   = 0,
	EReactionSequenceState__BeginSuccessfulSequence = 1,
	EReactionSequenceState__BeginUnsuccessfulSequence = 2,
	EReactionSequenceState__EndSuccessfulSequence = 3,
	EReactionSequenceState__EndUnsuccessfulSequence = 4,
	EReactionSequenceState__Reset  = 5,
	EReactionSequenceState__Cancelled = 6,
	EReactionSequenceState__MAX    = 7,
	EReactionSequenceState__EReactionSequenceState_MAX = 8
};


// Enum Athena.EAllocationStrategy
enum class EAllocationStrategy : uint8_t
{
	EAllocationStrategy__Normal    = 0,
	EAllocationStrategy__LowPriority = 1,
	EAllocationStrategy__NonAllocated = 2,
	EAllocationStrategy__EAllocationStrategy_MAX = 3
};


// Enum Athena.ERevealState
enum class ERevealState : uint8_t
{
	ERevealState__Hidden           = 0,
	ERevealState__FarRevealed      = 1,
	ERevealState__CloseRevealed    = 2,
	ERevealState__ERevealState_MAX = 3
};


// Enum Athena.EShadowAIFormState
enum class EShadowAIFormState : uint8_t
{
	EShadowAIFormState__Invalid    = 0,
	EShadowAIFormState__Light      = 1,
	EShadowAIFormState__Dark       = 2,
	EShadowAIFormState__EShadowAIFormState_MAX = 3
};


// Enum Athena.EShipBuilderState
enum class EShipBuilderState : uint8_t
{
	EShipBuilderState__Idle        = 0,
	EShipBuilderState__LoadingTemplate = 1,
	EShipBuilderState__CustomizingParts = 2,
	EShipBuilderState__EShipBuilderState_MAX = 3
};


// Enum Athena.EShipBuilderErrorCode
enum class EShipBuilderErrorCode : uint8_t
{
	EShipBuilderErrorCode__AlreadyInProgress = 0,
	EShipBuilderErrorCode__AssetLoadingFailure = 1,
	EShipBuilderErrorCode__FailedToSpawnActor = 2,
	EShipBuilderErrorCode__FailedToBuildParts = 3,
	EShipBuilderErrorCode__InvalidParameter = 4,
	EShipBuilderErrorCode__InvalidShipDesc = 5,
	EShipBuilderErrorCode__Cancelled = 6,
	EShipBuilderErrorCode__SpawnedActorWasNotAShip = 7,
	EShipBuilderErrorCode__EShipBuilderErrorCode_MAX = 8
};


// Enum Athena.EShipParticleParam
enum class EShipParticleParam : uint8_t
{
	EShipParticleParam__None       = 0,
	EShipParticleParam__DeckWater  = 1,
	EShipParticleParam__FloodLevel = 2,
	EShipParticleParam__Total      = 3,
	EShipParticleParam__EShipParticleParam_MAX = 4
};


// Enum Athena.EPurchaseRequestFailureReason
enum class EPurchaseRequestFailureReason : uint8_t
{
	EPurchaseRequestFailureReason__ServiceUnavailable = 0,
	EPurchaseRequestFailureReason__OfferUnavailable = 1,
	EPurchaseRequestFailureReason__InsufficientFunds = 2,
	EPurchaseRequestFailureReason__RequestTimeout = 3,
	EPurchaseRequestFailureReason__PurchaseAlreadyPending = 4,
	EPurchaseRequestFailureReason__EPurchaseRequestFailureReason_MAX = 5
};


// Enum Athena.EAthenaSafeZoneEnum
enum class EAthenaSafeZoneEnum : uint8_t
{
	EAthenaSafeZoneEnum__NONE      = 0,
	EAthenaSafeZoneEnum__MAINWORLD_SAFEZONE = 1,
	EAthenaSafeZoneEnum__TRIBUTEPEAK_SAFEZONE = 2,
	EAthenaSafeZoneEnum__EAthenaSafeZoneEnum_MAX = 3
};


// Enum Athena.EShroudBreakerActivationStateEnum
enum class EShroudBreakerActivationStateEnum : uint8_t
{
	EShroudBreakerActivationStateEnum__DEACTIVE = 0,
	EShroudBreakerActivationStateEnum__STAGE = 1,
	EShroudBreakerActivationStateEnum__STAGE01 = 2,
	EShroudBreakerActivationStateEnum__STAGE02 = 3,
	EShroudBreakerActivationStateEnum__STAGE03 = 4,
	EShroudBreakerActivationStateEnum__EShroudBreakerActivationStateEnum_MAX = 5
};


// Enum Athena.EDoorState
enum class EDoorState : uint8_t
{
	EDoorState__Closed             = 0,
	EDoorState__Triggered          = 1,
	EDoorState__Opening            = 2,
	EDoorState__Open               = 3,
	EDoorState__EDoorState_MAX     = 4
};


// Enum Athena.ESkellyFortDestructionReason
enum class ESkellyFortDestructionReason : uint8_t
{
	ESkellyFortDestructionReason__Defeated = 0,
	ESkellyFortDestructionReason__Despawn = 1,
	ESkellyFortDestructionReason__ESkellyFortDestructionReason_MAX = 2
};


// Enum Athena.ESkellyFortType
enum class ESkellyFortType : uint8_t
{
	ESkellyFortType__Default       = 0,
	ESkellyFortType__Damned        = 1,
	ESkellyFortType__Max           = 2,
	ESkellyFortType__ESkellyFortType_MAX = 3
};


// Enum Athena.EDamnedFortAudioState
enum class EDamnedFortAudioState : uint8_t
{
	EDamnedFortAudioState__Inactive = 0,
	EDamnedFortAudioState__BattleMusic = 1,
	EDamnedFortAudioState__BattleMusicWithCaptain = 2,
	EDamnedFortAudioState__Finished = 3,
	EDamnedFortAudioState__MAX     = 4,
	EDamnedFortAudioState__EDamnedFortAudioState_MAX = 5
};


// Enum Athena.EStaggerReason
enum class EStaggerReason : uint8_t
{
	EStaggerReason__Drunk          = 0,
	EStaggerReason__Earthquake     = 1,
	EStaggerReason__NumReasons     = 2,
	EStaggerReason__EStaggerReason_MAX = 3
};


// Enum Athena.EStunnedActionStateItemWielding
enum class EStunnedActionStateItemWielding : uint8_t
{
	EStunnedActionStateItemWielding__Allowed = 0,
	EStunnedActionStateItemWielding__Disallowed = 1,
	EStunnedActionStateItemWielding__EStunnedActionStateItemWielding_MAX = 2
};


// Enum Athena.EStunnedActionStateDurationType
enum class EStunnedActionStateDurationType : uint8_t
{
	EStunnedActionStateDurationType__Definite = 0,
	EStunnedActionStateDurationType__Indefinite = 1,
	EStunnedActionStateDurationType__EStunnedActionStateDurationType_MAX = 2
};


// Enum Athena.ESwimmingCreatureType
enum class ESwimmingCreatureType : uint8_t
{
	ESwimmingCreatureType__SwimmingCreature = 0,
	ESwimmingCreatureType__Shark   = 1,
	ESwimmingCreatureType__TinyShark = 2,
	ESwimmingCreatureType__Siren   = 3,
	ESwimmingCreatureType__ESwimmingCreatureType_MAX = 4
};


// Enum Athena.ESelectionPolicy
enum class ESelectionPolicy : uint8_t
{
	ESelectionPolicy__Random       = 0,
	ESelectionPolicy__Closest      = 1,
	ESelectionPolicy__ESelectionPolicy_MAX = 2
};


// Enum Athena.EAISpawnerShutdownPolicy
enum class EAISpawnerShutdownPolicy : uint8_t
{
	EAISpawnerShutdownPolicy__SpawnerShutsDownWhenPlayersNoLongerTracked = 0,
	EAISpawnerShutdownPolicy__SpawnerShutsDownWhenStepEnd = 1,
	EAISpawnerShutdownPolicy__EAISpawnerShutdownPolicy_MAX = 2
};


// Enum Athena.EAILifeTimePolicy
enum class EAILifeTimePolicy : uint8_t
{
	EAILifeTimePolicy__SpawnWhenVoyageParticipantsEnterDespawnWhenAllLeave = 0,
	EAILifeTimePolicy__SpawnWhenVoyageParticipantsEnterDespawnWhenAllVoyageParticipantsLeave = 1,
	EAILifeTimePolicy__SpawnWhenAnyEnterDespawnWhenAllLeave = 2,
	EAILifeTimePolicy__EAILifeTimePolicy_MAX = 3
};


// Enum Athena.EStepsTriggerState
enum class EStepsTriggerState : uint8_t
{
	EStepsTriggerState__Closed     = 0,
	EStepsTriggerState__Opening    = 1,
	EStepsTriggerState__Open       = 2,
	EStepsTriggerState__EStepsTriggerState_MAX = 3
};


// Enum Athena.ETreasureRoomState
enum class ETreasureRoomState : uint8_t
{
	ETreasureRoomState__Inactive   = 0,
	ETreasureRoomState__Waiting    = 1,
	ETreasureRoomState__Combat     = 2,
	ETreasureRoomState__CombatOver = 3,
	ETreasureRoomState__Aftermath  = 4,
	ETreasureRoomState__ETreasureRoomState_MAX = 5
};


// Enum Athena.EItemSpawnType
enum class EItemSpawnType : uint8_t
{
	EItemSpawnType__None           = 0,
	EItemSpawnType__Scaffolding    = 1,
	EItemSpawnType__Reward         = 2,
	EItemSpawnType__PressurePlate  = 3,
	EItemSpawnType__EItemSpawnType_MAX = 4
};


// Enum Athena.EContestType
enum class EContestType : uint8_t
{
	EContestType__Race             = 0,
	EContestType__PVP              = 1,
	EContestType__PVQ              = 2,
	EContestType__MAX              = 3,
	EContestType__EContestType_MAX = 4
};


// Enum Athena.EMatchmakingServerType
enum class EMatchmakingServerType : uint8_t
{
	EMatchmakingServerType__Adventure = 0,
	EMatchmakingServerType__Contest = 1,
	EMatchmakingServerType__EMatchmakingServerType_MAX = 2
};


// Enum Athena.EMurkWaterModifierZoneState
enum class EMurkWaterModifierZoneState : uint8_t
{
	EMurkWaterModifierZoneState__Active = 0,
	EMurkWaterModifierZoneState__Inactive = 1,
	EMurkWaterModifierZoneState__Activating = 2,
	EMurkWaterModifierZoneState__Deactivating = 3,
	EMurkWaterModifierZoneState__EMurkWaterModifierZoneState_MAX = 4
};


// Enum Athena.EWeepingState
enum class EWeepingState : uint8_t
{
	EWeepingState__Weeping         = 0,
	EWeepingState__Calm            = 1,
	EWeepingState__EWeepingState_MAX = 2
};


// Enum Athena.EWheelFractureLabel
enum class EWheelFractureLabel : uint8_t
{
	EWheelFractureLabel__West      = 0,
	EWheelFractureLabel__East      = 1,
	EWheelFractureLabel__South     = 2,
	EWheelFractureLabel__EWheelFractureLabel_MAX = 3
};


// Enum Athena.EAudioGameState
enum class EAudioGameState : uint8_t
{
	EAudioGameState__None          = 0,
	EAudioGameState__InGame        = 1,
	EAudioGameState__InFrontendWrapper = 2,
	EAudioGameState__InFrontendMatineeSequence = 3,
	EAudioGameState__EAudioGameState_MAX = 4
};


// Enum Athena.ELocalGameChatStatus
enum class ELocalGameChatStatus : uint8_t
{
	ELocalGameChatStatus__Undefined = 0,
	ELocalGameChatStatus__NoMicrophone = 1,
	ELocalGameChatStatus__MicrophoneMuted = 2,
	ELocalGameChatStatus__InPartyChat = 3,
	ELocalGameChatStatus__Ready    = 4,
	ELocalGameChatStatus__ELocalGameChatStatus_MAX = 5
};


// Enum Athena.EVoiceChatAudioDevice
enum class EVoiceChatAudioDevice : uint8_t
{
	EVoiceChatAudioDevice__None    = 0,
	EVoiceChatAudioDevice__Headset = 1,
	EVoiceChatAudioDevice__Kinect  = 2,
	EVoiceChatAudioDevice__EVoiceChatAudioDevice_MAX = 3
};


// Enum Athena.EBootflowError
enum class EBootflowError : uint8_t
{
	EBootflowError__None           = 0,
	EBootflowError__Unknown        = 1,
	EBootflowError__AthenaGameInstanceFailedToConnectToServer = 2,
	EBootflowError__AthenaGameInstanceActiveConnectionToServerLost = 3,
	EBootflowError__AthenaGameInstanceActiveConnectionToServerTimedOut = 4,
	EBootflowError__AthenaGameInstanceInitialConnectionToServerTimedOut = 5,
	EBootflowError__AthenaGameInstancePendingConnectionToServerTimedOut = 6,
	EBootflowError__AthenaGameInstancePendingConnectionToServerLost = 7,
	EBootflowError__AthenaGameInstanceGameVersionMismatch = 8,
	EBootflowError__AthenaGameInstanceGenericDisconnectMessage = 9,
	EBootflowError__AthenaGameInstanceNetDriverFailure = 10,
	EBootflowError__AthenaGameInstanceInvalidFeatureConfig = 11,
	EBootflowError__AthenaGameInstanceRPCSpamDetected = 12,
	EBootflowError__AthenaGameInstancePlayerDeemedInactive = 13,
	EBootflowError__AthenaGameInstanceInvalidServerURL = 14,
	EBootflowError__AthenaGameInstanceGameAssetMismatch = 15,
	EBootflowError__AthenaGameInstanceGenericTravelError = 16,
	EBootflowError__AthenaGameInstanceCrewMigrationRequested = 17,
	EBootflowError__AthenaGameInstanceCrewSessionLost = 18,
	EBootflowError__AthenaGameInstanceServerShuttingDown = 19,
	EBootflowError__ClientBootflowPrimaryPlayerSignedOut = 20,
	EBootflowError__ClientBootflowPlayerSuspendedGame = 21,
	EBootflowError__ClientBootflowLostConnectionToXboxLive = 22,
	EBootflowError__ClientBootflowEthernetConnectionUnplugged = 23,
	EBootflowError__ClientEvicted  = 24,
	EBootflowError__ClientInGameStateWasIdleForTooLong = 25,
	EBootflowError__ClientInGameStateUnableToFindLocalUserId = 26,
	EBootflowError__ClientInGameStateUnableToObtainLocalPlayerInterface = 27,
	EBootflowError__ClientInGameStateStopMatchmakingFailed = 28,
	EBootflowError__ClientJoinServerStateFailed = 29,
	EBootflowError__CrewMatchmakingStateLocalUserHasInvalidId = 30,
	EBootflowError__CrewMatchmakingStateUnableToObtainLocalUserId = 31,
	EBootflowError__CrewMatchmakingStateUnableToObtainLocalPlayerInterface = 32,
	EBootflowError__CrewMatchmakingStateMatchmakingFailed = 33,
	EBootflowError__CrewSessionStateUnableToObtainLocalUserId = 34,
	EBootflowError__CrewSessionStateUnableToObtainLocalPlayerInterface = 35,
	EBootflowError__CrewSessionStateFailedToCreateCrewSession = 36,
	EBootflowError__CrewSessionOnSessionLost = 37,
	EBootflowError__DiscoveryServiceStateRequestFailedNotAuthorized = 38,
	EBootflowError__DiscoveryServiceStateRequestFailed = 39,
	EBootflowError__EmblemDefinitionRetrievalFailed = 40,
	EBootflowError__EngageStateInviteHadInvalidControllerId = 41,
	EBootflowError__EngageStateNoLocalPlayerFound = 42,
	EBootflowError__EntryLevelStateFailedToLoadDefaultMap = 43,
	EBootflowError__EntryLevelStateFailed = 44,
	EBootflowError__LoadLevelStateTimeout = 45,
	EBootflowError__LoadLevelStateFailed = 46,
	EBootflowError__LoadUserSettingsStateFailed = 47,
	EBootflowError__LoginTokenExchangePlayerFailedFlightingCheck = 48,
	EBootflowError__LoginTokenExchangePlayerFailedOtherTitleCheck = 49,
	EBootflowError__LoginTokenExchangeFailed = 50,
	EBootflowError__LoginTokenExchangeFailedPlayerBannedPerm = 51,
	EBootflowError__LoginTokenExchangeFailedPlayerBannedTemp = 52,
	EBootflowError__LoginTokenExchangeFailedSteamError = 53,
	EBootflowError__LoginTokenExchangeFailedSteamIncorrectAppToken = 54,
	EBootflowError__LoginTokenExchangeFailedSteamTokenInvalid = 55,
	EBootflowError__LoginTokenExchangeFailedSteamUnlicensed = 56,
	EBootflowError__LoginTokenExchangeFailedTitleVersionInvalid = 57,
	EBootflowError__SelectUserStateFailedToShowSignInUI = 58,
	EBootflowError__SelectUserStateFailedToObtainValidControllerId = 59,
	EBootflowError__SelectUserStateFailedToObtainValidLocalPlayer = 60,
	EBootflowError__SelectUserStateNotConnectedToLive = 61,
	EBootflowError__SelectUserStateNotSignedInWhileUnattended = 62,
	EBootflowError__SelectUserStateUserDoesNotHaveUniqueNetId = 63,
	EBootflowError__SelectUserStateUserDidNotSignIn = 64,
	EBootflowError__SelectUserStateUserIsGuest = 65,
	EBootflowError__SelectUserStateInsufficientPrivilegesToPlay = 66,
	EBootflowError__SelectUserStateInvalidIdentityInterface = 67,
	EBootflowError__ServerMatchmakingStateSandboxDisabled = 68,
	EBootflowError__ServerMatchmakingStateUnableToObtainCrewId = 69,
	EBootflowError__ServerMatchmakingStateUnableToObtainLocalPlayerInterface = 70,
	EBootflowError__ServerMatchmakingStateInvalidPirateIdentity = 71,
	EBootflowError__ServerMatchmakingStateNoServersAvailable = 72,
	EBootflowError__ServerMatchmakingStateInvalidMatchmakingResponse = 73,
	EBootflowError__ServerMatchmakingStateInvalidResponse = 74,
	EBootflowError__ServerMatchmakingStateMatchmakingTimedOut = 75,
	EBootflowError__ServerMatchmakingStateUnexpectedResult = 76,
	EBootflowError__ServerMatchmakingStateJoinRefused = 77,
	EBootflowError__ServerMatchmakingStateUnsupportedVersion = 78,
	EBootflowError__ServerAtMatchmakingCapacity = 79,
	EBootflowError__ServerShuttingDownWhilstMigrationIsOngoing = 80,
	EBootflowError__SetupConfigurationServiceStateConfigServiceRequestFailed = 81,
	EBootflowError__SetupCrewSessionStateFailedToJoinCrewSession = 82,
	EBootflowError__SetupCrewSessionStateFailedToCreateCrewSession = 83,
	EBootflowError__SetupServiceBridgeStateFailed = 84,
	EBootflowError__SetupTelemetryDispatcherStateFailed = 85,
	EBootflowError__CrewSessionHandlerJoinFailedAsCrewIsFull = 86,
	EBootflowError__CrewSessionHandlerJoinFailedAsCrewDoesntExist = 87,
	EBootflowError__CrewSessionHandlerJoinFailedAsCouldNotRetrieveAddress = 88,
	EBootflowError__CrewSessionHandlerJoinFailedAsUnknownErrorOccurred = 89,
	EBootflowError__PirateSelectionStateUnableToObtainLocalPlayerInterface = 90,
	EBootflowError__PirateSelectionStateUnableToRetrievePirates = 91,
	EBootflowError__PirateSelectionStateUnableToCreatePirate = 92,
	EBootflowError__PirateSelectionStateUnableToReRollPirate = 93,
	EBootflowError__SessionSelectInvalidSessionTypeSpecified = 94,
	EBootflowError__InvitePrivilegesCheckFailed = 95,
	EBootflowError__InviteUnableToRetrieveSession = 96,
	EBootflowError__InviteSessionXboxPadOnly = 97,
	EBootflowError__InviteSessionNoBannedData = 98,
	EBootflowError__InviteSessionFull = 99,
	EBootflowError__InviteSessionUnknownFailure = 100,
	EBootflowError__InviteSessionNoTransferHandle = 101,
	EBootflowError__InviteSessionUnableToFindTargetSession = 102,
	EBootflowError__InviteSessionIsNotJoinable = 103,
	EBootflowError__FailedToEnumerateEntitlements = 104,
	EBootflowError__WhatsNewArticleRetrievalStateInvalidIdentityInterface = 105,
	EBootflowError__FailedToFetchExistingSessions = 106,
	EBootflowError__FailedToDisconnectFromServiceBridge = 107,
	EBootflowError__LobbySesssionHandlerFailedToCreateLobbySession = 108,
	EBootflowError__LobbySesssionHandlerFailedToJoinLobbySession = 109,
	EBootflowError__LobbySessionHandlerJoinFailedAsUnknownErrorOccurred = 110,
	EBootflowError__LobbySessionHandlerJoinFailedAsCouldNotRetrieveAddress = 111,
	EBootflowError__LobbySessionHandlerJoinFailedAsSessionIsFull = 112,
	EBootflowError__LobbySessionHandlerJoinFailedAsSessionDoesntExist = 113,
	EBootflowError__LobbySessionInviteIsNotJoinable = 114,
	EBootflowError__CreatorModeSessionStateFailedToCreateLobbySession = 115,
	EBootflowError__CreatorModeSessionStateFailedToJoinLobbySession = 116,
	EBootflowError__CreatorModeSessionStateFailedToAdoptCrewSession = 117,
	EBootflowError__CreatorModeSessionStateFailedToLeaveLobbySession = 118,
	EBootflowError__CreatorModeSessionStateFailedToRegisterCrewsOnService = 119,
	EBootflowError__CreatorModeSessionStateFailedToReplicateCrewsFromService = 120,
	EBootflowError__LobbySessionCrewlessPlayer = 121,
	EBootflowError__StampSwapDiscoveryRequestFailed = 122,
	EBootflowError__StampSwapDiscoveryRequestFailedNotAuthorized = 123,
	EBootflowError__StampSwapLoginTokenExchangeFailed = 124,
	EBootflowError__StampSwapLoginTokenExchangeFailedPlayerBannedPerm = 125,
	EBootflowError__StampSwapLoginTokenExchangeFailedPlayerBannedTemp = 126,
	EBootflowError__StampSwapLoginTokenExchangeFailedSteamError = 127,
	EBootflowError__StampSwapLoginTokenExchangeFailedSteamIncorrectAppToken = 128,
	EBootflowError__StampSwapLoginTokenExchangeFailedSteamTokenInvalid = 129,
	EBootflowError__StampSwapLoginTokenExchangeFailedSteamUnlicensed = 130,
	EBootflowError__StampSwapLoginTokenExchangeFailedTitleVersionInvalid = 131,
	EBootflowError__StampSwapLoginTokenExchangePlayerFailedFlightingCheck = 132,
	EBootflowError__StampSwapLoginTokenExchangePlayerFailedOtherTitleCheck = 133,
	EBootflowError__StampSwapSetupServiceBridgeFailed = 134,
	EBootflowError__StampSwapFailedToDisconnectFromServiceBridge = 135,
	EBootflowError__TestFailed     = 136,
	EBootflowError__TestNetworkError = 137,
	EBootflowError__Max            = 138,
	EBootflowError__EBootflowError_MAX = 139
};


// Enum Athena.EBootflowErrorPriority
enum class EBootflowErrorPriority : uint8_t
{
	EBootflowErrorPriority__High   = 0,
	EBootflowErrorPriority__AboveNormal = 1,
	EBootflowErrorPriority__Normal = 2,
	EBootflowErrorPriority__BelowNormal = 3,
	EBootflowErrorPriority__Low    = 4,
	EBootflowErrorPriority__EBootflowErrorPriority_MAX = 5
};


// Enum Athena.ECreativeLobbyState
enum class ECreativeLobbyState : uint8_t
{
	ECreativeLobbyState__Open      = 0,
	ECreativeLobbyState__ReadyToSetSail = 1,
	ECreativeLobbyState__Count     = 2,
	ECreativeLobbyState__ECreativeLobbyState_MAX = 3
};


// Enum Athena.ECreationMode
enum class ECreationMode : uint8_t
{
	ECreationMode__Invalid         = 0,
	ECreationMode__Create          = 1,
	ECreationMode__Join            = 2,
	ECreationMode__ECreationMode_MAX = 3
};


// Enum Athena.EStoreAsyncResult
enum class EStoreAsyncResult : uint8_t
{
	EStoreAsyncResult__Unknown     = 0,
	EStoreAsyncResult__GetAccessTokenInvalidHttpRequest = 1,
	EStoreAsyncResult__GetAccessTokenTimeout = 2,
	EStoreAsyncResult__GetAccessTokenCancelled = 3,
	EStoreAsyncResult__GetAccessTokenFailure = 4,
	EStoreAsyncResult__GetPurchaseRedemptionTokenInterfaceInvalid = 5,
	EStoreAsyncResult__GetPurchaseRedemptionTokenOnlineStoreFailure = 6,
	EStoreAsyncResult__GetPurchaseRedemptionTokenFailure = 7,
	EStoreAsyncResult__PostPurchaseRedemptionTokenInvalidHttpRequest = 8,
	EStoreAsyncResult__PostPurchaseRedemptionTokenCancelled = 9,
	EStoreAsyncResult__PostPurchaseRedemptionTokenTimeout = 10,
	EStoreAsyncResult__PostPurchaseRedemptionTokenFailure = 11,
	EStoreAsyncResult__Success     = 12,
	EStoreAsyncResult__EStoreAsyncResult_MAX = 13
};


// Enum Athena.EWaitForLoadingScreenSubState
enum class EWaitForLoadingScreenSubState : uint8_t
{
	EWaitForLoadingScreenSubState__Invalid = 0,
	EWaitForLoadingScreenSubState__CacheLoadingScreenDataAssetParams = 1,
	EWaitForLoadingScreenSubState__CacheLoadingScreenLoadingScreenParams = 2,
	EWaitForLoadingScreenSubState__CacheLoadingScreenContent = 3,
	EWaitForLoadingScreenSubState__Complete = 4,
	EWaitForLoadingScreenSubState__EWaitForLoadingScreenSubState_MAX = 5
};


// Enum Athena.EStreamingPlatform
enum class EStreamingPlatform : uint8_t
{
	EStreamingPlatform__Twitch     = 0,
	EStreamingPlatform__Mixer      = 1,
	EStreamingPlatform__YouTube    = 2,
	EStreamingPlatform__EStreamingPlatform_MAX = 3
};


// Enum Athena.EWaterPuzzleAlterationEndingState
enum class EWaterPuzzleAlterationEndingState : uint8_t
{
	EWaterPuzzleAlterationEndingState__Invalid = 0,
	EWaterPuzzleAlterationEndingState__Normal = 1,
	EWaterPuzzleAlterationEndingState__MaxToMax = 2,
	EWaterPuzzleAlterationEndingState__EWaterPuzzleAlterationEndingState_MAX = 3
};


// Enum Athena.EMeleeAttackMoveCorrectionReason
enum class EMeleeAttackMoveCorrectionReason : uint8_t
{
	EMeleeAttackMoveCorrectionReason__NotSpecified = 0,
	EMeleeAttackMoveCorrectionReason__SpedUpTooSoon = 1,
	EMeleeAttackMoveCorrectionReason__EMeleeAttackMoveCorrectionReason_MAX = 2
};


// Enum Athena.EInteractableOverlayActionType
enum class EInteractableOverlayActionType : uint8_t
{
	EInteractableOverlayActionType__None = 0,
	EInteractableOverlayActionType__Activate = 1,
	EInteractableOverlayActionType__EInteractableOverlayActionType_MAX = 2
};


// Enum Athena.EServerAsyncLoadingAckReason
enum class EServerAsyncLoadingAckReason : uint8_t
{
	EServerAsyncLoadingAckReason__Invalid = 0,
	EServerAsyncLoadingAckReason__Complete = 1,
	EServerAsyncLoadingAckReason__Timeout = 2,
	EServerAsyncLoadingAckReason__EServerAsyncLoadingAckReason_MAX = 3
};


// Enum Athena.EServerTeleportAckReason
enum class EServerTeleportAckReason : uint8_t
{
	EServerTeleportAckReason__Invalid = 0,
	EServerTeleportAckReason__Complete = 1,
	EServerTeleportAckReason__Timeout = 2,
	EServerTeleportAckReason__EServerTeleportAckReason_MAX = 3
};


// Enum Athena.EServerCameraFadeAckReason
enum class EServerCameraFadeAckReason : uint8_t
{
	EServerCameraFadeAckReason__Invalid = 0,
	EServerCameraFadeAckReason__Complete = 1,
	EServerCameraFadeAckReason__Timeout = 2,
	EServerCameraFadeAckReason__EServerCameraFadeAckReason_MAX = 3
};


// Enum Athena.EConsumeEntitlementFailureReason
enum class EConsumeEntitlementFailureReason : uint8_t
{
	EConsumeEntitlementFailureReason__ServiceUnavailable = 0,
	EConsumeEntitlementFailureReason__ItemNotFound = 1,
	EConsumeEntitlementFailureReason__RequestTimeout = 2,
	EConsumeEntitlementFailureReason__PreconditionFailed = 3,
	EConsumeEntitlementFailureReason__Unknown = 4,
	EConsumeEntitlementFailureReason__EConsumeEntitlementFailureReason_MAX = 5
};


// Enum Athena.EQuestGenAssetSuffix
enum class EQuestGenAssetSuffix : uint8_t
{
	EQuestGenAssetSuffix__Default  = 0,
	EQuestGenAssetSuffix__Underground = 1,
	EQuestGenAssetSuffix__AISpawn  = 2,
	EQuestGenAssetSuffix__EQuestGenAssetSuffix_MAX = 3
};


// Enum Athena.EPurchaseOfferFailureReason
enum class EPurchaseOfferFailureReason : uint8_t
{
	EPurchaseOfferFailureReason__ServiceUnavailable = 0,
	EPurchaseOfferFailureReason__OfferUnavailable = 1,
	EPurchaseOfferFailureReason__InsufficientFunds = 2,
	EPurchaseOfferFailureReason__EPurchaseOfferFailureReason_MAX = 3
};


// Enum Athena.EWalletBalanceRequestFailureReason
enum class EWalletBalanceRequestFailureReason : uint8_t
{
	EWalletBalanceRequestFailureReason__ServiceUnavailable = 0,
	EWalletBalanceRequestFailureReason__RequestTimeout = 1,
	EWalletBalanceRequestFailureReason__PendingRequest = 2,
	EWalletBalanceRequestFailureReason__RequestCancelled = 3,
	EWalletBalanceRequestFailureReason__EWalletBalanceRequestFailureReason_MAX = 4
};


// Enum Athena.EHttpRequestTelemetryResult
enum class EHttpRequestTelemetryResult : uint8_t
{
	EHttpRequestTelemetryResult__None = 0,
	EHttpRequestTelemetryResult__Completed = 1,
	EHttpRequestTelemetryResult__Failed = 2,
	EHttpRequestTelemetryResult__Cancelled = 3,
	EHttpRequestTelemetryResult__Aborted = 4,
	EHttpRequestTelemetryResult__EHttpRequestTelemetryResult_MAX = 5
};


// Enum Athena.EServerMatchmakingFailureReason
enum class EServerMatchmakingFailureReason : uint8_t
{
	EServerMatchmakingFailureReason__NoServersAvailable = 0,
	EServerMatchmakingFailureReason__CrewServerRequestBeingProcessed = 1,
	EServerMatchmakingFailureReason__CrewBeingMigrated = 2,
	EServerMatchmakingFailureReason__SandboxDisabled = 3,
	EServerMatchmakingFailureReason__EServerMatchmakingFailureReason_MAX = 4
};


// Enum Athena.EStoreRemoteServiceFutureStatus
enum class EStoreRemoteServiceFutureStatus : uint8_t
{
	EStoreRemoteServiceFutureStatus__Unknown = 0,
	EStoreRemoteServiceFutureStatus__NotStarted = 1,
	EStoreRemoteServiceFutureStatus__Failed = 2,
	EStoreRemoteServiceFutureStatus__Succeeded = 3,
	EStoreRemoteServiceFutureStatus__Cancelled = 4,
	EStoreRemoteServiceFutureStatus__TimedOut = 5,
	EStoreRemoteServiceFutureStatus__EStoreRemoteServiceFutureStatus_MAX = 6
};


// Enum Athena.EServerEnvironmentShutdownStatus
enum class EServerEnvironmentShutdownStatus : uint8_t
{
	EServerEnvironmentShutdownStatus__NotSet = 0,
	EServerEnvironmentShutdownStatus__Starting = 1,
	EServerEnvironmentShutdownStatus__StandingBy = 2,
	EServerEnvironmentShutdownStatus__Active = 3,
	EServerEnvironmentShutdownStatus__EServerEnvironmentShutdownStatus_MAX = 4
};


// Enum Athena.EPreLoginDeniedReason
enum class EPreLoginDeniedReason : uint8_t
{
	EPreLoginDeniedReason__None    = 0,
	EPreLoginDeniedReason__PirateRetreival = 1,
	EPreLoginDeniedReason__EntitlementsRetrieval = 2,
	EPreLoginDeniedReason__MPSDValidation = 3,
	EPreLoginDeniedReason__CrewNoLongerOnServer = 4,
	EPreLoginDeniedReason__CrewAssignmentFailed = 5,
	EPreLoginDeniedReason__AuthTokenValidation = 6,
	EPreLoginDeniedReason__UWPJoinAttemptRefusal = 7,
	EPreLoginDeniedReason__EPreLoginDeniedReason_MAX = 8
};


// Enum Athena.ETestTelemetryJsonSchemaWriterUEnum
enum class ETestTelemetryJsonSchemaWriterUEnum : uint8_t
{
	ETestTelemetryJsonSchemaWriterUEnum__None = 0,
	ETestTelemetryJsonSchemaWriterUEnum__FirstValue = 1,
	ETestTelemetryJsonSchemaWriterUEnum__SecondValue = 2,
	ETestTelemetryJsonSchemaWriterUEnum__ETestTelemetryJsonSchemaWriterUEnum_MAX = 3
};


// Enum Athena.EFriendStatus
enum class EFriendStatus : uint8_t
{
	EFriendStatus__None            = 0,
	EFriendStatus__Online          = 1,
	EFriendStatus__Offline         = 2,
	EFriendStatus__Away            = 3,
	EFriendStatus__EFriendStatus_MAX = 4
};


// Enum Athena.ESlidingDoorDirection
enum class ESlidingDoorDirection : uint8_t
{
	ESlidingDoorDirection__Up      = 0,
	ESlidingDoorDirection__Down    = 1,
	ESlidingDoorDirection__Forward = 2,
	ESlidingDoorDirection__Back    = 3,
	ESlidingDoorDirection__ESlidingDoorDirection_MAX = 4
};


// Enum Athena.ESlidingDoorState
enum class ESlidingDoorState : uint8_t
{
	ESlidingDoorState__Closing     = 0,
	ESlidingDoorState__Closed      = 1,
	ESlidingDoorState__Opening     = 2,
	ESlidingDoorState__Open        = 3,
	ESlidingDoorState__ESlidingDoorState_MAX = 4
};


// Enum Athena.ESwingDoorState
enum class ESwingDoorState : uint8_t
{
	ESwingDoorState__Closing       = 0,
	ESwingDoorState__Closed        = 1,
	ESwingDoorState__Opening       = 2,
	ESwingDoorState__Open          = 3,
	ESwingDoorState__ESwingDoorState_MAX = 4
};


// Enum Athena.ENPCOnSurfaceDespawnReason
enum class ENPCOnSurfaceDespawnReason : uint8_t
{
	ENPCOnSurfaceDespawnReason__PlayersLeftShip = 0,
	ENPCOnSurfaceDespawnReason__ShipSinking = 1,
	ENPCOnSurfaceDespawnReason__ChangingLocation = 2,
	ENPCOnSurfaceDespawnReason__CurrentLocationUnderWater = 3,
	ENPCOnSurfaceDespawnReason__ChangingState = 4,
	ENPCOnSurfaceDespawnReason__Hiding = 5,
	ENPCOnSurfaceDespawnReason__ManningCannon = 6,
	ENPCOnSurfaceDespawnReason__CurrentLocationOnFire = 7,
	ENPCOnSurfaceDespawnReason__BeingPermanentlyDestroyed = 8,
	ENPCOnSurfaceDespawnReason__ENPCOnSurfaceDespawnReason_MAX = 9
};


// Enum Athena.ENPCOnSurfaceFloodedLevel
enum class ENPCOnSurfaceFloodedLevel : uint8_t
{
	ENPCOnSurfaceFloodedLevel__Empty = 0,
	ENPCOnSurfaceFloodedLevel__LowerDeckFlooded = 1,
	ENPCOnSurfaceFloodedLevel__MidDeckFlooded = 2,
	ENPCOnSurfaceFloodedLevel__Sunk = 3,
	ENPCOnSurfaceFloodedLevel__ENPCOnSurfaceFloodedLevel_MAX = 4
};


// Enum Athena.EOpenableItemState
enum class EOpenableItemState : uint8_t
{
	EOpenableItemState__Open       = 0,
	EOpenableItemState__Closed     = 1,
	EOpenableItemState__EOpenableItemState_MAX = 2
};


// Enum Athena.ETradeRouteMapTextIdentifier
enum class ETradeRouteMapTextIdentifier : uint8_t
{
	ETradeRouteMapTextIdentifier__Misc = 0,
	ETradeRouteMapTextIdentifier__Vessel = 1,
	ETradeRouteMapTextIdentifier__Origin = 2,
	ETradeRouteMapTextIdentifier__Destination = 3,
	ETradeRouteMapTextIdentifier__ETradeRouteMapTextIdentifier_MAX = 4
};


// Enum Athena.ELoadPersistance
enum class ELoadPersistance : uint8_t
{
	ELoadPersistance__Permanent    = 0,
	ELoadPersistance__FrontEndOnly = 1,
	ELoadPersistance__CallbackOnly = 2,
	ELoadPersistance__ELoadPersistance_MAX = 3
};


// Enum Athena.EDelayLoadPhase
enum class EDelayLoadPhase : uint8_t
{
	EDelayLoadPhase__Boot          = 0,
	EDelayLoadPhase__FrontEnd      = 1,
	EDelayLoadPhase__EngageState   = 2,
	EDelayLoadPhase__PreloadGame   = 3,
	EDelayLoadPhase__InGame        = 4,
	EDelayLoadPhase__Count         = 5,
	EDelayLoadPhase__EDelayLoadPhase_MAX = 6
};


// Enum Athena.ERequestEntitlementBehaviour
enum class ERequestEntitlementBehaviour : uint8_t
{
	ERequestEntitlementBehaviour__Default = 0,
	ERequestEntitlementBehaviour__ForceRefresh = 1,
	ERequestEntitlementBehaviour__ERequestEntitlementBehaviour_MAX = 2
};


// Enum Athena.EEntitlementConsumptionState
enum class EEntitlementConsumptionState : uint8_t
{
	EEntitlementConsumptionState__Failed = 0,
	EEntitlementConsumptionState__Succeeded = 1,
	EEntitlementConsumptionState__TimedOut = 2,
	EEntitlementConsumptionState__EEntitlementConsumptionState_MAX = 3
};


// Enum Athena.EEntitlementStatus
enum class EEntitlementStatus : uint8_t
{
	EEntitlementStatus__Unknown    = 0,
	EEntitlementStatus__Invalid    = 1,
	EEntitlementStatus__UsableButUnverified = 2,
	EEntitlementStatus__UsableAndVerfied = 3,
	EEntitlementStatus__EEntitlementStatus_MAX = 4
};


// Enum Athena.EProgressStyle
enum class EProgressStyle : uint8_t
{
	EProgressStyle__Circle         = 0,
	EProgressStyle__Square         = 1,
	EProgressStyle__Hexagon        = 2,
	EProgressStyle__Diamond        = 3,
	EProgressStyle__SeaDogs        = 4,
	EProgressStyle__HuntersCall    = 5,
	EProgressStyle__ReapersBones   = 6,
	EProgressStyle__EProgressStyle_MAX = 7
};


// Enum Athena.EWieldAnimationGraph
enum class EWieldAnimationGraph : uint8_t
{
	EWieldAnimationGraph__ThirdPerson = 0,
	EWieldAnimationGraph__FirstPerson = 1,
	EWieldAnimationGraph__EWieldAnimationGraph_MAX = 2
};


// Enum Athena.EWieldAnimationLocation
enum class EWieldAnimationLocation : uint8_t
{
	EWieldAnimationLocation__Left  = 0,
	EWieldAnimationLocation__Right = 1,
	EWieldAnimationLocation__Floating = 2,
	EWieldAnimationLocation__LF_CAMERA_IK_HAND__Skeleton = 3,
	EWieldAnimationLocation__RT_CAMERA_IK_HAND__Skeleton = 4,
	EWieldAnimationLocation__LF_IK_HAND__Skeleton = 5,
	EWieldAnimationLocation__RT_IK_HAND__Skeleton = 6,
	EWieldAnimationLocation__Total = 7,
	EWieldAnimationLocation__EWieldAnimationLocation_MAX = 8
};


// Enum Athena.ECharacterHitReactionAnimType
enum class ECharacterHitReactionAnimType : uint8_t
{
	ECharacterHitReactionAnimType__Full = 0,
	ECharacterHitReactionAnimType__Flinch = 1,
	ECharacterHitReactionAnimType__None = 2,
	ECharacterHitReactionAnimType__Override = 3,
	ECharacterHitReactionAnimType__ECharacterHitReactionAnimType_MAX = 4
};


// Enum Athena.EFacialPriority
enum class EFacialPriority : uint8_t
{
	EFacialPriority__Low           = 0,
	EFacialPriority__Medium        = 1,
	EFacialPriority__High          = 2,
	EFacialPriority__MustPlay      = 3,
	EFacialPriority__EFacialPriority_MAX = 4
};


// Enum Athena.ELocomotionType
enum class ELocomotionType : uint8_t
{
	ELocomotionType__Standard      = 0,
	ELocomotionType__Limp          = 1,
	ELocomotionType__Drunk         = 2,
	ELocomotionType__PegLeg        = 3,
	ELocomotionType__Combat        = 4,
	ELocomotionType__HotCoals      = 5,
	ELocomotionType__MAX           = 6,
	ELocomotionType__ELocomotionType_MAX = 7
};


// Enum Athena.EStairAnimations
enum class EStairAnimations : uint8_t
{
	EStairAnimations__UpLeft       = 0,
	EStairAnimations__UpRight      = 1,
	EStairAnimations__DownLeft     = 2,
	EStairAnimations__DownRight    = 3,
	EStairAnimations__EStairAnimations_MAX = 4
};


// Enum Athena.EArmOverlayFlags
enum class EArmOverlayFlags : uint8_t
{
	EArmOverlayFlags__RightArmOnly = 0,
	EArmOverlayFlags__FullBody     = 1,
	EArmOverlayFlags__UpperBody    = 2,
	EArmOverlayFlags__UpperBodyLeft = 3,
	EArmOverlayFlags__UpperBodyRight = 4,
	EArmOverlayFlags__TwoHanded    = 5,
	EArmOverlayFlags__EArmOverlayFlags_MAX = 6
};


// Enum Athena.ETelemetryPlatformId
enum class ETelemetryPlatformId : uint8_t
{
	ETelemetryPlatformId__Undefined = 0,
	ETelemetryPlatformId__Aoelus   = 1,
	ETelemetryPlatformId__Xbox     = 2,
	ETelemetryPlatformId__Windows  = 3,
	ETelemetryPlatformId__DevPC    = 4,
	ETelemetryPlatformId__ETelemetryPlatformId_MAX = 5
};


// Enum Athena.EInputControllerTypeRemote
enum class EInputControllerTypeRemote : uint8_t
{
	EInputControllerTypeRemote__GamePad = 0,
	EInputControllerTypeRemote__Keyboard = 1,
	EInputControllerTypeRemote__EInputControllerTypeRemote_MAX = 2
};


// Enum Athena.EInputControllerType
enum class EInputControllerType : uint8_t
{
	EInputControllerType__GamePad  = 0,
	EInputControllerType__Keyboard = 1,
	EInputControllerType__EInputControllerType_MAX = 2
};


// Enum Athena.EAimSensitivitySettingCategory
enum class EAimSensitivitySettingCategory : uint8_t
{
	EAimSensitivitySettingCategory__Invalid = 0,
	EAimSensitivitySettingCategory__Blunderbuss = 1,
	EAimSensitivitySettingCategory__Flintlock = 2,
	EAimSensitivitySettingCategory__EyeOfReach = 3,
	EAimSensitivitySettingCategory__Spyglass = 4,
	EAimSensitivitySettingCategory__TridentOfDarkTides = 5,
	EAimSensitivitySettingCategory__EAimSensitivitySettingCategory_MAX = 6
};


// Enum Athena.FPerformanceCounterOptions
enum class EFPerformanceCounterOptions : uint8_t
{
	FPerformanceCounterOptions__None = 0,
	FPerformanceCounterOptions__FPS = 1,
	FPerformanceCounterOptions__Ping = 2,
	FPerformanceCounterOptions__FPSAndPing = 3,
	FPerformanceCounterOptions__FPerformanceCounterOptions_MAX = 4
};


// Enum Athena.FVsyncOptions
enum class EFVsyncOptions : uint8_t
{
	FVsyncOptions__Off             = 0,
	FVsyncOptions__On              = 1,
	FVsyncOptions__COUNT           = 2,
	FVsyncOptions__FVsyncOptions_MAX = 3
};


// Enum Athena.FPersistentUserGameSettingsDetail
enum class EFPersistentUserGameSettingsDetail : uint8_t
{
	FPersistentUserGameSettingsDetail__Min = 0,
	FPersistentUserGameSettingsDetail__Low = 1,
	FPersistentUserGameSettingsDetail__Medium = 2,
	FPersistentUserGameSettingsDetail__High = 3,
	FPersistentUserGameSettingsDetail__Ultra = 4,
	FPersistentUserGameSettingsDetail__Recommended = 5,
	FPersistentUserGameSettingsDetail__COUNT = 6,
	FPersistentUserGameSettingsDetail__FPersistentUserGameSettingsDetail_MAX = 7
};


// Enum Athena.EBindingSet
enum class EBindingSet : uint8_t
{
	EBindingSet__ActionBindings    = 0,
	EBindingSet__AxisBindings      = 1,
	EBindingSet__EBindingSet_MAX   = 2
};


// Enum Athena.EGameSettingType
enum class EGameSettingType : uint8_t
{
	EGameSettingType__Bool         = 0,
	EGameSettingType__Float        = 1,
	EGameSettingType__Int          = 2,
	EGameSettingType__INVALID      = 3,
	EGameSettingType__EGameSettingType_MAX = 4
};


// Enum Athena.EDitherFadeSetting
enum class EDitherFadeSetting : uint8_t
{
	EDitherFadeSetting__FadeIn     = 0,
	EDitherFadeSetting__FadeOut    = 1,
	EDitherFadeSetting__EDitherFadeSetting_MAX = 2
};


// Enum Athena.ELightTemplateType
enum class ELightTemplateType : uint8_t
{
	ELightTemplateType__PointLight = 0,
	ELightTemplateType__SpotLight  = 1,
	ELightTemplateType__ELightTemplateType_MAX = 2
};


// Enum Athena.EWalletCurrencyId
enum class EWalletCurrencyId : uint8_t
{
	EWalletCurrencyId__Undefined   = 0,
	EWalletCurrencyId__Gold        = 1,
	EWalletCurrencyId__WaywardTokens = 2,
	EWalletCurrencyId__Premium     = 3,
	EWalletCurrencyId__EWalletCurrencyId_MAX = 4
};


// Enum Athena.EStyleModifiers
enum class EStyleModifiers : uint8_t
{
	EStyleModifiers__Hide          = 0,
	EStyleModifiers__Emblem        = 1,
	EStyleModifiers__Brig          = 2,
	EStyleModifiers__Accessible    = 3,
	EStyleModifiers__EStyleModifiers_MAX = 4
};


// Enum Athena.EShopOfferAvailability
enum class EShopOfferAvailability : uint8_t
{
	EShopOfferAvailability__Available = 0,
	EShopOfferAvailability__AlreadyOwned = 1,
	EShopOfferAvailability__Locked = 2,
	EShopOfferAvailability__Info   = 3,
	EShopOfferAvailability__Hide   = 4,
	EShopOfferAvailability__EShopOfferAvailability_MAX = 5
};


// Enum Athena.EPreventDamageTypeLockReasons
enum class EPreventDamageTypeLockReasons : uint8_t
{
	EPreventDamageTypeLockReasons__IsFiredOutOfACannon = 0,
	EPreventDamageTypeLockReasons__AIStrategy = 1,
	EPreventDamageTypeLockReasons__Form = 2,
	EPreventDamageTypeLockReasons__IsHiddenInObject = 3,
	EPreventDamageTypeLockReasons__ExternalController = 4,
	EPreventDamageTypeLockReasons__EPreventDamageTypeLockReasons_MAX = 5
};


// Enum Athena.ERegenerationState
enum class ERegenerationState : uint8_t
{
	ERegenerationState__Regenerating = 0,
	ERegenerationState__Stopped    = 1,
	ERegenerationState__Paused     = 2,
	ERegenerationState__ERegenerationState_MAX = 3
};


// Enum Athena.ETeleportActionStateStage
enum class ETeleportActionStateStage : uint8_t
{
	ETeleportActionStateStage__Uninitialised = 0,
	ETeleportActionStateStage__Started = 1,
	ETeleportActionStateStage__CharacterFadeCompleteCondition = 2,
	ETeleportActionStateStage__PreTeleport = 3,
	ETeleportActionStateStage__CrewShipSpawnedIfPlayerIsInBrigCondition = 4,
	ETeleportActionStateStage__TeleportCompleteCondition = 5,
	ETeleportActionStateStage__AsyncLoadCompleteCondition = 6,
	ETeleportActionStateStage__ActorsRelevantSpawnCondition = 7,
	ETeleportActionStateStage__PlayerCreatedOnClientSpawnCondition = 8,
	ETeleportActionStateStage__PlayerLoadoutReceivedSpawnCondition = 9,
	ETeleportActionStateStage__PlayerEntitlementReceivedSpawnCondition = 10,
	ETeleportActionStateStage__ClientConditionsCompleteCondition = 11,
	ETeleportActionStateStage__CharacterReadyForContestRespawnCondition = 12,
	ETeleportActionStateStage__PostTeleport = 13,
	ETeleportActionStateStage__Ended = 14,
	ETeleportActionStateStage__ETeleportActionStateStage_MAX = 15
};


// Enum Athena.ETeleportActionStateReason
enum class ETeleportActionStateReason : uint8_t
{
	ETeleportActionStateReason__Uninitialised = 0,
	ETeleportActionStateReason__Test = 1,
	ETeleportActionStateReason__Cheat = 2,
	ETeleportActionStateReason__LeaveConcealingObject = 3,
	ETeleportActionStateReason__TeleportPlayerToSafety = 4,
	ETeleportActionStateReason__SinkingShip = 5,
	ETeleportActionStateReason__Mermaid = 6,
	ETeleportActionStateReason__RespawnStatue = 7,
	ETeleportActionStateReason__ReturnToShip = 8,
	ETeleportActionStateReason__PanicTeleport_FoundAssociatedLocation = 9,
	ETeleportActionStateReason__PanicTeleport_NotFoundAssociatedLocation = 10,
	ETeleportActionStateReason__PanicTeleport_NoAssociatedLocationsProvided = 11,
	ETeleportActionStateReason__TeleportTriggerObject = 12,
	ETeleportActionStateReason__SentToBrig = 13,
	ETeleportActionStateReason__HideOutEntered = 14,
	ETeleportActionStateReason__HideOutLeftToSpecificExitPoint = 15,
	ETeleportActionStateReason__HideOutLeftWithNoExitPoint = 16,
	ETeleportActionStateReason__ContestTeleportPlayerToShipOnRestart = 17,
	ETeleportActionStateReason__DebugTeleportCrewStep = 18,
	ETeleportActionStateReason__EnterTunnelOfTheDamned = 19,
	ETeleportActionStateReason__ExitTunnelOfTheDamned = 20,
	ETeleportActionStateReason__SpawnPlayer = 21,
	ETeleportActionStateReason__SpawnGhost = 22,
	ETeleportActionStateReason__TeleportPlayerFromSafeZone = 23,
	ETeleportActionStateReason__TaleProgressStatue = 24,
	ETeleportActionStateReason__ETeleportActionStateReason_MAX = 25
};


// Enum Athena.ETeleportTransformSpace
enum class ETeleportTransformSpace : uint8_t
{
	ETeleportTransformSpace__World = 0,
	ETeleportTransformSpace__RelativeToBase = 1,
	ETeleportTransformSpace__ETeleportTransformSpace_MAX = 2
};


// Enum Athena.ETeleportActionStateConditions
enum class ETeleportActionStateConditions : uint8_t
{
	ETeleportActionStateConditions__AllConditions = 0,
	ETeleportActionStateConditions__NoConditions = 1,
	ETeleportActionStateConditions__ETeleportActionStateConditions_MAX = 2
};


// Enum Athena.ETeleportActionStateFadeType
enum class ETeleportActionStateFadeType : uint8_t
{
	ETeleportActionStateFadeType__Fade = 0,
	ETeleportActionStateFadeType__NoFade = 1,
	ETeleportActionStateFadeType__ETeleportActionStateFadeType_MAX = 2
};


// Enum Athena.EAttitudeTowardActor
enum class EAttitudeTowardActor : uint8_t
{
	EAttitudeTowardActor__Friendly = 0,
	EAttitudeTowardActor__Neutral  = 1,
	EAttitudeTowardActor__Hostile  = 2,
	EAttitudeTowardActor__Alliance = 3,
	EAttitudeTowardActor__EAttitudeTowardActor_MAX = 4
};


// Enum Athena.ECharacterType
enum class ECharacterType : uint8_t
{
	ECharacterType__Ghost          = 0,
	ECharacterType__Character      = 1,
	ECharacterType__ECharacterType_MAX = 2
};


// Enum Athena.ETeleportNotificationSource
enum class ETeleportNotificationSource : uint8_t
{
	ETeleportNotificationSource__TeleportState = 0,
	ETeleportNotificationSource__WaitingToSpawnState = 1,
	ETeleportNotificationSource__ETeleportNotificationSource_MAX = 2
};


// Enum Athena.ETrackedActorType
enum class ETrackedActorType : uint8_t
{
	ETrackedActorType__Unknown     = 0,
	ETrackedActorType__AI_Fauna    = 1,
	ETrackedActorType__AI_GhostShip_Captain = 2,
	ETrackedActorType__AI_GhostShip_MiniBoss = 3,
	ETrackedActorType__AI_GhostShip_Grunt = 4,
	ETrackedActorType__AI_Kraken   = 5,
	ETrackedActorType__AI_Megalodon = 6,
	ETrackedActorType__AI_OceanCrawler_Crab = 7,
	ETrackedActorType__AI_OceanCrawler_Eel = 8,
	ETrackedActorType__AI_OceanCrawler_Hermit = 9,
	ETrackedActorType__AI_Pets     = 10,
	ETrackedActorType__AI_Pets_Wielded = 11,
	ETrackedActorType__AI_Siren    = 12,
	ETrackedActorType__AI_Shark    = 13,
	ETrackedActorType__AI_Ship_Aggressive_Large = 14,
	ETrackedActorType__AI_Ship_Aggressive_Small = 15,
	ETrackedActorType__AI_Ship_Battle_Large = 16,
	ETrackedActorType__AI_Ship_Battle_Small = 17,
	ETrackedActorType__AI_Ship_Passive_Large = 18,
	ETrackedActorType__AI_Ship_Passive_Small = 19,
	ETrackedActorType__AI_Skeleton = 20,
	ETrackedActorType__AI_SwimmingCreature = 21,
	ETrackedActorType__AshenLordCloud = 22,
	ETrackedActorType__BarrelsOfPlenty = 23,
	ETrackedActorType__Booty       = 24,
	ETrackedActorType__Booty_AshenWindsSkull = 25,
	ETrackedActorType__Booty_ReapersChest = 26,
	ETrackedActorType__BuoyantActor = 27,
	ETrackedActorType__Consumable  = 28,
	ETrackedActorType__Earthquake  = 29,
	ETrackedActorType__FireworkExplosion = 30,
	ETrackedActorType__FireworkProjectile = 31,
	ETrackedActorType__FishingFish = 32,
	ETrackedActorType__FogBank     = 33,
	ETrackedActorType__Geyser      = 34,
	ETrackedActorType__Ghostship_Flameheart_Cloud = 35,
	ETrackedActorType__Mermaid     = 36,
	ETrackedActorType__MessageInABottle = 37,
	ETrackedActorType__NPC         = 38,
	ETrackedActorType__Player      = 39,
	ETrackedActorType__Pouch_Ammo  = 40,
	ETrackedActorType__Pouch_Doubloons = 41,
	ETrackedActorType__Pouch_Gold  = 42,
	ETrackedActorType__Rowboat     = 43,
	ETrackedActorType__Rowboat_Cannon = 44,
	ETrackedActorType__Rowboat_Harpoon = 45,
	ETrackedActorType__Ship_Large  = 46,
	ETrackedActorType__Ship_Medium = 47,
	ETrackedActorType__Ship_Small  = 48,
	ETrackedActorType__ShipCloud   = 49,
	ETrackedActorType__Shipwreck   = 50,
	ETrackedActorType__ShortRangeMarker = 51,
	ETrackedActorType__SkeletonThrone = 52,
	ETrackedActorType__SkullCloud  = 53,
	ETrackedActorType__StatueThreat = 54,
	ETrackedActorType__StorageContainer = 55,
	ETrackedActorType__StorageContainerBuoyant = 56,
	ETrackedActorType__Storm       = 57,
	ETrackedActorType__SuperHeatedWater = 58,
	ETrackedActorType__Volcano     = 59,
	ETrackedActorType__WreckDebris_Land = 60,
	ETrackedActorType__WreckDebris_Sea = 61,
	ETrackedActorType__MAX         = 62,
	ETrackedActorType__ETrackedActorType_MAX = 63
};


// Enum Athena.ETrackedOwnerType
enum class ETrackedOwnerType : uint8_t
{
	ETrackedOwnerType__Unknown     = 0,
	ETrackedOwnerType__Consumable  = 1,
	ETrackedOwnerType__Booty       = 2,
	ETrackedOwnerType__Booty_ReapersChest = 3,
	ETrackedOwnerType__Booty_AshenWindsSkull = 4,
	ETrackedOwnerType__BarrelsOfPlenty = 5,
	ETrackedOwnerType__WreckDebris_Land = 6,
	ETrackedOwnerType__WreckDebris_Sea = 7,
	ETrackedOwnerType__ETrackedOwnerType_MAX = 8
};


// Enum Athena.EShipRegion
enum class EShipRegion : uint8_t
{
	EShipRegion__None              = 0,
	EShipRegion__TopDeck_Bow       = 1,
	EShipRegion__TopDeck_MainStairs = 2,
	EShipRegion__TopDeck_Hatch     = 3,
	EShipRegion__TopDeck_CaptainsCabin = 4,
	EShipRegion__TopDeck_WheelDeck = 5,
	EShipRegion__MapDeck_Front     = 6,
	EShipRegion__MapDeck_MainStairs = 7,
	EShipRegion__MapDeck_Table     = 8,
	EShipRegion__MapDeck_RearStairs = 9,
	EShipRegion__BrigDeck_Stairs   = 10,
	EShipRegion__BrigDeck_OutsideBrig = 11,
	EShipRegion__BrigDeck_InsideBrig = 12,
	EShipRegion__EShipRegion_MAX   = 13
};


// Enum Athena.EShipDeck
enum class EShipDeck : uint8_t
{
	EShipDeck__BottomDeck          = 0,
	EShipDeck__MidDeck             = 1,
	EShipDeck__TopDeck             = 2,
	EShipDeck__EShipDeck_MAX       = 3
};


// Enum Athena.EVfxCustomLocalSpaceMode
enum class EVfxCustomLocalSpaceMode : uint8_t
{
	EVfxCustomLocalSpaceMode__Default = 0,
	EVfxCustomLocalSpaceMode__ShipSpaceAutoLocal = 1,
	EVfxCustomLocalSpaceMode__ShipSpaceAutoPlayer = 2,
	EVfxCustomLocalSpaceMode__ShipSpaceAutoWorld = 3,
	EVfxCustomLocalSpaceMode__EVfxCustomLocalSpaceMode_MAX = 4
};


// Enum Athena.EVfxRegion
enum class EVfxRegion : uint8_t
{
	EVfxRegion__None               = 0,
	EVfxRegion__ShipExterior       = 1,
	EVfxRegion__ShipInterior       = 2,
	EVfxRegion__EVfxRegion_MAX     = 3
};


// Enum Athena.EVfxUnderwaterUsage
enum class EVfxUnderwaterUsage : uint8_t
{
	EVfxUnderwaterUsage__AboveWater = 0,
	EVfxUnderwaterUsage__UnderWater = 1,
	EVfxUnderwaterUsage__Both      = 2,
	EVfxUnderwaterUsage__EVfxUnderwaterUsage_MAX = 3
};


// Enum Athena.EBuoyantObjectState
enum class EBuoyantObjectState : uint8_t
{
	EBuoyantObjectState__Rising    = 0,
	EBuoyantObjectState__Floating  = 1,
	EBuoyantObjectState__Sinking   = 2,
	EBuoyantObjectState__Disappearing = 3,
	EBuoyantObjectState__EBuoyantObjectState_MAX = 4
};


// Enum Athena.EConditionalStatType
enum class EConditionalStatType : uint8_t
{
	EConditionalStatType__PlayerOnly = 0,
	EConditionalStatType__WholeCrew = 1,
	EConditionalStatType__WholeCrewButLegendsOnly = 2,
	EConditionalStatType__CrewAndAlliance = 3,
	EConditionalStatType__AllianceOnly = 4,
	EConditionalStatType__EConditionalStatType_MAX = 5
};


// Enum Athena.EStatConditionTarget
enum class EStatConditionTarget : uint8_t
{
	EStatConditionTarget__PlayerPawn = 0,
	EStatConditionTarget__ObjectOfInterest = 1,
	EStatConditionTarget__ObjectOfInterest2 = 2,
	EStatConditionTarget__EStatConditionTarget_MAX = 3
};


// Enum Athena.EPlayerStatsOperator
enum class EPlayerStatsOperator : uint8_t
{
	EPlayerStatsOperator__Sum      = 0,
	EPlayerStatsOperator__Replace  = 1,
	EPlayerStatsOperator__Minimum  = 2,
	EPlayerStatsOperator__Maximum  = 3,
	EPlayerStatsOperator__EPlayerStatsOperator_MAX = 4
};


// Enum Athena.EPlayerStatsType
enum class EPlayerStatsType : uint8_t
{
	EPlayerStatsType__Int          = 0,
	EPlayerStatsType__Double       = 1,
	EPlayerStatsType__EPlayerStatsType_MAX = 2
};


// Enum Athena.EShipAlignmentType
enum class EShipAlignmentType : uint8_t
{
	EShipAlignmentType__None       = 0,
	EShipAlignmentType__AlignedToShip = 1,
	EShipAlignmentType__AlignedToShipXYOnly = 2,
	EShipAlignmentType__EShipAlignmentType_MAX = 3
};


// Enum Athena.EShipState
enum class EShipState : uint8_t
{
	EShipState__PlainSailing       = 0,
	EShipState__GrindingToHalt     = 1,
	EShipState__Lowering           = 2,
	EShipState__ReduceWaterOcclusionZone = 3,
	EShipState__KeelingOver        = 4,
	EShipState__KeeledOver         = 5,
	EShipState__FinalSinking       = 6,
	EShipState__Dead               = 7,
	EShipState__EShipState_MAX     = 8
};


// Enum Athena.EBowSplashTickReturnType
enum class EBowSplashTickReturnType : uint8_t
{
	EBowSplashTickReturnType__NoEffectsPlayed = 0,
	EBowSplashTickReturnType__SFXOnly = 1,
	EBowSplashTickReturnType__SFXAndVFX = 2,
	EBowSplashTickReturnType__EBowSplashTickReturnType_MAX = 3
};


// Enum Athena.EShipPartCustomizationState
enum class EShipPartCustomizationState : uint8_t
{
	EShipPartCustomizationState__Idle = 0,
	EShipPartCustomizationState__SearchingForPart = 1,
	EShipPartCustomizationState__CustomizingPart = 2,
	EShipPartCustomizationState__RegisteringPart = 3,
	EShipPartCustomizationState__EShipPartCustomizationState_MAX = 4
};


// Enum Athena.EShipDynamicsAnchoredState
enum class EShipDynamicsAnchoredState : uint8_t
{
	EShipDynamicsAnchoredState__Unknown = 0,
	EShipDynamicsAnchoredState__Raised = 1,
	EShipDynamicsAnchoredState__Lowered = 2,
	EShipDynamicsAnchoredState__EShipDynamicsAnchoredState_MAX = 3
};


// Enum Athena.EAllianceNotificationType
enum class EAllianceNotificationType : uint8_t
{
	EAllianceNotificationType__Joined = 0,
	EAllianceNotificationType__Formed = 1,
	EAllianceNotificationType__Left = 2,
	EAllianceNotificationType__Disbanded = 3,
	EAllianceNotificationType__OtherCrewJoined = 4,
	EAllianceNotificationType__OtherCrewLeft = 5,
	EAllianceNotificationType__EAllianceNotificationType_MAX = 6
};


// Enum Athena.EAllianceJoinStatus
enum class EAllianceJoinStatus : uint8_t
{
	EAllianceJoinStatus__CannotJoinAlliance = 0,
	EAllianceJoinStatus__CanJoinAlliance = 1,
	EAllianceJoinStatus__IsInAlliance = 2,
	EAllianceJoinStatus__EAllianceJoinStatus_MAX = 3
};


// Enum Athena.EShipLocation
enum class EShipLocation : uint8_t
{
	EShipLocation__TOP_DECK        = 0,
	EShipLocation__MID_DECK        = 1,
	EShipLocation__BOTTOM_DECK     = 2,
	EShipLocation__HATCH_BACK_LEFT = 3,
	EShipLocation__HATCH_BACK_RIGHT = 4,
	EShipLocation__HATCH_FRONT_LEFT = 5,
	EShipLocation__HATCH_FRONT_RIGHT = 6,
	EShipLocation__CABIN_FRONT_DOOR = 7,
	EShipLocation__CABIN_SIDE_DOOR = 8,
	EShipLocation__TOP_DECK_BOW_PLANE = 9,
	EShipLocation__TOP_DECK_HATCH_PLANE = 10,
	EShipLocation__TOP_DECK_WHEEL_PLANE = 11,
	EShipLocation__MAP_DECK_FRONT_PLANE = 12,
	EShipLocation__MAP_DECK_TABLE_PLANE = 13,
	EShipLocation__MAP_DECK_REARSTAIRS_PLANE = 14,
	EShipLocation__BRIG_DECK_BRIG_PLANE = 15,
	EShipLocation__BRIG_DECK_STAIRS_PLANE = 16,
	EShipLocation__AITARGET_OFFSET_TO_EXTENTS = 17,
	EShipLocation__AITARGET_EXTENTS = 18,
	EShipLocation__AITARGET_ABOVE_DECK_OFFSET = 19,
	EShipLocation__AITARGET_ABOVE_DECK_EXTENTS = 20,
	EShipLocation__AITARGET_MID_DECK_OFFSET = 21,
	EShipLocation__AITARGET_MID_DECK_EXTENTS = 22,
	EShipLocation__AITARGET_LOWER_DECK_OFFSET = 23,
	EShipLocation__AITARGET_LOWER_DECK_EXTENTS = 24,
	EShipLocation__AI_KRAKEN_TENTACLE = 25,
	EShipLocation__CAPTAINS_TABLE_SPAWN_LOCATION = 26,
	EShipLocation__EShipLocation_MAX = 27
};


// Enum Athena.EShelterUpdateOption
enum class EShelterUpdateOption : uint8_t
{
	EShelterUpdateOption__Never    = 0,
	EShelterUpdateOption__OnStartUp = 1,
	EShelterUpdateOption__WithinRainZones = 2,
	EShelterUpdateOption__Always   = 3,
	EShelterUpdateOption__EShelterUpdateOption_MAX = 4
};


// Enum Athena.ESubmergedState
enum class ESubmergedState : uint8_t
{
	ESubmergedState__Surfaced      = 0,
	ESubmergedState__PartiallySubmerged = 1,
	ESubmergedState__FullySubmerged = 2,
	ESubmergedState__ESubmergedState_MAX = 3
};


// Enum Athena.EEmoteSequenceType
enum class EEmoteSequenceType : uint8_t
{
	EEmoteSequenceType__Continuous = 0,
	EEmoteSequenceType__OneShot    = 1,
	EEmoteSequenceType__EEmoteSequenceType_MAX = 2
};


// Enum Athena.EToggleOrHoldMode
enum class EToggleOrHoldMode : uint8_t
{
	EToggleOrHoldMode__Off         = 0,
	EToggleOrHoldMode__Hold        = 1,
	EToggleOrHoldMode__Toggle      = 2,
	EToggleOrHoldMode__EToggleOrHoldMode_MAX = 3
};


// Enum Athena.EUseSingleStick
enum class EUseSingleStick : uint8_t
{
	EUseSingleStick__Off           = 0,
	EUseSingleStick__LeftStick     = 1,
	EUseSingleStick__RightStick    = 2,
	EUseSingleStick__EUseSingleStick_MAX = 3
};


// Enum Athena.ECameraLookatAnimationType
enum class ECameraLookatAnimationType : uint8_t
{
	ECameraLookatAnimationType__Default = 0,
	ECameraLookatAnimationType__Wheel = 1,
	ECameraLookatAnimationType__Capstan = 2,
	ECameraLookatAnimationType__Sail = 3,
	ECameraLookatAnimationType__Tentacle = 4,
	ECameraLookatAnimationType__Ladder = 5,
	ECameraLookatAnimationType__Sitting = 6,
	ECameraLookatAnimationType__ECameraLookatAnimationType_MAX = 7
};


// Enum Athena.ELookAtRotationType
enum class ELookAtRotationType : uint8_t
{
	ELookAtRotationType__Rate      = 0,
	ELookAtRotationType__Raw       = 1,
	ELookAtRotationType__ELookAtRotationType_MAX = 2
};


// Enum Athena.EActionDisplayPriority
enum class EActionDisplayPriority : uint8_t
{
	EActionDisplayPriority__Primary = 0,
	EActionDisplayPriority__Secondary = 1,
	EActionDisplayPriority__Tertiary = 2,
	EActionDisplayPriority__Total  = 3,
	EActionDisplayPriority__EActionDisplayPriority_MAX = 4
};


// Enum Athena.EInteractableState
enum class EInteractableState : uint8_t
{
	EInteractableState__Interactable = 0,
	EInteractableState__DisableDescribe = 1,
	EInteractableState__DisabledDontDescribe = 2,
	EInteractableState__EInteractableState_MAX = 3
};


// Enum Athena.ETooltipHighlightType
enum class ETooltipHighlightType : uint8_t
{
	ETooltipHighlightType__Active  = 0,
	ETooltipHighlightType__GreyedOut = 1,
	ETooltipHighlightType__None    = 2,
	ETooltipHighlightType__ETooltipHighlightType_MAX = 3
};


// Enum Athena.ETooltipSpinnerType
enum class ETooltipSpinnerType : uint8_t
{
	ETooltipSpinnerType__None      = 0,
	ETooltipSpinnerType__Progress  = 1,
	ETooltipSpinnerType__ETooltipSpinnerType_MAX = 2
};


// Enum Athena.EPlayerActivityType
enum class EPlayerActivityType : uint8_t
{
	EPlayerActivityType__None      = 0,
	EPlayerActivityType__Bailing   = 1,
	EPlayerActivityType__Cannon    = 2,
	EPlayerActivityType__Cannon_END = 3,
	EPlayerActivityType__Capstan   = 4,
	EPlayerActivityType__Capstan_END = 5,
	EPlayerActivityType__CarryingBooty = 6,
	EPlayerActivityType__CarryingBooty_END = 7,
	EPlayerActivityType__Dead      = 8,
	EPlayerActivityType__Dead_END  = 9,
	EPlayerActivityType__Digging   = 10,
	EPlayerActivityType__Dousing   = 11,
	EPlayerActivityType__EmptyingBucket = 12,
	EPlayerActivityType__Harpoon   = 13,
	EPlayerActivityType__Harpoon_END = 14,
	EPlayerActivityType__LoseHealth = 15,
	EPlayerActivityType__Repairing = 16,
	EPlayerActivityType__Sails     = 17,
	EPlayerActivityType__Sails_END = 18,
	EPlayerActivityType__UndoingRepair = 19,
	EPlayerActivityType__Wheel     = 20,
	EPlayerActivityType__Wheel_END = 21,
	EPlayerActivityType__MAX       = 22,
	EPlayerActivityType__EPlayerActivityType_MAX = 23
};


// Enum Athena.ERadialMenuInputModality
enum class ERadialMenuInputModality : uint8_t
{
	ERadialMenuInputModality__None = 0,
	ERadialMenuInputModality__Keyboard = 1,
	ERadialMenuInputModality__Gamepad = 2,
	ERadialMenuInputModality__ERadialMenuInputModality_MAX = 3
};


// Enum Athena.ERadialInventoryType
enum class ERadialInventoryType : uint8_t
{
	ERadialInventoryType__None     = 0,
	ERadialInventoryType__Item     = 1,
	ERadialInventoryType__Map      = 2,
	ERadialInventoryType__Phrases  = 3,
	ERadialInventoryType__Emotes   = 4,
	ERadialInventoryType__ERadialInventoryType_MAX = 5
};


// Enum Athena.EDockableSocketOverlapUpdates
enum class EDockableSocketOverlapUpdates : uint8_t
{
	EDockableSocketOverlapUpdates__AllowUpdate = 0,
	EDockableSocketOverlapUpdates__BlockUpdate = 1,
	EDockableSocketOverlapUpdates__EDockableSocketOverlapUpdates_MAX = 2
};


// Enum Athena.EControllableObjectType
enum class EControllableObjectType : uint8_t
{
	EControllableObjectType__None  = 0,
	EControllableObjectType__Wheel = 1,
	EControllableObjectType__CapstanArm = 2,
	EControllableObjectType__Pulley = 3,
	EControllableObjectType__SailHoist = 4,
	EControllableObjectType__SailAngle = 5,
	EControllableObjectType__Cannon = 6,
	EControllableObjectType__MapTable = 7,
	EControllableObjectType__KeyedInstrument = 8,
	EControllableObjectType__Tentacle = 9,
	EControllableObjectType__Ladder = 10,
	EControllableObjectType__SkeletonShipWheel = 11,
	EControllableObjectType__Oars  = 12,
	EControllableObjectType__RowboatSeat = 13,
	EControllableObjectType__Seat  = 14,
	EControllableObjectType__Bed   = 15,
	EControllableObjectType__HarpoonLauncher = 16,
	EControllableObjectType__WaterPump = 17,
	EControllableObjectType__WaterSlide = 18,
	EControllableObjectType__EControllableObjectType_MAX = 19
};


// Enum Athena.ECharacterDeathType
enum class ECharacterDeathType : uint8_t
{
	ECharacterDeathType__Invalid   = 0,
	ECharacterDeathType__Killed    = 1,
	ECharacterDeathType__Despawn   = 2,
	ECharacterDeathType__OwnershipRemoved = 3,
	ECharacterDeathType__NoGameStatePresentDuringPostInitializeComponents = 4,
	ECharacterDeathType__ECharacterDeathType_MAX = 5
};


// Enum Athena.ELoadableState
enum class ELoadableState : uint8_t
{
	ELoadableState__Unloaded       = 0,
	ELoadableState__Unloading      = 1,
	ELoadableState__Loading        = 2,
	ELoadableState__Loaded         = 3,
	ELoadableState__ELoadableState_MAX = 4
};


// Enum Athena.ELadderType
enum class ELadderType : uint8_t
{
	ELadderType__Generic           = 0,
	ELadderType__BoatSide          = 1,
	ELadderType__BoatCrowsnest     = 2,
	ELadderType__ClamberSpot       = 3,
	ELadderType__ELadderType_MAX   = 4
};


// Enum Athena.ELadderTransitionMode
enum class ELadderTransitionMode : uint8_t
{
	ELadderTransitionMode__OnTop   = 0,
	ELadderTransitionMode__OffTop  = 1,
	ELadderTransitionMode__OnBottom = 2,
	ELadderTransitionMode__OffBottom = 3,
	ELadderTransitionMode__Max     = 4,
	ELadderTransitionMode__ELadderTransitionMode_MAX = 5
};


// Enum Athena.EMeleeWeaponMovementSpeed
enum class EMeleeWeaponMovementSpeed : uint8_t
{
	EMeleeWeaponMovementSpeed__Default = 0,
	EMeleeWeaponMovementSpeed__SlightlySlowed = 1,
	EMeleeWeaponMovementSpeed__Slowed = 2,
	EMeleeWeaponMovementSpeed__EMeleeWeaponMovementSpeed_MAX = 3
};


// Enum Athena.EMeleeAttackInterruptReason
enum class EMeleeAttackInterruptReason : uint8_t
{
	EMeleeAttackInterruptReason__Stopping = 0,
	EMeleeAttackInterruptReason__Comboing = 1,
	EMeleeAttackInterruptReason__EMeleeAttackInterruptReason_MAX = 2
};


// Enum Athena.EMeleeWeaponAttackType
enum class EMeleeWeaponAttackType : uint8_t
{
	EMeleeWeaponAttackType__Combo  = 0,
	EMeleeWeaponAttackType__Heavy  = 1,
	EMeleeWeaponAttackType__Special = 2,
	EMeleeWeaponAttackType__EMeleeWeaponAttackType_MAX = 3
};


// Enum Athena.EGameplayEventSignalType
enum class EGameplayEventSignalType : uint8_t
{
	EGameplayEventSignalType__SkellyFort = 0,
	EGameplayEventSignalType__SkellyShip = 1,
	EGameplayEventSignalType__AshenLord = 2,
	EGameplayEventSignalType__FlameheartGhostShips = 3,
	EGameplayEventSignalType__MAX  = 4,
	EGameplayEventSignalType__EGameplayEventSignalType_MAX = 5
};


// Enum Athena.EGameEventStatus
enum class EGameEventStatus : uint8_t
{
	EGameEventStatus__Failed       = 0,
	EGameEventStatus__Triggered    = 1,
	EGameEventStatus__Complete     = 2,
	EGameEventStatus__EGameEventStatus_MAX = 3
};


// Enum Athena.EEncounterActorRemovedReason
enum class EEncounterActorRemovedReason : uint8_t
{
	EEncounterActorRemovedReason__Defeated = 0,
	EEncounterActorRemovedReason__Despawned = 1,
	EEncounterActorRemovedReason__Deleted = 2,
	EEncounterActorRemovedReason__EEncounterActorRemovedReason_MAX = 3
};


// Enum Athena.EGameEventSchedulerEventType
enum class EGameEventSchedulerEventType : uint8_t
{
	EGameEventSchedulerEventType__Unknown = 0,
	EGameEventSchedulerEventType__AI_Kraken = 1,
	EGameEventSchedulerEventType__AI_Megalodon = 2,
	EGameEventSchedulerEventType__AI_Ship_Aggressive = 3,
	EGameEventSchedulerEventType__AI_Ship_Passive = 4,
	EGameEventSchedulerEventType__ShipCloud = 5,
	EGameEventSchedulerEventType__SkullCloud = 6,
	EGameEventSchedulerEventType__Ghostship_Flameheart_Cloud = 7,
	EGameEventSchedulerEventType__AshenLordCloud = 8,
	EGameEventSchedulerEventType__LegendarySkullCloud = 9,
	EGameEventSchedulerEventType__EGameEventSchedulerEventType_MAX = 10
};


// Enum Athena.ECompassDirections
enum class ECompassDirections : uint8_t
{
	ECompassDirections__North      = 0,
	ECompassDirections__NorthByNorthEast = 1,
	ECompassDirections__NorthEast  = 2,
	ECompassDirections__EastByNorthEast = 3,
	ECompassDirections__East       = 4,
	ECompassDirections__EastBySouthEast = 5,
	ECompassDirections__SouthEast  = 6,
	ECompassDirections__SouthBySouthEast = 7,
	ECompassDirections__South      = 8,
	ECompassDirections__SouthBySouthWest = 9,
	ECompassDirections__SouthWest  = 10,
	ECompassDirections__WestBySouthWest = 11,
	ECompassDirections__West       = 12,
	ECompassDirections__WestByNorthWest = 13,
	ECompassDirections__NorthWest  = 14,
	ECompassDirections__NorthByNorthWest = 15,
	ECompassDirections__NumDirections = 16,
	ECompassDirections__ECompassDirections_MAX = 17
};


// Enum Athena.EDigDirection
enum class EDigDirection : uint8_t
{
	EDigDirection__None            = 0,
	EDigDirection__Exhuming        = 1,
	EDigDirection__Burying         = 2,
	EDigDirection__EDigDirection_MAX = 3
};


// Enum Athena.EEncounterListenerType
enum class EEncounterListenerType : uint8_t
{
	EEncounterListenerType__None   = 0,
	EEncounterListenerType__Ship   = 1,
	EEncounterListenerType__Player = 2,
	EEncounterListenerType__Count  = 3,
	EEncounterListenerType__EEncounterListenerType_MAX = 4
};


// Enum Athena.EEncounterMobility
enum class EEncounterMobility : uint8_t
{
	EEncounterMobility__Static     = 0,
	EEncounterMobility__Mobile     = 1,
	EEncounterMobility__EEncounterMobility_MAX = 2
};


// Enum Athena.EEncounterDimensions
enum class EEncounterDimensions : uint8_t
{
	EEncounterDimensions__ThreeDimensions = 0,
	EEncounterDimensions__TwoDimensions = 1,
	EEncounterDimensions__EEncounterDimensions_MAX = 2
};


// Enum Athena.EEncounterType
enum class EEncounterType : uint8_t
{
	EEncounterType__None           = 0,
	EEncounterType__Storm          = 1,
	EEncounterType__BarrelsOfPlenty = 2,
	EEncounterType__ShipSighting   = 3,
	EEncounterType__ShipEncounter  = 4,
	EEncounterType__ShipwreckEventSighting = 5,
	EEncounterType__ShipwreckEventEncounter = 6,
	EEncounterType__ShipwreckAmbientSighting = 7,
	EEncounterType__ShipwreckAmbientEncounter = 8,
	EEncounterType__SkellyFortSighting = 9,
	EEncounterType__SkellyFortEncounter = 10,
	EEncounterType__SkellyFortLegendaryFortSighting = 11,
	EEncounterType__SkellyFortLegendaryFortEncounter = 12,
	EEncounterType__KrakenSighting = 13,
	EEncounterType__KrakenEncounter = 14,
	EEncounterType__TinySharkSighting = 15,
	EEncounterType__TinySharkEncounter = 16,
	EEncounterType__AIShipSighting = 17,
	EEncounterType__AIShipEncounter = 18,
	EEncounterType__FogBank        = 19,
	EEncounterType__BoxOfSecrets   = 20,
	EEncounterType__ReapersChest   = 21,
	EEncounterType__EmergentCaptain = 22,
	EEncounterType__AncientSkelly  = 23,
	EEncounterType__AshenLordSighting = 24,
	EEncounterType__AshenLordEncounter = 25,
	EEncounterType__AggressiveGhostShipsAmbientSighting = 26,
	EEncounterType__AggressiveGhostShipsAmbientEncounter = 27,
	EEncounterType__AggressiveGhostShipsEventSighting = 28,
	EEncounterType__AggressiveGhostShipsEventEncounter = 29,
	EEncounterType__SunkenKingdomTreasurySighting = 30,
	EEncounterType__SunkenKingdomTreasuryEncounter = 31,
	EEncounterType__Count          = 32,
	EEncounterType__EEncounterType_MAX = 33
};


// Enum Athena.EFeedableType
enum class EFeedableType : uint8_t
{
	EFeedableType__None            = 0,
	EFeedableType__Meat            = 1,
	EFeedableType__Fruit           = 2,
	EFeedableType__Bait            = 3,
	EFeedableType__EFeedableType_MAX = 4
};


// Enum Athena.ESpawnedItemSource
enum class ESpawnedItemSource : uint8_t
{
	ESpawnedItemSource__None       = 0,
	ESpawnedItemSource__Quest      = 1,
	ESpawnedItemSource__Shipwreck  = 2,
	ESpawnedItemSource__FloatingAtSea = 3,
	ESpawnedItemSource__Island     = 4,
	ESpawnedItemSource__SkellyFort = 5,
	ESpawnedItemSource__AIShip     = 6,
	ESpawnedItemSource__Megalodon  = 7,
	ESpawnedItemSource__KrakenTentacle = 8,
	ESpawnedItemSource__SunkenCurseArtefact = 9,
	ESpawnedItemSource__EmergentCaptain = 10,
	ESpawnedItemSource__PlayerShip = 11,
	ESpawnedItemSource__AggressiveGhostShip = 12,
	ESpawnedItemSource__Siren      = 13,
	ESpawnedItemSource__SunkenKingdom = 14,
	ESpawnedItemSource__BuriedByPlayer = 15,
	ESpawnedItemSource__OceanCrawlers = 16,
	ESpawnedItemSource__ESpawnedItemSource_MAX = 17
};


// Enum Athena.ETreasureMapVerticalAlignment
enum class ETreasureMapVerticalAlignment : uint8_t
{
	ETreasureMapVerticalAlignment__Top = 0,
	ETreasureMapVerticalAlignment__Centre = 1,
	ETreasureMapVerticalAlignment__ETreasureMapVerticalAlignment_MAX = 2
};


// Enum Athena.ETreasureMapHorizontalAlignment
enum class ETreasureMapHorizontalAlignment : uint8_t
{
	ETreasureMapHorizontalAlignment__Left = 0,
	ETreasureMapHorizontalAlignment__Centre = 1,
	ETreasureMapHorizontalAlignment__Right = 2,
	ETreasureMapHorizontalAlignment__ETreasureMapHorizontalAlignment_MAX = 3
};


// Enum Athena.ERewardType
enum class ERewardType : uint8_t
{
	ERewardType__XP                = 0,
	ERewardType__Gold              = 1,
	ERewardType__Entitlement       = 2,
	ERewardType__WaywardTokens     = 3,
	ERewardType__Level             = 4,
	ERewardType__Emblem            = 5,
	ERewardType__Achievement       = 6,
	ERewardType__PremiumCurrency   = 7,
	ERewardType__SeasonXP          = 8,
	ERewardType__Null              = 9,
	ERewardType__ERewardType_MAX   = 10
};


// Enum Athena.ERewardRequestFailureReason
enum class ERewardRequestFailureReason : uint8_t
{
	ERewardRequestFailureReason__FailedToProcess = 0,
	ERewardRequestFailureReason__TimedOut = 1,
	ERewardRequestFailureReason__Unknown = 2,
	ERewardRequestFailureReason__ERewardRequestFailureReason_MAX = 3
};


// Enum Athena.ERewardDestinationType
enum class ERewardDestinationType : uint8_t
{
	ERewardDestinationType__Player = 0,
	ERewardDestinationType__Crew   = 1,
	ERewardDestinationType__Alliance = 2,
	ERewardDestinationType__ERewardDestinationType_MAX = 3
};


// Enum Athena.InventoryAction
enum class EInventoryAction : uint8_t
{
	InventoryAction__Take          = 0,
	InventoryAction__Stow          = 1,
	InventoryAction__InventoryAction_MAX = 2
};


// Enum Athena.InventoryItemState
enum class EInventoryItemState : uint8_t
{
	InventoryItemState__Default    = 0,
	InventoryItemState__Locked     = 1,
	InventoryItemState__InventoryItemState_MAX = 2
};


// Enum Athena.EBootyTypes
enum class EBootyTypes : uint8_t
{
	EBootyTypes__Invalid           = 0,
	EBootyTypes__TreasureChest     = 1,
	EBootyTypes__BountySkull       = 2,
	EBootyTypes__MerchantCrate     = 3,
	EBootyTypes__GunpowderBarrel   = 4,
	EBootyTypes__TreasureArtifact  = 5,
	EBootyTypes__AncientChest      = 6,
	EBootyTypes__PirateLordBooty   = 7,
	EBootyTypes__BoxOfSecrets      = 8,
	EBootyTypes__CargoRunCrate     = 9,
	EBootyTypes__MermaidGem        = 10,
	EBootyTypes__CollectorsChest   = 11,
	EBootyTypes__DroppedPouch      = 12,
	EBootyTypes__FishedItem        = 13,
	EBootyTypes__Food              = 14,
	EBootyTypes__TaleArtifact      = 15,
	EBootyTypes__CampaignBooty     = 16,
	EBootyTypes__ReapersBooty      = 17,
	EBootyTypes__ReapersBounty     = 18,
	EBootyTypes__RitualSkull       = 19,
	EBootyTypes__AshenBooty        = 20,
	EBootyTypes__AshenGift         = 21,
	EBootyTypes__EmissaryFlotsam   = 22,
	EBootyTypes__GoldMound         = 23,
	EBootyTypes__MerchantManifest  = 24,
	EBootyTypes__BreathOfTheSea    = 25,
	EBootyTypes__NonSellable       = 26,
	EBootyTypes__EBootyTypes_MAX   = 27
};


// Enum Athena.EItemOwnershipType
enum class EItemOwnershipType : uint8_t
{
	EItemOwnershipType__NotOwned   = 0,
	EItemOwnershipType__Owned      = 1,
	EItemOwnershipType__FirstOwner = 2,
	EItemOwnershipType__FirstOwnerFromCrew = 3,
	EItemOwnershipType__OriginalOwner = 4,
	EItemOwnershipType__Stolen     = 5,
	EItemOwnershipType__FirstStolenByCrew = 6,
	EItemOwnershipType__EItemOwnershipType_MAX = 7
};


// Enum Athena.EShovelDigType
enum class EShovelDigType : uint8_t
{
	EShovelDigType__Success        = 0,
	EShovelDigType__PatDownSuccess = 1,
	EShovelDigType__DeflectOffHardGround = 2,
	EShovelDigType__Invalid        = 3,
	EShovelDigType__None           = 4,
	EShovelDigType__EShovelDigType_MAX = 5
};


// Enum Athena.EIngestionState
enum class EIngestionState : uint8_t
{
	EIngestionState__Idle          = 0,
	EIngestionState__InToIngestion = 1,
	EIngestionState__OutOfIngestion = 2,
	EIngestionState__EIngestionState_MAX = 3
};


// Enum Athena.EShowVoyageBannersState
enum class EShowVoyageBannersState : uint8_t
{
	EShowVoyageBannersState__Show  = 0,
	EShowVoyageBannersState__DontShow = 1,
	EShowVoyageBannersState__EShowVoyageBannersState_MAX = 2
};


// Enum Athena.EQuestMapIcon
enum class EQuestMapIcon : uint8_t
{
	EQuestMapIcon__Unknown         = 0,
	EQuestMapIcon__XMarksTheSpot   = 1,
	EQuestMapIcon__Riddle          = 2,
	EQuestMapIcon__Bounty          = 3,
	EQuestMapIcon__Merchant        = 4,
	EQuestMapIcon__MessageInABottle = 5,
	EQuestMapIcon__CargoRun        = 6,
	EQuestMapIcon__SkeletonOrder   = 7,
	EQuestMapIcon__Emissary        = 8,
	EQuestMapIcon__Wayfinder       = 9,
	EQuestMapIcon__MerchantClue    = 10,
	EQuestMapIcon__Fishing         = 11,
	EQuestMapIcon__TreasureBuriedByYou = 12,
	EQuestMapIcon__TreasureBuriedByOther = 13,
	EQuestMapIcon__EQuestMapIcon_MAX = 14
};


// Enum Athena.EQuestType
enum class EQuestType : uint8_t
{
	EQuestType__Unknown            = 0,
	EQuestType__XMarksTheSpot      = 1,
	EQuestType__Riddle             = 2,
	EQuestType__Bounty             = 3,
	EQuestType__Merchant           = 4,
	EQuestType__CargoRun           = 5,
	EQuestType__Tale               = 6,
	EQuestType__Matchmake          = 7,
	EQuestType__EmergantVoyage     = 8,
	EQuestType__Reward             = 9,
	EQuestType__Staging            = 10,
	EQuestType__EQuestType_MAX     = 11
};


// Enum Athena.EEmergentVoyageSource
enum class EEmergentVoyageSource : uint8_t
{
	EEmergentVoyageSource__Unknown = 0,
	EEmergentVoyageSource__MessageInABottle = 1,
	EEmergentVoyageSource__SkeletonOrder = 2,
	EEmergentVoyageSource__Emissary = 3,
	EEmergentVoyageSource__CoralMessageInABottle = 4,
	EEmergentVoyageSource__EEmergentVoyageSource_MAX = 5
};


// Enum Athena.EQuestStatus
enum class EQuestStatus : uint8_t
{
	EQuestStatus__Pending          = 0,
	EQuestStatus__Starting         = 1,
	EQuestStatus__InProgress       = 2,
	EQuestStatus__Complete         = 3,
	EQuestStatus__EQuestStatus_MAX = 4
};


// Enum Athena.EVoyageChangeReason
enum class EVoyageChangeReason : uint8_t
{
	EVoyageChangeReason__Unknown   = 0,
	EVoyageChangeReason__PreviousWasCompleted = 1,
	EVoyageChangeReason__PreviousWasCancelled = 2,
	EVoyageChangeReason__EVoyageChangeReason_MAX = 3
};


// Enum Athena.EQuestResultFromDig
enum class EQuestResultFromDig : uint8_t
{
	EQuestResultFromDig__None      = 0,
	EQuestResultFromDig__Chest     = 1,
	EQuestResultFromDig__QuestItem = 2,
	EQuestResultFromDig__EQuestResultFromDig_MAX = 3
};


// Enum Athena.EVoyageJoinStatus
enum class EVoyageJoinStatus : uint8_t
{
	EVoyageJoinStatus__Other       = 0,
	EVoyageJoinStatus__Start       = 1,
	EVoyageJoinStatus__JoinInProgress = 2,
	EVoyageJoinStatus__EVoyageJoinStatus_MAX = 3
};


// Enum Athena.EVoyageLeaveStatus
enum class EVoyageLeaveStatus : uint8_t
{
	EVoyageLeaveStatus__Other      = 0,
	EVoyageLeaveStatus__Completed  = 1,
	EVoyageLeaveStatus__Cancelled  = 2,
	EVoyageLeaveStatus__QuitInProgress = 3,
	EVoyageLeaveStatus__Migrated   = 4,
	EVoyageLeaveStatus__EVoyageLeaveStatus_MAX = 5
};


// Enum Athena.EVoyageChapterProgressionType
enum class EVoyageChapterProgressionType : uint8_t
{
	EVoyageChapterProgressionType__DrivenByAnyQuestCompletion = 0,
	EVoyageChapterProgressionType__DrivenBySpecificQuestCompletion = 1,
	EVoyageChapterProgressionType__EVoyageChapterProgressionType_MAX = 2
};


// Enum Athena.EQuestDistributionMethod
enum class EQuestDistributionMethod : uint8_t
{
	EQuestDistributionMethod__AllAtOnce = 0,
	EQuestDistributionMethod__PerChapter = 1,
	EQuestDistributionMethod__FixedChapters = 2,
	EQuestDistributionMethod__EQuestDistributionMethod_MAX = 3
};


// Enum Athena.EQuestLocationSelectionMethod
enum class EQuestLocationSelectionMethod : uint8_t
{
	EQuestLocationSelectionMethod__NoRepetitionWithinVoyage = 0,
	EQuestLocationSelectionMethod__NoRepetitionWithinAdjacentChapters = 1,
	EQuestLocationSelectionMethod__AllIslandsAvailable = 2,
	EQuestLocationSelectionMethod__EQuestLocationSelectionMethod_MAX = 3
};


// Enum Athena.EQuestPoolSelectionMethod
enum class EQuestPoolSelectionMethod : uint8_t
{
	EQuestPoolSelectionMethod__Sequential = 0,
	EQuestPoolSelectionMethod__Random = 1,
	EQuestPoolSelectionMethod__EQuestPoolSelectionMethod_MAX = 2
};


// Enum Athena.ERiddleActions
enum class ERiddleActions : uint8_t
{
	ERiddleActions__RaiseLanternAnyone = 0,
	ERiddleActions__PlayAnyInstrumentAnyone = 1,
	ERiddleActions__Dig            = 2,
	ERiddleActions__LookAtMap      = 3,
	ERiddleActions__NumActions     = 4,
	ERiddleActions__ERiddleActions_MAX = 5
};


// Enum Athena.ELandmarkUniqueness
enum class ELandmarkUniqueness : uint8_t
{
	ELandmarkUniqueness__Unique    = 0,
	ELandmarkUniqueness__NonUnique = 1,
	ELandmarkUniqueness__ELandmarkUniqueness_MAX = 2
};


// Enum Athena.ELandmarkVagueness
enum class ELandmarkVagueness : uint8_t
{
	ELandmarkVagueness__Vague      = 0,
	ELandmarkVagueness__NonVague   = 1,
	ELandmarkVagueness__ELandmarkVagueness_MAX = 2
};


// Enum Athena.EEventRunLocation
enum class EEventRunLocation : uint8_t
{
	EEventRunLocation__Client      = 0,
	EEventRunLocation__Server      = 1,
	EEventRunLocation__ClientAndServer = 2,
	EEventRunLocation__EEventRunLocation_MAX = 3
};


// Enum Athena.ENPCDisplayNameType
enum class ENPCDisplayNameType : uint8_t
{
	ENPCDisplayNameType__NPCAndIsland = 0,
	ENPCDisplayNameType__NPCOnly   = 1,
	ENPCDisplayNameType__IslandOnly = 2,
	ENPCDisplayNameType__ENPCDisplayNameType_MAX = 3
};


// Enum Athena.ENPCChatType
enum class ENPCChatType : uint8_t
{
	ENPCChatType__Chat             = 0,
	ENPCChatType__Subtitles        = 1,
	ENPCChatType__ENPCChatType_MAX = 2
};


// Enum Athena.EAmmoEffectState
enum class EAmmoEffectState : uint8_t
{
	EAmmoEffectState__Idle         = 0,
	EAmmoEffectState__Processing   = 1,
	EAmmoEffectState__Stopped      = 2,
	EAmmoEffectState__EAmmoEffectState_MAX = 3
};


// Enum Athena.EIslandTextureSourceType
enum class EIslandTextureSourceType : uint8_t
{
	EIslandTextureSourceType__TreasureMap = 0,
	EIslandTextureSourceType__WorldMap = 1,
	EIslandTextureSourceType__EIslandTextureSourceType_MAX = 2
};


// Enum Athena.ERiddleActionLocationOffsets
enum class ERiddleActionLocationOffsets : uint8_t
{
	ERiddleActionLocationOffsets__PerformActionAtLocation = 0,
	ERiddleActionLocationOffsets__PerformActionAtCompassDirectionOffsetFromLocation = 1,
	ERiddleActionLocationOffsets__ERiddleActionLocationOffsets_MAX = 2
};


// Enum Athena.ERiddleLocations
enum class ERiddleLocations : uint8_t
{
	ERiddleLocations__NotOnIsland  = 0,
	ERiddleLocations__UniqueNonVagueLandmark = 1,
	ERiddleLocations__UniqueVagueLandmark = 2,
	ERiddleLocations__NonUniqueNonVagueLandmark = 3,
	ERiddleLocations__Island       = 4,
	ERiddleLocations__ERiddleLocations_MAX = 5
};


// Enum Athena.EFaunaAnimationSnakeAttackDirection
enum class EFaunaAnimationSnakeAttackDirection : uint8_t
{
	EFaunaAnimationSnakeAttackDirection__Forwards = 0,
	EFaunaAnimationSnakeAttackDirection__Backwards = 1,
	EFaunaAnimationSnakeAttackDirection__EFaunaAnimationSnakeAttackDirection_MAX = 2
};


// Enum Athena.EFaunaAnimationStartledLevel
enum class EFaunaAnimationStartledLevel : uint8_t
{
	EFaunaAnimationStartledLevel__None = 0,
	EFaunaAnimationStartledLevel__Low = 1,
	EFaunaAnimationStartledLevel__High = 2,
	EFaunaAnimationStartledLevel__EFaunaAnimationStartledLevel_MAX = 3
};


// Enum Athena.EFaunaAnimationLocation
enum class EFaunaAnimationLocation : uint8_t
{
	EFaunaAnimationLocation__Land  = 0,
	EFaunaAnimationLocation__Sea   = 1,
	EFaunaAnimationLocation__Underwater = 2,
	EFaunaAnimationLocation__EFaunaAnimationLocation_MAX = 3
};


// Enum Athena.EFaunaAnimationState
enum class EFaunaAnimationState : uint8_t
{
	EFaunaAnimationState__Idle     = 0,
	EFaunaAnimationState__Locomotion = 1,
	EFaunaAnimationState__Impact   = 2,
	EFaunaAnimationState__DyingLoop = 3,
	EFaunaAnimationState__Death    = 4,
	EFaunaAnimationState__Special  = 5,
	EFaunaAnimationState__EFaunaAnimationState_MAX = 6
};


// Enum Athena.ELockAnimationState
enum class ELockAnimationState : uint8_t
{
	ELockAnimationState__None      = 0,
	ELockAnimationState__InterpolatingIn = 1,
	ELockAnimationState__Unlocking = 2,
	ELockAnimationState__ELockAnimationState_MAX = 3
};


// Enum Athena.ECollectorsChestMaterial
enum class ECollectorsChestMaterial : uint8_t
{
	ECollectorsChestMaterial__Wood = 0,
	ECollectorsChestMaterial__Stone = 1,
	ECollectorsChestMaterial__ECollectorsChestMaterial_MAX = 2
};


// Enum Athena.EMermaidState
enum class EMermaidState : uint8_t
{
	EMermaidState__Rising          = 0,
	EMermaidState__Idle            = 1,
	EMermaidState__Disappearing    = 2,
	EMermaidState__EMermaidState_MAX = 3
};


// Enum Athena.ERomeBeaconAttachType
enum class ERomeBeaconAttachType : uint8_t
{
	ERomeBeaconAttachType__Ship    = 0,
	ERomeBeaconAttachType__Player  = 1,
	ERomeBeaconAttachType__MAX     = 2,
	ERomeBeaconAttachType__ERomeBeaconAttachType_MAX = 3
};


// Enum Athena.EBootyStorageMaterialState
enum class EBootyStorageMaterialState : uint8_t
{
	EBootyStorageMaterialState__Empty = 0,
	EBootyStorageMaterialState__Partial = 1,
	EBootyStorageMaterialState__Full = 2,
	EBootyStorageMaterialState__EBootyStorageMaterialState_MAX = 3
};


// Enum Athena.ETransientCampfireStateChange
enum class ETransientCampfireStateChange : uint8_t
{
	ETransientCampfireStateChange__Extinguished = 0,
	ETransientCampfireStateChange__WoodAdded = 1,
	ETransientCampfireStateChange__Ignited = 2,
	ETransientCampfireStateChange__Stoked = 3,
	ETransientCampfireStateChange__BurnedDown = 4,
	ETransientCampfireStateChange__ETransientCampfireStateChange_MAX = 5
};


// Enum Athena.EStickinessType
enum class EStickinessType : uint8_t
{
	EStickinessType__DontStick     = 0,
	EStickinessType__StickTemporarily = 1,
	EStickinessType__StickForever  = 2,
	EStickinessType__EStickinessType_MAX = 3
};


// Enum Athena.ENotificationType
enum class ENotificationType : uint8_t
{
	ENotificationType__Chat        = 0,
	ENotificationType__Server      = 1,
	ENotificationType__FormattedChat = 2,
	ENotificationType__STTChat     = 3,
	ENotificationType__EmoteDescription = 4,
	ENotificationType__ENotificationType_MAX = 5
};


// Enum Athena.ECutsceneActivatonState
enum class ECutsceneActivatonState : uint8_t
{
	ECutsceneActivatonState__Enabled = 0,
	ECutsceneActivatonState__Disabled = 1,
	ECutsceneActivatonState__Active = 2,
	ECutsceneActivatonState__FinishedPlaying = 3,
	ECutsceneActivatonState__Decommissioned = 4,
	ECutsceneActivatonState__ECutsceneActivatonState_MAX = 5
};


// Enum Athena.ENamedPointCollectionSearchTag
enum class ENamedPointCollectionSearchTag : uint8_t
{
	ENamedPointCollectionSearchTag__None = 0,
	ENamedPointCollectionSearchTag__PirateLegendsVoyage = 1,
	ENamedPointCollectionSearchTag__PirateLegends_HauntedFort = 2,
	ENamedPointCollectionSearchTag__PirateLegends_HauntedIsland = 3,
	ENamedPointCollectionSearchTag__PirateLegends_LyingMap = 4,
	ENamedPointCollectionSearchTag__PirateLegends_PictureMap = 5,
	ENamedPointCollectionSearchTag__PirateLegends_ShipwreckGraveyard = 6,
	ENamedPointCollectionSearchTag__PirateLegends_ZoomMap = 7,
	ENamedPointCollectionSearchTag__ENamedPointCollectionSearchTag_MAX = 8
};


// Enum Athena.ENamedPointGroupSearchTag
enum class ENamedPointGroupSearchTag : uint8_t
{
	ENamedPointGroupSearchTag__None = 0,
	ENamedPointGroupSearchTag__ItemSpawnLocation = 1,
	ENamedPointGroupSearchTag__ItemBuryLocation = 2,
	ENamedPointGroupSearchTag__Exclude = 3,
	ENamedPointGroupSearchTag__ENamedPointGroupSearchTag_MAX = 4
};


// Enum Athena.EWheelAnimationType
enum class EWheelAnimationType : uint8_t
{
	EWheelAnimationType__SmallTurn = 0,
	EWheelAnimationType__LeftTurnMid = 1,
	EWheelAnimationType__LeftTurnFast = 2,
	EWheelAnimationType__RightTurnMid = 3,
	EWheelAnimationType__RightTurnFast = 4,
	EWheelAnimationType__EWheelAnimationType_MAX = 5
};


// Enum Athena.EWheelDirection
enum class EWheelDirection : uint8_t
{
	EWheelDirection__Any           = 0,
	EWheelDirection__Anticlockwise = 1,
	EWheelDirection__Clockwise     = 2,
	EWheelDirection__EWheelDirection_MAX = 3
};


// Enum Athena.EVoyageDifficultyScope
enum class EVoyageDifficultyScope : uint8_t
{
	EVoyageDifficultyScope__Tale   = 0,
	EVoyageDifficultyScope__Standard = 1,
	EVoyageDifficultyScope__Emergent = 2,
	EVoyageDifficultyScope__EVoyageDifficultyScope_MAX = 3
};


// Enum Athena.EStormEffectLockReasons
enum class EStormEffectLockReasons : uint8_t
{
	EStormEffectLockReasons__InsideExclusionVolume = 0,
	EStormEffectLockReasons__AccessibilityToggledOff = 1,
	EStormEffectLockReasons__EStormEffectLockReasons_MAX = 2
};


// Enum Athena.ERespawnPointOrientation
enum class ERespawnPointOrientation : uint8_t
{
	ERespawnPointOrientation__None = 0,
	ERespawnPointOrientation__North = 1,
	ERespawnPointOrientation__South = 2,
	ERespawnPointOrientation__West = 3,
	ERespawnPointOrientation__East = 4,
	ERespawnPointOrientation__Outward = 5,
	ERespawnPointOrientation__Inward = 6,
	ERespawnPointOrientation__Random = 7,
	ERespawnPointOrientation__ERespawnPointOrientation_MAX = 8
};


// Enum Athena.EContestState
enum class EContestState : uint8_t
{
	EContestState__Idle            = 0,
	EContestState__Staging         = 1,
	EContestState__Contest         = 2,
	EContestState__PostContest     = 3,
	EContestState__Reward          = 4,
	EContestState__EContestState_MAX = 5
};


// Enum Athena.EContestScoreId
enum class EContestScoreId : uint8_t
{
	EContestScoreId__Undefined     = 0,
	EContestScoreId__Silver        = 1,
	EContestScoreId__EContestScoreId_MAX = 2
};


// Enum Athena.DrowningState
enum class EDrowningState : uint8_t
{
	DrowningState__NotDrowning     = 0,
	DrowningState__Drowning        = 1,
	DrowningState__Gulping         = 2,
	DrowningState__ResetDrowning   = 3,
	DrowningState__DrowningState_MAX = 4
};


// Enum Athena.EMastDamageState
enum class EMastDamageState : uint8_t
{
	EMastDamageState__Intact       = 0,
	EMastDamageState__Secured      = 1,
	EMastDamageState__Upright      = 2,
	EMastDamageState__FreeToMove   = 3,
	EMastDamageState__EMastDamageState_MAX = 4
};


// Enum Athena.EMastType
enum class EMastType : uint8_t
{
	EMastType__Front               = 0,
	EMastType__Main                = 1,
	EMastType__Rear                = 2,
	EMastType__EMastType_MAX       = 3
};


// Enum Athena.ERowBraking
enum class ERowBraking : uint8_t
{
	ERowBraking__None              = 0,
	ERowBraking__BrakeLeft         = 1,
	ERowBraking__BrakeRight        = 2,
	ERowBraking__BrakeBoth         = 3,
	ERowBraking__ERowBraking_MAX   = 4
};


// Enum Athena.EMechanismActionActivationMode
enum class EMechanismActionActivationMode : uint8_t
{
	EMechanismActionActivationMode__Any = 0,
	EMechanismActionActivationMode__All = 1,
	EMechanismActionActivationMode__EMechanismActionActivationMode_MAX = 2
};


// Enum Athena.EMechanismActionState
enum class EMechanismActionState : uint8_t
{
	EMechanismActionState__Active  = 0,
	EMechanismActionState__Inactive = 1,
	EMechanismActionState__EMechanismActionState_MAX = 2
};


// Enum Athena.EMechanismActionType
enum class EMechanismActionType : uint8_t
{
	EMechanismActionType__OneShot  = 0,
	EMechanismActionType__Continuous = 1,
	EMechanismActionType__EMechanismActionType_MAX = 2
};


// Enum Athena.EMechanismTriggerState
enum class EMechanismTriggerState : uint8_t
{
	EMechanismTriggerState__Active = 0,
	EMechanismTriggerState__Inactive = 1,
	EMechanismTriggerState__Disabled = 2,
	EMechanismTriggerState__EMechanismTriggerState_MAX = 3
};


// Enum Athena.EMechanismTriggerType
enum class EMechanismTriggerType : uint8_t
{
	EMechanismTriggerType__OneShot = 0,
	EMechanismTriggerType__Continuous = 1,
	EMechanismTriggerType__EMechanismTriggerType_MAX = 2
};


// Enum Athena.EAnimatedMechanismTickCost
enum class EAnimatedMechanismTickCost : uint8_t
{
	EAnimatedMechanismTickCost__Low = 0,
	EAnimatedMechanismTickCost__High = 1,
	EAnimatedMechanismTickCost__EAnimatedMechanismTickCost_MAX = 2
};


// Enum Athena.EMechanismAnimationEventType
enum class EMechanismAnimationEventType : uint8_t
{
	EMechanismAnimationEventType__OneShot = 0,
	EMechanismAnimationEventType__Continuous = 1,
	EMechanismAnimationEventType__EMechanismAnimationEventType_MAX = 2
};


// Enum Athena.ETimedDoorCheckpointState
enum class ETimedDoorCheckpointState : uint8_t
{
	ETimedDoorCheckpointState__Lowering = 0,
	ETimedDoorCheckpointState__Jammed = 1,
	ETimedDoorCheckpointState__ETimedDoorCheckpointState_MAX = 2
};


// Enum Athena.ETimedDoorState
enum class ETimedDoorState : uint8_t
{
	ETimedDoorState__Lowering      = 0,
	ETimedDoorState__Closed        = 1,
	ETimedDoorState__Opening       = 2,
	ETimedDoorState__Jammed        = 3,
	ETimedDoorState__ETimedDoorState_MAX = 4
};


// Enum Athena.ESimpleAnimatedMechanismActionMode
enum class ESimpleAnimatedMechanismActionMode : uint8_t
{
	ESimpleAnimatedMechanismActionMode__OneShot = 0,
	ESimpleAnimatedMechanismActionMode__OneShotRetriggerable = 1,
	ESimpleAnimatedMechanismActionMode__Continuous = 2,
	ESimpleAnimatedMechanismActionMode__ESimpleAnimatedMechanismActionMode_MAX = 3
};


// Enum Athena.ECollisionShapeType
enum class ECollisionShapeType : uint8_t
{
	ECollisionShapeType__Sphere    = 0,
	ECollisionShapeType__Box       = 1,
	ECollisionShapeType__ECollisionShapeType_MAX = 2
};


// Enum Athena.ESwitchMechanismTriggerRandomSelectionMode
enum class ESwitchMechanismTriggerRandomSelectionMode : uint8_t
{
	ESwitchMechanismTriggerRandomSelectionMode__Any = 0,
	ESwitchMechanismTriggerRandomSelectionMode__InactiveOnly = 1,
	ESwitchMechanismTriggerRandomSelectionMode__ESwitchMechanismTriggerRandomSelectionMode_MAX = 2
};


// Enum Athena.EVFXMechanismAnimationEventMode
enum class EVFXMechanismAnimationEventMode : uint8_t
{
	EVFXMechanismAnimationEventMode__FixedRelativeOffset = 0,
	EVFXMechanismAnimationEventMode__FixedMechanismVFXComponentLocation = 1,
	EVFXMechanismAnimationEventMode__AttachedToSceneComponent = 2,
	EVFXMechanismAnimationEventMode__EVFXMechanismAnimationEventMode_MAX = 3
};


// Enum Athena.EOverrideState
enum class EOverrideState : uint8_t
{
	EOverrideState__Free           = 0,
	EOverrideState__StartingOverride = 1,
	EOverrideState__EndingOverride = 2,
	EOverrideState__Overridden     = 3,
	EOverrideState__EOverrideState_MAX = 4
};


// Enum Athena.EEventRoomState
enum class EEventRoomState : uint8_t
{
	EEventRoomState__Inactive      = 0,
	EEventRoomState__Waiting       = 1,
	EEventRoomState__Active        = 2,
	EEventRoomState__Completed     = 3,
	EEventRoomState__Aftermath     = 4,
	EEventRoomState__EEventRoomState_MAX = 5
};


// Enum Athena.EItemUseSpeed
enum class EItemUseSpeed : uint8_t
{
	EItemUseSpeed__Default         = 0,
	EItemUseSpeed__Custom          = 1,
	EItemUseSpeed__Custom01        = 2,
	EItemUseSpeed__EItemUseSpeed_MAX = 3
};


// Enum Athena.EMaxMoveSpeedScalarReason
enum class EMaxMoveSpeedScalarReason : uint8_t
{
	EMaxMoveSpeedScalarReason__Digging = 0,
	EMaxMoveSpeedScalarReason__Limping = 1,
	EMaxMoveSpeedScalarReason__UsingItem = 2,
	EMaxMoveSpeedScalarReason__Stunned = 3,
	EMaxMoveSpeedScalarReason__MeleeBlocking = 4,
	EMaxMoveSpeedScalarReason__Testing = 5,
	EMaxMoveSpeedScalarReason__Environment = 6,
	EMaxMoveSpeedScalarReason__NumReasons = 7,
	EMaxMoveSpeedScalarReason__EMaxMoveSpeedScalarReason_MAX = 8
};


// Enum Athena.EWreckSpawnBlockType
enum class EWreckSpawnBlockType : uint8_t
{
	EWreckSpawnBlockType__AlwaysBlock = 0,
	EWreckSpawnBlockType__NeverBlock = 1,
	EWreckSpawnBlockType__PotentialBlockage = 2,
	EWreckSpawnBlockType__EWreckSpawnBlockType_MAX = 3
};


// Enum Athena.EWreckSpawnCheckFlag
enum class EWreckSpawnCheckFlag : uint8_t
{
	EWreckSpawnCheckFlag__None     = 0,
	EWreckSpawnCheckFlag__Players  = 1,
	EWreckSpawnCheckFlag__Ships    = 2,
	EWreckSpawnCheckFlag__AmbientWrecks = 3,
	EWreckSpawnCheckFlag__CustomWrecks = 4,
	EWreckSpawnCheckFlag__Islands  = 5,
	EWreckSpawnCheckFlag__AmbientWrecksWithNearPlayers = 6,
	EWreckSpawnCheckFlag__AmbientWrecksWithoutNearPlayers = 7,
	EWreckSpawnCheckFlag__SeaRocks = 8,
	EWreckSpawnCheckFlag__EWreckSpawnCheckFlag_MAX = 9
};


// Enum Athena.EBaitType
enum class EBaitType : uint8_t
{
	EBaitType__NoBait              = 0,
	EBaitType__EarthWorms          = 1,
	EBaitType__Grubs               = 2,
	EBaitType__Leeches             = 3,
	EBaitType__EBaitType_MAX       = 4
};


// Enum Athena.EFishSize
enum class EFishSize : uint8_t
{
	EFishSize__Medium              = 0,
	EFishSize__Large               = 1,
	EFishSize__EFishSize_MAX       = 2
};


// Enum Athena.EFishSpawnTimeOfDay
enum class EFishSpawnTimeOfDay : uint8_t
{
	EFishSpawnTimeOfDay__AnyTime   = 0,
	EFishSpawnTimeOfDay__OnlyDay   = 1,
	EFishSpawnTimeOfDay__OnlyNight = 2,
	EFishSpawnTimeOfDay__EFishSpawnTimeOfDay_MAX = 3
};


// Enum Athena.EFishAnimationState
enum class EFishAnimationState : uint8_t
{
	EFishAnimationState__SwimmingLoop = 0,
	EFishAnimationState__Fighting  = 1,
	EFishAnimationState__Tired     = 2,
	EFishAnimationState__Escaped   = 3,
	EFishAnimationState__Caught    = 4,
	EFishAnimationState__EFishAnimationState_MAX = 5
};


// Enum Athena.EFishingFishState
enum class EFishingFishState : uint8_t
{
	EFishingFishState__NotSet      = 0,
	EFishingFishState__RisingFromTheDepths = 1,
	EFishingFishState__AttachedToFloat_MovingToFloat = 2,
	EFishingFishState__AttachedToFloat_Battling = 3,
	EFishingFishState__AttachedToFloat_Tired = 4,
	EFishingFishState__AttachedToFloat_Caught = 5,
	EFishingFishState__AttachedToFloat_Caught_Instant = 6,
	EFishingFishState__Escaping    = 7,
	EFishingFishState__EFishingFishState_MAX = 8
};


// Enum Athena.EFishingFloatState
enum class EFishingFloatState : uint8_t
{
	EFishingFloatState__NotSet     = 0,
	EFishingFloatState__AttachedToRod = 1,
	EFishingFloatState__Casting    = 2,
	EFishingFloatState__CastingFailed = 3,
	EFishingFloatState__FloatingOnWater = 4,
	EFishingFloatState__BringingInCatch = 5,
	EFishingFloatState__Retracting = 6,
	EFishingFloatState__ViolentlyRetracting = 7,
	EFishingFloatState__EFishingFloatState_MAX = 8
};


// Enum Athena.EFishingMiniGamePlayerInputBattlingDirection
enum class EFishingMiniGamePlayerInputBattlingDirection : uint8_t
{
	EFishingMiniGamePlayerInputBattlingDirection__BattlingAgainstLeft = 0,
	EFishingMiniGamePlayerInputBattlingDirection__BattlingAgainstRight = 1,
	EFishingMiniGamePlayerInputBattlingDirection__BattlingAgainstAway = 2,
	EFishingMiniGamePlayerInputBattlingDirection__EFishingMiniGamePlayerInputBattlingDirection_MAX = 3
};


// Enum Athena.EFishingMiniGamePlayerInputDirection
enum class EFishingMiniGamePlayerInputDirection : uint8_t
{
	EFishingMiniGamePlayerInputDirection__None = 0,
	EFishingMiniGamePlayerInputDirection__Left = 1,
	EFishingMiniGamePlayerInputDirection__Away = 2,
	EFishingMiniGamePlayerInputDirection__Right = 3,
	EFishingMiniGamePlayerInputDirection__Towards = 4,
	EFishingMiniGamePlayerInputDirection__EFishingMiniGamePlayerInputDirection_MAX = 5
};


// Enum Athena.EFishingMiniGameEscapeDirection
enum class EFishingMiniGameEscapeDirection : uint8_t
{
	EFishingMiniGameEscapeDirection__None = 0,
	EFishingMiniGameEscapeDirection__Left = 1,
	EFishingMiniGameEscapeDirection__Away = 2,
	EFishingMiniGameEscapeDirection__Right = 3,
	EFishingMiniGameEscapeDirection__EFishingMiniGameEscapeDirection_MAX = 4
};


// Enum Athena.EFishingMiniGameState
enum class EFishingMiniGameState : uint8_t
{
	EFishingMiniGameState__Battling = 0,
	EFishingMiniGameState__Recovering = 1,
	EFishingMiniGameState__EFishingMiniGameState_MAX = 2
};


// Enum Athena.EFishingRodServerState
enum class EFishingRodServerState : uint8_t
{
	EFishingRodServerState__NotBeingUsed = 0,
	EFishingRodServerState__PreparingToCast = 1,
	EFishingRodServerState__VerifyingCastLocation = 2,
	EFishingRodServerState__Casting = 3,
	EFishingRodServerState__DelayBeforeSpawningFish = 4,
	EFishingRodServerState__RequestFishSpawnWhenPossible = 5,
	EFishingRodServerState__WaitingForAsyncLoadToFinish = 6,
	EFishingRodServerState__WaitingForFishToBite = 7,
	EFishingRodServerState__FishMovingInToBite = 8,
	EFishingRodServerState__FishOnRodAndWaitingForPlayerInput = 9,
	EFishingRodServerState__FishMovingToMinimumDistanceFromPlayer = 10,
	EFishingRodServerState__FishingMiniGameUnderway = 11,
	EFishingRodServerState__FishCaught = 12,
	EFishingRodServerState__ReelingInAComedyItem = 13,
	EFishingRodServerState__ComedyItemCaught = 14,
	EFishingRodServerState__EFishingRodServerState_MAX = 15
};


// Enum Athena.EFishingRodRetractLineVisuals
enum class EFishingRodRetractLineVisuals : uint8_t
{
	EFishingRodRetractLineVisuals__None = 0,
	EFishingRodRetractLineVisuals__Normal = 1,
	EFishingRodRetractLineVisuals__Violent = 2,
	EFishingRodRetractLineVisuals__EFishingRodRetractLineVisuals_MAX = 3
};


// Enum Athena.EFishingRodBattlingState
enum class EFishingRodBattlingState : uint8_t
{
	EFishingRodBattlingState__NotBattling = 0,
	EFishingRodBattlingState__Battling_Tiring = 1,
	EFishingRodBattlingState__Battling_NotTiring = 2,
	EFishingRodBattlingState__Battling_Tired = 3,
	EFishingRodBattlingState__EFishingRodBattlingState_MAX = 4
};


// Enum Athena.EFishingState
enum class EFishingState : uint8_t
{
	EFishingState__None            = 0,
	EFishingState__Casting         = 1,
	EFishingState__CastForwards    = 2,
	EFishingState__CastSuccess     = 3,
	EFishingState__CastFailed      = 4,
	EFishingState__Fishing         = 5,
	EFishingState__IntoFighting    = 6,
	EFishingState__Fighting        = 7,
	EFishingState__Success         = 8,
	EFishingState__Failure         = 9,
	EFishingState__EFishingState_MAX = 10
};


// Enum Athena.EMusicalInstrumentType
enum class EMusicalInstrumentType : uint8_t
{
	EMusicalInstrumentType__Banjo  = 0,
	EMusicalInstrumentType__Bass   = 1,
	EMusicalInstrumentType__Concertina = 2,
	EMusicalInstrumentType__Drums  = 3,
	EMusicalInstrumentType__HurdyGurdy = 4,
	EMusicalInstrumentType__OneManBand = 5,
	EMusicalInstrumentType__Sousaphone = 6,
	EMusicalInstrumentType__Ukulele = 7,
	EMusicalInstrumentType__VoiceBox = 8,
	EMusicalInstrumentType__Total  = 9,
	EMusicalInstrumentType__EMusicalInstrumentType_MAX = 10
};


// Enum Athena.EShantyEnsembleOption
enum class EShantyEnsembleOption : uint8_t
{
	EShantyEnsembleOption__TryToJoinExistingNearbyEnsemble = 0,
	EShantyEnsembleOption__ForceNewEnsemble = 1,
	EShantyEnsembleOption__EShantyEnsembleOption_MAX = 2
};


// Enum Athena.EPetMontageAnimationType
enum class EPetMontageAnimationType : uint8_t
{
	EPetMontageAnimationType__None = 0,
	EPetMontageAnimationType__OneShot = 1,
	EPetMontageAnimationType__LoopingOneShot = 2,
	EPetMontageAnimationType__LoopingStaged = 3,
	EPetMontageAnimationType__EPetMontageAnimationType_MAX = 4
};


// Enum Athena.EPetMontageAnimationState
enum class EPetMontageAnimationState : uint8_t
{
	EPetMontageAnimationState__None = 0,
	EPetMontageAnimationState__OneShot = 1,
	EPetMontageAnimationState__ContinuousIn = 2,
	EPetMontageAnimationState__ContinuousLoop = 3,
	EPetMontageAnimationState__ContinuousOut = 4,
	EPetMontageAnimationState__ExitContinuousLoop = 5,
	EPetMontageAnimationState__EPetMontageAnimationState_MAX = 6
};


// Enum Athena.EAthenaAnimationPetRoamingState
enum class EAthenaAnimationPetRoamingState : uint8_t
{
	EAthenaAnimationPetRoamingState__Idle = 0,
	EAthenaAnimationPetRoamingState__Locomotion = 1,
	EAthenaAnimationPetRoamingState__LocomtionScared = 2,
	EAthenaAnimationPetRoamingState__Unique = 3,
	EAthenaAnimationPetRoamingState__React = 4,
	EAthenaAnimationPetRoamingState__Call = 5,
	EAthenaAnimationPetRoamingState__Concealed = 6,
	EAthenaAnimationPetRoamingState__FlyCannon = 7,
	EAthenaAnimationPetRoamingState__Cheer = 8,
	EAthenaAnimationPetRoamingState__Interested = 9,
	EAthenaAnimationPetRoamingState__Talking = 10,
	EAthenaAnimationPetRoamingState__Happy = 11,
	EAthenaAnimationPetRoamingState__Caged = 12,
	EAthenaAnimationPetRoamingState__Grumpy = 13,
	EAthenaAnimationPetRoamingState__Angry = 14,
	EAthenaAnimationPetRoamingState__Dance = 15,
	EAthenaAnimationPetRoamingState__Cleaning = 16,
	EAthenaAnimationPetRoamingState__Exit = 17,
	EAthenaAnimationPetRoamingState__Arrive = 18,
	EAthenaAnimationPetRoamingState__Startled = 19,
	EAthenaAnimationPetRoamingState__Inactive = 20,
	EAthenaAnimationPetRoamingState__TakingOff = 21,
	EAthenaAnimationPetRoamingState__Landing = 22,
	EAthenaAnimationPetRoamingState__Flying = 23,
	EAthenaAnimationPetRoamingState__Yawn = 24,
	EAthenaAnimationPetRoamingState__Scared = 25,
	EAthenaAnimationPetRoamingState__Protective = 26,
	EAthenaAnimationPetRoamingState__Vomit = 27,
	EAthenaAnimationPetRoamingState__Chew = 28,
	EAthenaAnimationPetRoamingState__Sneeze = 29,
	EAthenaAnimationPetRoamingState__Sleep = 30,
	EAthenaAnimationPetRoamingState__Hangout_A = 31,
	EAthenaAnimationPetRoamingState__Hangout_B = 32,
	EAthenaAnimationPetRoamingState__Hangout_C = 33,
	EAthenaAnimationPetRoamingState__LookAround = 34,
	EAthenaAnimationPetRoamingState__Meme = 35,
	EAthenaAnimationPetRoamingState__EAthenaAnimationPetRoamingState_MAX = 36
};


// Enum Athena.EAthenaAnimationPetHeldReactionState
enum class EAthenaAnimationPetHeldReactionState : uint8_t
{
	EAthenaAnimationPetHeldReactionState__None = 0,
	EAthenaAnimationPetHeldReactionState__Chew = 1,
	EAthenaAnimationPetHeldReactionState__PositiveReact = 2,
	EAthenaAnimationPetHeldReactionState__NegativeReact = 3,
	EAthenaAnimationPetHeldReactionState__RefuseReact = 4,
	EAthenaAnimationPetHeldReactionState__EAthenaAnimationPetHeldReactionState_MAX = 5
};


// Enum Athena.EAthenaAnimationPetHeldState
enum class EAthenaAnimationPetHeldState : uint8_t
{
	EAthenaAnimationPetHeldState__Idle = 0,
	EAthenaAnimationPetHeldState__Underwater = 1,
	EAthenaAnimationPetHeldState__UnEquip = 2,
	EAthenaAnimationPetHeldState__Equip = 3,
	EAthenaAnimationPetHeldState__Inactive = 4,
	EAthenaAnimationPetHeldState__Drop = 5,
	EAthenaAnimationPetHeldState__Stroke = 6,
	EAthenaAnimationPetHeldState__Give = 7,
	EAthenaAnimationPetHeldState__EAthenaAnimationPetHeldState_MAX = 8
};


// Enum Athena.EAthenaAnimationPetSpawnState
enum class EAthenaAnimationPetSpawnState : uint8_t
{
	EAthenaAnimationPetSpawnState__Null = 0,
	EAthenaAnimationPetSpawnState__BeingHeld = 1,
	EAthenaAnimationPetSpawnState__Roaming = 2,
	EAthenaAnimationPetSpawnState__EAthenaAnimationPetSpawnState_MAX = 3
};


// Enum Athena.EWorldRegion
enum class EWorldRegion : uint8_t
{
	EWorldRegion__BlueSeaOfPlenty  = 0,
	EWorldRegion__TheWilds         = 1,
	EWorldRegion__WideSeaOfPlunder = 2,
	EWorldRegion__DevilsRoar       = 3,
	EWorldRegion__ShoresOfGold     = 4,
	EWorldRegion__EWorldRegion_MAX = 5
};


// Enum Athena.MapInventoryItemState
enum class EMapInventoryItemState : uint8_t
{
	MapInventoryItemState__Default = 0,
	MapInventoryItemState__Locked  = 1,
	MapInventoryItemState__MapInventoryItemState_MAX = 2
};


// Enum Athena.ESwimmingMode
enum class ESwimmingMode : uint8_t
{
	ESwimmingMode__SwimmingMode_None = 0,
	ESwimmingMode__SwimmingMode_Swimming = 1,
	ESwimmingMode__SwimmingMode_Sinking = 2,
	ESwimmingMode__SwimmingMode_MAX = 3
};


// Enum Athena.ESwimmingCreatureDeathCustomEventEnum
enum class ESwimmingCreatureDeathCustomEventEnum : uint8_t
{
	ESwimmingCreatureDeathCustomEventEnum__None = 0,
	ESwimmingCreatureDeathCustomEventEnum__StartSinking = 1,
	ESwimmingCreatureDeathCustomEventEnum__StartSinkingAnim = 2,
	ESwimmingCreatureDeathCustomEventEnum__ESwimmingCreatureDeathCustomEventEnum_MAX = 3
};


// Enum Athena.EAggressiveGhostShipCannonFacingDirection
enum class EAggressiveGhostShipCannonFacingDirection : uint8_t
{
	EAggressiveGhostShipCannonFacingDirection__Left = 0,
	EAggressiveGhostShipCannonFacingDirection__Right = 1,
	EAggressiveGhostShipCannonFacingDirection__EAggressiveGhostShipCannonFacingDirection_MAX = 2
};


// Enum Athena.EAggressiveGhostShipSpawnDirectionType
enum class EAggressiveGhostShipSpawnDirectionType : uint8_t
{
	EAggressiveGhostShipSpawnDirectionType__Random = 0,
	EAggressiveGhostShipSpawnDirectionType__AlwaysClockwise = 1,
	EAggressiveGhostShipSpawnDirectionType__AlwaysAntiClockwise = 2,
	EAggressiveGhostShipSpawnDirectionType__MatchNearbyEncounter = 3,
	EAggressiveGhostShipSpawnDirectionType__OppositeToNearbyEncounter = 4,
	EAggressiveGhostShipSpawnDirectionType__EAggressiveGhostShipSpawnDirectionType_MAX = 5
};


// Enum Athena.EAggressiveGhostShipType
enum class EAggressiveGhostShipType : uint8_t
{
	EAggressiveGhostShipType__Grunt = 0,
	EAggressiveGhostShipType__FormationGrunt = 1,
	EAggressiveGhostShipType__FormationLeader = 2,
	EAggressiveGhostShipType__CaptainFormationGrunt = 3,
	EAggressiveGhostShipType__Captain = 4,
	EAggressiveGhostShipType__EAggressiveGhostShipType_MAX = 5
};


// Enum Athena.EAggressiveGhostShipAllegiance
enum class EAggressiveGhostShipAllegiance : uint8_t
{
	EAggressiveGhostShipAllegiance__HostileToPlayers = 0,
	EAggressiveGhostShipAllegiance__FriendlyToPlayers = 1,
	EAggressiveGhostShipAllegiance__EAggressiveGhostShipAllegiance_MAX = 2
};


// Enum Athena.FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType
enum class EFAggressiveGhostShipEncounterWaveProgressAnnounceMusicType : uint8_t
{
	FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType__None = 0,
	FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType__Formation = 1,
	FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType__FinalWaveCaptain = 2,
	FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType__FinalWaveFlameheart = 3,
	FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType__EncounterComplete = 4,
	FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType__FAggressiveGhostShipEncounterWaveProgressAnnounceMusicType_MAX = 5
};


// Enum Athena.EAggressiveGhostShipTarget
enum class EAggressiveGhostShipTarget : uint8_t
{
	EAggressiveGhostShipTarget__None = 0,
	EAggressiveGhostShipTarget__Player = 1,
	EAggressiveGhostShipTarget__NearPlayer = 2,
	EAggressiveGhostShipTarget__Ship = 3,
	EAggressiveGhostShipTarget__NearShip = 4,
	EAggressiveGhostShipTarget__MermaidStatue = 5,
	EAggressiveGhostShipTarget__NearMermaidStatue = 6,
	EAggressiveGhostShipTarget__EnemyGhostShip = 7,
	EAggressiveGhostShipTarget__NearEnemyGhostShip = 8,
	EAggressiveGhostShipTarget__CannonRowboat = 9,
	EAggressiveGhostShipTarget__NearCannonRowboat = 10,
	EAggressiveGhostShipTarget__Anywhere = 11,
	EAggressiveGhostShipTarget__EAggressiveGhostShipTarget_MAX = 12
};


// Enum Athena.ENavigationDirection
enum class ENavigationDirection : uint8_t
{
	ENavigationDirection__None     = 0,
	ENavigationDirection__Left     = 1,
	ENavigationDirection__Right    = 2,
	ENavigationDirection__Up       = 3,
	ENavigationDirection__Down     = 4,
	ENavigationDirection__ENavigationDirection_MAX = 5
};


// Enum Athena.ESittingActionStateDockingMode
enum class ESittingActionStateDockingMode : uint8_t
{
	ESittingActionStateDockingMode__FindFloor = 0,
	ESittingActionStateDockingMode__AttachDirectlyToSeat = 1,
	ESittingActionStateDockingMode__ESittingActionStateDockingMode_MAX = 2
};


// Enum Athena.ESleepingActionStateDockingMode
enum class ESleepingActionStateDockingMode : uint8_t
{
	ESleepingActionStateDockingMode__FindFloor = 0,
	ESleepingActionStateDockingMode__AttachDirectlyToSeat = 1,
	ESleepingActionStateDockingMode__ESleepingActionStateDockingMode_MAX = 2
};


// Enum Athena.ESeatStatTimeOfDay
enum class ESeatStatTimeOfDay : uint8_t
{
	ESeatStatTimeOfDay__Sunrise    = 0,
	ESeatStatTimeOfDay__Morning    = 1,
	ESeatStatTimeOfDay__MidDay     = 2,
	ESeatStatTimeOfDay__Afternoon  = 3,
	ESeatStatTimeOfDay__Sunset     = 4,
	ESeatStatTimeOfDay__Night      = 5,
	ESeatStatTimeOfDay__Unknown    = 6,
	ESeatStatTimeOfDay__ESeatStatTimeOfDay_MAX = 7
};


// Enum Athena.EAthenaAnimationCapstanState
enum class EAthenaAnimationCapstanState : uint8_t
{
	EAthenaAnimationCapstanState__Neutral = 0,
	EAthenaAnimationCapstanState__Positive = 1,
	EAthenaAnimationCapstanState__Negative = 2,
	EAthenaAnimationCapstanState__EAthenaAnimationCapstanState_MAX = 3
};


// Enum Athena.EAthenaAnimationJumpingState
enum class EAthenaAnimationJumpingState : uint8_t
{
	EAthenaAnimationJumpingState__None = 0,
	EAthenaAnimationJumpingState__Jumping = 1,
	EAthenaAnimationJumpingState__Falling = 2,
	EAthenaAnimationJumpingState__Impact = 3,
	EAthenaAnimationJumpingState__JumpFinished = 4,
	EAthenaAnimationJumpingState__PreImpact = 5,
	EAthenaAnimationJumpingState__EAthenaAnimationJumpingState_MAX = 6
};


// Enum Athena.EAthenaAnimationLadderState
enum class EAthenaAnimationLadderState : uint8_t
{
	EAthenaAnimationLadderState__None = 0,
	EAthenaAnimationLadderState__ClimbOn = 1,
	EAthenaAnimationLadderState__ClimbOff = 2,
	EAthenaAnimationLadderState__Climbing = 3,
	EAthenaAnimationLadderState__EAthenaAnimationLadderState_MAX = 4
};


// Enum Athena.EAthenaAnimationLadderTransitionState
enum class EAthenaAnimationLadderTransitionState : uint8_t
{
	EAthenaAnimationLadderTransitionState__None = 0,
	EAthenaAnimationLadderTransitionState__Bottom = 1,
	EAthenaAnimationLadderTransitionState__Top = 2,
	EAthenaAnimationLadderTransitionState__EAthenaAnimationLadderTransitionState_MAX = 3
};


// Enum Athena.EIKFootPlantingState
enum class EIKFootPlantingState : uint8_t
{
	EIKFootPlantingState__On       = 0,
	EIKFootPlantingState__Off      = 1,
	EIKFootPlantingState__EIKFootPlantingState_MAX = 2
};


// Enum Athena.EIKSolverType
enum class EIKSolverType : uint8_t
{
	EIKSolverType__NormalSolver    = 0,
	EIKSolverType__LODSolver       = 1,
	EIKSolverType__EIKSolverType_MAX = 2
};


// Enum Athena.EIKState
enum class EIKState : uint8_t
{
	EIKState__On                   = 0,
	EIKState__Off                  = 1,
	EIKState__EIKState_MAX         = 2
};


// Enum Athena.EItemBlockingSubState
enum class EItemBlockingSubState : uint8_t
{
	EItemBlockingSubState__None    = 0,
	EItemBlockingSubState__Main    = 1,
	EItemBlockingSubState__Feedback = 2,
	EItemBlockingSubState__InFeedback = 3,
	EItemBlockingSubState__EItemBlockingSubState_MAX = 4
};


// Enum Athena.EComplexOneShotAttackType
enum class EComplexOneShotAttackType : uint8_t
{
	EComplexOneShotAttackType__CombatLocomotion = 0,
	EComplexOneShotAttackType__CombatStatic = 1,
	EComplexOneShotAttackType__CombatSwimming = 2,
	EComplexOneShotAttackType__CombatHeavy = 3,
	EComplexOneShotAttackType__CombatHeavySwimming = 4,
	EComplexOneShotAttackType__EComplexOneShotAttackType_MAX = 5
};


// Enum Athena.EComplexOneShotSubState
enum class EComplexOneShotSubState : uint8_t
{
	EComplexOneShotSubState__WarmUp = 0,
	EComplexOneShotSubState__WarmUpFromBlock = 1,
	EComplexOneShotSubState__Action = 2,
	EComplexOneShotSubState__Recover = 3,
	EComplexOneShotSubState__HeavyAttackStun = 4,
	EComplexOneShotSubState__EComplexOneShotSubState_MAX = 5
};


// Enum Athena.EAthenaAnimationWheelState
enum class EAthenaAnimationWheelState : uint8_t
{
	EAthenaAnimationWheelState__Neutral = 0,
	EAthenaAnimationWheelState__Positive = 1,
	EAthenaAnimationWheelState__Negative = 2,
	EAthenaAnimationWheelState__EAthenaAnimationWheelState_MAX = 3
};


// Enum Athena.EObjectPitchTargetingStates
enum class EObjectPitchTargetingStates : uint8_t
{
	EObjectPitchTargetingStates__None = 0,
	EObjectPitchTargetingStates__StandardPassive = 1,
	EObjectPitchTargetingStates__StandardWater = 2,
	EObjectPitchTargetingStates__Action = 3,
	EObjectPitchTargetingStates__Action_1_Water = 4,
	EObjectPitchTargetingStates__Action01 = 5,
	EObjectPitchTargetingStates__Action_2_Water = 6,
	EObjectPitchTargetingStates__EObjectPitchTargetingStates_MAX = 7
};


// Enum Athena.EObjectPitchTargetingLimbs
enum class EObjectPitchTargetingLimbs : uint8_t
{
	EObjectPitchTargetingLimbs__None = 0,
	EObjectPitchTargetingLimbs__RightArm = 1,
	EObjectPitchTargetingLimbs__LeftArm = 2,
	EObjectPitchTargetingLimbs__BothArms = 3,
	EObjectPitchTargetingLimbs__EObjectPitchTargetingLimbs_MAX = 4
};


// Enum Athena.EAnimationWaterPumpState
enum class EAnimationWaterPumpState : uint8_t
{
	EAnimationWaterPumpState__None = 0,
	EAnimationWaterPumpState__PumpForwards = 1,
	EAnimationWaterPumpState__PumpBackwards = 2,
	EAnimationWaterPumpState__ExitPumping = 3,
	EAnimationWaterPumpState__EAnimationWaterPumpState_MAX = 4
};


// Enum Athena.EWieldedItemAnimationState
enum class EWieldedItemAnimationState : uint8_t
{
	EWieldedItemAnimationState__Equipping = 0,
	EWieldedItemAnimationState__Unequipping = 1,
	EWieldedItemAnimationState__Idle = 2,
	EWieldedItemAnimationState__Unequipped = 3,
	EWieldedItemAnimationState__ContinuousUse = 4,
	EWieldedItemAnimationState__OutOfContinuousUse = 5,
	EWieldedItemAnimationState__OneShot = 6,
	EWieldedItemAnimationState__ComplexOneShot = 7,
	EWieldedItemAnimationState__Blocking = 8,
	EWieldedItemAnimationState__EWieldedItemAnimationState_MAX = 9
};


// Enum Athena.EAthenaAITeam
enum class EAthenaAITeam : uint8_t
{
	Players                        = 0,
	Skeletons                      = 1,
	Fauna_Chickens                 = 2,
	Fauna_Pigs                     = 3,
	Fauna_Snakes                   = 4,
	NeutralSwimmingCreature        = 5,
	Sharks                         = 6,
	TinyShark                      = 7,
	Kraken                         = 8,
	KrakenTentacle                 = 9,
	NeutralCreatureCharacters      = 10,
	Pets                           = 11,
	Fire                           = 12,
	AggressiveGhostShip            = 13,
	Sirens                         = 14,
	LordPinch                      = 15,
	OceanCrawlers                  = 16,
	Phantoms                       = 17,
	PlayerAllied                   = 18,
	Max                            = 19,
	EAthenaAITeam_MAX              = 20
};


// Enum Athena.EIslandType
enum class EIslandType : uint8_t
{
	EIslandType__Resource          = 0,
	EIslandType__Outpost           = 1,
	EIslandType__Small             = 2,
	EIslandType__Medium            = 3,
	EIslandType__Large             = 4,
	EIslandType__Fort              = 5,
	EIslandType__FortOfTheDamned   = 6,
	EIslandType__Reef              = 7,
	EIslandType__SeaPost           = 8,
	EIslandType__Tutorial          = 9,
	EIslandType__ReapersHideout    = 10,
	EIslandType__Sunken            = 11,
	EIslandType__SunkenKingdomNonStarlight = 12,
	EIslandType__None              = 13,
	EIslandType__Max               = 14,
	EIslandType__EIslandType_MAX   = 15
};


// Enum Athena.EMatchmakingVisibilityState
enum class EMatchmakingVisibilityState : uint8_t
{
	EMatchmakingVisibilityState__Public = 0,
	EMatchmakingVisibilityState__Private = 1,
	EMatchmakingVisibilityState__EMatchmakingVisibilityState_MAX = 2
};


// Enum Athena.EScuttleState
enum class EScuttleState : uint8_t
{
	EScuttleState__Scuttled        = 0,
	EScuttleState__NotScuttled     = 1,
	EScuttleState__Disabled_TunnelOfTheDamned = 2,
	EScuttleState__EScuttleState_MAX = 3
};


// Enum Athena.EBrigState
enum class EBrigState : uint8_t
{
	EBrigState__Unbriggable        = 0,
	EBrigState__Free               = 1,
	EBrigState__InBrig_Releasable  = 2,
	EBrigState__InBrig_Unreleasable = 3,
	EBrigState__EBrigState_MAX     = 4
};


// Enum Athena.ECrewDestroyedReason
enum class ECrewDestroyedReason : uint8_t
{
	ECrewDestroyedReason__AllCrewMembersRemoved = 0,
	ECrewDestroyedReason__ServerMigrated = 1,
	ECrewDestroyedReason__ECrewDestroyedReason_MAX = 2
};


// Enum Athena.EBrigReleaseReason
enum class EBrigReleaseReason : uint8_t
{
	EBrigReleaseReason__VoteToRelease = 0,
	EBrigReleaseReason__AutoRelease = 1,
	EBrigReleaseReason__QuitGameRelease = 2,
	EBrigReleaseReason__EBrigReleaseReason_MAX = 3
};


// Enum Athena.EWieldableItemAnimVariant
enum class EWieldableItemAnimVariant : uint8_t
{
	EWieldableItemAnimVariant__Default = 0,
	EWieldableItemAnimVariant__Variant1 = 1,
	EWieldableItemAnimVariant__Variant2 = 2,
	EWieldableItemAnimVariant__Variant3 = 3,
	EWieldableItemAnimVariant__Variant4 = 4,
	EWieldableItemAnimVariant__MAX = 5,
	EWieldableItemAnimVariant__EWieldableItemAnimVariant_MAX = 6
};


// Enum Athena.EWieldableItemBlockingAnimState
enum class EWieldableItemBlockingAnimState : uint8_t
{
	EWieldableItemBlockingAnimState__Main = 0,
	EWieldableItemBlockingAnimState__Feedback = 1,
	EWieldableItemBlockingAnimState__EWieldableItemBlockingAnimState_MAX = 2
};


// Enum Athena.EWieldableItemComplexOneShotLookUpType
enum class EWieldableItemComplexOneShotLookUpType : uint8_t
{
	EWieldableItemComplexOneShotLookUpType__Combo = 0,
	EWieldableItemComplexOneShotLookUpType__Heavy = 1,
	EWieldableItemComplexOneShotLookUpType__Special = 2,
	EWieldableItemComplexOneShotLookUpType__EWieldableItemComplexOneShotLookUpType_MAX = 3
};


// Enum Athena.EWieldableItemComplexOneShotAnimType
enum class EWieldableItemComplexOneShotAnimType : uint8_t
{
	EWieldableItemComplexOneShotAnimType__MeleeComboAttack = 0,
	EWieldableItemComplexOneShotAnimType__MeleeHeavyAttack = 1,
	EWieldableItemComplexOneShotAnimType__EWieldableItemComplexOneShotAnimType_MAX = 2
};


// Enum Athena.EWieldableItemSize
enum class EWieldableItemSize : uint8_t
{
	EWieldableItemSize__Small      = 0,
	EWieldableItemSize__Large      = 1,
	EWieldableItemSize__EWieldableItemSize_MAX = 2
};


// Enum Athena.EWieldableItemVisibilityReason
enum class EWieldableItemVisibilityReason : uint8_t
{
	EWieldableItemVisibilityReason__Animation = 0,
	EWieldableItemVisibilityReason__Interpolation = 1,
	EWieldableItemVisibilityReason__BlocksView = 2,
	EWieldableItemVisibilityReason__EWieldableItemVisibilityReason_MAX = 3
};


// Enum Athena.EItemType
enum class EItemType : uint8_t
{
	EItemType__Weapon              = 0,
	EItemType__Item                = 1,
	EItemType__Quest               = 2,
	EItemType__Invalid             = 3,
	EItemType__EItemType_MAX       = 4
};


// Enum Athena.EWieldItemReturnCode
enum class EWieldItemReturnCode : uint8_t
{
	EWieldItemReturnCode__Success  = 0,
	EWieldItemReturnCode__NoAuthority = 1,
	EWieldItemReturnCode__UnableToDisplace = 2,
	EWieldItemReturnCode__InvalidItem = 3,
	EWieldItemReturnCode__WaitingForUnstash = 4,
	EWieldItemReturnCode__EWieldItemReturnCode_MAX = 5
};


// Enum Athena.EDropItemReturnCode
enum class EDropItemReturnCode : uint8_t
{
	EDropItemReturnCode__NothingToDrop = 0,
	EDropItemReturnCode__Success   = 1,
	EDropItemReturnCode__DroppingProhibited = 2,
	EDropItemReturnCode__EDropItemReturnCode_MAX = 3
};


// Enum Athena.EStowMethod
enum class EStowMethod : uint8_t
{
	EStowMethod__Unequip           = 0,
	EStowMethod__Stash             = 1,
	EStowMethod__EStowMethod_MAX   = 2
};


// Enum Athena.EStashReason
enum class EStashReason : uint8_t
{
	EStashReason__Locomotion       = 0,
	EStashReason__Jumping          = 1,
	EStashReason__Docking          = 2,
	EStashReason__Sprinting        = 3,
	EStashReason__Using            = 4,
	EStashReason__Dead             = 5,
	EStashReason__SpawnOrDespawn   = 6,
	EStashReason__AIPartsChange    = 7,
	EStashReason__Emote            = 8,
	EStashReason__EStashReason_MAX = 9
};


// Enum Athena.ECanAddItemQueryResult
enum class ECanAddItemQueryResult : uint8_t
{
	ECanAddItemQueryResult__Success = 0,
	ECanAddItemQueryResult__SlotFull = 1,
	ECanAddItemQueryResult__Invalid = 2,
	ECanAddItemQueryResult__ECanAddItemQueryResult_MAX = 3
};


// Enum Athena.EItemActionState
enum class EItemActionState : uint8_t
{
	EItemActionState__Idle         = 0,
	EItemActionState__Starting     = 1,
	EItemActionState__Performing   = 2,
	EItemActionState__Stopping     = 3,
	EItemActionState__Cooldown     = 4,
	EItemActionState__Resetting    = 5,
	EItemActionState__EItemActionState_MAX = 6
};


// Enum Athena.EItemActionType
enum class EItemActionType : uint8_t
{
	EItemActionType__OneShot       = 0,
	EItemActionType__WindUp        = 1,
	EItemActionType__Continuous    = 2,
	EItemActionType__EItemActionType_MAX = 3
};


// Enum Athena.EItemUseStoppedReason
enum class EItemUseStoppedReason : uint8_t
{
	EItemUseStoppedReason__Stopped = 0,
	EItemUseStoppedReason__Interrupted = 1,
	EItemUseStoppedReason__EItemUseStoppedReason_MAX = 2
};


// Enum Athena.EPerspectiveTypes
enum class EPerspectiveTypes : uint8_t
{
	EPerspectiveTypes__FirstPerson = 0,
	EPerspectiveTypes__ThirdPerson = 1,
	EPerspectiveTypes__EPerspectiveTypes_MAX = 2
};


// Enum Athena.EItemLifetimeManagement
enum class EItemLifetimeManagement : uint8_t
{
	EItemLifetimeManagement__Automatic = 0,
	EItemLifetimeManagement__Manual = 1,
	EItemLifetimeManagement__EItemLifetimeManagement_MAX = 2
};


// Enum Athena.EItemRepresentation
enum class EItemRepresentation : uint8_t
{
	EItemRepresentation__None      = 0,
	EItemRepresentation__Wielded   = 1,
	EItemRepresentation__WorldProxy = 2,
	EItemRepresentation__EItemRepresentation_MAX = 3
};


// Enum Athena.EDoubleActionItemPriority
enum class EDoubleActionItemPriority : uint8_t
{
	EDoubleActionItemPriority__None = 0,
	EDoubleActionItemPriority__Primary = 1,
	EDoubleActionItemPriority__Secondary = 2,
	EDoubleActionItemPriority__EDoubleActionItemPriority_MAX = 3
};


// Enum Athena.EContinuousUseID
enum class EContinuousUseID : uint8_t
{
	EContinuousUseID__In           = 0,
	EContinuousUseID__Out          = 1,
	EContinuousUseID__EContinuousUseID_MAX = 2
};


// Enum Athena.EContinuousUseOverride
enum class EContinuousUseOverride : uint8_t
{
	EContinuousUseOverride__None   = 0,
	EContinuousUseOverride__ForcePrimary = 1,
	EContinuousUseOverride__ForceSecondary = 2,
	EContinuousUseOverride__EContinuousUseOverride_MAX = 3
};


// Enum Athena.EItemPassiveState
enum class EItemPassiveState : uint8_t
{
	EItemPassiveState__Idle        = 0,
	EItemPassiveState__Locomotion  = 1,
	EItemPassiveState__Jumping     = 2,
	EItemPassiveState__Turning     = 3,
	EItemPassiveState__Swimming    = 4,
	EItemPassiveState__EItemPassiveState_MAX = 5
};


// Enum Athena.EActionRelevancy
enum class EActionRelevancy : uint8_t
{
	EActionRelevancy__Primary      = 0,
	EActionRelevancy__PrimaryAlt   = 1,
	EActionRelevancy__Secondary    = 2,
	EActionRelevancy__SecondaryAlt = 3,
	EActionRelevancy__EActionRelevancy_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
