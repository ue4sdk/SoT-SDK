#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_InputCore_classes.hpp"
#include "SoT_Slate_classes.hpp"
#include "SoT_SlateCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
	EEndPlayReason__Destroyed      = 0,
	None                           = 1,
	IntProperty                    = 2,
	EEndPlayReason__Quit           = 3,
	None01                         = 4
};


// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
	EAttachLocation__KeepRelativeOffset = 0,
	None                           = 1,
	EAttachLocation__EAttachLocation_MAX = 2
};


// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	None                           = 1,
	TG_PostPhysics                 = 2,
	None01                         = 3,
	ExecuteUbergraph               = 4
};


// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	ESpawnActorCollisionHandlingMethod__Undefined = 0,
	None                           = 1,
	ESpawnActorCollisionHandlingMethod__DontSpawnIfColliding = 2,
	None01                         = 3
};


// Enum Engine.EInputConsumeOptions
enum class EInputConsumeOptions : uint8_t
{
	ICO_ConsumeAll                 = 0,
	None                           = 1,
	OverlapFilter_All              = 2
};


// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
	EAutoReceiveInput__Disabled    = 0,
	None                           = 1,
	IntProperty                    = 2,
	EAutoReceiveInput__Player3     = 3,
	None01                         = 4,
	NameProperty                   = 5,
	EAutoReceiveInput__Player7     = 6,
	None02                         = 7
};


// Enum Engine.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	None                           = 1,
	ROLE_MAX                       = 2
};


// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
	ERotatorQuantization__ByteComponents = 0,
	None                           = 1
};


// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
	EVectorQuantization__RoundWholeNumber = 0,
	None                           = 1,
	ERangeBoundTypes__Exclusive    = 2
};


// Enum Engine.EActorSpawnRestrictions
enum class EActorSpawnRestrictions : uint8_t
{
	EActorSpawnRestrictions__ServerOnly = 0,
	None                           = 1,
	EActorSpawnRestrictions__EActorSpawnRestrictions_MAX = 2,
	BoolProperty                   = 3
};


// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
	ENavPathEvent__Cleared         = 0,
	None                           = 1,
	ENavPathEvent__Invalidated     = 2,
	None01                         = 3,
	GetMouthPosition               = 4
};


// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
	EComponentCreationMethod__Native = 0,
	None                           = 1,
	EComponentCreationMethod__EComponentCreationMethod_MAX = 2
};


// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
	EPlaneConstraintAxisSetting__Custom = 0,
	None                           = 1,
	IntProperty                    = 2,
	EPlaneConstraintAxisSetting__UseGlobalPhysicsSetting = 3,
	None01                         = 4
};


// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
	EInterpToBehaviourType__OneShot = 0,
	None                           = 1,
	EInterpToBehaviourType__EInterpToBehaviourType_MAX = 2
};


// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	None                           = 1,
	PIDT_Object                    = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.EMovementMode
enum class EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	None                           = 1,
	MOVE_Swimming                  = 2,
	None01                         = 3
};


// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	None                           = 1,
	IntProperty                    = 2,
	EMoveComponentAction__Move     = 3
};


// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	None                           = 1,
	IntProperty                    = 2,
	ObjectTypeQuery5               = 3,
	None01                         = 4,
	NameProperty                   = 5,
	ObjectTypeQuery9               = 6,
	None02                         = 7,
	StructProperty                 = 8,
	ObjectTypeQuery13              = 9,
	None03                         = 10,
	TextProperty                   = 11,
	ObjectTypeQuery17              = 12,
	None04                         = 13,
	LazyObjectProperty             = 14,
	ObjectTypeQuery21              = 15,
	None05                         = 16,
	ObjectTypeQuery25              = 17,
	None06                         = 18,
	Int8Property                   = 19,
	ObjectTypeQuery29              = 20,
	None07                         = 21,
	Core                           = 22,
	ObjectTypeQuery_MAX            = 23,
	None08                         = 24,
	None09                         = 25,
	None10                         = 26,
	BoolProperty                   = 27,
	IntPoint                       = 28
};


// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	EDrawDebugTrace__None          = 0,
	None                           = 1,
	EDrawDebugTrace__EDrawDebugTrace_MAX = 2
};


// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	None                           = 1,
	IntProperty                    = 2,
	TraceTypeQuery5                = 3,
	None01                         = 4,
	TraceTypeQuery9                = 5,
	None02                         = 6,
	StructProperty                 = 7,
	TraceTypeQuery13               = 8,
	None03                         = 9,
	TextProperty                   = 10,
	TraceTypeQuery17               = 11,
	None04                         = 12,
	TraceTypeQuery21               = 13,
	None05                         = 14,
	UInt16Property                 = 15,
	TraceTypeQuery25               = 16,
	None06                         = 17,
	Int8Property                   = 18,
	TraceTypeQuery29               = 19,
	None07                         = 20,
	Core                           = 21,
	TraceTypeQuery_MAX             = 22,
	None08                         = 23,
	None09                         = 24,
	ObjectTypeQuery1               = 25,
	None10                         = 26,
	IntProperty01                  = 27,
	ObjectTypeQuery5               = 28,
	None11                         = 29,
	NameProperty                   = 30
};


// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	None                           = 1,
	ECC_Camera                     = 2,
	None01                         = 3,
	NameProperty                   = 4,
	ECC_EngineTraceChannel1        = 5,
	None02                         = 6,
	StructProperty                 = 7,
	ECC_EngineTraceChannel5        = 8,
	None03                         = 9,
	TextProperty                   = 10,
	ECC_GameTraceChannel3          = 11,
	None04                         = 12,
	LazyObjectProperty             = 13,
	ECC_GameTraceChannel7          = 14,
	None05                         = 15,
	UInt16Property                 = 16,
	ECC_GameTraceChannel11         = 17,
	None06                         = 18,
	Int8Property                   = 19,
	ECC_GameTraceChannel15         = 20,
	None07                         = 21,
	ECC_OverlapAll_Deprecated      = 22,
	None08                         = 23,
	None09                         = 24,
	None10                         = 25,
	TraceTypeQuery1                = 26,
	None11                         = 27,
	IntProperty                    = 28,
	TraceTypeQuery5                = 29,
	None12                         = 30
};


// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
	EMoveComponentAction__Move     = 0,
	None                           = 1,
	EIKSolverType__NormalSolver    = 2
};


// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
	EQuitPreference__Quit          = 0,
	None                           = 1
};


// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	None                           = 1,
	VMI_Lit_DetailLighting         = 2,
	None01                         = 3,
	VMI_LightmapDensity            = 4,
	None02                         = 5,
	VMI_StationaryLightOverlap     = 6,
	None03                         = 7,
	VMI_LODColoration              = 8,
	None04                         = 9,
	VMI_Unknown                    = 10,
	TMGS_FromTextureGroup          = 11,
	None05                         = 12,
	TMGS_Sharpen2                  = 13,
	None06                         = 14
};


// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t
{
	EDemoPlayFailure__Generic      = 0,
	None                           = 1,
	EDemoPlayFailure__EDemoPlayFailure_MAX = 2,
	WalkableSlope_Default          = 3
};


// Enum Engine.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	None                           = 1,
	EEnvTestFilterOperator__AllPass = 2
};


// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
	ETravelFailure__NoLevel        = 0,
	None                           = 1,
	ETravelFailure__PackageVersion = 2,
	None01                         = 3,
	ETravelFailure__PendingNetGameCreateFailure = 4,
	None02                         = 5,
	ETravelFailure__ETravelFailure_MAX = 6,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_AMBIENT = 7,
	None03                         = 8
};


// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists = 0,
	None                           = 1,
	ENetworkFailure__ConnectionTimeout = 2,
	None01                         = 3,
	ENetworkFailure__PendingConnectionFailure = 4,
	None02                         = 5,
	StructProperty                 = 6,
	ENetworkFailure__InitialConnectionTimeout = 7,
	None03                         = 8,
	TextProperty                   = 9,
	EPartyReservationResult__NoResult = 10,
	None04                         = 11
};


// Enum Engine.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	None                           = 1,
	IE_Axis                        = 2,
	None01                         = 3,
	ENodeTitleType__FullTitle      = 4
};


// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	None                           = 1,
	EComponentSocketType__Invalid  = 2
};


// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
	EComponentSocketType__Invalid  = 0,
	None                           = 1,
	IntProperty                    = 2,
	EComponentMobility__Static     = 3
};


// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
	EComponentMobility__Static     = 0,
	None                           = 1,
	ESimplygonLODType__Reduction   = 2
};


// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	None                           = 1,
	SurfaceType4                   = 2,
	None01                         = 3,
	SurfaceType8                   = 4,
	None02                         = 5,
	SurfaceType12                  = 6,
	None03                         = 7,
	SurfaceType16                  = 8,
	None04                         = 9,
	SurfaceType20                  = 10,
	None05                         = 11,
	SurfaceType24                  = 12,
	None06                         = 13,
	SurfaceType28                  = 14,
	None07                         = 15,
	SurfaceType32                  = 16,
	None08                         = 17,
	SurfaceType36                  = 18,
	None09                         = 19,
	SurfaceType40                  = 20,
	None10                         = 21,
	SurfaceType44                  = 22,
	None11                         = 23,
	SurfaceType48                  = 24,
	None12                         = 25,
	SurfaceType52                  = 26,
	None13                         = 27,
	SurfaceType56                  = 28,
	None14                         = 29,
	SurfaceType60                  = 30,
	None15                         = 31,
	EPhysicalSurface_MAX           = 32,
	None16                         = 33,
	ByteProperty                   = 34,
	None17                         = 35,
	None18                         = 36,
	None19                         = 37,
	None20                         = 38,
	ByteProperty01                 = 39,
	None21                         = 40,
	None22                         = 41
};


// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	None                           = 1,
	WalkableSlope_Max              = 2,
	EBeaconConnectionState__Invalid = 3
};


// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
	EAutoPossessAI__Disabled       = 0,
	None                           = 1,
	EAutoPossessAI__EAutoPossessAI_MAX = 2,
	EDemoPlayFailure__Generic      = 3
};


// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	None                           = 1,
	DORM_Initial                   = 2,
	None01                         = 3
};


// Enum Engine.ESimplygonMaterialChannel
enum class ESimplygonMaterialChannel : uint8_t
{
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_AMBIENT = 0,
	None                           = 1,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_EMISSIVE = 2,
	None01                         = 3,
	ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_ROUGHNESS = 4,
	None02                         = 5,
	EPAL_NONE                      = 6,
	None03                         = 7
};


// Enum Engine.ESimplygonTextureResolution
enum class ESimplygonTextureResolution : uint8_t
{
	ESimplygonTextureResolution__TextureResolution = 0,
	ESimplygonTextureResolution__TextureResolution01 = 1,
	EventWieldedItemOutOfContinuousUseStateEntered = 2,
	ESimplygonTextureResolution__TextureResolution_MAX = 3,
	SAMPLERTYPE_Color              = 4,
	None                           = 5
};


// Enum Engine.ESimplygonColorChannels
enum class ESimplygonColorChannels : uint8_t
{
	ESimplygonColorChannels__RGBA  = 0,
	None                           = 1,
	BSIT_Average                   = 2
};


// Enum Engine.ESimplygonTextureSamplingQuality
enum class ESimplygonTextureSamplingQuality : uint8_t
{
	ESimplygonTextureSamplingQuality__Poor = 0,
	None                           = 1,
	ESimplygonTextureSamplingQuality__ESimplygonTextureSamplingQuality_MAX = 2,
	EAutoPossessAI__Disabled       = 3
};


// Enum Engine.ESimplygonCasterType
enum class ESimplygonCasterType : uint8_t
{
	ESimplygonCasterType__None     = 0,
	None                           = 1,
	ESimplygonCasterType__ESimplygonCasterType_MAX = 2,
	ESimplygonTextureSamplingQuality__Poor = 3
};


// Enum Engine.ESimplygonTextureStrech
enum class ESimplygonTextureStrech : uint8_t
{
	ESimplygonTextureStrech__None  = 0,
	None                           = 1,
	ESimplygonTextureStrech__Large = 2,
	None01                         = 3
};


// Enum Engine.EMaterialLODType
enum class EMaterialLODType : uint8_t
{
	EMaterialLODType__Off          = 0,
	None                           = 1,
	EMaterialLODType__EMaterialLODType_MAX = 2,
	ESimplygonCasterType__None     = 3
};


// Enum Engine.ESimplygonLODType
enum class ESimplygonLODType : uint8_t
{
	ESimplygonLODType__Reduction   = 0,
	None                           = 1
};


// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
	EMeshFeatureImportance__Off    = 0,
	None                           = 1,
	EMeshFeatureImportance__High   = 2,
	None01                         = 3
};


// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	None                           = 1,
	ESleepFamily__Normal           = 2
};


// Enum Engine.EDominanceGroup
enum class EDominanceGroup : uint8_t
{
	DominanceGroup                 = 0,
	IntProperty                    = 1,
	IntProperty01                  = 2,
	DominanceGroup01               = 3,
	NameProperty                   = 4,
	NameProperty01                 = 5,
	DominanceGroup02               = 6,
	StructProperty                 = 7,
	StructProperty01               = 8,
	DominanceGroup03               = 9,
	TextProperty                   = 10,
	DominanceGroup04               = 11,
	LazyObjectProperty             = 12,
	LazyObjectProperty01           = 13,
	DominanceGroup05               = 14,
	UInt16Property                 = 15,
	UInt16Property01               = 16,
	DominanceGroup06               = 17,
	Int8Property                   = 18,
	DominanceGroup07               = 19,
	Core                           = 20,
	Core01                         = 21,
	DominanceGroup_Max             = 22,
	None                           = 23,
	None01                         = 24,
	None02                         = 25,
	ECC_WorldStatic                = 26,
	None03                         = 27,
	ECC_Camera                     = 28,
	None04                         = 29
};


// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
	ECollisionEnabled__NoCollision = 0,
	None                           = 1,
	ECollisionEnabled__ECollisionEnabled_MAX = 2,
	EMaterialLODType__Off          = 3
};


// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	None                           = 1,
	IntProperty                    = 2,
	ETS_InvalidSignature           = 3,
	None01                         = 4,
	IE_Pressed                     = 5
};


// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8_t
{
	ESleepFamily__Normal           = 0,
	None                           = 1,
	RIF_Constant                   = 2
};


// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	None                           = 1
};


// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	None                           = 1,
	PBM_Disabled                   = 2
};


// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	None                           = 1,
	PST_Sync                       = 2
};


// Enum Engine.EPhysicsSceneType
enum class EPhysicsSceneType : uint8_t
{
	PST_Sync                       = 0,
	None                           = 1,
	TSA_X_Axis                     = 2
};


// Enum Engine.ETriangleSortAxis
enum class ETriangleSortAxis : uint8_t
{
	TSA_X_Axis                     = 0,
	None                           = 1,
	EGPD_Input                     = 2
};


// Enum Engine.ETriangleSortOption
enum class ETriangleSortOption : uint8_t
{
	TRISORT_None                   = 0,
	None                           = 1,
	TRISORT_Custom                 = 2,
	None01                         = 3
};


// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	None                           = 1,
	Quality_MAX                    = 2,
	ECollisionEnabled__NoCollision = 3
};


// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	None                           = 1,
	SAMPLERTYPE_Masks              = 2,
	None01                         = 3,
	SAMPLERTYPE_MAX                = 4
};


// Enum Engine.EPresortedBillboardsMode
enum class EPresortedBillboardsMode : uint8_t
{
	PBM_Disabled                   = 0,
	None                           = 1,
	IntProperty                    = 2,
	LMPT_NormalPadding             = 3
};


// Enum Engine.EMaterialGeometryMode
enum class EMaterialGeometryMode : uint8_t
{
	MGM_Normal                     = 0,
	None                           = 1,
	MGM_MAX                        = 2,
	Quality_Preview                = 3
};


// Enum Engine.ELowResTranslucencyCascade
enum class ELowResTranslucencyCascade : uint8_t
{
	LRTC_QuarterRes                = 0,
	None                           = 1,
	IntProperty                    = 2,
	MTM_NoTessellation             = 3
};


// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	None                           = 1,
	IntProperty                    = 2,
	EParticleCollisionMode__SceneDepth = 3
};


// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	None                           = 1,
	MSM_ClearCoat                  = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
	EParticleCollisionMode__SceneDepth = 0,
	None                           = 1
};


// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	None                           = 1,
	ETranslucentSortPolicy__SortByDistance = 2
};


// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
	ETranslucentSortPolicy__SortByDistance = 0,
	None                           = 1,
	SSM_FromTextureAsset           = 2
};


// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	None                           = 1,
	TLM_Surface                    = 2,
	None01                         = 3,
	TLM_MAX                        = 4,
	ESimplygonTextureResolution__TextureResolution = 5
};


// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	None                           = 1,
	ILCQ_Off                       = 2
};


// Enum Engine.EConstantMaterial
enum class EConstantMaterial : uint8_t
{
	CONSTMAT_None                  = 0,
	None                           = 1,
	SDPG_World                     = 2
};


// Enum Engine.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	None                           = 1,
	BLEND_Modulate                 = 2,
	None01                         = 3,
	BLEND_TranslucentUI            = 4,
	None02                         = 5
};


// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	None                           = 1,
	CONSTMAT_None                  = 2
};


// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	None                           = 1
};


// Enum Engine.EActorMetricsType
enum class EActorMetricsType : uint8_t
{
	METRICS_VERTS                  = 0,
	None                           = 1,
	ENodeAdvancedPins__NoPins      = 2
};


// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	None                           = 1,
	AspectRatio_MAX                = 2,
	ENavigationQueryResult__Invalid = 3
};


// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
	ENodeAdvancedPins__NoPins      = 0,
	None                           = 1,
	DM_Low                         = 2
};


// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
	ENodeTitleType__FullTitle      = 0,
	None                           = 1,
	IntProperty                    = 2,
	ENodeTitleType__MAX_TitleTypes = 3,
	None01                         = 4,
	SVB_Loading                    = 5
};


// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	None                           = 1
};


// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	None                           = 1
};


// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	None                           = 1,
	BPTYPE_LevelScript             = 2,
	None01                         = 3
};


// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	None                           = 1,
	BS_BeingCreated                = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	None                           = 1,
	RTS_MAX                        = 2,
	AspectRatio_MaintainYFOV       = 3
};


// Enum Engine.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	None                           = 1,
	IntProperty                    = 2,
	EDynamicForceFeedbackAction__Start = 3
};


// Enum Engine.EBrushType
enum class EBrushType : uint8_t
{
	Brush_Default                  = 0,
	None                           = 1,
	ENavDataGatheringModeConfig__Invalid = 2
};


// Enum Engine.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	None                           = 1,
	CSG_Deintersect                = 2,
	None01                         = 3
};


// Enum Engine.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	None                           = 1,
	REVERB_ConcertHall             = 2,
	None01                         = 3,
	REVERB_Alley                   = 4,
	None02                         = 5,
	REVERB_Quarry                  = 6,
	None03                         = 7,
	REVERB_Underwater              = 8,
	None04                         = 9,
	REVERB_MediumHall              = 10,
	None05                         = 11,
	UInt16Property                 = 12,
	ETrackedActorType__Unknown     = 13,
	None06                         = 14,
	ETrackedActorType__AI_Shark    = 15,
	None07                         = 16
};


// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	None                           = 1,
	IntProperty                    = 2,
	SVB_LoadingNotVisible          = 3,
	None01                         = 4,
	VTBlend_Linear                 = 5
};


// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
	ENavigationQueryResult__Invalid = 0,
	None                           = 1,
	ENavigationQueryResult__ENavigationQueryResult_MAX = 2,
	MGM_Normal                     = 3
};


// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
	ENavDataGatheringModeConfig__Invalid = 0,
	None                           = 1,
	IntProperty                    = 2,
	ENavDataGatheringMode__Default = 3
};


// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
	ENavDataGatheringMode__Default = 0,
	None                           = 1,
	AAM_None                       = 2
};


// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
	ENavigationOptionFlag__Default = 0,
	None                           = 1,
	ENavigationOptionFlag__ENavigationOptionFlag_MAX = 2,
	RCIM_Linear                    = 3
};


// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	None                           = 1,
	BL_ActualBeforeTranslucency    = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.EDisableShadowMapMethod
enum class EDisableShadowMapMethod : uint8_t
{
	DSM_None                       = 0,
	None                           = 1,
	DSM_MAX                        = 2,
	RTS_World                      = 3
};


// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	None                           = 1,
	DOFM_BokehDOF                  = 2
};


// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	None                           = 1,
	ECameraAnimPlaySpace__CameraLocal = 2
};


// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t
{
	ECameraAnimPlaySpace__CameraLocal = 0,
	None                           = 1,
	ECameraProjectionMode__Perspective = 2
};


// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
	ECameraProjectionMode__Perspective = 0,
	None                           = 1
};


// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	None                           = 1
};


// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	None                           = 1,
	VTBlend_EaseInOut              = 2,
	None01                         = 3,
	ESplinePointType__Linear       = 4
};


// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
	EControllerAnalogStick__CAS_LeftStick = 0,
	None                           = 1
};


// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	None                           = 1,
	RCCE_Constant                  = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	None                           = 1,
	RCTWM_MAX                      = 2,
	ENavigationOptionFlag__Default = 3
};


// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	None                           = 1,
	RCTM_MAX                       = 2,
	RCTWM_WeightedNone             = 3
};


// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	None                           = 1,
	RCIM_MAX                       = 2,
	DSM_None                       = 3
};


// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	EDynamicForceFeedbackAction__Start = 0,
	None                           = 1,
	BPST_Original                  = 2
};


// Enum Engine.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	None                           = 1,
	NoWorldComposition             = 2
};


// Enum Engine.EWorldCompositionSetting
enum class EWorldCompositionSetting : uint8_t
{
	NoWorldComposition             = 0,
	None                           = 1,
	ENavCostDisplay__TotalCost     = 2
};


// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	None                           = 1,
	ERecastPartitioning__Monotone  = 2
};


// Enum Engine.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static = 0,
	None                           = 1,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX = 2,
	ERootMotionMode__NoRootMotionExtraction = 3
};


// Enum Engine.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone  = 0,
	None                           = 1,
	ENavLinkDirection__BothWays    = 2
};


// Enum Engine.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost     = 0,
	None                           = 1,
	VIS_LeastAggressive            = 2
};


// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	ENavLinkDirection__BothWays    = 0,
	None                           = 1,
	EAnimGroupRole__CanBeLeader    = 2
};


// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
	EBoneTranslationRetargetingMode__Animation = 0,
	None                           = 1,
	EBoneTranslationRetargetingMode__EBoneTranslationRetargetingMode_MAX = 2,
	RCTM_Auto                      = 3
};


// Enum Engine.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	None                           = 1,
	SMOI_High                      = 2,
	None01                         = 3
};


// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
	EAnimGroupRole__CanBeLeader    = 0,
	None                           = 1,
	IntProperty                    = 2,
	SMOT_NumOfTriangles            = 3
};


// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	ERootMotionMode__NoRootMotionExtraction = 0,
	None                           = 1,
	ERootMotionMode__ERootMotionMode_MAX = 2,
	EBoneTranslationRetargetingMode__Animation = 3
};


// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
	ERootMotionRootLock__RefPose   = 0,
	None                           = 1,
	EControllerAnalogStick__CAS_LeftStick = 2
};


// Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{
	EDOFMode__Default              = 0,
	None                           = 1,
	EDOFMode__XYPlane              = 2,
	None01                         = 3
};


// Enum Engine.EExcludeFromCascades
enum class EExcludeFromCascades : uint8_t
{
	LastCascade                    = 0,
	None                           = 1,
	BoolProperty                   = 2,
	EBoneSpaces__WorldSpace        = 3
};


// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
	EHasCustomNavigableGeometry__No = 0,
	None                           = 1,
	EHasCustomNavigableGeometry__EHasCustomNavigableGeometry_MAX = 2,
	SOUNDDISTANCE_Normal           = 3
};


// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	None                           = 1,
	PBO_None                       = 2
};


// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
	EBoneSpaces__WorldSpace        = 0,
	None                           = 1
};


// Enum Engine.EMeshComponentUpdateFlag
enum class EMeshComponentUpdateFlag : uint8_t
{
	EMeshComponentUpdateFlag__AlwaysTickPoseAndRefreshBones = 0,
	None                           = 1,
	EMeshComponentUpdateFlag__EMeshComponentUpdateFlag_MAX = 2,
	EHasCustomNavigableGeometry__No = 3
};


// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	None                           = 1,
	BVS_HiddenByParent             = 2
};


// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	None                           = 1,
	EAngularDriveMode__SLERP       = 2
};


// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
	EAngularDriveMode__SLERP       = 0,
	None                           = 1
};


// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1       = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	None                           = 1,
	EAnimLinkMethod__Absolute      = 2
};


// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
	EAnimLinkMethod__Absolute      = 0,
	None                           = 1,
	ECurveBlendOption__MaxWeight   = 2
};


// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
	ECurveBlendOption__MaxWeight   = 0,
	None                           = 1,
	AAT_None                       = 2
};


// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	None                           = 1,
	IntProperty                    = 2,
	ENotifyFilterType__NoFiltering = 3
};


// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
	ENotifyFilterType__NoFiltering = 0,
	None                           = 1
};


// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
	EMontageNotifyTickType__Queued = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
	EAnimationMode__AnimationBlueprint = 0,
	None                           = 1
};


// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	EKinematicBonesUpdateToPhysics__SkipSimulatingBones = 0,
	None                           = 1
};


// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
	ESplineCoordinateSpace__Local  = 0,
	None                           = 1
};


// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
	ESplinePointType__Linear       = 0,
	None                           = 1,
	ESplinePointType__CurveCustomTangent = 2,
	None01                         = 3,
	FNavigationSystemRunMode__InvalidMode = 4
};


// Enum Engine.FNavigationSystemRunMode
enum class EFNavigationSystemRunMode : uint8_t
{
	FNavigationSystemRunMode__InvalidMode = 0,
	None                           = 1,
	FNavigationSystemRunMode__PIEMode = 2,
	None01                         = 3,
	Sphere                         = 4
};


// Enum Engine.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t
{
	EVehicleDifferential4W__LimitedSlip_4W = 0,
	None                           = 1,
	EVehicleDifferential4W__Open_FrontDrive = 2,
	None01                         = 3
};


// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	None                           = 1
};


// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
	EAttenuationShape__Sphere      = 0,
	None                           = 1,
	EAttenuationShape__EAttenuationShape_MAX = 2,
	EMeshComponentUpdateFlag__AlwaysTickPoseAndRefreshBones = 3
};


// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	None                           = 1,
	SOUNDDISTANCE_MAX              = 2,
	ERuntimeGenerationType__Static = 3
};


// Enum Engine.ESoundDistanceModel
enum class ESoundDistanceModel : uint8_t
{
	ATTENUATION_Linear             = 0,
	None                           = 1,
	ATTENUATION_NaturalSound       = 2,
	None01                         = 3
};


// Enum Engine.EAmbientLightClusteringPolicy
enum class EAmbientLightClusteringPolicy : uint8_t
{
	OnlyLight                      = 0,
	None                           = 1,
	EAmbientLightClusteringPolicy_MAX = 2,
	EAttenuationShape__Sphere      = 3
};


// Enum Engine.EAmbientLightConeShape
enum class EAmbientLightConeShape : uint8_t
{
	Sphere                         = 0,
	None                           = 1,
	NarrowishCone                  = 2,
	None01                         = 3,
	ETextureSamplerFilter__Point   = 4
};


// Enum Engine.ESimpleLightFunctionType
enum class ESimpleLightFunctionType : uint8_t
{
	NoFunction                     = 0,
	None                           = 1,
	LastCascade                    = 2
};


// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.EPoseableAnimMode
enum class EPoseableAnimMode : uint8_t
{
	EPoseableAnimMode__Poseable    = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
	ETextureSamplerFilter__Point   = 0,
	None                           = 1,
	IntProperty                    = 2,
	ETextureSamplerFilter__AnisotropicLinear = 3,
	None01                         = 4,
	CTM_Disabled                   = 5
};


// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
	ETexturePowerOfTwoSetting__None = 0,
	None                           = 1,
	IntProperty                    = 2,
	ETransitionBlendMode__TBM_Linear = 3
};


// Enum Engine.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	None                           = 1,
	TMGS_Sharpen2                  = 2,
	None01                         = 3,
	TMGS_Sharpen6                  = 4,
	None02                         = 5,
	TMGS_Sharpen10                 = 6,
	None03                         = 7,
	TMGS_Blur2                     = 8,
	None04                         = 9,
	TMGS_MAX                       = 10,
	Int16Property                  = 11,
	AdvanceFrame                   = 12,
	ArrayProperty                  = 13
};


// Enum Engine.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	None                           = 1,
	IntProperty                    = 2,
	TEXTUREGROUP_CharacterNormalMap = 3,
	None01                         = 4,
	NameProperty                   = 5,
	TEXTUREGROUP_WeaponSpecular    = 6,
	None02                         = 7,
	TEXTUREGROUP_Cinematic         = 8,
	None03                         = 9,
	TextProperty                   = 10,
	TEXTUREGROUP_UI                = 11,
	None04                         = 12,
	LazyObjectProperty             = 13,
	TEXTUREGROUP_ProcBuilding_Face = 14,
	None05                         = 15,
	UInt16Property                 = 16,
	TEXTUREGROUP_Terrain_Heightmap = 17,
	None06                         = 18,
	Int8Property                   = 19,
	TEXTUREGROUP_Pixels2D          = 20,
	None07                         = 21,
	Core                           = 22,
	TEXTUREGROUP_Coherent          = 23,
	None08                         = 24,
	None09                         = 25,
	DominanceGroup                 = 26,
	IntProperty01                  = 27,
	IntProperty02                  = 28,
	DominanceGroup01               = 29,
	NameProperty01                 = 30,
	NameProperty02                 = 31,
	DominanceGroup02               = 32
};


// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	None                           = 1,
	TSF_RGBA16                     = 2,
	None01                         = 3,
	TSF_RGBA32F                    = 4,
	None02                         = 5
};


// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	None                           = 1,
	EPoseableAnimMode__Poseable    = 2
};


// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	None                           = 1,
	ETexturePowerOfTwoSetting__None = 2
};


// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	None                           = 1,
	IntProperty                    = 2,
	CTM_NormalRoughnessToAlpha     = 3,
	None01                         = 4,
	ESettingsLockedAxis__None      = 5
};


// Enum Engine.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	None                           = 1,
	IntProperty                    = 2,
	ESplineMeshAxis__X             = 3
};


// Enum Engine.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	None                           = 1,
	TF_MAX                         = 2,
	ABPT_None                      = 3
};


// Enum Engine.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	None                           = 1,
	TC_Displacementmap             = 2,
	None01                         = 3,
	TC_Alpha                       = 4,
	None02                         = 5,
	TC_SignedHDR                   = 6,
	None03                         = 7,
	Actor                          = 8,
	TC_MAX                         = 9,
	None04                         = 10,
	EAthenaAnimationPetRoamingState__Idle = 11,
	None05                         = 12
};


// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
	ESplineMeshAxis__X             = 0,
	None                           = 1,
	PARTICLESYSTEMLODMETHOD_Automatic = 2
};


// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	None                           = 1,
	MATUSAGE_StaticLighting        = 2,
	None01                         = 3,
	MATUSAGE_InstancedStaticMeshes = 4,
	None02                         = 5,
	MATUSAGE_DynamicObjectFading   = 6,
	None03                         = 7,
	MATUSAGE_PlanarReflection      = 8,
	None04                         = 9,
	MATUSAGE_PointLightShadow      = 10,
	None05                         = 11,
	None06                         = 12
};


// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	None                           = 1,
	EPSUM_RealTime                 = 2
};


// Enum Engine.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	None                           = 1,
	EPSOBM_None                    = 2
};


// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	None                           = 1
};


// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	None                           = 1,
	EPET_Burst                     = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	None                           = 1,
	EHTA_Left                      = 2
};


// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	None                           = 1,
	PSPT_VectorRand                = 2,
	None01                         = 3,
	NameProperty                   = 4,
	PSPT_EmitterPoints             = 5,
	None02                         = 6,
	TSF_Invalid                    = 7,
	None03                         = 8
};


// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	None                           = 1,
	EVRTA_MAX                      = 2,
	OnlyLight                      = 3
};


// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	None                           = 1,
	IntProperty                    = 2,
	SCS_SceneColorHDR              = 3
};


// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
	ETimelineDirection__Forward    = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	None                           = 1
};


// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	None                           = 1,
	IntProperty                    = 2,
	TL_TimelineLength              = 3
};


// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
	EAlphaBlendOption__Linear      = 0,
	None                           = 1,
	IntProperty                    = 2,
	EAlphaBlendOption__QuadraticInOut = 3,
	None01                         = 4,
	NameProperty                   = 5,
	EAlphaBlendOption__CircularIn  = 6,
	None02                         = 7,
	StructProperty                 = 8,
	EAlphaBlendOption__ExpOut      = 9,
	None03                         = 10,
	TextProperty                   = 11,
	EAlphaBlendOption__Custom      = 12,
	None04                         = 13,
	TC_Default                     = 14,
	None05                         = 15,
	TC_Displacementmap             = 16
};


// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
	ETransitionLogicType__TLT_StandardBlend = 0,
	None                           = 1
};


// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
	ETransitionBlendMode__TBM_Linear = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	None                           = 1,
	EAnimNotifyEventType__Begin    = 2
};


// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	None                           = 1,
	BCS_MAX                        = 2,
	TF_Nearest                     = 3
};


// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
	EAnimNotifyEventType__Begin    = 0,
	None                           = 1
};


// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	None                           = 1,
	ABPT_MAX                       = 2,
	EVRTA_TextTop                  = 3
};


// Enum Engine.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	None                           = 1,
	EGrammaticalNumber__Singular   = 2
};


// Enum Engine.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	None                           = 1,
	ACF_Fixed32NoW                 = 2,
	None01                         = 3
};


// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
	ENotifyTriggerMode__AllAnimations = 0,
	None                           = 1,
	BSA_None                       = 2
};


// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	None                           = 1,
	EEvaluateCurveTableResult__RowFound = 2
};


// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
	EEvaluateCurveTableResult__RowFound = 0,
	None                           = 1
};


// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
	EGrammaticalNumber__Singular   = 0,
	None                           = 1
};


// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
	EGrammaticalGender__Neuter     = 0,
	None                           = 1,
	EGrammaticalGender__EGrammaticalGender_MAX = 2,
	BCS_WorldSpace                 = 3
};


// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	ESuggestProjVelocityTraceOption__DoNotTrace = 0,
	None                           = 1,
	PhysType_Default               = 2
};


// Enum Engine.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation = 0,
	None                           = 1,
	ETransitionLogicType__TLT_StandardBlend = 2
};


// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
	EEasingFunc__Linear            = 0,
	None                           = 1,
	EEasingFunc__SinusoidalInOut   = 2,
	None01                         = 3,
	EEasingFunc__ExpoIn            = 4,
	None02                         = 5,
	StructProperty                 = 6,
	EEasingFunc__CircularOut       = 7,
	None03                         = 8,
	TextProperty                   = 9,
	ENetworkFailure__NetDriverAlreadyExists = 10,
	None04                         = 11
};


// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	None                           = 1,
	ToZero                         = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	None                           = 1,
	DPM_Normal                     = 2
};


// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	None                           = 1,
	EDVMF_Same                     = 2
};


// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
	EUIScalingRule__ShortestSide   = 0,
	None                           = 1,
	EUIScalingRule__Custom         = 2,
	None01                         = 3,
	EDVLF_None                     = 4
};


// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
	ERenderFocusRule__Always       = 0,
	None                           = 1,
	ERenderFocusRule__ERenderFocusRule_MAX = 2,
	ESettingsDOF__Full3D           = 3
};


// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
	ESettingsLockedAxis__None      = 0,
	None                           = 1,
	ESettingsLockedAxis__Invalid   = 2,
	None01                         = 3,
	EUIScalingRule__ShortestSide   = 4
};


// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
	ESettingsDOF__Full3D           = 0,
	None                           = 1,
	ESettingsDOF__ESettingsDOF_MAX = 2,
	EGrammaticalGender__Neuter     = 3
};


// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average  = 0,
	None                           = 1,
	EFrictionCombineMode__EFrictionCombineMode_MAX = 2,
	ERenderFocusRule__Always       = 3
};


// Enum Engine.EAntiAliasingMethodUI
enum class EAntiAliasingMethodUI : uint8_t
{
	EAntiAliasingMethodUI__AAM_None = 0,
	None                           = 1,
	EBodyCollisionResponse__BodyCollision_Enabled = 2
};


// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
	EEarlyZPass__None              = 0,
	None                           = 1,
	EEarlyZPass__EEarlyZPass_MAX   = 2,
	ECompositingSampleCount__One   = 3
};


// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
	ECustomDepthStencil__Disabled  = 0,
	None                           = 1,
	ECustomDepthStencil__ECustomDepthStencil_MAX = 2,
	EEarlyZPass__None              = 3
};


// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
	ECompositingSampleCount__One   = 0,
	None                           = 1,
	ECompositingSampleCount__ECompositingSampleCount_MAX = 2,
	EFrictionCombineMode__Average  = 3
};


// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
	EClearSceneOptions__NoClear    = 0,
	None                           = 1,
	EClearSceneOptions__EClearSceneOptions_MAX = 2,
	ECustomDepthStencil__Disabled  = 3
};


// Enum Engine.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	None                           = 1,
	CTF_UseDefault                 = 2
};


// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	None                           = 1,
	ETAC_Always                    = 2
};


// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	None                           = 1,
	EDVLF_XYZ                      = 2,
	None01                         = 3,
	GT_Function                    = 4
};


// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	None                           = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.EGraphType
enum class EGraphType : uint8_t
{
	GT_Function                    = 0,
	None                           = 1,
	IntProperty                    = 2,
	GT_StateMachine                = 3,
	None01                         = 4,
	FULLYLOAD_Map                  = 5
};


// Enum Engine.EConsoleType
enum class EConsoleType : uint8_t
{
	CONSOLE_Any                    = 0,
	None                           = 1
};


// Enum Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	TT_None                        = 0,
	None                           = 1,
	TT_Connecting                  = 2,
	None01                         = 3
};


// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	None                           = 1,
	FULLYLOAD_Mutator              = 2,
	None01                         = 3,
	MD_Surface                     = 4
};


// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	None                           = 1,
	CONSOLE_Any                    = 2
};


// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
	EFontCacheType__Offline        = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
	EPostCopyOperation__None       = 0,
	None                           = 1
};


// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
	EPinHidingMode__NeverAsPin     = 0,
	None                           = 1,
	EPinHidingMode__EPinHidingMode_MAX = 2,
	HIKHandsContactType_Normal     = 3
};


// Enum Engine.EHIKEffector
enum class EHIKEffector : uint8_t
{
	HIKEffector_Hips               = 0,
	None                           = 1,
	HIKEffector_RightWrist         = 2,
	None01                         = 3,
	HIKEffector_RightElbow         = 4,
	None02                         = 5,
	HIKEffector_RightFoot          = 6,
	None03                         = 7,
	HIKEffector_LeftHip            = 8,
	None04                         = 9,
	HIKEffector_LeftHandThumb      = 10,
	None05                         = 11,
	HIKEffector_LeftHandPinky      = 12,
	None06                         = 13,
	HIKEffector_RightHandMiddle    = 14,
	None07                         = 15,
	HIKEffector_LeftFootThumb      = 16,
	None08                         = 17,
	HIKEffector_LeftFootPinky      = 18,
	None09                         = 19,
	HIKEffector_RightFootMiddle    = 20,
	None10                         = 21,
	HIKEffector_Last               = 22,
	None11                         = 23,
	OnPrimaryItemUsePressed        = 24,
	OnQuickSwitchPrimaryWeapon     = 25,
	OnQuickSwitchWeapon            = 26,
	OnSecondaryItemUseReleased     = 27
};


// Enum Engine.EHIKProperty
enum class EHIKProperty : uint8_t
{
	HIKProp_HIKForceActorSpaceId   = 0,
	None                           = 1,
	HIKProp_AnkleProximityCompensationId = 2,
	None01                         = 3,
	HIKProp_ReachActorChestId      = 4,
	None02                         = 5,
	HIKProp_ReachActorRightKneeId  = 6,
	None03                         = 7,
	HIKProp_ReachActorLeftAnkleRotationId = 8,
	None04                         = 9,
	HIKProp_ReachActorRightWristRotationId = 10,
	None05                         = 11,
	UInt16Property                 = 12,
	HIKProp_ReachActorRightToesBaseId = 13,
	None06                         = 14,
	HIKProp_ReachActorRightToesBaseRotationId = 15,
	None07                         = 16,
	HIKProp_ReachActorLeftHandIndexId = 17,
	None08                         = 18,
	HIKProp_ReachActorLeftHandExtraFingerId = 19,
	None09                         = 20,
	HIKProp_ReachActorRightHandRingId = 21,
	None10                         = 22,
	HIKProp_ReachActorLeftFootIndexId = 23,
	None11                         = 24,
	HIKProp_ReachActorLeftFootExtraFingerId = 25,
	None12                         = 26,
	HIKProp_ReachActorRightFootRingId = 27,
	None13                         = 28,
	HIKProp_FootBottomToAnkleId    = 29,
	None14                         = 30,
	HIKProp_FootInToAnkleId        = 31,
	None15                         = 32,
	HIKProp_HandBackToWristId      = 33,
	None16                         = 34,
	Spectating                     = 35,
	HIKProp_HandOutToWristId       = 36,
	None17                         = 37,
	Self                           = 38,
	HIKProp_FootContactTypeId      = 39,
	None18                         = 40,
	HIKProp_LeftLegRollId          = 41,
	None19                         = 42,
	HIKProp_LeftForeArmRollId      = 43,
	None20                         = 44,
	HIKProp_LeftKneeKillPitchId    = 45,
	None21                         = 46,
	HIKProp_CtrlPullLeftFootId     = 47,
	None22                         = 48,
	HIKProp_CtrlPullHeadId         = 49,
	None23                         = 50,
	HIKProp_CtrlPullRightKneeId    = 51,
	None24                         = 52,
	HIKProp_CtrlPullRightElbowId   = 53,
	None25                         = 54,
	Actor                          = 55,
	HIKProp_CtrlEnforceGravityId   = 56,
	None26                         = 57,
	HIKProp_CtrlResistLeftCollarId = 58,
	None27                         = 59,
	HIKProp_CtrlResistLeftElbowId  = 60,
	None28                         = 61,
	HIKProp_HipsTOffsetYId         = 62,
	None29                         = 63,
	HIKProp_ChestTOffsetZId        = 64,
	None30                         = 65,
	HIKProp_HandAutomaticFingersId = 66,
	None31                         = 67,
	HIKProp_FingerSolvingId        = 68,
	None32                         = 69,
	HIKProp_CtrlResistMaximumExtensionLeftElbow = 70,
	None33                         = 71,
	HIKProp_CtrlResistCompressionFactorLeftElbow = 72,
	None34                         = 73,
	HIKProp_HandContactStiffness   = 74,
	None35                         = 75,
	HIKProp_LeftHandIndexTip       = 76,
	None36                         = 77,
	HIKProp_LeftHandExtraFingerTip = 78,
	None37                         = 79,
	HIKProp_RightHandRingTip       = 80,
	None38                         = 81,
	HIKProp_LeftFootIndexTip       = 82,
	None39                         = 83,
	HIKProp_LeftFootExtraFingerTip = 84,
	None40                         = 85,
	HIKProp_RightFootRingTip       = 86,
	None41                         = 87,
	HIKProp_LeftLegMaxExtensionAngle = 88,
	None42                         = 89,
	HIKProp_ExtraCollarRatioId     = 90,
	None43                         = 91,
	HIKProp_ReachActorLeftShoulderId = 92,
	None44                         = 93,
	HIKProp_RealisticRightKneeSolvingId = 94,
	None45                         = 95,
	HIKProp_SnSReachLeftWrist      = 96,
	None46                         = 97,
	HIKProp_SnSScaleSpine          = 98,
	None47                         = 99,
	HIKProp_SnSReachHead           = 100,
	None48                         = 101,
	HIKProp_RightLegRollExId       = 102,
	None49                         = 103,
	HIKProp_RightForeArmRollExId   = 104,
	None50                         = 105,
	HIKProp_LockXId                = 106,
	None51                         = 107,
	HIKProp_LastPropertyId         = 108,
	None52                         = 109,
	None53                         = 110,
	None54                         = 111,
	None55                         = 112,
	BoolProperty                   = 113,
	Editor                         = 114,
	None56                         = 115,
	ClassProperty                  = 116,
	BoolProperty01                 = 117,
	None57                         = 118,
	ByteProperty                   = 119,
	None58                         = 120,
	StructProperty                 = 121,
	None59                         = 122,
	None60                         = 123,
	LinearColor                    = 124,
	None61                         = 125,
	VectorProperty                 = 126,
	None62                         = 127,
	VectorProperty01               = 128,
	None63                         = 129,
	None64                         = 130,
	CoreUObject                    = 131,
	Editor01                       = 132
};


// Enum Engine.EHIKEffectorSpace
enum class EHIKEffectorSpace : uint8_t
{
	HIKEffectorSpace_World         = 0,
	None                           = 1
};


// Enum Engine.EHIKHandsContactType
enum class EHIKHandsContactType : uint8_t
{
	HIKHandsContactType_Normal     = 0,
	None                           = 1,
	HIKHandsContactType_MAX        = 2,
	EClearSceneOptions__NoClear    = 3
};


// Enum Engine.EHIKFeetContactType
enum class EHIKFeetContactType : uint8_t
{
	HIKFeetContactType_Normal      = 0,
	None                           = 1,
	HIKFeetContactType_MAX         = 2,
	CMOT_Float1                    = 3
};


// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	None                           = 1,
	FontICS_Default                = 2
};


// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	None                           = 1,
	IntProperty                    = 2,
	EVTC_Always                    = 3
};


// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	None                           = 1,
	AXIS_RotationY                 = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	None                           = 1,
	ETTA_MAX                       = 2,
	HIKFeetContactType_Normal      = 3
};


// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	None                           = 1,
	IntProperty                    = 2,
	EVTA_Hide                      = 3
};


// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	None                           = 1,
	IntProperty                    = 2,
	CMODE_Clamp                    = 3
};


// Enum Engine.EClampMode
enum class EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	None                           = 1,
	TDOF_NearAndFarMask            = 2
};


// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	None                           = 1,
	CMOT_MAX                       = 2,
	EPinHidingMode__NeverAsPin     = 3
};


// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	None                           = 1,
	EMaterialSceneAttributeInputMode__Coordinates = 2
};


// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	None                           = 1,
	FunctionInput_Texture2D        = 2,
	None01                         = 3,
	FunctionInput_MAX              = 4,
	TLM_VolumetricNonDirectional   = 5,
	None02                         = 6
};


// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_Simplex          = 0,
	None                           = 1,
	NOISEFUNCTION_MAX              = 2,
	ETTA_Off                       = 3
};


// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	EMaterialSceneAttributeInputMode__Coordinates = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	None                           = 1,
	PPI_SubsurfaceColor            = 2,
	None01                         = 3,
	PPI_WorldNormal                = 4,
	None02                         = 5,
	PPI_MaterialAO                 = 6,
	None03                         = 7,
	PPI_PostProcessInput2          = 8,
	None04                         = 9,
	PPI_PostProcessInput6          = 10,
	None05                         = 11,
	PPI_CustomStencil              = 12,
	None06                         = 13,
	None07                         = 14,
	None08                         = 15,
	None09                         = 16,
	EShipLocation__TOP_DECK        = 17,
	None10                         = 18,
	IntProperty                    = 19
};


// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	None                           = 1
};


// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	None                           = 1,
	STW_Best                       = 2,
	None01                         = 3
};


// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	None                           = 1,
	IntProperty                    = 2,
	STG_Billboard                  = 3,
	None01                         = 4,
	MEVP_BufferSize                = 5
};


// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	None                           = 1,
	TMVM_MAX                       = 2,
	NOISEFUNCTION_Simplex          = 3
};


// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	None                           = 1,
	IntProperty                    = 2,
	TCC_MAX                        = 3,
	TMVM_None                      = 4
};


// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	None                           = 1,
	IntProperty                    = 2,
	TRANSFORM_MAX                  = 3,
	TCC_Red                        = 4
};


// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	None                           = 1,
	IntProperty                    = 2,
	TRANSFORMSOURCE_MAX            = 3,
	TRANSFORM_Tangent              = 4
};


// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	None                           = 1,
	TRANSFORMPOSSOURCE_MAX         = 2,
	TRANSFORMSOURCE_Tangent        = 3
};


// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	None                           = 1,
	MEVP_WorldSpaceCameraPosition  = 2,
	None01                         = 3,
	ERM_Normal                     = 4
};


// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	None                           = 1,
	WPT_MAX                        = 2,
	PEB2STTM_Direct                = 3
};


// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	None                           = 1,
	MDR_ColorRoughness             = 2,
	None01                         = 3,
	MDR_MAX                        = 4,
	FunctionInput_Scalar           = 5,
	None02                         = 6
};


// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	None                           = 1,
	MD_UI                          = 2,
	None01                         = 3,
	STG_Branch                     = 4
};


// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	None                           = 1,
	DBM_DBuffer_ColorNormalRoughness = 2,
	None01                         = 3,
	DBM_DBuffer_Normal             = 4,
	None02                         = 5,
	StructProperty                 = 6,
	DBM_Wet                        = 7,
	None03                         = 8,
	MulticastDelegateProperty      = 9,
	EEasingFunc__Linear            = 10,
	None04                         = 11
};


// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	None                           = 1,
	ERM_None                       = 2,
	None01                         = 3,
	PSUVIM_None                    = 4
};


// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	None                           = 1,
	PSUVIM_Random_Blend            = 2,
	None01                         = 3,
	PEB2STM_Default                = 4
};


// Enum Engine.EBurstGroup
enum class EBurstGroup : uint8_t
{
	GroupA                         = 0,
	None                           = 1,
	GroupE                         = 2,
	None01                         = 3
};


// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	None                           = 1
};


// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	None                           = 1,
	PSA_AwayFromCenter             = 2,
	None01                         = 3,
	PSA_InitialVelocity            = 4,
	None02                         = 5,
	PSPT_None                      = 6,
	None03                         = 7
};


// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General                   = 0,
	None                           = 1,
	EPMT_Spawn                     = 2,
	None01                         = 3,
	NameProperty                   = 4,
	EPMT_MAX                       = 5,
	MDR_None                       = 6,
	None02                         = 7
};


// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	None                           = 1
};


// Enum Engine.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	None                           = 1,
	PEB2STTM_MAX                   = 2,
	TRANSFORMPOSSOURCE_Local       = 3
};


// Enum Engine.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	None                           = 1,
	IntProperty                    = 2,
	PEB2STM_Actor                  = 3,
	None01                         = 4,
	StartHeightGroupB              = 5
};


// Enum Engine.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	None                           = 1
};


// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	None                           = 1,
	ELESM_Random                   = 2
};


// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	None                           = 1,
	EPCC_FreezeRotation            = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	EParticleCollisionResponse__Bounce = 0,
	None                           = 1,
	ENM_CameraFacing               = 2
};


// Enum Engine.EStartAlphaGroupsName
enum class EStartAlphaGroupsName : uint8_t
{
	StartAlphaB                    = 0,
	None                           = 1,
	StartAlphaReplacement          = 2,
	None01                         = 3
};


// Enum Engine.EStartColorGroupsName
enum class EStartColorGroupsName : uint8_t
{
	StartColorB                    = 0,
	None                           = 1,
	StartColorReplacement          = 2,
	None01                         = 3
};


// Enum Engine.ELifetimeGroupsName
enum class ELifetimeGroupsName : uint8_t
{
	LifetimeB                      = 0,
	None                           = 1,
	LifetimeReplacement            = 2,
	None01                         = 3
};


// Enum Engine.EStartLocationGroupNames
enum class EStartLocationGroupNames : uint8_t
{
	StartLocationGroupB            = 0,
	None                           = 1,
	StartLocationGroup_MAX         = 2,
	None01                         = 3,
	StartRadiusGroupB              = 4
};


// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	None                           = 1
};


// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	None                           = 1
};


// Enum Engine.EStartHeightGroupNames
enum class EStartHeightGroupNames : uint8_t
{
	StartHeightGroupB              = 0,
	None                           = 1,
	IntProperty                    = 2,
	StartHeightGroup_MAX           = 3,
	None01                         = 4,
	StartLocationGroupB            = 5
};


// Enum Engine.EStartRadiusGroupNames
enum class EStartRadiusGroupNames : uint8_t
{
	StartRadiusGroupB              = 0,
	None                           = 1,
	IntProperty                    = 2,
	StartRadiusGroup_MAX           = 3,
	None01                         = 4,
	EDPV_UserSet                   = 5
};


// Enum Engine.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	None                           = 1,
	IntProperty                    = 2,
	VERTSURFACESOURCE_Vert         = 3
};


// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	None                           = 1
};


// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	None                           = 1,
	IntProperty                    = 2,
	BVC_FourVertices               = 3
};


// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	None                           = 1,
	EPAL_NEGATIVE_X                = 2,
	None01                         = 3,
	EPAL_ROTATE_Y                  = 4,
	None02                         = 5
};


// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	None                           = 1,
	IntProperty                    = 2,
	EDPV_VelocityMag               = 3,
	None01                         = 4,
	OSM_Alpha                      = 5
};


// Enum Engine.EGroupScales
enum class EGroupScales : uint8_t
{
	GroupAScale                    = 0,
	None                           = 1,
	GroupEScale                    = 2,
	None01                         = 3
};


// Enum Engine.EPriorityGroups
enum class EPriorityGroups : uint8_t
{
	PriorityZero                   = 0,
	None                           = 1,
	PriorityFour                   = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	None                           = 1,
	OSM_BlueChannel                = 2,
	None01                         = 3,
	PSORTMODE_None                 = 4
};


// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	None                           = 1
};


// Enum Engine.EEmitterOriginGroupNames
enum class EEmitterOriginGroupNames : uint8_t
{
	EmitterOriginGroupB            = 0,
	None                           = 1,
	EmitterOriginGroupReplacement  = 2,
	None01                         = 3
};


// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	None                           = 1,
	BONESOCKETSOURCE_Bones         = 2
};


// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	None                           = 1,
	PSORTMODE_Age_NewestFirst      = 2,
	None01                         = 3,
	NoCulling                      = 4
};


// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
	EParticleUVFlipMode__None      = 0,
	None                           = 1,
	EParticleUVFlipMode__RandomFlipUV = 2,
	None01                         = 3,
	NameProperty                   = 4,
	EParticleUVFlipMode__EParticleUVFlipMode_MAX = 5,
	EPMT_General                   = 6,
	None02                         = 7
};


// Enum Engine.EStartSizeGroupNames
enum class EStartSizeGroupNames : uint8_t
{
	StartSizeB                     = 0,
	None                           = 1,
	StartSizeReplacement           = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.ERateGroupNames
enum class ERateGroupNames : uint8_t
{
	RateB                          = 0,
	None                           = 1,
	RateReplacement                = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	None                           = 1,
	PMLPC_HEIGHTAXIS_X             = 2
};


// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	None                           = 1,
	PSMA_MeshFaceCameraWithRoll    = 2
};


// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	None                           = 1,
	IntProperty                    = 2,
	EAudioOutputTarget__Speaker    = 3
};


// Enum Engine.EInteractionWithKillPlane
enum class EInteractionWithKillPlane : uint8_t
{
	None                           = 0,
	None01                         = 1,
	EInteractionWithKillPlane_MAX  = 2,
	MTR_Succeeded                  = 3
};


// Enum Engine.EParticleAlphaThresholdLevel
enum class EParticleAlphaThresholdLevel : uint8_t
{
	NoCulling                      = 0,
	None                           = 1,
	Aggressive                     = 2,
	None01                         = 3
};


// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	None                           = 1,
	IntProperty                    = 2,
	XAxisFacing_NegativeYUp        = 3,
	None01                         = 4,
	NameProperty                   = 5,
	LockedAxis_NegativeYAxisFacing = 6,
	None02                         = 7,
	StructProperty                 = 8,
	VelocityAligned_NegativeYAxisFacing = 9,
	None03                         = 10,
	MulticastDelegateProperty      = 11,
	DBM_Translucent                = 12,
	None04                         = 13
};


// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	None                           = 1,
	CameraFacing_NegativeYUp       = 2,
	None01                         = 3,
	NM_PreserveSmoothingGroups     = 4
};


// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	None                           = 1,
	Trails_CameraUp                = 2
};


// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	None                           = 1,
	AMD_ClickedBanner              = 2
};


// Enum Engine.EStartVelocityGroupsName
enum class EStartVelocityGroupsName : uint8_t
{
	StartVelocityB                 = 0,
	None                           = 1,
	StartVelocityReplacemnent      = 2,
	None01                         = 3
};


// Enum Engine.EVelocityConeGroupNames
enum class EVelocityConeGroupNames : uint8_t
{
	VelocityConeGroupB             = 0,
	None                           = 1,
	VelocityConeGroupReplacemnent  = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	None                           = 1,
	CSD_DocumentReadComplete       = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	None                           = 1
};


// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	None                           = 1,
	MTR_MAX                        = 2,
	EMaxConcurrentResolutionRule__PreventNew = 3
};


// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	None                           = 1,
	IntProperty                    = 2
};


// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	None                           = 1,
	IntProperty                    = 2,
	EReporterLineStyle__Line       = 3
};


// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	None                           = 1,
	EGraphDataStyle__Lines         = 2
};


// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
	EReporterLineStyle__Line       = 0,
	None                           = 1
};


// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
	ELegendPosition__Outside       = 0,
	None                           = 1
};


// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
	EGraphDataStyle__Lines         = 0,
	None                           = 1
};


// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
	EGraphAxisStyle__Lines         = 0,
	None                           = 1,
	EConstraintTransform__Absolute = 2
};


// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
	EConstraintTransform__Absolute = 0,
	None                           = 1
};


// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
	EControlConstraint__Orientation = 0,
	None                           = 1,
	ECanvasRenderTargetMips__Disabled = 2
};


// Enum Engine.EImpactDamageOverride
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	None                           = 1,
	VFCO_Extrude                   = 2
};


// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
	EMaxConcurrentResolutionRule__PreventNew = 0,
	None                           = 1,
	EMaxConcurrentResolutionRule__EMaxConcurrentResolutionRule_MAX = 2,
	WPT_Default                    = 3
};


// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	None                           = 1,
	SOUNDGROUP_Voice               = 2,
	None01                         = 3,
	SOUNDGROUP_GameSoundGroup4     = 4,
	None02                         = 5,
	SOUNDGROUP_GameSoundGroup8     = 6,
	None03                         = 7,
	SOUNDGROUP_GameSoundGroup12    = 8,
	None04                         = 9,
	SOUNDGROUP_GameSoundGroup16    = 10,
	None05                         = 11,
	SOUNDGROUP_GameSoundGroup20    = 12,
	None06                         = 13
};


// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	None                           = 1,
	DTYPE_RealTime                 = 2,
	None01                         = 3,
	DTYPE_MAX                      = 4,
	EParticleUVFlipMode__None      = 5,
	None02                         = 6
};


// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	EAudioOutputTarget__Speaker    = 0,
	None                           = 1,
	PEBTM_None                     = 2
};


// Enum Engine.ModulationParamMode
enum class EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	None                           = 1,
	OT_NumOfTriangles              = 2
};


// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	None                           = 1
};


// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	None                           = 1,
	IL_High                        = 2,
	None01                         = 3
};


// Enum Engine.ENormalMode
enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	None                           = 1,
	IntProperty                    = 2,
	TEMP_BROKEN                    = 3,
	None01                         = 4
};


// Enum Engine.ECanvasRenderTargetMips
enum class ECanvasRenderTargetMips : uint8_t
{
	ECanvasRenderTargetMips__Disabled = 0,
	None                           = 1
};


// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	None                           = 1,
	UDSS_MAX                       = 2,
	None01                         = 3
};


// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	None                           = 1
};


// Enum Engine.EHIKLookAtInterpolation
enum class EHIKLookAtInterpolation : uint8_t
{
	EHIKLookAtInterpolation_Constant = 0,
	None                           = 1
};


// Enum Engine.EHIKLookAtLimits
enum class EHIKLookAtLimits : uint8_t
{
	EHIKLookAtLimits_None          = 0,
	None                           = 1,
	EIT_LocalSpace                 = 2
};


// Enum Engine.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	None                           = 1
};


// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
	EEvaluatorMode__EM_Standard    = 0,
	None                           = 1,
	EEvaluatorDataSource__EDS_SourcePose = 2
};


// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
	EEvaluatorDataSource__EDS_SourcePose = 0,
	None                           = 1
};


// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
	ECameraAlphaBlendMode__CABM_Linear = 0,
	None                           = 1
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.TickFunction
// 0x0048
struct FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0009(0x0001) MISSED OFFSET
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000A(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000A(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x31];                                      // 0x000B(0x0031) MISSED OFFSET
	float                                              TickInterval;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FActorComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SimpleMemberReference
// 0x0020
struct FSimpleMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MemberName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MemberGuid;                                               // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ActorTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FActorTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RepMovement
// 0x0034
struct FRepMovement
{
	struct FVector                                     LinearVelocity;                                           // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0018(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0024(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bSimulatedPhysicSleep : 1;                                // 0x0030(0x0001) (Transient)
	unsigned char                                      bRepPhysics : 1;                                          // 0x0030(0x0001) (Transient)
	TEnumAsByte<EVectorQuantization>                   LocationQuantizationLevel;                                // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EVectorQuantization>                   VelocityQuantizationLevel;                                // 0x0032(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ERotatorQuantization>                  RotationQuantizationLevel;                                // 0x0033(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize100 : public FVector
{

};

// ScriptStruct Engine.RepAttachment
// 0x0040
struct FRepAttachment
{
	class AActor*                                      AttachParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      LocationOffset;                                           // 0x0008(0x000C)
	struct FVector_NetQuantize100                      RelativeScale3D;                                          // 0x0014(0x000C)
	struct FRotator                                    RotationOffset;                                           // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class USceneComponent*                             AttachComponent;                                          // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Engine.ActorPtr
// 0x0008
struct FActorPtr
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantizeNormal : public FVector
{

};

// ScriptStruct Engine.HitResult
// 0x0080
struct FHitResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bStartPenetrating : 1;                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Time;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // 0x000C(0x000C)
	struct FVector_NetQuantize                         ImpactPoint;                                              // 0x0018(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0024(0x000C)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x0030(0x000C)
	struct FVector_NetQuantize                         TraceStart;                                               // 0x003C(0x000C)
	struct FVector_NetQuantize                         TraceEnd;                                                 // 0x0048(0x000C)
	float                                              PenetrationDepth;                                         // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Item;                                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                             // 0x005C(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0064(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x006C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0074(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                FaceIndex;                                                // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimTickRecord
// 0x0040
struct FAnimTickRecord
{
	class UAnimationAsset*                             SourceAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInstance
// 0x0018
struct FAnimGroupInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.ActiveVertexAnim
// 0x0010
struct FActiveVertexAnim
{
	class UVertexAnimBase*                             VertAnim;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimLinkableElement
// 0x0030
struct FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAnimMontage*                                LinkedMontage;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SegmentIndex;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimLinkMethod>                       LinkMethod;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimLinkMethod>                       CachedLinkMethod;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              SegmentBeginTime;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SegmentLength;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LinkValue;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LinkedSequence;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyEvent
// 0x0078 (0x00A8 - 0x0030)
struct FAnimNotifyEvent : public FAnimLinkableElement
{
	float                                              DisplayTime;                                              // 0x0030(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTriggerTimeOffset;                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TriggerWeightThreshold;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NotifyName;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 Notify;                                                   // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimNotifyState*                            NotifyStateClass;                                         // 0x0050(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FAnimLinkableElement                        EndLink;                                                  // 0x0060(0x0030)
	bool                                               bConvertedFromBranchingPoint;                             // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMontageNotifyTickType>                MontageTickType;                                          // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	float                                              NotifyTriggerChance;                                      // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENotifyFilterType>                     NotifyFilterType;                                         // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                NotifyFilterLOD;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerOnDedicatedServer;                                // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                TrackIndex;                                               // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BasedMovementInfo
// 0x0030
struct FBasedMovementInfo
{
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0010(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasBaseComponent;                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasVelocity;                                       // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionMovementParams
// 0x0040
struct FRootMotionMovementParams
{
	bool                                               bHasRootMotion;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  RootMotionTransform;                                      // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize10 : public FVector
{

};

// ScriptStruct Engine.RepRootMotionMontage
// 0x0040
struct FRepRootMotionMontage
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize10                       Location;                                                 // 0x000C(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       MovementBaseBoneName;                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativePosition;                                        // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x0048
struct FSimulatedRootMotionReplicatedMove
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FRepRootMotionMontage                       RootMotion;                                               // 0x0008(0x0040)
};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x0018
struct FUniqueNetIdRepl
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.RainPostProcessSettings
// 0x00C0
struct FRainPostProcessSettings
{
	unsigned char                                      bOverride_RainParticleTexture : 1;                        // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshTexture : 1;                            // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainIntensity : 1;                              // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainParticleAlpha : 1;                          // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainCloseParticleAlphaReductionMultiplier : 1;  // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainCloseParticleAlphaDistance : 1;             // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainParticleDensity : 1;                        // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainParticleSpeed : 1;                          // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainParticleWindVelocity : 1;                   // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainParticleWidth : 1;                          // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainParticleLength : 1;                         // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshScale : 1;                              // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshTextureScroll : 1;                      // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshTextureTiling : 1;                      // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshAlpha : 1;                              // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshRowDivision : 1;                        // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshColumnDivision : 1;                     // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshBrightness : 1;                         // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainBrightness : 1;                             // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainTint : 1;                                   // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshEndRadiusScale : 1;                     // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshEndAlphaFade : 1;                       // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainMeshFadeDistance : 1;                       // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainAnimationFrameTime : 1;                     // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashesPerSecond : 1;                      // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashesPerSquareMetre : 1;                 // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashesMaxPlacementAngle : 1;              // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashData : 1;                             // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashesMaxDistance1 : 1;                   // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashData2 : 1;                            // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_RainSplashesMaxDistance2 : 1;                   // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UTexture*                                    RainParticleTexture;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    RainMeshTexture;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainIntensity;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainParticleAlpha;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainCloseParticleAlphaReductionMultiplier;                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainCloseParticleAlphaDistance;                           // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainParticleDensity;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainParticleSpeed;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RainParticleWindVelocity;                                 // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainParticleWidth;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainParticleLength;                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RainMeshScale;                                            // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RainMeshTextureScroll;                                    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RainMeshTextureTiling;                                    // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainMeshAlpha;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RainMeshRowDivision;                                      // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RainMeshColumnDivision;                                   // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainMeshEndRadiusScale;                                   // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainMeshEndAlphaFade;                                     // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainMeshFadeDistance;                                     // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainMeshBrightness;                                       // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainBrightness;                                           // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RainTint;                                                 // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainAnimationFrameTime;                                   // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RainSplashesPerSecond;                                    // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainSplashesPerSquareMetre;                               // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainSplashesMaxPlacementAngle;                            // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleComputeShaderData*                  RainSplashData;                                           // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainSplashesMaxDistance1;                                 // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class UParticleComputeShaderData*                  RainSplashData2;                                          // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainSplashesMaxDistance2;                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LPVCascadeSettings
// 0x0070
struct FLPVCascadeSettings
{
	unsigned char                                      bOverride_LPVIntensity : 1;                               // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;           // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;              // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;               // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;               // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSize : 1;                                    // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;             // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                      // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                        // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;              // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_NumberOfPropagationSteps : 1;                   // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bFreezeLPVUpdate : 1;                                     // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              LPVIntensity;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVVplInjectionBias;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSize;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryOcclusionIntensity;                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryBounceIntensity;                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVGeometryVolumeBias;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVEmissiveInjectionIntensity;                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionIntensity;                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionRadius;                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionExponent;                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionExponent;                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionIntensity;                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionIntensity;                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LPVNumberOfPropagationSteps;                              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FTransform                                  LPVWorldRef;                                              // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Engine.PlayerAmbientLightOverrideSettings
// 0x0018
struct FPlayerAmbientLightOverrideSettings
{
	unsigned char                                      OverrideBodyLightAmbience : 1;                            // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BodyLightAmbienceLightFactor;                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BodyLightAmbienceBlendWithDefault;                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OverrideLanternAmbience : 1;                              // 0x000C(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              LanternAmbienceLightFactor;                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LanternAmbienceBlendWithDefault;                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WeightedBlendable
// 0x0010
struct FWeightedBlendable
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     Object;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WeightedBlendables
// 0x0010
struct FWeightedBlendables
{
	TArray<struct FWeightedBlendable>                  Array;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.PostProcessSettings
// 0x0530
struct FPostProcessSettings
{
	unsigned char                                      bOverride_WhiteTemp : 1;                                  // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_WhiteTint : 1;                                  // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturation : 1;                            // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ColorContrast : 1;                              // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ColorGamma : 1;                                 // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ColorGain : 1;                                  // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ColorOffset : 1;                                // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmWhitePoint : 1;                             // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmSaturation : 1;                             // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerRed : 1;                        // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerGreen : 1;                      // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerBlue : 1;                       // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmContrast : 1;                               // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmDynamicRange : 1;                           // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmHealAmount : 1;                             // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmToeAmount : 1;                              // 0x0001(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTint : 1;                             // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintBlend : 1;                        // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintAmount : 1;                       // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmSlope : 1;                                  // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmToe : 1;                                    // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmShoulder : 1;                               // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmBlackClip : 1;                              // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_FilmWhiteClip : 1;                              // 0x0002(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_SceneColorTint : 1;                             // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_SceneFringeIntensity : 1;                       // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_SceneFringeSaturation : 1;                      // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapTint : 1;                         // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapIntensity : 1;                    // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_BloomIntensity : 1;                             // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_BloomThreshold : 1;                             // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Tint : 1;                                 // 0x0003(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Size : 1;                                 // 0x0004(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Size : 1;                                 // 0x0004(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Tint : 1;                                 // 0x0004(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Tint : 1;                                 // 0x0004(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Size : 1;                                 // 0x0004(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Tint : 1;                                 // 0x0004(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Size : 1;                                 // 0x0004(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Tint : 1;                                 // 0x0004(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Size : 1;                                 // 0x0005(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Tint : 1;                                 // 0x0005(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Size : 1;                                 // 0x0005(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_BloomSizeScale : 1;                             // 0x0005(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskIntensity : 1;                     // 0x0005(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskTint : 1;                          // 0x0005(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMask : 1;                              // 0x0005(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureLowPercent : 1;                     // 0x0005(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureHighPercent : 1;                    // 0x0006(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMinBrightness : 1;                  // 0x0006(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMaxBrightness : 1;                  // 0x0006(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedUp : 1;                        // 0x0006(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedDown : 1;                      // 0x0006(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureBias : 1;                           // 0x0006(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMin : 1;                            // 0x0006(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMax : 1;                            // 0x0006(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LensFlareIntensity : 1;                         // 0x0007(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTint : 1;                              // 0x0007(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTints : 1;                             // 0x0007(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehSize : 1;                         // 0x0007(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehShape : 1;                        // 0x0007(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LensFlareThreshold : 1;                         // 0x0007(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_VignetteIntensity : 1;                          // 0x0007(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_GrainIntensity : 1;                             // 0x0007(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_GrainJitter : 1;                                // 0x0008(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionIntensity : 1;                  // 0x0008(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionStaticFraction : 1;             // 0x0008(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionRadius : 1;                     // 0x0008(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeDistance : 1;               // 0x0008(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeRadius : 1;                 // 0x0008(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionDistance : 1;                   // 0x0008(0x0001) (Deprecated)
	unsigned char                                      bOverride_AmbientOcclusionRadiusInWS : 1;                 // 0x0008(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionPower : 1;                      // 0x0009(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionBias : 1;                       // 0x0009(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionQuality : 1;                    // 0x0009(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipBlend : 1;                   // 0x0009(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipScale : 1;                   // 0x0009(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipThreshold : 1;               // 0x0009(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiIntensity : 1;              // 0x0009(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiPower : 1;                  // 0x0009(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiRadius : 1;                 // 0x000A(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiBlurTolerance : 1;          // 0x000A(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiUpsampleTolerance : 1;      // 0x000A(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiNoiseFilterTolerance : 1;   // 0x000A(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiRejectionFalloff : 1;       // 0x000A(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiBias : 1;                   // 0x000A(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiMaxDepthDownsample : 1;     // 0x000A(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiUseNormals : 1;             // 0x000A(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiCombineBeforeBlur : 1;      // 0x000B(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionHemiCombineWithMultiply : 1;    // 0x000B(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MinOverdrawCount : 1;                           // 0x000B(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MaxOverdrawCount : 1;                           // 0x000B(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MinOverdrawColour : 1;                          // 0x000B(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MaxOverdrawColour : 1;                          // 0x000B(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVIntensity : 1;                               // 0x000B(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;           // 0x000B(0x0001)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;              // 0x000C(0x0001)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                // 0x000C(0x0001)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;               // 0x000C(0x0001)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;               // 0x000C(0x0001)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              // 0x000C(0x0001)
	unsigned char                                      bOverride_LPVSize : 1;                                    // 0x000C(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;             // 0x000C(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                // 0x000C(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                      // 0x000D(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                        // 0x000D(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;              // 0x000D(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_LPVWorldRef : 1;                                // 0x000D(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingColor : 1;                      // 0x000D(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingIntensity : 1;                  // 0x000D(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingIntensity : 1;                      // 0x000D(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingLUT : 1;                            // 0x000D(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalDistance : 1;                  // 0x000E(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                          // 0x000E(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurRadius : 1;                // 0x000E(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurAmount : 1;                // 0x000E(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalRegion : 1;                    // 0x000E(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearTransitionRegion : 1;           // 0x000E(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarTransitionRegion : 1;            // 0x000E(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldScale : 1;                          // 0x000E(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMaxBokehSize : 1;                   // 0x000F(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearBlurSize : 1;                   // 0x000F(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarBlurSize : 1;                    // 0x000F(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMethod : 1;                         // 0x000F(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldBokehShape : 1;                     // 0x000F(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldOcclusion : 1;                      // 0x000F(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldColorThreshold : 1;                 // 0x000F(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSizeThreshold : 1;                  // 0x000F(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSkyFocusDistance : 1;               // 0x0010(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurAmount : 1;                           // 0x0010(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurMax : 1;                              // 0x0010(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurPerObjectSize : 1;                    // 0x0010(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ScreenPercentage : 1;                           // 0x0010(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AntiAliasingMethod : 1;                         // 0x0010(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionIntensity : 1;             // 0x0010(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionQuality : 1;               // 0x0010(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionMaxRoughness : 1;          // 0x0011(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionRoughnessScale : 1;        // 0x0011(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_SkyLightIntensityScale : 1;                     // 0x0011(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_SkyLightIntensityScaleForMinSpec : 1;           // 0x0011(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_SkyLightIntensityScaleInteriorInfluence : 1;    // 0x0011(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_GlobalReflectionTint : 1;                       // 0x0011(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_InsideAmbientColourForParticlesInfluence : 1;   // 0x0011(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_InsideAmbientColourForParticles : 1;            // 0x0011(0x0001) (BlueprintVisible)
	unsigned char                                      bUseThisVolumeForLPVSettings : 1;                         // 0x0012(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_GaussianBlur : 1;                               // 0x0012(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_DisableShadowMapMethod : 1;                     // 0x0012(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	float                                              WhiteTemp;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhiteTint;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorSaturation;                                          // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorContrast;                                            // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorGamma;                                               // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorGain;                                                // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorOffset;                                              // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmWhitePoint;                                           // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmShadowTint;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShadowTintBlend;                                      // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShadowTintAmount;                                     // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmSaturation;                                           // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerRed;                                      // 0x0084(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerGreen;                                    // 0x0094(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerBlue;                                     // 0x00A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmContrast;                                             // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmToeAmount;                                            // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmHealAmount;                                           // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmDynamicRange;                                         // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmSlope;                                                // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmToe;                                                  // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShoulder;                                             // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmBlackClip;                                            // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmWhiteClip;                                            // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SceneColorTint;                                           // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SceneFringeIntensity;                                     // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SceneFringeSaturation;                                    // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomIntensity;                                           // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomThreshold;                                           // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomSizeScale;                                           // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom1Size;                                               // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom2Size;                                               // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom3Size;                                               // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom4Size;                                               // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom5Size;                                               // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom6Size;                                               // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom1Tint;                                               // 0x0114(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom2Tint;                                               // 0x0124(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom3Tint;                                               // 0x0134(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom4Tint;                                               // 0x0144(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom5Tint;                                               // 0x0154(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom6Tint;                                               // 0x0164(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomDirtMaskIntensity;                                   // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BloomDirtMaskTint;                                        // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BloomDirtMask;                                            // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVIntensity;                                             // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVVplInjectionBias;                                      // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSize;                                                  // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryOcclusionIntensity;                           // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryBounceIntensity;                              // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVGeometryVolumeBias;                                    // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVEmissiveInjectionIntensity;                            // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionIntensity;                         // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LPVWorldRef;                                              // 0x01B0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LPVDirectionalOcclusionRadius;                            // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionExponent;                              // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionExponent;                             // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionIntensity;                             // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionIntensity;                            // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AmbientCubemapTint;                                       // 0x01F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientCubemapIntensity;                                  // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureCube*                                AmbientCubemap;                                           // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureLowPercent;                                   // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureHighPercent;                                  // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMinBrightness;                                // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMaxBrightness;                                // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedUp;                                      // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedDown;                                    // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureBias;                                         // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMin;                                          // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMax;                                          // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareIntensity;                                       // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTint;                                            // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareBokehSize;                                       // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareThreshold;                                       // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    LensFlareBokehShape;                                      // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTints[0x8];                                      // 0x0258(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrainJitter;                                              // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrainIntensity;                                           // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionIntensity;                                // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionStaticFraction;                           // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionRadius;                                   // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AmbientOcclusionRadiusInWS : 1;                           // 0x02F0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	float                                              AmbientOcclusionFadeDistance;                             // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionFadeRadius;                               // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionDistance;                                 // 0x02FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AmbientOcclusionPower;                                    // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionBias;                                     // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionQuality;                                  // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipBlend;                                 // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipScale;                                 // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipThreshold;                             // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiIntensity;                            // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiPower;                                // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiRadius;                               // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiBlurTolerance;                        // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiUpsampleTolerance;                    // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiNoiseFilterTolerance;                 // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiRejectionFalloff;                     // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionHemiBias;                                 // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AmbientOcclusionHemiMaxDepthDownsample : 1;               // 0x0338(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      AmbientOcclusionHemiUseNormals : 1;                       // 0x0338(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      AmbientOcclusionHemiCombineBeforeBlur : 1;                // 0x0338(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      AmbientOcclusionHemiCombineWithMultiply : 1;              // 0x0338(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	float                                              MinOverdrawCount;                                         // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxOverdrawCount;                                         // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MinOverdrawColour;                                        // 0x0344(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MaxOverdrawColour;                                        // 0x0354(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IndirectLightingColor;                                    // 0x0364(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingIntensity;                                // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorGradingIntensity;                                    // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class UTexture*                                    ColorGradingLUT;                                          // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDepthOfFieldMethod>                   DepthOfFieldMethod;                                       // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	float                                              DepthOfFieldDepthBlurAmount;                              // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldDepthBlurRadius;                              // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFstop;                                        // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalDistance;                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalRegion;                                  // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearTransitionRegion;                         // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarTransitionRegion;                          // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldScale;                                        // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldMaxBokehSize;                                 // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearBlurSize;                                 // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarBlurSize;                                  // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    DepthOfFieldBokehShape;                                   // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldOcclusion;                                    // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldColorThreshold;                               // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSizeThreshold;                                // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSkyFocusDistance;                             // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurAmount;                                         // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurMax;                                            // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurPerObjectSize;                                  // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenPercentage;                                         // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAntiAliasingMethod>                   AntiAliasingMethod;                                       // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	float                                              ScreenSpaceReflectionIntensity;                           // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionQuality;                             // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionMaxRoughness;                        // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyLightIntensityScale;                                   // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyLightIntensityScaleForMinSpec;                         // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyLightIntensityScaleInteriorInfluence;                  // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                GlobalReflectionTint;                                     // 0x03FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InsideAmbientColourForParticlesInfluence;                 // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InsideAmbientColourForParticles;                          // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRainPostProcessSettings                    RainSettings;                                             // 0x0420(0x00C0) (Edit, BlueprintVisible)
	TArray<struct FLPVCascadeSettings>                 LPVSettings;                                              // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FPlayerAmbientLightOverrideSettings         PlayerAmbientLightOverrideSettings;                       // 0x04F0(0x0018) (Edit, BlueprintVisible)
	float                                              GaussianBlurIntensity;                                    // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDisableShadowMapMethod>               DisableShadowMethod;                                      // 0x050C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x050D(0x0003) MISSED OFFSET
	struct FWeightedBlendables                         WeightedBlendables;                                       // 0x0510(0x0010) (Edit)
	TArray<class UObject*>                             Blendables;                                               // 0x0520(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct Engine.MinimalViewInfo
// 0x0580
struct FMinimalViewInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrthoWidth;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrthoNearClipPlane;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrthoFarClipPlane;                                        // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bConstrainAspectRatio : 1;                                // 0x002C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFieldOfViewForLOD : 1;                                // 0x002C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	TEnumAsByte<ECameraProjectionMode>                 ProjectionMode;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              PostProcessBlendWeight;                                   // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0040(0x0530) (BlueprintVisible)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0570(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.MovementProperties
// 0x0004
struct FMovementProperties
{
	unsigned char                                      bCanCrouch : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanJump : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanWalk : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanSwim : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanFly : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.NavAgentProperties
// 0x0024 (0x0028 - 0x0004)
struct FNavAgentProperties : public FMovementProperties
{
	struct FName                                       Name;                                                     // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentRadius;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentStepHeight;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWalkingSearchHeightScale;                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWalkingSearchRadiusScale;                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentMaxSlope;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRegionArea;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FindFloorResult
// 0x008C
struct FFindFloorResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bWalkableFloor : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bLineTrace : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FloorDist;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              LineDist;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // 0x000C(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0004
struct FNavAvoidanceMask
{
	unsigned char                                      bGroup0 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup1 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup2 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup3 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup4 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup5 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup6 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup7 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup8 : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup9 : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup10 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup11 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup12 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup13 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup14 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup15 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup16 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup17 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup18 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup19 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup20 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup21 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup22 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup23 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup24 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup25 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup26 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup27 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup28 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup29 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup30 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGroup31 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Engine.CharacterMovementComponentPreClothTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FCharacterMovementComponentPreClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                                       // 0x0000(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FColor                                      Out;                                                      // 0x0004(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
};

// ScriptStruct Engine.StatColorMapping
// 0x0028
struct FStatColorMapping
{
	class FString                                      StatName;                                                 // 0x0000(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                                 // 0x0010(0x0010) (ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      DisableBlend : 1;                                         // 0x0020(0x0001) (Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.GameNameRedirect
// 0x0020
struct FGameNameRedirect
{
	class FString                                      OldGameName;                                              // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      NewGameName;                                              // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ClassRedirect
// 0x0058
struct FClassRedirect
{
	class FString                                      ObjectName;                                               // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      OldClassName;                                             // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      NewClassName;                                             // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      OldSubobjName;                                            // 0x0030(0x0010) (ZeroConstructor)
	class FString                                      NewSubobjName;                                            // 0x0040(0x0010) (ZeroConstructor)
	bool                                               InstanceOnly;                                             // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.PluginRedirect
// 0x0020
struct FPluginRedirect
{
	class FString                                      OldPluginName;                                            // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      NewPluginName;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.StructRedirect
// 0x0020
struct FStructRedirect
{
	class FString                                      OldStructName;                                            // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      NewStructName;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	class FString                                      Comment;                                                  // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x001C
struct FRigidBodyErrorCorrection
{
	float                                              LinearDeltaThresholdSq;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearInterpAlpha;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearRecipFixTime;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDeltaThreshold;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularInterpAlpha;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularRecipFixTime;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BodySpeedThresholdSq;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NetDriverDefinition
// 0x0018
struct FNetDriverDefinition
{
	struct FName                                       DefName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DriverClassName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DriverClassNameFallback;                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GameClassShortName
// 0x0020
struct FGameClassShortName
{
	class FString                                      ShortName;                                                // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      GameClassName;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CollisionResponseContainer
// 0x0020
struct FCollisionResponseContainer
{
	TEnumAsByte<ECollisionResponse>                    WorldStatic;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    WorldDynamic;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Pawn;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    VISIBILITY;                                               // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Camera;                                                   // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    PhysicsBody;                                              // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Vehicle;                                                  // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Destructible;                                             // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel1;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel2;                                      // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel3;                                      // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel4;                                      // 0x000B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel5;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel6;                                      // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel1;                                        // 0x000E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel2;                                        // 0x000F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel3;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel4;                                        // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel5;                                        // 0x0012(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel6;                                        // 0x0013(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel7;                                        // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel8;                                        // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel9;                                        // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel10;                                       // 0x0017(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel11;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel12;                                       // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel13;                                       // 0x001A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel14;                                       // 0x001B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel15;                                       // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel16;                                       // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel17;                                       // 0x001E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel18;                                       // 0x001F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ResponseChannel
// 0x000C
struct FResponseChannel
{
	struct FName                                       Channel;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Response;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponse
// 0x0030
struct FCollisionResponse
{
	struct FCollisionResponseContainer                 ResponseToChannels;                                       // 0x0000(0x0020) (Transient)
	TArray<struct FResponseChannel>                    ResponseArray;                                            // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.MassPropertiesOverride
// 0x0024
struct FMassPropertiesOverride
{
	struct FVector                                     InertiaTensorOverride;                                    // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     COMTranslationOverride;                                   // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    COMRotatorOverride;                                       // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x0008
struct FWalkableSlopeOverride
{
	TEnumAsByte<EWalkableSlopeBehavior>                WalkableSlopeBehavior;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WalkableSlopeAngle;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BodyInstance
// 0x0190
struct FBodyInstance
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     Scale3D;                                                  // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	struct FName                                       CollisionProfileName;                                     // 0x0014(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FCollisionResponse                          CollisionResponses;                                       // 0x0020(0x0030) (Edit)
	unsigned char                                      bUseCCD : 1;                                              // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bNotifyRigidBodyCollision : 1;                            // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSimulatePhysics : 1;                                     // 0x0050(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideMass : 1;                                        // 0x0050(0x0001)
	unsigned char                                      bOverrideMassProperties : 1;                              // 0x0050(0x0001)
	unsigned char                                      bEnableGravity : 1;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAutoWeld : 1;                                            // 0x0050(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03 : 1;                                        // 0x0050(0x0001)
	unsigned char                                      bStartAwake : 1;                                          // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateWakeEvents : 1;                                  // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUpdateMassWhenScaleChanges : 1;                          // 0x0051(0x0001)
	unsigned char                                      bLockTranslation : 1;                                     // 0x0051(0x0001) (Edit)
	unsigned char                                      bLockRotation : 1;                                        // 0x0051(0x0001) (Edit)
	unsigned char                                      bLockXTranslation : 1;                                    // 0x0051(0x0001) (Edit)
	unsigned char                                      bLockYTranslation : 1;                                    // 0x0051(0x0001) (Edit)
	unsigned char                                      bLockZTranslation : 1;                                    // 0x0051(0x0001) (Edit)
	unsigned char                                      bLockXRotation : 1;                                       // 0x0052(0x0001) (Edit)
	unsigned char                                      bLockYRotation : 1;                                       // 0x0052(0x0001) (Edit)
	unsigned char                                      bLockZRotation : 1;                                       // 0x0052(0x0001) (Edit)
	unsigned char                                      bOverrideMaxAngularVelocity : 1;                          // 0x0052(0x0001)
	unsigned char                                      UnknownData04 : 1;                                        // 0x0052(0x0001)
	unsigned char                                      bUseAsyncScene : 1;                                       // 0x0052(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideMaxDepenetrationVelocity : 1;                    // 0x0052(0x0001)
	unsigned char                                      bOverrideWalkableSlopeOnInstance : 1;                     // 0x0052(0x0001)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0053(0x0001) MISSED OFFSET
	float                                              MaxDepenetrationVelocity;                                 // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MassInKg;                                                 // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMassPropertiesOverride                     MassPropertiesOverride;                                   // 0x005C(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              LinearDamping;                                            // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDamping;                                           // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CustomDOFPlaneNormal;                                     // 0x0088(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     COMNudge;                                                 // 0x0094(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MassScale;                                                // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x14];                                      // 0x00A4(0x0014) MISSED OFFSET
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                    // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UPhysicalMaterial*                           PhysMaterialOverride;                                     // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularVelocity;                                       // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CustomSleepThresholdMultiplier;                           // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsBlendWeight;                                       // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PositionSolverIterationCount;                             // 0x00D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDominanceGroup>                       DominanceGroup;                                           // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x37];                                      // 0x00D9(0x0037) MISSED OFFSET
	uint64_t                                           RigidActorSyncId;                                         // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           RigidActorAsyncId;                                        // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                VelocitySolverIterationCount;                             // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x68];                                      // 0x0124(0x0068) MISSED OFFSET
	TEnumAsByte<ESleepFamily>                          SleepFamily;                                              // 0x018C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDOFMode>                              DOFMode;                                                  // 0x018D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x018E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ObjectType;                                               // 0x018F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PrimitiveComponentPostPhysicsTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.OverlapInfo
// 0x0084
struct FOverlapInfo
{
	unsigned char                                      UnknownData00[0x84];                                      // 0x0000(0x0084) MISSED OFFSET
};

// ScriptStruct Engine.DebugDisplayProperty
// 0x0020
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WithinClass;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CameraCacheEntry
// 0x0590
struct FCameraCacheEntry
{
	float                                              TimeStamp;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x0580)
};

// ScriptStruct Engine.TViewTarget
// 0x05A0
struct FTViewTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x0580) (Edit, BlueprintVisible)
	class APlayerState*                                PlayerState;                                              // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0598(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x0018
struct FActiveForceFeedbackEffect
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              BlendExp;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLockOutgoing : 1;                                        // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionInfo
// 0x0018
struct FLatentActionInfo
{
	int                                                Linkage;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UUID;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExecutionFunction;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     CallbackTarget;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SelectionIndex;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GameModePrefix
// 0x0020
struct FGameModePrefix
{
	class FString                                      Prefix;                                                   // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      GameMode;                                                 // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x0044
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumIndirectLightingBounces;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingQuality;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingSmoothness;                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      EnvironmentColor;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnvironmentIntensity;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAmbientOcclusion : 1;                                 // 0x0020(0x0001) (Edit)
	unsigned char                                      bGenerateAmbientOcclusionMaterialMask : 1;                // 0x0020(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              DirectIlluminationOcclusionFraction;                      // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectIlluminationOcclusionFraction;                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionExponent;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOcclusionDistance;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bVisualizeMaterialDiffuse : 1;                            // 0x0038(0x0001) (Edit)
	unsigned char                                      bVisualizeAmbientOcclusion : 1;                           // 0x0038(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              VolumeLightSamplePlacementScale;                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCompressLightmaps : 1;                                   // 0x0040(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ReverbSettings
// 0x0018
struct FReverbSettings
{
	unsigned char                                      bApplyReverb : 1;                                         // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TEnumAsByte<EReverbPreset>                         ReverbType;                                               // 0x0004(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class UReverbEffect*                               ReverbEffect;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned char                                      bIsWorldSettings : 1;                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ExteriorVolume;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorTime;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorLPF;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorLPFTime;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorVolume;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorTime;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorLPF;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorLPFTime;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NetViewer
// 0x0028
struct FNetViewer
{
	class AActor*                                      InViewer;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ViewTarget;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewLocation;                                             // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewDir;                                                  // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FPackedNormal                               Normal;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x0028
struct FStaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TArray<struct FPaintedVertex>                      PaintedVertices;                                          // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x0018
struct FLightmassPrimitiveSettings
{
	unsigned char                                      bUseTwoSidedLighting : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bShadowIndirectOnly : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUseEmissiveForStaticLighting : 1;                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUseVertexNormalForHemisphereGather : 1;                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EmissiveLightFalloffExponent;                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmissiveLightExplicitInfluenceRadius;                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ExternalMip
// 0x0028
struct FExternalMip
{
	uint32_t                                           SizeX;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SizeY;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OffsetInFile;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DataSizeOnDisk;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DataSize;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DecompressionFlags;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.DebugTextInfo
// 0x0060
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcActorOffset;                                           // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcActorDesiredOffset;                                    // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	class FString                                      DebugText;                                                // 0x0020(0x0010) (ZeroConstructor)
	float                                              TimeRemaining;                                            // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Duration;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      TextColor;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAbsoluteLocation : 1;                                    // 0x003C(0x0001)
	unsigned char                                      bKeepAttachedToActor : 1;                                 // 0x003C(0x0001)
	unsigned char                                      bDrawShadow : 1;                                          // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FVector                                     OrigActorLocation;                                        // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FontScale;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x0014
struct FLightmassMaterialInterfaceSettings
{
	unsigned char                                      bCastShadowAsMasked : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EmissiveBoost;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExportResolutionScale;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideCastShadowAsMasked : 1;                          // 0x0010(0x0001)
	unsigned char                                      bOverrideEmissiveBoost : 1;                               // 0x0010(0x0001)
	unsigned char                                      bOverrideDiffuseBoost : 1;                                // 0x0010(0x0001)
	unsigned char                                      bOverrideExportResolutionScale : 1;                       // 0x0010(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInput
// 0x0038
struct FMaterialInput
{
	class UMaterialExpression*                         Expression;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OutputIndex;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      InputName;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                Mask;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskR;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskG;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskB;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskA;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GCC64_Padding;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ColorMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FColorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FColor                                      Constant;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ScalarMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FScalarMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Constant;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorMaterialInput
// 0x0010 (0x0048 - 0x0038)
struct FVectorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FVector                                     Constant;                                                 // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.Vector2MaterialInput
// 0x0010 (0x0048 - 0x0038)
struct FVector2MaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              ConstantX;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ConstantY;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ExpressionInput
// 0x0038
struct FExpressionInput
{
	class UMaterialExpression*                         Expression;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OutputIndex;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      InputName;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                Mask;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskR;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskG;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskB;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskA;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GCC64_Padding;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialAttributesInput
// 0x0000 (0x0038 - 0x0038)
struct FMaterialAttributesInput : public FExpressionInput
{

};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UMaterialFunction*                           Function;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x0018
struct FMaterialParameterCollectionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class UMaterialParameterCollection*                ParameterCollection;                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EmitterPointData
// 0x0030
struct FEmitterPointData
{
	struct FVector4                                    Position;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    InheritedVelocity;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Orientation;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleSysParam
// 0x0050
struct FParticleSysParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleSysParamType>                 ParamType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Scalar;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scalar_Low;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector_Low;                                               // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FEmitterPointData>                   EmitterPoints;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.MaterialRelevance
// 0x0010
struct FMaterialRelevance
{
	unsigned char                                      bOpaque : 1;                                              // 0x0000(0x0001)
	unsigned char                                      bMasked : 1;                                              // 0x0000(0x0001)
	unsigned char                                      bDistortion : 1;                                          // 0x0000(0x0001)
	unsigned char                                      bSeparateTranslucency : 1;                                // 0x0000(0x0001)
	unsigned char                                      bNormalTranslucency : 1;                                  // 0x0000(0x0001)
	unsigned char                                      bDisableDepthTest : 1;                                    // 0x0000(0x0001)
	unsigned char                                      bOutputsVelocityInBasePass : 1;                           // 0x0000(0x0001)
	unsigned char                                      bUsesGlobalDistanceField : 1;                             // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	uint16_t                                           ShadingModelMask;                                         // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	unsigned char                                      bOITTranslucencyRelevance : 1;                            // 0x0008(0x0001)
	unsigned char                                      bOITAfterTranslucencyRelevance : 1;                       // 0x0008(0x0001)
	unsigned char                                      bLowResTranslucencyRelevance : 1;                         // 0x0008(0x0001)
	unsigned char                                      bLowResCloudsRelevance : 1;                               // 0x0008(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	uint32_t                                           bTranslucentBeforeTranslucency;                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                // 0x0000(0x0040) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LightmapUVBias;                                           // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ShadowmapUVBias;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0008
struct FInstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.FontParameterValue
// 0x0028
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFont*                                       FontValue;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FontPage;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ScalarParameterValue
// 0x001C
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParameterValue;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TextureParameterValue
// 0x0020
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ParameterValue;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParameterValue;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x0070
struct FMaterialInstanceBasePropertyOverrides
{
	bool                                               bOverride_OpacityMaskClipValue;                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_BlendMode;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_ShadingModel;                                   // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_DitheredLODTransition;                          // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_TwoSided;                                       // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_TessellationMode;                               // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_LowResTranslucency;                             // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_SkyLightWhenOccluded;                           // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_CloudShadowInfluence;                           // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_LightColorInfluence;                            // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_AmbientLightColorInfluence;                     // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_LightIntensityInfluence;                        // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_AmbientLightIntensityInfluence;                 // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_AlternativeAmbientLightColorInfluence;          // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_AlternativeAmbientLightIntensityInfluence;      // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_EvaluateLightningAtParticleCenter;              // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_DontRenderWhenPlayerInsideShip;                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_ObjectFadeEnabled;                              // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_ObjectFadeRate;                                 // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_ObjectFadeDistanceThreshold;                    // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_TranslucencyDirectionalLightingIntensity;       // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              OpacityMaskClipValue;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialShadingModel>                 ShadingModel;                                             // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	unsigned char                                      TwoSided : 1;                                             // 0x0020(0x0001) (Edit)
	unsigned char                                      DitheredLODTransition : 1;                                // 0x0020(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	TEnumAsByte<EMaterialTessellationMode>             D3D11TessellationMode;                                    // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	unsigned char                                      ForceResolution : 1;                                      // 0x0028(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	TEnumAsByte<ELowResTranslucencyCascade>            ForcedResolution;                                         // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	unsigned char                                      DisableTransition : 1;                                    // 0x0030(0x0001) (Edit)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              FirstSplitDistance;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SecondSplitDistance;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PopPerParticle : 1;                                       // 0x003C(0x0001) (Edit)
	unsigned char                                      UnknownData07[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	float                                              SkyLightWhenOccluded;                                     // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CloudShadowInfluence;                                     // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightIntensityInfluence;                                  // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightColorInfluence;                                      // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AmbientLightIntensityInfluence;                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AmbientLightColorInfluence;                               // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlternativeAmbientLightIntensityInfluence;                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlternativeAmbientLightColorInfluence;                    // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEvaluateLightningAtParticleCenter : 1;                   // 0x0060(0x0001) (Edit)
	unsigned char                                      bDontRenderWhenPlayerInsideShip : 1;                      // 0x0060(0x0001) (Edit)
	unsigned char                                      ObjectFadeEnabled : 1;                                    // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              ObjectFadeRate;                                           // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ObjectFadeDistanceThreshold;                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TranslucencyDirectionalLightingIntensity;                 // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ExpressionOutput
// 0x0028
struct FExpressionOutput
{
	class FString                                      OutputName;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                Mask;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskR;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskG;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskB;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskA;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x0010
struct FEventGraphFastCallPair
{
	class UFunction*                                   FunctionToPatch;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                EventGraphCallOffset;                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphPinType
// 0x0050
struct FEdGraphPinType
{
	class FString                                      PinCategory;                                              // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      PinSubCategory;                                           // 0x0010(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UObject>                      PinSubCategoryObject;                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSimpleMemberReference                      PinSubCategoryMemberReference;                            // 0x0028(0x0020)
	bool                                               bIsArray;                                                 // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsReference;                                             // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsConst;                                                 // 0x004A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsWeakPointer;                                           // 0x004B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CullDistance;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavAgentSelector
// 0x0004
struct FNavAgentSelector
{
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.FOscillator
// 0x000C
struct FFOscillator
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                                    // 0x0000(0x000C) (Edit)
	struct FFOscillator                                Yaw;                                                      // 0x000C(0x000C) (Edit)
	struct FFOscillator                                Roll;                                                     // 0x0018(0x000C) (Edit)
};

// ScriptStruct Engine.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                        // 0x0000(0x000C) (Edit)
	struct FFOscillator                                Y;                                                        // 0x000C(0x000C) (Edit)
	struct FFOscillator                                Z;                                                        // 0x0018(0x000C) (Edit)
};

// ScriptStruct Engine.KeyHandleMap
// 0x0050
struct FKeyHandleMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.IndexedCurve
// 0x0058
struct FIndexedCurve
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FKeyHandleMap                               KeyHandlesToIndices;                                      // 0x0008(0x0050) (Transient)
};

// ScriptStruct Engine.RichCurveKey
// 0x001C
struct FRichCurveKey
{
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              Time;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangent;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangentWeight;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangentWeight;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RichCurve
// 0x0020 (0x0078 - 0x0058)
struct FRichCurve : public FIndexedCurve
{
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                        // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                       // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	TArray<struct FRichCurveKey>                       Keys;                                                     // 0x0060(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	float                                              DefaultValue;                                             // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x0080
struct FRuntimeFloatCurve
{
	struct FRichCurve                                  EditorCurveData;                                          // 0x0000(0x0078)
	class UCurveFloat*                                 ExternalCurve;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x0088
struct FForceFeedbackChannelDetails
{
	unsigned char                                      bAffectsLeftLarge : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsLeftSmall : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsRightLarge : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsRightSmall : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsLeftTrigger : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsRightTrigger : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0008(0x0080) (Edit)
};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x0018
struct FInterpGroupActorInfo
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              TimeStamp;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavigationFilterArea
// 0x0018
struct FNavigationFilterArea
{
	class UClass*                                      AreaClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TravelCostOverride;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnteringCostOverride;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsExcluded : 1;                                          // 0x0010(0x0001) (Edit)
	unsigned char                                      bOverrideTravelCost : 1;                                  // 0x0010(0x0001)
	unsigned char                                      bOverrideEnteringCost : 1;                                // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.NavigationFilterFlags
// 0x0004
struct FNavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag1 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag2 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag3 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag4 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag5 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag6 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag7 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag8 : 1;                                            // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag9 : 1;                                            // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag10 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag11 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag12 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag13 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag14 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag15 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.NavDataConfig
// 0x0028 (0x0050 - 0x0028)
struct FNavDataConfig : public FNavAgentProperties
{
	struct FColor                                      Color;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultQueryExtent;                                       // 0x002C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NavigationDataClass;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FStringClassReference                       NavigationDataClassName;                                  // 0x0040(0x0010) (ZeroConstructor, Config)
};

// ScriptStruct Engine.SupportedAreaData
// 0x0020
struct FSupportedAreaData
{
	class FString                                      AreaClassName;                                            // 0x0000(0x0010) (ZeroConstructor)
	int                                                AreaID;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.NavigationLinkBase
// 0x0030
struct FNavigationLinkBase
{
	float                                              LeftProjectHeight;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFallDownLength;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavLinkDirection>                     Direction;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	float                                              SnapRadius;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SnapHeight;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseSnapHeight : 1;                                       // 0x0018(0x0001)
	unsigned char                                      bSnapToCheapestArea : 1;                                  // 0x0018(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0028(0x0004) (Edit)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x002C(0x0001)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x002C(0x0001)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x002C(0x0001)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x002C(0x0001)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x002C(0x0001)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x002C(0x0001)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x002C(0x0001)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x002C(0x0001)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x002D(0x0001)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x002D(0x0001)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x002D(0x0001)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x002D(0x0001)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x002D(0x0001)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x002D(0x0001)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x002D(0x0001)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x002D(0x0001)
	unsigned char                                      UnknownData02[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLink
// 0x0018 (0x0048 - 0x0030)
struct FNavigationLink : public FNavigationLinkBase
{
	struct FVector                                     Left;                                                     // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavigationSegmentLink
// 0x0030 (0x0060 - 0x0030)
struct FNavigationSegmentLink : public FNavigationLinkBase
{
	struct FVector                                     LeftStart;                                                // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeftEnd;                                                  // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightStart;                                               // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightEnd;                                                 // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BoneNode
// 0x0001
struct FBoneNode
{
	TEnumAsByte<EBoneTranslationRetargetingMode>       TranslationRetargetingMode;                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x0020
struct FSkeletonToMeshLinkup
{
	TArray<int>                                        SkeletonToMeshTable;                                      // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        MeshToSkeletonTable;                                      // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SmartNameContainer
// 0x0050
struct FSmartNameContainer
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotGroup
// 0x0018
struct FAnimSlotGroup
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SlotNames;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SkeletalMaterial
// 0x0010
struct FSkeletalMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEnableShadowCasting;                                     // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.BoneMirrorInfo
// 0x0008
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TriangleSortSettings
// 0x000C
struct FTriangleSortSettings
{
	TEnumAsByte<ETriangleSortOption>                   TriangleSorting;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETriangleSortAxis>                     CustomLeftRightAxis;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FName                                       CustomLeftRightBoneName;                                  // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BoneReference
// 0x000C
struct FBoneReference
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SimplygonChannelCastingSettings
// 0x0010
struct FSimplygonChannelCastingSettings
{
	TEnumAsByte<ESimplygonMaterialChannel>             MaterialChannel;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonCasterType>                  Caster;                                                   // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonColorChannels>               ColorChannels;                                            // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BitsPerChannel;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSRGB;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeVertexColors;                                        // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipBackfacingNormals;                                   // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTangentSpaceNormals;                                  // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipGreenChannel;                                        // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SimplygonMaterialLODSettings
// 0x0028
struct FSimplygonMaterialLODSettings
{
	bool                                               bActive;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialLODType>                      MaterialLODType;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAutomaticSizes;                                       // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonTextureResolution>           TextureWidth;                                             // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonTextureResolution>           TextureHeight;                                            // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonTextureSamplingQuality>      SamplingQuality;                                          // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                GutterSpace;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonTextureStrech>               TextureStrech;                                            // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReuseExistingCharts;                                     // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TArray<struct FSimplygonChannelCastingSettings>    ChannelsToCast;                                           // 0x0010(0x0010) (ZeroConstructor)
	bool                                               bBakeVertexData;                                          // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeActorData;                                           // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowMultiMaterial;                                      // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPreferTwoSideMaterials;                                  // 0x0023(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x0070
struct FSkeletalMeshOptimizationSettings
{
	TEnumAsByte<ESkeletalMeshOptimizationType>         ReductionMethod;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecalcNormals;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              NormalsThreshold;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SilhouetteImportance;                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   TextureImportance;                                        // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   ShadingImportance;                                        // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SkinningImportance;                                       // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              BoneReductionRatio;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxBonesPerVertex;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FBoneReference>                      BonesToRemove;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)
	int                                                BaseLODModel;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LODChainLastIndex;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceRebuild;                                            // 0x0040(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                      // 0x0048(0x0028) (Edit)
};

// ScriptStruct Engine.SimplygonRemeshingSettings
// 0x0050
struct FSimplygonRemeshingSettings
{
	bool                                               bActive;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ScreenSize;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecalculateNormals;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              HardAngleThreshold;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MergeDistance;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseClippingPlane;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              ClippingLevel;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AxisIndex;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlaneNegativeHalfspace;                                  // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMassiveLOD;                                           // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAggregateLOD;                                         // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                      // 0x0028(0x0028) (Edit)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x0100
struct FSkeletalMeshLODInfo
{
	float                                              ScreenSize;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODHysteresis;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        LODMaterialMap;                                           // 0x0008(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<bool>                                       bEnableShadowCasting;                                     // 0x0018(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FTriangleSortSettings>               TriangleSortSettings;                                     // 0x0028(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      bHasBeenSimplified : 1;                                   // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        // 0x0040(0x0070) (Edit)
	struct FSimplygonRemeshingSettings                 RemeshingSettings;                                        // 0x00B0(0x0050) (Edit)
};

// ScriptStruct Engine.DeformablesSettings
// 0x000C
struct FDeformablesSettings
{
	float                                              DistanceStiffness;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeStiffness;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClothPhysicsProperties
// 0x0024
struct FClothPhysicsProperties
{
	float                                              BendResistance;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShearResistance;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StretchLimit;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Drag;                                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InertiaBlend;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionThickness;                                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClothingAssetData
// 0x0040
struct FClothingAssetData
{
	struct FName                                       AssetName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      ApexFileName;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
	bool                                               bClothPropertiesChanged;                                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FClothPhysicsProperties                     PhysicsProperties;                                        // 0x001C(0x0024) (Edit, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x0010
struct FSkelMeshComponentLODInfo
{
	TArray<bool>                                       HiddenMaterials;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x0008
struct FConstrainComponentPropName
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ConstraintInstance
// 0x0160
struct FConstraintInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class USceneComponent*                             OwnerComponent;                                           // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0010(0x000C) MISSED OFFSET
	struct FName                                       JointName;                                                // 0x001C(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ConstraintBone1;                                          // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ConstraintBone2;                                          // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos1;                                                     // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PriAxis1;                                                 // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecAxis1;                                                 // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos2;                                                     // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PriAxis2;                                                 // 0x0064(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SecAxis2;                                                 // 0x0070(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDisableCollision : 1;                                    // 0x007C(0x0001) (Edit)
	unsigned char                                      bEnableProjection : 1;                                    // 0x007C(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	float                                              ProjectionLinearTolerance;                                // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionAngularTolerance;                               // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               LinearXMotion;                                            // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               LinearYMotion;                                            // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               LinearZMotion;                                            // 0x008A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x008B(0x0001) MISSED OFFSET
	float                                              LinearLimitSize;                                          // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLinearLimitSoft : 1;                                     // 0x0090(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              LinearLimitStiffness;                                     // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearLimitDamping;                                       // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLinearBreakable : 1;                                     // 0x009C(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	float                                              LinearBreakThreshold;                                     // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              AngularSwing1Motion;                                      // 0x00A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              AngularTwistMotion;                                       // 0x00A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              AngularSwing2Motion;                                      // 0x00A6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	unsigned char                                      bSwingLimitSoft : 1;                                      // 0x00A8(0x0001) (Edit)
	unsigned char                                      bTwistLimitSoft : 1;                                      // 0x00A8(0x0001) (Edit)
	unsigned char                                      UnknownData07[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              Swing1LimitAngle;                                         // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TwistLimitAngle;                                          // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Swing2LimitAngle;                                         // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwingLimitStiffness;                                      // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SwingLimitDamping;                                        // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TwistLimitStiffness;                                      // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TwistLimitDamping;                                        // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AngularRotationOffset;                                    // 0x00C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAngularBreakable : 1;                                    // 0x00D4(0x0001) (Edit)
	unsigned char                                      UnknownData08[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	float                                              AngularBreakThreshold;                                    // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLinearXPositionDrive : 1;                                // 0x00DC(0x0001) (Edit)
	unsigned char                                      bLinearXVelocityDrive : 1;                                // 0x00DC(0x0001) (Edit)
	unsigned char                                      bLinearYPositionDrive : 1;                                // 0x00DC(0x0001) (Edit)
	unsigned char                                      bLinearYVelocityDrive : 1;                                // 0x00DC(0x0001) (Edit)
	unsigned char                                      bLinearZPositionDrive : 1;                                // 0x00DC(0x0001) (Edit)
	unsigned char                                      bLinearZVelocityDrive : 1;                                // 0x00DC(0x0001) (Edit)
	unsigned char                                      bLinearPositionDrive : 1;                                 // 0x00DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bLinearVelocityDrive : 1;                                 // 0x00DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData09[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	struct FVector                                     LinearPositionTarget;                                     // 0x00E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearVelocityTarget;                                     // 0x00EC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LinearDriveSpring;                                        // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LinearDriveDamping;                                       // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LinearDriveForceLimit;                                    // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSwingPositionDrive : 1;                                  // 0x0104(0x0001) (Deprecated)
	unsigned char                                      bSwingVelocityDrive : 1;                                  // 0x0104(0x0001) (Deprecated)
	unsigned char                                      bTwistPositionDrive : 1;                                  // 0x0104(0x0001) (Deprecated)
	unsigned char                                      bTwistVelocityDrive : 1;                                  // 0x0104(0x0001) (Deprecated)
	unsigned char                                      bAngularSlerpDrive : 1;                                   // 0x0104(0x0001) (Deprecated)
	unsigned char                                      bAngularOrientationDrive : 1;                             // 0x0104(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bEnableSwingDrive : 1;                                    // 0x0104(0x0001)
	unsigned char                                      bEnableTwistDrive : 1;                                    // 0x0104(0x0001)
	unsigned char                                      bAngularVelocityDrive : 1;                                // 0x0105(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData10[0xA];                                       // 0x0106(0x000A) MISSED OFFSET
	struct FQuat                                       AngularPositionTarget;                                    // 0x0110(0x0010) (Deprecated, IsPlainOldData)
	TEnumAsByte<EAngularDriveMode>                     AngularDriveMode;                                         // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	struct FRotator                                    AngularOrientationTarget;                                 // 0x0124(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularVelocityTarget;                                    // 0x0130(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AngularDriveSpring;                                       // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AngularDriveDamping;                                      // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AngularDriveForceLimit;                                   // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x18];                                      // 0x0148(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x0020
struct FSingleAnimationPlayData
{
	class UAnimationAsset*                             AnimToPlay;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVertexAnimation*                            VertexAnimToPlay;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSavedLooping : 1;                                        // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSavedPlaying : 1;                                        // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              SavedPosition;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SavedPlayRate;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpControlPoint
// 0x001C
struct FInterpControlPoint
{
	struct FVector                                     PositionControlPoint;                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPositionIsRelative;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x000D(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.WheelSetup
// 0x0020
struct FWheelSetup
{
	class UClass*                                      WheelClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdditionalOffset;                                         // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ReplicatedVehicleState
// 0x0014
struct FReplicatedVehicleState
{
	float                                              SteeringInput;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BrakeInput;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HandbrakeInput;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentGear;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VehicleInputRate
// 0x0008
struct FVehicleInputRate
{
	float                                              RiseRate;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FallRate;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VehicleEngineData
// 0x0098
struct FVehicleEngineData
{
	struct FRuntimeFloatCurve                          TorqueCurve;                                              // 0x0000(0x0080) (Edit)
	float                                              MaxRPM;                                                   // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MOI;                                                      // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRateFullThrottle;                                  // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchEngaged;                     // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchDisengaged;                  // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.VehicleDifferential4WData
// 0x001C
struct FVehicleDifferential4WData
{
	TEnumAsByte<EVehicleDifferential4W>                DifferentialType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FrontRearSplit;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrontLeftRightSplit;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RearLeftRightSplit;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CentreBias;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrontBias;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RearBias;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VehicleGearData
// 0x000C
struct FVehicleGearData
{
	float                                              Ratio;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DownRatio;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UpRatio;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VehicleTransmissionData
// 0x0030
struct FVehicleTransmissionData
{
	bool                                               bUseGearAutoBox;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GearSwitchTime;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GearAutoBoxLatency;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FinalRatio;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVehicleGearData>                    ForwardGears;                                             // 0x0010(0x0010) (Edit, ZeroConstructor)
	float                                              ReverseGearRatio;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeutralGearUpRatio;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClutchStrength;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// 0x002C
struct FAtmospherePrecomputeParameters
{
	float                                              DensityHeight;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecayHeight;                                              // 0x0004(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MaxScatteringOrder;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TransmittanceTexWidth;                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TransmittanceTexHeight;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IrradianceTexWidth;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IrradianceTexHeight;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterAltitudeSampleNum;                               // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InscatterMuNum;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterMuSNum;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterNuNum;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AttenuationSettings
// 0x00C0
struct FAttenuationSettings
{
	unsigned char                                      bAttenuate : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSpatialize : 1;                                          // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAttenuateWithLPF : 1;                                    // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TEnumAsByte<ESoundDistanceModel>                   DistanceAlgorithm;                                        // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomAttenuationCurve;                                   // 0x0008(0x0080) (Edit, BlueprintVisible)
	TEnumAsByte<ESoundDistanceCalc>                    DistanceType;                                             // 0x0088(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EAttenuationShape>                     AttenuationShape;                                         // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x008A(0x0002) MISSED OFFSET
	float                                              dBAttenuationAtMax;                                       // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OmniRadius;                                               // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESoundSpatializationAlgorithm>         SpatializationAlgorithm;                                  // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	float                                              RadiusMin;                                                // 0x0098(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              RadiusMax;                                                // 0x009C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     AttenuationShapeExtents;                                  // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConeOffset;                                               // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffDistance;                                          // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFRadiusMin;                                             // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFRadiusMax;                                             // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AudioComponentParam
// 0x0020
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatParam;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BoolParam;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                IntParam;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class USoundWave*                                  SoundWaveParam;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingSaturation;                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShadowExponent;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAreaShadowsForStationaryLight;                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassPointLightSettings
// 0x0000 (0x000C - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.NavGraphNode
// 0x0018
struct FNavGraphNode
{
	class UObject*                                     Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.FFTWaterComponentWaveParticleType
// 0x0038
struct FFFTWaterComponentWaveParticleType
{
	struct FVector2D                                   SpawnRadiusRange;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FoamRange;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HeightRange;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   AngleRange;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CalmWaterDampeningFactorRange;                            // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UParticleComputeShaderData*                  ParticleComputeShaderData;                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FFTWaterComponentIntersectParticleType
// 0x0058
struct FFFTWaterComponentIntersectParticleType
{
	struct FVector2D                                   VelocityRange;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FoamRange;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HeightRange;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ParticleWaveVelocityRange;                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ParticleWaveAbsoluteSpeedDifferenceRange;                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeHorizontalVelocityWeight;                           // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalDirectionFromVolumeWeight;                      // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalRandomVelocityWeight;                           // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeVerticalVelocityWeight;                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VerticalRandomVelocityWeight;                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WaterVelocityWeight;                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VelocityScaling;                                          // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnderwaterParticles : 1;                                  // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	class UParticleComputeShaderData*                  ParticleComputeShaderData;                                // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FFTWaterComponentParticleParams
// 0x0248
struct FFFTWaterComponentParticleParams
{
	int                                                MaxParticlesPerFrame;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FFFTWaterComponentWaveParticleType          WaveParticles[0x4];                                       // 0x0008(0x0038) (Edit)
	struct FFFTWaterComponentIntersectParticleType     IntersectionParticles[0x4];                               // 0x00E8(0x0058) (Edit)
};

// ScriptStruct Engine.FFTWaterComponentParams
// 0x0308
struct FFFTWaterComponentParams
{
	struct FLinearColor                                AmbientColour;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                WaterColour;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShallowWaterColour;                                       // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackLitColour;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FoamColour;                                               // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FoamHighlightColour;                                      // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FresnelPower;                                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpecularBrightness;                                       // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FoamBrightness;                                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReflectionBrightness;                                     // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FoamFadeStart;                                            // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FoamFadeEnd;                                              // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DEBUG_Wireframe : 1;                                      // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              Size;                                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindSpeed;                                                // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindSpeedInEditor;                                        // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CarrierWaveAmplitude;                                     // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CarrierWaveWaveLength;                                    // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CarrierWavePropagationSpeed;                              // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizonFadeDistance;                                      // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizonDarkenStart;                                       // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorizonDarkenRange;                                       // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CloudShadowDarkenStart;                                   // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CloudShadowDarkenRange;                                   // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CausticsDepth;                                            // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class UTexture*                                    FoamColourTex;                                            // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFFTWaterComponentParticleParams            ParticleParams;                                           // 0x00B8(0x0248) (Edit)
	float                                              ExtendedPlaneSize;                                        // 0x0300(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExtendedPlaneFadeDistance;                                // 0x0304(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MurkyRegion
// 0x0020
struct FMurkyRegion
{
	bool                                               Enabled;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSuperHeatedWater;                                       // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MaterialSpriteElement
// 0x0028
struct FMaterialSpriteElement
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistanceToOpacityCurve;                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSizeIsInScreenSpace : 1;                                 // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              BaseSizeX;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseSizeY;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DistanceToSizeCurve;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MergedCollisionComponentStaticMeshInstanceData
// 0x0040
struct FMergedCollisionComponentStaticMeshInstanceData
{
	struct FTransform                                  RelativeTransform;                                        // 0x0000(0x0030) (Edit, EditConst, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                OwningActorCrc32;                                         // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FractureEffect
// 0x0010
struct FFractureEffect
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NameIndexPair
// 0x000C
struct FNameIndexPair
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.FlatWaterMeshTextureOverride
// 0x000C (0x0018 - 0x000C)
struct FFlatWaterMeshTextureOverride : public FNameIndexPair
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UTexture*                                    Texture;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InstancedCoverageMeshLOD
// 0x0008
struct FInstancedCoverageMeshLOD
{
	float                                              LODReduction;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToLOD;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StartScale;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartRoll;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StartOffset;                                              // 0x0024(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // 0x002C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EndScale;                                                 // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndRoll;                                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EndOffset;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0001
struct FParticleSystemLOD
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                        // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x0010
struct FNamedEmitterMaterial
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x0018
struct FEngineShowFlagsSetting
{
	class FString                                      ShowFlagName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Enabled;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.TimelineEventEntry
// 0x0014
struct FTimelineEventEntry
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             EventFunc;                                                // 0x0004(0x0014) (ZeroConstructor, InstancedReference)
};

// ScriptStruct Engine.TimelineVectorTrack
// 0x0030
struct FTimelineVectorTrack
{
	class UCurveVector*                                VectorCurve;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0014) (ZeroConstructor, InstancedReference)
	struct FName                                       VectorPropertyName;                                       // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStructProperty*                             VectorProperty;                                           // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.TimelineFloatTrack
// 0x0030
struct FTimelineFloatTrack
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0014) (ZeroConstructor, InstancedReference)
	struct FName                                       FloatPropertyName;                                        // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFloatProperty*                              FloatProperty;                                            // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x0030
struct FTimelineLinearColorTrack
{
	class UCurveLinearColor*                           LinearColorCurve;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0014) (ZeroConstructor, InstancedReference)
	struct FName                                       LinearColorPropertyName;                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStructProperty*                             LinearColorProperty;                                      // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.Timeline
// 0x0098
struct FTimeline
{
	TEnumAsByte<ETimelineLengthMode>                   LengthMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Length;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bLooping : 1;                                             // 0x0008(0x0001)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0008(0x0001)
	unsigned char                                      bPlaying : 1;                                             // 0x0008(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FTimelineEventEntry>                 Events;                                                   // 0x0018(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineVectorTrack>                InterpVectors;                                            // 0x0028(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineFloatTrack>                 InterpFloats;                                             // 0x0038(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineLinearColorTrack>           InterpLinearColors;                                       // 0x0048(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelinePostUpdateFunc;                                   // 0x0058(0x0014) (ZeroConstructor, InstancedReference, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelineFinishedFunc;                                     // 0x0068(0x0014) (ZeroConstructor, InstancedReference, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UObject>                      PropertySetObject;                                        // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       DirectionPropertyName;                                    // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UByteProperty*                               DirectionProperty;                                        // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.AnimCurveBase
// 0x0018
struct FAnimCurveBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       LastObservedName;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	int                                                CurveTypeFlags;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FloatCurve
// 0x0078 (0x0090 - 0x0018)
struct FFloatCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurve;                                               // 0x0018(0x0078)
};

// ScriptStruct Engine.RawCurveTracks
// 0x0010
struct FRawCurveTracks
{
	TArray<struct FFloatCurve>                         FloatCurves;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSegment
// 0x0020
struct FAnimSegment
{
	class UAnimSequenceBase*                           AnimReference;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartPos;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AnimStartTime;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimEndTime;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LoopingCount;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimTrack
// 0x0010
struct FAnimTrack
{
	TArray<struct FAnimSegment>                        AnimSegments;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.CompositeSection
// 0x0028 (0x0058 - 0x0030)
struct FCompositeSection : public FAnimLinkableElement
{
	struct FName                                       SectionName;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       NextSectionName;                                          // 0x003C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<class UAnimMetaData*>                       MetaData;                                                 // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Engine.SlotAnimationTrack
// 0x0018
struct FSlotAnimationTrack
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimTrack                                  AnimTrack;                                                // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.BranchingPoint
// 0x0010 (0x0040 - 0x0030)
struct FBranchingPoint : public FAnimLinkableElement
{
	struct FName                                       EventName;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BranchingPointMarker
// 0x000C
struct FBranchingPointMarker
{
	int                                                NotifyIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TriggerTime;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotifyEventType>                  NotifyEventType;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x0004
struct FTrackToSkeletonMap
{
	int                                                BoneTreeIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ScaleTrack
// 0x0020
struct FScaleTrack
{
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.CompressedOffsetData
// 0x0018
struct FCompressedOffsetData
{
	TArray<int>                                        OffsetData;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                StripSize;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BlendParameter
// 0x0020
struct FBlendParameter
{
	class FString                                      DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Min;                                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GridNum;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpolationParameter
// 0x0008
struct FInterpolationParameter
{
	float                                              InterpolationTime;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFilterInterpolationType>              InterpolationType;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneInterpolation
// 0x0010
struct FPerBoneInterpolation
{
	struct FBoneReference                              BoneReference;                                            // 0x0000(0x000C) (Edit)
	float                                              InterpolationSpeedPerSec;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlendSample
// 0x0018
struct FBlendSample
{
	class UAnimSequence*                               Animation;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SampleValue;                                              // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EditorElement
// 0x0018
struct FEditorElement
{
	int                                                Indices[0x3];                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weights[0x3];                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlendSampleData
// 0x0020
struct FBlendSampleData
{
	int                                                SampleDataIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalWeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.BlendFilter
// 0x0090
struct FBlendFilter
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.FilePath
// 0x0010
struct FFilePath
{
	class FString                                      FilePath;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x0018
struct FEditorMapPerformanceTestDefinition
{
	struct FFilePath                                   PerformanceTestmap;                                       // 0x0000(0x0010) (Edit, Config)
	int                                                TestTimer;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x0020
struct FImportFactorySettingValues
{
	class FString                                      SettingName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      Value;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x0020
struct FEditorImportWorkflowDefinition
{
	struct FFilePath                                   ImportFilePath;                                           // 0x0000(0x0010) (Edit, Config)
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x0150
struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition             Diffuse;                                                  // 0x0000(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Normal;                                                   // 0x0020(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             StaticMesh;                                               // 0x0040(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             ReimportStaticMesh;                                       // 0x0060(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             BlendShapeMesh;                                           // 0x0080(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             MorphMesh;                                                // 0x00A0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SkeletalMesh;                                             // 0x00C0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Animation;                                                // 0x00E0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Sound;                                                    // 0x0100(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SurroundSound;                                            // 0x0120(0x0020) (Edit, Config)
	TArray<struct FEditorImportWorkflowDefinition>     OtherAssetsToImport;                                      // 0x0140(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x0060
struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath                                   BlueprintAsset;                                           // 0x0000(0x0010) (Edit, Config)
	struct FFilePath                                   MaterialAsset;                                            // 0x0010(0x0010) (Edit, Config)
	struct FFilePath                                   ParticleSystemAsset;                                      // 0x0020(0x0010) (Edit, Config)
	struct FFilePath                                   SkeletalMeshAsset;                                        // 0x0030(0x0010) (Edit, Config)
	struct FFilePath                                   StaticMeshAsset;                                          // 0x0040(0x0010) (Edit, Config)
	struct FFilePath                                   TextureAsset;                                             // 0x0050(0x0010) (Edit, Config)
};

// ScriptStruct Engine.BuildPromotionBlueprintSettings
// 0x0020
struct FBuildPromotionBlueprintSettings
{
	struct FFilePath                                   FirstMeshPath;                                            // 0x0000(0x0010) (Edit)
	struct FFilePath                                   SecondMeshPath;                                           // 0x0010(0x0010) (Edit)
};

// ScriptStruct Engine.DirectoryPath
// 0x0010
struct FDirectoryPath
{
	class FString                                      path;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x0020
struct FBuildPromotionNewProjectSettings
{
	struct FDirectoryPath                              NewProjectFolderOverride;                                 // 0x0000(0x0010) (Edit)
	class FString                                      NewProjectNameOverride;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x0210
struct FBuildPromotionTestSettings
{
	struct FFilePath                                   DefaultStaticMeshAsset;                                   // 0x0000(0x0010) (Edit)
	struct FBuildPromotionImportWorkflowSettings       ImportWorkflow;                                           // 0x0010(0x0150) (Edit)
	struct FBuildPromotionOpenAssetSettings            OpenAssets;                                               // 0x0160(0x0060) (Edit)
	struct FBuildPromotionBlueprintSettings            BlueprintSettings;                                        // 0x01C0(0x0020) (Edit)
	struct FBuildPromotionNewProjectSettings           NewProjectSettings;                                       // 0x01E0(0x0020) (Edit)
	struct FFilePath                                   SourceControlMaterial;                                    // 0x0200(0x0010) (Edit)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x0030
struct FMaterialEditorPromotionSettings
{
	struct FFilePath                                   DefaultMaterialAsset;                                     // 0x0000(0x0010) (Edit)
	struct FFilePath                                   DefaultDiffuseTexture;                                    // 0x0010(0x0010) (Edit)
	struct FFilePath                                   DefaultNormalTexture;                                     // 0x0020(0x0010) (Edit)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x0010
struct FParticleEditorPromotionSettings
{
	struct FFilePath                                   DefaultParticleAsset;                                     // 0x0000(0x0010) (Edit)
};

// ScriptStruct Engine.OpenTestAsset
// 0x0018
struct FOpenTestAsset
{
	struct FFilePath                                   AssetToOpen;                                              // 0x0000(0x0010) (Edit)
	bool                                               bSkipTestWhenUnAttended;                                  // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ExternalToolDefinition
// 0x0060
struct FExternalToolDefinition
{
	class FString                                      ToolName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FFilePath                                   ExecutablePath;                                           // 0x0010(0x0010) (Edit, Config)
	class FString                                      CommandLineOptions;                                       // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              WorkingDirectory;                                         // 0x0030(0x0010) (Edit, Config)
	class FString                                      ScriptExtension;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              ScriptDirectory;                                          // 0x0050(0x0010) (Edit, Config)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x0038
struct FEditorImportExportTestDefinition
{
	struct FFilePath                                   ImportFilePath;                                           // 0x0000(0x0010) (Edit, Config)
	class FString                                      ExportFileExtension;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bSkipExport;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x0020
struct FLaunchOnTestSettings
{
	struct FFilePath                                   LaunchOnTestmap;                                          // 0x0000(0x0010) (Edit, Config)
	class FString                                      DeviceID;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.NavAvoidanceData
// 0x003C
struct FNavAvoidanceData
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInfo
// 0x0018
struct FAnimGroupInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TableRowBase
// 0x0001
struct FTableRowBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.DialogueContext
// 0x0018
struct FDialogueContext
{
	class UDialogueVoice*                              Speaker;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UDialogueVoice*>                      Targets;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x0060
struct FCollisionResponseTemplate
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FName                                       ObjectTypeName;                                           // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x0018(0x0010) (ZeroConstructor)
	class FString                                      HelpMessage;                                              // 0x0028(0x0010) (ZeroConstructor)
	bool                                               bCanModify;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x27];                                      // 0x0039(0x0027) MISSED OFFSET
};

// ScriptStruct Engine.CustomChannelSetup
// 0x0010
struct FCustomChannelSetup
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    DefaultResponse;                                          // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTraceType;                                               // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bStaticObject;                                            // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CustomProfile
// 0x0018
struct FCustomProfile
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.Redirector
// 0x0010
struct FRedirector
{
	struct FName                                       OldName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GenericStruct
// 0x0004
struct FGenericStruct
{
	int                                                Data;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionProfileName
// 0x0008
struct FCollisionProfileName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TimerHandle
// 0x0004
struct FTimerHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.DebugFloatHistory
// 0x0020
struct FDebugFloatHistory
{
	TArray<float>                                      Samples;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	float                                              MaxSamples;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAdjustMinMax;                                        // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.FormatTextArgument
// 0x0070
struct FFormatTextArgument
{
	struct FText                                       ArgumentName;                                             // 0x0000(0x0018) (Edit, BlueprintVisible, DisableEditOnTemplate)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       TextValue;                                                // 0x0038(0x0018) (Edit, BlueprintVisible, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0038(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Engine.BakedStateExitTransition
// 0x0028
struct FBakedStateExitTransition
{
	int                                                CanTakeDelegateIndex;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CustomResultNodeIndex;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TransitionIndex;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StateSequencePlayerToQueryIndex;                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDesiredTransitionReturnValue;                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<int>                                        PoseEvaluatorLinks;                                       // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BakedAnimationState
// 0x0050
struct FBakedAnimationState
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       PathedStateName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBakedStateExitTransition>           Transitions;                                              // 0x0010(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsAConduit;                                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                EntryRuleNodeIndex;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PlayerNodeIndices;                                        // 0x0038(0x0010) (ZeroConstructor)
	bool                                               CanBeReEntered;                                           // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimationStateBase
// 0x0008
struct FAnimationStateBase
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x0030 (0x0038 - 0x0008)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	int                                                PreviousState;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NextState;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CrossfadeDuration;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InterruptNotify;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAlphaBlendOption>                     BlendMode;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETransitionLogicType>                  LogicType;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x0030
struct FBakedAnimationStateMachine
{
	struct FName                                       MachineName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                InitialState;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FBakedAnimationState>                States;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAnimationTransitionBetweenStates>   Transitions;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.KShapeElem
// 0x0020
struct FKShapeElem
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.KSphereElem
// 0x0010 (0x0030 - 0x0020)
struct FKSphereElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0020(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Radius;                                                   // 0x002C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.KBoxElem
// 0x0030 (0x0050 - 0x0020)
struct FKBoxElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0020(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FQuat                                       Orientation;                                              // 0x0030(0x0010) (Edit, EditConst, IsPlainOldData)
	float                                              X;                                                        // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Y;                                                        // 0x0044(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Z;                                                        // 0x0048(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KSphylElem
// 0x0030 (0x0050 - 0x0020)
struct FKSphylElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0020(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FQuat                                       Orientation;                                              // 0x0030(0x0010) (Edit, EditConst, IsPlainOldData)
	float                                              Radius;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Length;                                                   // 0x0044(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.KConvexElem
// 0x0070 (0x0090 - 0x0020)
struct FKConvexElem : public FKShapeElem
{
	TArray<struct FVector>                             VertexData;                                               // 0x0020(0x0010) (ZeroConstructor)
	struct FBox                                        ElemBox;                                                  // 0x0030(0x001C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0050(0x0030) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.KAggregateGeom
// 0x0048
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                              // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKBoxElem>                           BoxElems;                                                 // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKSphylElem>                         SphylElems;                                               // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKConvexElem>                        ConvexElems;                                              // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CircleElement2D
// 0x000C
struct FCircleElement2D
{
	struct FVector2D                                   Center;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.BoxElement2D
// 0x0014
struct FBoxElement2D
{
	struct FVector2D                                   Center;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Width;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Height;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Angle;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.ConvexElement2D
// 0x0010
struct FConvexElement2D
{
	TArray<struct FVector2D>                           VertexData;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AggregateGeometry2D
// 0x0030
struct FAggregateGeometry2D
{
	TArray<struct FCircleElement2D>                    CircleElements;                                           // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FBoxElement2D>                       BoxElements;                                              // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FConvexElement2D>                    ConvexElements;                                           // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.BranchFilter
// 0x000C
struct FBranchFilter
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BlendDepth;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InputBlendPose
// 0x0010
struct FInputBlendPose
{
	TArray<struct FBranchFilter>                       BranchFilters;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BuilderPoly
// 0x0020
struct FBuilderPoly
{
	TArray<int>                                        VertexIndices;                                            // 0x0000(0x0010) (ZeroConstructor)
	int                                                Direction;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemName;                                                 // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PolyFlags;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CanvasUVTri
// 0x0060
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V0_UV;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V0_Color;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V1_Pos;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V1_UV;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V1_Color;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V2_Pos;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   V2_UV;                                                    // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                V2_Color;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InstancedNavMesh
// 0x0038
struct FInstancedNavMesh
{
	TAssetPtr<class UClass>                            AssetClass;                                               // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	struct FVector                                     Location;                                                 // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NavMeshName;                                              // 0x002C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0034(0x0004) (Edit, DisableEditOnInstance)
};

// ScriptStruct Engine.FractureMaterial
// 0x0024
struct FFractureMaterial
{
	struct FVector2D                                   UVScale;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UVOffset;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Tangent;                                                  // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UAngle;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                InteriorElementIndex;                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleChunkParameters
// 0x0004
struct FDestructibleChunkParameters
{
	bool                                               bIsSupportChunk;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotFracture;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotDamage;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotCrumble;                                            // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AudioQualitySettings
// 0x0040
struct FAudioQualitySettings
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                MaxChannels;                                              // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x000C
struct FPhysicalSurfaceName
{
	TEnumAsByte<EPhysicalSurface>                      Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DominanceGroupPair
// 0x000C
struct FDominanceGroupPair
{
	TEnumAsByte<EDominanceGroup>                       FirstGroupId;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDominanceGroup>                       SecondGroupId;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                FirstDominanceValue;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SecondDominanceValue;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DominanceGroupName
// 0x000C
struct FDominanceGroupName
{
	TEnumAsByte<EDominanceGroup>                       Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TextureLODGroup
// 0x0038
struct FTextureLODGroup
{
	TEnumAsByte<ETextureGroup>                         Group;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0001(0x000B) MISSED OFFSET
	int                                                LODBias;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	int                                                NumStreamedMips;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureMipGenSettings>                MipGenSettings;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                MinLODSize;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODSize;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MinMagFilter;                                             // 0x0024(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MipFilter;                                                // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                TextureQualityReduction;                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DialogueContextMapping
// 0x0028
struct FDialogueContextMapping
{
	struct FDialogueContext                            Context;                                                  // 0x0000(0x0018) (Edit)
	class USoundWave*                                  SoundWave;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogueSoundWaveProxy*                     Proxy;                                                    // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x0018
struct FBlueprintComponentDelegateBinding
{
	struct FName                                       ComponentPropertyName;                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DelegatePropertyName;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x0004
struct FBlueprintInputDelegateBinding
{
	unsigned char                                      bConsumeInput : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bExecuteWhenPaused : 1;                                   // 0x0000(0x0001)
	unsigned char                                      bOverrideParentBinding : 1;                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0x0014 (0x0018 - 0x0004)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputActionName;                                          // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0x0010 (0x0014 - 0x0004)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
	struct FName                                       InputAxisName;                                            // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0x002C (0x0030 - 0x0004)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FKey                                        AxisKey;                                                  // 0x0008(0x0020)
	struct FName                                       FunctionNameToBind;                                       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0x003C (0x0040 - 0x0004)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FInputChord                                 InputChord;                                               // 0x0008(0x0028)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0034(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0x000C (0x0010 - 0x0004)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontImportOptionsData
// 0x00B0
struct FFontImportOptionsData
{
	class FString                                      FontName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Height;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableAntialiasing : 1;                                  // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableBold : 1;                                          // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableItalic : 1;                                        // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableUnderline : 1;                                     // 0x0014(0x0001) (Edit)
	unsigned char                                      bAlphaOnly : 1;                                           // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TEnumAsByte<EFontImportCharacterSet>               CharacterSet;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	class FString                                      Chars;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor)
	class FString                                      UnicodeRange;                                             // 0x0030(0x0010) (Edit, ZeroConstructor)
	class FString                                      CharsFilePath;                                            // 0x0040(0x0010) (Edit, ZeroConstructor)
	class FString                                      CharsFileWildcard;                                        // 0x0050(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCreatePrintableOnly : 1;                                 // 0x0060(0x0001) (Edit)
	unsigned char                                      bIncludeASCIIRange : 1;                                   // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FLinearColor                                ForegroundColor;                                          // 0x0064(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableDropShadow : 1;                                    // 0x0074(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                TexturePageWidth;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TexturePageMaxHeight;                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                XPadding;                                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                YPadding;                                                 // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxTop;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxBottom;                                          // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxRight;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxLeft;                                            // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableLegacyMode : 1;                                    // 0x0098(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                Kerning;                                                  // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseDistanceFieldAlpha : 1;                               // 0x00A0(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                DistanceFieldScaleFactor;                                 // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFieldScanRadiusScale;                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StartV;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                USize;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VSize;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TextureIndex;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                VerticalOffset;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.HapticFeedbackDetails
// 0x0100
struct FHapticFeedbackDetails
{
	struct FRuntimeFloatCurve                          Frequency;                                                // 0x0000(0x0080) (Edit)
	struct FRuntimeFloatCurve                          Amplitude;                                                // 0x0080(0x0080) (Edit)
};

// ScriptStruct Engine.HIKBoneTransform
// 0x0030
struct FHIKBoneTransform
{
	int                                                BoneID;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Orientation;                                              // 0x0010(0x0010) (Edit, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.HIKBoneMapping
// 0x000C
struct FHIKBoneMapping
{
	struct FName                                       UnrealBoneName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                HumanIKBone;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ComponentKey
// 0x0020
struct FComponentKey
{
	class UClass*                                      OwnerClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SCSVariableName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedGuid;                                           // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x0028
struct FComponentOverrideRecord
{
	class UActorComponent*                             ComponentTemplate;                                        // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FComponentKey                               ComponentKey;                                             // 0x0008(0x0020)
};

// ScriptStruct Engine.KeyBind
// 0x0038
struct FKeyBind
{
	struct FKey                                        Key;                                                      // 0x0000(0x0020) (Config)
	class FString                                      Command;                                                  // 0x0020(0x0010) (ZeroConstructor, Config)
	unsigned char                                      Control : 1;                                              // 0x0030(0x0001) (Config)
	unsigned char                                      Shift : 1;                                                // 0x0030(0x0001) (Config)
	unsigned char                                      Alt : 1;                                                  // 0x0030(0x0001) (Config)
	unsigned char                                      Cmd : 1;                                                  // 0x0030(0x0001) (Config)
	unsigned char                                      bIgnoreCtrl : 1;                                          // 0x0030(0x0001) (Config)
	unsigned char                                      bIgnoreShift : 1;                                         // 0x0030(0x0001) (Config)
	unsigned char                                      bIgnoreAlt : 1;                                           // 0x0030(0x0001) (Config)
	unsigned char                                      bIgnoreCmd : 1;                                           // 0x0030(0x0001) (Config)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisProperties
// 0x0010
struct FInputAxisProperties
{
	float                                              DeadZone;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Exponent;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInvert : 1;                                              // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x0018
struct FInputAxisConfigEntry
{
	struct FName                                       AxisKeyName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FInputAxisProperties                        AxisProperties;                                           // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.InputActionKeyMapping
// 0x0030
struct FInputActionKeyMapping
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // 0x0008(0x0020) (Edit)
	unsigned char                                      bShift : 1;                                               // 0x0028(0x0001) (Edit)
	unsigned char                                      bCtrl : 1;                                                // 0x0028(0x0001) (Edit)
	unsigned char                                      bAlt : 1;                                                 // 0x0028(0x0001) (Edit)
	unsigned char                                      bCmd : 1;                                                 // 0x0028(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x0030
struct FInputAxisKeyMapping
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // 0x0008(0x0020) (Edit)
	float                                              Scale;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InputCombinedAxisKeyMapping
// 0x0058
struct FInputCombinedAxisKeyMapping
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        KeyX;                                                     // 0x0008(0x0020) (Edit)
	struct FKey                                        KeyY;                                                     // 0x0028(0x0020) (Edit)
	float                                              Scale;                                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CircularDeadZoneLowerBound;                               // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CircularDeadZoneUpperBound;                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      CurveColor;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class FString                                      CurveName;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                bHideCurve;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bColorCurve;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bFloatingPointColorCurve;                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bClamp;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClampLow;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClampHigh;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	class FString                                      TabName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FCurveEdEntry>                       Curves;                                                   // 0x0010(0x0010) (ZeroConstructor)
	float                                              ViewStartInput;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewEndInput;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewStartOutput;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewEndOutput;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value : 1;                                                // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.DirectorTrackCut
// 0x0014
struct FDirectorTrackCut
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TransitionTime;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetCamGroup;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShotNumber;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EventTrackKey
// 0x000C
struct FEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       EventName;                                                // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimControlTrackKey
// 0x0020
struct FAnimControlTrackKey
{
	float                                              StartTime;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AnimStartOffset;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimEndOffset;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x001C(0x0001)
	unsigned char                                      bReverse : 1;                                             // 0x001C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InterpLookupPoint
// 0x000C
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ClipIDNumber;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ToggleTrackKey
// 0x0008
struct FToggleTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrackToggleAction>                    ToggleAction;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VisibilityTrackKey
// 0x0008
struct FVisibilityTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisibilityTrackAction>                Action;                                                   // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisibilityTrackCondition>             ActiveCondition;                                          // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x0018
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ElementIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LayerActorStats
// 0x0010
struct FLayerActorStats
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CustomInput
// 0x0048
struct FCustomInput
{
	class FString                                      InputName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FExpressionInput                            Input;                                                    // 0x0010(0x0038) (ZeroConstructor)
};

// ScriptStruct Engine.FunctionExpressionInput
// 0x0050
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       ExpressionInputId;                                        // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x0018(0x0038) (ZeroConstructor)
};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x0040
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       ExpressionOutputId;                                       // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FExpressionOutput                           Output;                                                   // 0x0018(0x0028) (ZeroConstructor)
};

// ScriptStruct Engine.CollectionParameterBase
// 0x0018
struct FCollectionParameterBase
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Id;                                                       // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollectionScalarParameter
// 0x0004 (0x001C - 0x0018)
struct FCollectionScalarParameter : public FCollectionParameterBase
{
	float                                              DefaultValue;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollectionVectorParameter
// 0x0010 (0x0028 - 0x0018)
struct FCollectionVectorParameter : public FCollectionParameterBase
{
	struct FLinearColor                                DefaultValue;                                             // 0x0018(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavCollisionCylinder
// 0x0014
struct FNavCollisionCylinder
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavCollisionBox
// 0x0018
struct FNavCollisionBox
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DistributionLookupTable
// 0x0028
struct FDistributionLookupTable
{
	unsigned char                                      Op;                                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EntryCount;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EntryStride;                                              // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubEntryStride;                                           // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeBias;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      LockFlag;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.RawDistribution
// 0x0028
struct FRawDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028) (ZeroConstructor)
};

// ScriptStruct Engine.RawDistributionVector
// 0x0010 (0x0038 - 0x0028)
struct FRawDistributionVector : public FRawDistribution
{
	float                                              MinValue;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UDistributionVector*                         Distribution;                                             // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
};

// ScriptStruct Engine.RawDistributionFloat
// 0x0010 (0x0038 - 0x0028)
struct FRawDistributionFloat : public FRawDistribution
{
	float                                              MinValue;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UDistributionFloat*                          Distribution;                                             // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
};

// ScriptStruct Engine.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned char                                      bModify : 1;                                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bScale : 1;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bLock : 1;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGetSeedFromInstance : 1;                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      bInstanceSeedIsIndex : 1;                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      bResetSeedOnEmitterLooping : 1;                           // 0x0008(0x0001) (Edit)
	unsigned char                                      bRandomlySelectSeedArray : 1;                             // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<int>                                        RandomSeeds;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<EParticleEventType>                    Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Frequency;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ParticleFrequency;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FirstTimeOnly : 1;                                        // 0x000C(0x0001) (Edit)
	unsigned char                                      LastTimeOnly : 1;                                         // 0x000C(0x0001) (Edit)
	unsigned char                                      UseReflectedImpactVector : 1;                             // 0x000C(0x0001) (Edit)
	unsigned char                                      bUseOrbitOffset : 1;                                      // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       CustomName;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                         // 0x0018(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x0014
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PrimitiveSphereEmitterAngleRanges
// 0x0010
struct FPrimitiveSphereEmitterAngleRanges
{
	struct FVector2D                                   HorizontalAngle;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   VerticalAngle;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned char                                      bProcessDuringSpawn : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bProcessDuringUpdate : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x0050
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0008(0x0001) (Edit)
	unsigned char                                      bSpawnTimeOnly : 1;                                       // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TEnumAsByte<EEmitterDynamicParameterValue>         ValueMethod;                                              // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	unsigned char                                      bScaleVelocityByParamValue : 1;                           // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FRawDistributionFloat                       ParamValue;                                               // 0x0018(0x0038) (Edit)
};

// ScriptStruct Engine.ParticleBurst
// 0x0010
struct FParticleBurst
{
	int                                                Count;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CountLow;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBurstGroup>                           Group;                                                    // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x0070
struct FGPUSpriteLocalVectorFieldInfo
{
	class UVectorField*                                Field;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	struct FRotator                                    MinInitialRotation;                                       // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MaxInitialRotation;                                       // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationRate;                                             // 0x0058(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Tightness;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIgnoreComponentTransform : 1;                            // 0x006C(0x0001)
	unsigned char                                      bTileX : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bTileY : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bTileZ : 1;                                               // 0x006C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.FloatDistribution
// 0x0028
struct FFloatDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028) (ZeroConstructor)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x02E0
struct FGPUSpriteEmitterInfo
{
	class UParticleModuleRequired*                     RequiredModule;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleSpawn*                        SpawnModule;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleSpawnPerUnit*                 SpawnPerUnitModule;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleSpawnRepeatPerPoint*          SpawnRepeatPerPointModule;                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleComputeShaderData*                  ParticleComputeData;                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleParametersOverVelocity*       ParametersOverVelocity;                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleParametersOverCustom*         ParametersOverCustom;                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UParticleModule*>                     SpawnModules;                                             // 0x0038(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FGPUSpriteLocalVectorFieldInfo              LocalVectorField;                                         // 0x0050(0x0070)
	struct FFloatDistribution                          VectorFieldScale;                                         // 0x00C0(0x0028) (ZeroConstructor)
	struct FFloatDistribution                          DragCoefficient;                                          // 0x00E8(0x0028) (ZeroConstructor)
	struct FFloatDistribution                          DragLocalVelocityCoefficient;                             // 0x0110(0x0028) (ZeroConstructor)
	struct FFloatDistribution                          PointAttractorStrength;                                   // 0x0138(0x0028) (ZeroConstructor)
	struct FFloatDistribution                          Resilience;                                               // 0x0160(0x0028) (ZeroConstructor)
	struct FVector                                     ConstantAcceleration;                                     // 0x0188(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     PointAttractorPosition;                                   // 0x0194(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              PointAttractorRadiusSq;                                   // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                          // 0x01A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x01B0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InvMaxSize;                                               // 0x01BC(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              InvRotationRateScale;                                     // 0x01C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxLifetime;                                              // 0x01C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxParticleCount;                                         // 0x01CC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x01D0(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x01D1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01D2(0x0002) MISSED OFFSET
	unsigned char                                      bEnableCollision : 1;                                     // 0x01D4(0x0001)
	unsigned char                                      bNeedsVectorFields : 1;                                   // 0x01D4(0x0001)
	unsigned char                                      bOpacitySpawnsOnCPU : 1;                                  // 0x01D4(0x0001)
	unsigned char                                      bSizeSpawnsOnCPU : 1;                                     // 0x01D4(0x0001)
	unsigned char                                      bVelocitySpawnsOnCPU : 1;                                 // 0x01D4(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	TEnumAsByte<EParticleCollisionMode>                CollisionMode;                                            // 0x01D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	struct FRawDistributionVector                      DynamicColor;                                             // 0x01E0(0x0038)
	struct FRawDistributionFloat                       DynamicAlpha;                                             // 0x0218(0x0038)
	struct FRawDistributionVector                      DynamicColorScale;                                        // 0x0250(0x0038)
	struct FRawDistributionFloat                       DynamicAlphaScale;                                        // 0x0288(0x0038)
	struct FVector4                                    MurkyColorScale;                                          // 0x02C0(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x02D0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x05B0
struct FGPUSpriteResourceData
{
	TArray<struct FColor>                              QuantizedColorSamples;                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedMiscSamples;                                     // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedDynamicParamSamples;                             // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedSimulationAttrSamples;                           // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedSizeOverVelocitySamples;                         // 0x0040(0x0010) (ZeroConstructor)
	struct FVector4                                    ColorScale;                                               // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorBias;                                                // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    MiscScale;                                                // 0x0070(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    MiscBias;                                                 // 0x0080(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    DynParamScale;                                            // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    DynParamBias;                                             // 0x00A0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    MurkyColorScale;                                          // 0x00B0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveScale;                                 // 0x00C0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveBias;                                  // 0x00D0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SizeOverVelocityScale;                                    // 0x00E0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SizeOverVelocityBias;                                     // 0x00F0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SubImageSize;                                             // 0x0100(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    SizeBySpeed;                                              // 0x0110(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstantAcceleration;                                     // 0x0120(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                          // 0x012C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x0138(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitFrequencyBase;                                       // 0x0144(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitFrequencyRange;                                      // 0x0150(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitPhaseBase;                                           // 0x015C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitPhaseRange;                                          // 0x0168(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              GlobalVectorFieldScale;                                   // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GlobalVectorFieldTightness;                               // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PerParticleVectorFieldScale;                              // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PerParticleVectorFieldBias;                               // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficientScale;                                     // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficientBias;                                      // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragLocalVelocityScale;                                   // 0x018C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragLocalVelocityBias;                                    // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResilienceScale;                                          // 0x0194(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResilienceBias;                                           // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadiusScale;                                     // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadiusBias;                                      // 0x01A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionTimeBias;                                        // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OneMinusFriction;                                         // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotationRateScale;                                        // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraMotionBlurAmount;                                   // 0x01B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AlphaThreshold;                                           // 0x01B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x01B8(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x01B9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01BA(0x0002) MISSED OFFSET
	struct FVector2D                                   PivotOffset;                                              // 0x01BC(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2F8];                                     // 0x01C4(0x02F8) MISSED OFFSET
	float                                              AlignmentInheritedVelocityScale;                          // 0x04BC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF0];                                      // 0x04C0(0x00F0) MISSED OFFSET
};

// ScriptStruct Engine.VelocityConeGroupParams
// 0x0080
struct FVelocityConeGroupParams
{
	struct FRawDistributionFloat                       Angle;                                                    // 0x0000(0x0038) (Edit)
	struct FRawDistributionFloat                       Velocity;                                                 // 0x0038(0x0038) (Edit)
	struct FVector                                     Direction;                                                // 0x0070(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TireFrictionScalePair
// 0x0010
struct FTireFrictionScalePair
{
	class UTireType*                                   TireType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrictionScale;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.DelegateArray
// 0x0010
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PurchaseInfo
// 0x0040
struct FPurchaseInfo
{
	class FString                                      Identifier;                                               // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      DisplayName;                                              // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      DisplayDescription;                                       // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      DisplayPrice;                                             // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RigTransformConstraint
// 0x0010
struct FRigTransformConstraint
{
	TEnumAsByte<EConstraintTransform>                  TranformType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       ParentSpace;                                              // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TransformBaseConstraint
// 0x0010
struct FTransformBaseConstraint
{
	TArray<struct FRigTransformConstraint>             TransformConstraints;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.TransformBase
// 0x0028
struct FTransformBase
{
	struct FName                                       Node;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransformBaseConstraint                    Constraints[0x2];                                         // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.Node
// 0x0060
struct FNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ParentName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	class FString                                      DisplayName;                                              // 0x0040(0x0010) (Edit, ZeroConstructor)
	bool                                               bAdvanced;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x0018
struct FBPVariableMetaDataEntry
{
	struct FName                                       DataKey;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      DataValue;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.DestructibleDamageParameters
// 0x001C
struct FDestructibleDamageParameters
{
	float                                              DamageThreshold;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageSpread;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableImpactDamage;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ImpactDamage;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DefaultImpactDamageDepth;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCustomImpactResistance;                                  // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              ImpactResistance;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleDebrisParameters
// 0x002C
struct FDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebrisLifetimeMax;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebrisMaxSeparationMin;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebrisMaxSeparationMax;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBox                                        ValidBounds;                                              // 0x0010(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleAdvancedParameters
// 0x0010
struct FDestructibleAdvancedParameters
{
	float                                              DamageCap;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactVelocityThreshold;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxChunkSpeed;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FractureImpulseScale;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleSpecialHierarchyDepths
// 0x0014
struct FDestructibleSpecialHierarchyDepths
{
	int                                                SupportDepth;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinimumFractureDepth;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebris;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                DebrisDepth;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EssentialDepth;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleDepthParameters
// 0x0001
struct FDestructibleDepthParameters
{
	TEnumAsByte<EImpactDamageOverride>                 ImpactDamageOverride;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleParametersFlag
// 0x0004
struct FDestructibleParametersFlag
{
	unsigned char                                      bAccumulateDamage : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bAssetDefinedSupport : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bWorldSupport : 1;                                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bDebrisTimeout : 1;                                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bDebrisMaxSeparation : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bCrumbleSmallestChunks : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bAccurateRaycasts : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseValidBounds : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bFormExtendedStructures : 1;                              // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.DestructibleParameters
// 0x0088
struct FDestructibleParameters
{
	struct FDestructibleDamageParameters               DamageParameters;                                         // 0x0000(0x001C) (Edit)
	struct FDestructibleDebrisParameters               DebrisParameters;                                         // 0x001C(0x002C) (Edit)
	struct FDestructibleAdvancedParameters             AdvancedParameters;                                       // 0x0048(0x0010) (Edit)
	struct FDestructibleSpecialHierarchyDepths         SpecialHierarchyDepths;                                   // 0x0058(0x0014) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FDestructibleDepthParameters>        DepthParameters;                                          // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	struct FDestructibleParametersFlag                 Flags;                                                    // 0x0080(0x0004) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SoundGroup
// 0x0020
struct FSoundGroup
{
	TEnumAsByte<ESoundGroup>                           SoundGroup;                                               // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      DisplayName;                                              // 0x0008(0x0010) (ZeroConstructor, Config)
	unsigned char                                      bAlwaysDecompressOnLoad : 1;                              // 0x0018(0x0001) (Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              DecompressedDuration;                                     // 0x001C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct Engine.SubtitleCue
// 0x0040
struct FSubtitleCue
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Time;                                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LocalizedSubtitle
// 0x0028
struct FLocalizedSubtitle
{
	class FString                                      LanguageExt;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FSubtitleCue>                        Subtitles;                                                // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bMature : 1;                                              // 0x0020(0x0001)
	unsigned char                                      bManualWordWrap : 1;                                      // 0x0020(0x0001)
	unsigned char                                      bSingleLine : 1;                                          // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassProperties
// 0x0024
struct FSoundClassProperties
{
	float                                              Volume;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StereoBleed;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LFEBleed;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VoiceCenterChannelVolume;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadioFilterVolume;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadioFilterVolumeThreshold;                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyEffects : 1;                                        // 0x001C(0x0001) (Edit)
	unsigned char                                      bAlwaysPlay : 1;                                          // 0x001C(0x0001) (Edit)
	unsigned char                                      bIsUISound : 1;                                           // 0x001C(0x0001) (Edit)
	unsigned char                                      bIsMusic : 1;                                             // 0x001C(0x0001) (Edit)
	unsigned char                                      bReverb : 1;                                              // 0x001C(0x0001) (Edit)
	unsigned char                                      bCenterChannelOnly : 1;                                   // 0x001C(0x0001) (Edit)
	unsigned char                                      bApplyAmbientVolumes : 1;                                 // 0x001C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	TEnumAsByte<EAudioOutputTarget>                    OutputTarget;                                             // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x0010
struct FPassiveSoundMixModifier
{
	class USoundMix*                                   SoundMix;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinVolumeThreshold;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxVolumeThreshold;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AudioEQEffect
// 0x0028
struct FAudioEQEffect
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              HFFrequency;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HFGain;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MFCutoffFrequency;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MFBandwidth;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MFGain;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LFFrequency;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LFGain;                                                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassAdjuster
// 0x0018
struct FSoundClassAdjuster
{
	class USoundClass*                                 SoundClassObject;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeAdjuster;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchAdjuster;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyToChildren : 1;                                     // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              VoiceCenterChannelVolumeAdjuster;                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DialogueWaveParameter
// 0x0020
struct FDialogueWaveParameter
{
	class UDialogueWave*                               DialogueWave;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDialogueContext                            Context;                                                  // 0x0008(0x0018) (Edit)
};

// ScriptStruct Engine.DistanceDatum
// 0x0014
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDistanceEnd;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceStart;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceEnd;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x0020
struct FModulatorContinuousParams
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinInput;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInput;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinOutput;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOutput;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EModulationParamMode>                  ParamMode;                                                // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x0024
struct FSubsurfaceProfileStruct
{
	float                                              ScatterRadius;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SubsurfaceColor;                                          // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FalloffColor;                                             // 0x0014(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTTrackBase
// 0x000C
struct FTTTrackBase
{
	struct FName                                       TrackName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsExternalCurve;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TTEventTrack
// 0x000C (0x0018 - 0x000C)
struct FTTEventTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CurveKeys;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTFloatTrack
// 0x000C (0x0018 - 0x000C)
struct FTTFloatTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CurveFloat;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTVectorTrack
// 0x000C (0x0018 - 0x000C)
struct FTTVectorTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UCurveVector*                                CurveVector;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTLinearColorTrack
// 0x000C (0x0018 - 0x000C)
struct FTTLinearColorTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UCurveLinearColor*                           CurveLinearColor;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TouchInputControl
// 0x0078
struct FTouchInputControl
{
	class UTexture2D*                                  Image1;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image2;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Center;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   VisualSize;                                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ThumbSize;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InteractionSize;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InputScale;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        MainInputKey;                                             // 0x0038(0x0020) (Edit)
	struct FKey                                        AltInputKey;                                              // 0x0058(0x0020) (Edit)
};

// ScriptStruct Engine.VectorDistribution
// 0x0028
struct FVectorDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028) (ZeroConstructor)
};

// ScriptStruct Engine.Vector4Distribution
// 0x0028
struct FVector4Distribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028) (ZeroConstructor)
};

// ScriptStruct Engine.PlatformInterfaceData
// 0x0030
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlatformInterfaceDataType>            Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                IntValue;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class FString                                      StringValue;                                              // 0x0018(0x0010) (ZeroConstructor)
	class UObject*                                     ObjectValue;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x0038
struct FPlatformInterfaceDelegateResult
{
	bool                                               bSuccessful;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FPlatformInterfaceData                      Data;                                                     // 0x0008(0x0030)
};

// ScriptStruct Engine.FastArraySerializerItem
// 0x0008
struct FFastArraySerializerItem
{
	int                                                ReplicationID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                ReplicationKey;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.FastArraySerializer
// 0x00A8
struct FFastArraySerializer
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct Engine.NetObjectPtr
// 0x0014
struct FNetObjectPtr
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.NetActorPtr
// 0x0014
struct FNetActorPtr
{
	struct FNetObjectPtr                               ObjectPtr;                                                // 0x0000(0x0014)
};

// ScriptStruct Engine.NetSubObjectPtr
// 0x0014
struct FNetSubObjectPtr
{
	struct FNetObjectPtr                               SubObject;                                                // 0x0000(0x0014)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0068
struct FExposedValueCopyRecord
{
	class UProperty*                                   SourceProperty;                                           // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       SourcePropertyName;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSubPropertyName;                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SourceArrayIndex;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UProperty*                                   DestProperty;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                DestArrayIndex;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPostCopyOperation>                    PostCopyOperation;                                        // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UBoolProperty*                               CachedBoolSourceProperty;                                 // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBoolProperty*                               CachedBoolDestProperty;                                   // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0048(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.ExposedValueHandler
// 0x0028
struct FExposedValueHandler
{
	struct FName                                       BoundFunction;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FExposedValueCopyRecord>             CopyRecords;                                              // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Base
// 0x0030
struct FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FExposedValueHandler                        EvaluateGraphExposedInputs;                               // 0x0008(0x0028)
};

// ScriptStruct Engine.InputScaleBias
// 0x0008
struct FInputScaleBias
{
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PoseLinkBase
// 0x0018
struct FPoseLinkBase
{
	int                                                LinkID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000 (0x0018 - 0x0018)
struct FComponentSpacePoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.ExposureSettings
// 0x0008
struct FExposureSettings
{
	int                                                LogOffset;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bFixed;                                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.URL
// 0x0070
struct FURL
{
	class FString                                      Protocol;                                                 // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Host;                                                     // 0x0010(0x0010) (ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class FString                                      Map;                                                      // 0x0028(0x0010) (ZeroConstructor)
	class FString                                      RedirectURL;                                              // 0x0038(0x0010) (ZeroConstructor)
	TArray<class FString>                              Op;                                                       // 0x0048(0x0010) (ZeroConstructor)
	class FString                                      Portal;                                                   // 0x0058(0x0010) (ZeroConstructor)
	int                                                Valid;                                                    // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TickPrerequisite
// 0x0010
struct FTickPrerequisite
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned char                                      bEnableGlow : 1;                                          // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                GlowColor;                                                // 0x0004(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GlowOuterRadius;                                          // 0x0014(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GlowInnerRadius;                                          // 0x001C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned char                                      bClipText : 1;                                            // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bEnableShadow : 1;                                        // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FDepthFieldGlowInfo                         GlowInfo;                                                 // 0x0004(0x0024) (BlueprintVisible)
};

// ScriptStruct Engine.ComponentReference
// 0x0018
struct FComponentReference
{
	class AActor*                                      OtherActor;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       ComponentProperty;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DamageEvent
// 0x0010
struct FDamageEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RadialDamageParams
// 0x0014
struct FRadialDamageParams
{
	float                                              BaseDamage;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDamage;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RadialDamageEvent
// 0x0030 (0x0040 - 0x0010)
struct FRadialDamageEvent : public FDamageEvent
{
	struct FRadialDamageParams                         Params;                                                   // 0x0010(0x0014)
	struct FVector                                     Origin;                                                   // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          ComponentHits;                                            // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PointDamageEvent
// 0x0090 (0x00A0 - 0x0010)
struct FPointDamageEvent : public FDamageEvent
{
	float                                              Damage;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            // 0x0014(0x000C)
	struct FHitResult                                  HitInfo;                                                  // 0x0020(0x0080)
};

// ScriptStruct Engine.CollisionMergingSettings
// 0x0001
struct FCollisionMergingSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.MeshMergingSettings
// 0x0030
struct FMeshMergingSettings
{
	bool                                               bGenerateLightMapUV;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                TargetLightMapUVChannel;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TargetLightMapResolution;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bImportVertexColors;                                      // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPivotPointAtZero;                                        // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMergePhysicsData;                                        // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMergeMaterials;                                          // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExportNormalMap;                                         // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExportMetallicMap;                                       // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExportRoughnessMap;                                      // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bExportSpecularMap;                                       // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MergedMaterialAtlasResolution;                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollisionMerging;                                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRelativeTransform;                                    // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMergeRelativeToFirstComponent;                           // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDuplicateLODs;                                           // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<float>                                      LODScreenSizes;                                           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.MaterialSimplificationSettings
// 0x0044
struct FMaterialSimplificationSettings
{
	struct FIntPoint                                   BaseColorMapSize;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalMap;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FIntPoint                                   NormalMapSize;                                            // 0x000C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MetallicConstant;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMetallicMap;                                             // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FIntPoint                                   MetallicMapSize;                                          // 0x001C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RoughnessConstant;                                        // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRoughnessMap;                                            // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FIntPoint                                   RoughnessMapSize;                                         // 0x002C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpecularConstant;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecularMap;                                             // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FIntPoint                                   SpecularMapSize;                                          // 0x003C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshProxySettings
// 0x0070
struct FMeshProxySettings
{
	int                                                ScreenSize;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMaterialSimplificationSettings             Material;                                                 // 0x0004(0x0044) (Edit)
	int                                                TextureWidth;                                             // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                TextureHeight;                                            // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportNormalMap;                                         // 0x0050(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportMetallicMap;                                       // 0x0051(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportRoughnessMap;                                      // 0x0052(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportSpecularMap;                                       // 0x0053(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bRecalculateNormals;                                      // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              HardAngleThreshold;                                       // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MergeDistance;                                            // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseClippingPlane;                                        // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              ClippingLevel;                                            // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AxisIndex;                                                // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlaneNegativeHalfspace;                                  // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PresortedBillboardsParams
// 0x0008
struct FPresortedBillboardsParams
{
	TEnumAsByte<EPresortedBillboardsMode>              Mode;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                NumDirections;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshBuildSettings
// 0x0040
struct FMeshBuildSettings
{
	bool                                               bUseMikkTSpace;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecomputeNormals;                                        // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecomputeTangents;                                       // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveDegenerates;                                       // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBuildAdjacencyBuffer;                                    // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFullPrecisionUVs;                                     // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateLightmapUVs;                                     // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	struct FPresortedBillboardsParams                  PresortedBillboardsParams;                                // 0x0008(0x0008) (Edit)
	int                                                MinLightmapResolution;                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SrcLightmapIndex;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DstLightmapIndex;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BuildScale;                                               // 0x001C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     BuildScale3D;                                             // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFieldResolutionScale;                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateDistanceFieldAsIfTwoSided;                       // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UStaticMesh*                                 DistanceFieldReplacementMesh;                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshReductionSettings
// 0x0058
struct FMeshReductionSettings
{
	float                                              PercentTriangles;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviation;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HardAngleThreshold;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                SilhouetteImportance;                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                TextureImportance;                                        // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                ShadingImportance;                                        // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecalculateNormals;                                      // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                BaseLODModel;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateUniqueLightmapUVs;                               // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepSymmetry;                                            // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibilityAided;                                         // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCullOccluded;                                            // 0x001F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                VisibilityAggressiveness;                                 // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                      // 0x0028(0x0028) (Edit)
	TEnumAsByte<EMeshFeatureImportance>                VertexColorImportance;                                    // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceRebuild;                                            // 0x0051(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.POV
// 0x001C
struct FPOV
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x0030
struct FAnimUpdateRateParameters
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	int                                                UpdateRate;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EvaluationRate;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInterpolateSkippedFrames;                                // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSkipUpdate;                                              // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSkipEvaluation;                                          // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	float                                              TickedPoseOffestTime;                                     // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AdditionalTime;                                           // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	int                                                BaseNonRenderedUpdateRate;                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;                       // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSlotDesc
// 0x000C
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumChannels;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ChannelWeights;                                           // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.MTDResult
// 0x0010
struct FMTDResult
{
	struct FVector                                     Direction;                                                // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.OverlapResult
// 0x0018
struct FOverlapResult
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	unsigned char                                      bBlockingHit : 1;                                         // 0x0014(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned char                                      bDistributionEnabled : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceContentExport : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bInitialized : 1;                                         // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDebugOptions
// 0x0010
struct FLightmassDebugOptions
{
	unsigned char                                      bDebugMode : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStatsEnabled : 1;                                        // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGatherBSPSurfacesAcrossComponents : 1;                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CoplanarTolerance;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseImmediateImport : 1;                                  // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImmediateProcessMappings : 1;                            // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSortMappings : 1;                                        // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDumpBinaryFiles : 1;                                     // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDebugMaterials : 1;                                      // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPadMappings : 1;                                         // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDebugPaddings : 1;                                       // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOnlyCalcDebugTexelMappings : 1;                          // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseRandomColors : 1;                                     // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bColorBordersGreen : 1;                                   // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bColorByExecutionTime : 1;                                // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              ExecutionTimeDivisor;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CachedBaseLocation;                                       // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CachedBaseRotation;                                       // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CachedTransPosition;                                      // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x0030
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                          // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ContactNormal;                                            // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              ContactPenetration;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     TotalNormalImpulse;                                       // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TotalFrictionImpulse;                                     // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyState
// 0x0040
struct FRigidBodyState
{
	struct FVector_NetQuantize100                      Position;                                                 // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                               // 0x0010(0x0010) (IsPlainOldData)
	struct FVector_NetQuantize100                      LinVel;                                                   // 0x0020(0x000C)
	struct FVector_NetQuantize100                      AngVel;                                                   // 0x002C(0x000C)
	unsigned char                                      Flags;                                                    // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.EditedDocumentInfo
// 0x0018
struct FEditedDocumentInfo
{
	class UObject*                                     EditedObject;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SavedViewOffset;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              SavedZoomAmount;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BPInterfaceDescription
// 0x0018
struct FBPInterfaceDescription
{
	class UClass*                                      Interface;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEdGraph*>                            Graphs;                                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BPVariableDescription
// 0x00E0
struct FBPVariableDescription
{
	struct FName                                       VarName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       VarGuid;                                                  // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FEdGraphPinType                             VarType;                                                  // 0x0018(0x0050) (Edit)
	class FString                                      FriendlyName;                                             // 0x0068(0x0010) (Edit, ZeroConstructor)
	struct FText                                       Category;                                                 // 0x0078(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0078(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	uint64_t                                           PropertyFlags;                                            // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RepNotifyFunc;                                            // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                            // 0x00C0(0x0010) (Edit, ZeroConstructor)
	class FString                                      DefaultValue;                                             // 0x00D0(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.MemberReference
// 0x0038
struct FMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      MemberScope;                                              // 0x0008(0x0010) (ZeroConstructor)
	struct FName                                       MemberName;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MemberGuid;                                               // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bSelfContext;                                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWasDeprecated;                                           // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.SceneComponentCachedVelocityAggregateTickFunction
// 0x0010 (0x0058 - 0x0048)
struct FSceneComponentCachedVelocityAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionManager
// 0x00F0
struct FLatentActionManager
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0000(0x00F0) MISSED OFFSET
};

// ScriptStruct Engine.EndClothSimulationFunction
// 0x0008 (0x0050 - 0x0048)
struct FEndClothSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StartClothSimulationFunction
// 0x0008 (0x0050 - 0x0048)
struct FStartClothSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FStartPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LevelViewportInfo
// 0x0020
struct FLevelViewportInfo
{
	struct FVector                                     CamPosition;                                              // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CamRotation;                                              // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              CamOrthoZoom;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               CamUpdated;                                               // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x00AC
struct FLevelSimplificationDetails
{
	bool                                               bCreatePackagePerAsset;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ProxyPixelSize;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMaterialSimplificationSettings             StaticMeshMaterial;                                       // 0x0008(0x0044) (Edit)
	bool                                               bOverrideLandscapeExportLOD;                              // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	int                                                LandscapeExportLOD;                                       // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMaterialSimplificationSettings             LandscapeMaterial;                                        // 0x0054(0x0044) (Edit)
	bool                                               bRemoveDownwardFacingTriangles;                           // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              CullAngleThreshold;                                       // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeFoliageToLandscape;                                  // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeGrassToLandscape;                                    // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateMeshNormalMap;                                   // 0x00A2(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshMetallicMap;                                 // 0x00A3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshRoughnessMap;                                // 0x00A4(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshSpecularMap;                                 // 0x00A5(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeNormalMap;                              // 0x00A6(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeMetallicMap;                            // 0x00A7(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeRoughnessMap;                           // 0x00A8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeSpecularMap;                            // 0x00A9(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0014
struct FStreamableTextureInstance
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.DynamicTextureInstance
// 0x0014 (0x0028 - 0x0014)
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UTexture2D*                                  Texture;                                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAttached;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              OriginalRadius;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.IntegralKey
// 0x0008
struct FIntegralKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.IntegralCurve
// 0x0018 (0x0070 - 0x0058)
struct FIntegralCurve : public FIndexedCurve
{
	TArray<struct FIntegralKey>                        Keys;                                                     // 0x0058(0x0010) (Edit, ZeroConstructor)
	int                                                DefaultValue;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultValueBeforeFirstKey;                           // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.NameCurveKey
// 0x000C
struct FNameCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       Value;                                                    // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NameCurve
// 0x0010 (0x0068 - 0x0058)
struct FNameCurve : public FIndexedCurve
{
	TArray<struct FNameCurveKey>                       Keys;                                                     // 0x0058(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.MergedCollisionActorsSimplification
// 0x000C
struct FMergedCollisionActorsSimplification
{
	struct FCollisionMergingSettings                   MergeCollisionSettings;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MaxBoundRadius;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinNumberOfComponentsToMerge;                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.HierarchicalSimplification
// 0x00B8
struct FHierarchicalSimplification
{
	bool                                               bSimplifyMesh;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DrawDistance;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredBoundRadius;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredFillingPercentage;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinNumberOfActorsToBuild;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMeshProxySettings                          ProxySetting;                                             // 0x0014(0x0070) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FMeshMergingSettings                        MergeSetting;                                             // 0x0088(0x0030) (Edit)
};

// ScriptStruct Engine.NavGraphEdge
// 0x0018
struct FNavGraphEdge
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0030
struct FPreviewAttachedObjectPair
{
	TAssetPtr<class UObject>                           AttachedObject;                                           // 0x0000(0x0020)
	class UObject*                                     Object;                                                   // 0x0020(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       AttachedTo;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x0010
struct FPreviewAssetAttachContainer
{
	TArray<struct FPreviewAttachedObjectPair>          AttachedObjects;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SmartNameMapping
// 0x0068
struct FSmartNameMapping
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.NameMapping
// 0x0010
struct FNameMapping
{
	struct FName                                       NodeName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigConfiguration
// 0x0018
struct FRigConfiguration
{
	class URig*                                        Rig;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNameMapping>                        BoneMappingTable;                                         // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BoneReductionSetting
// 0x0010
struct FBoneReductionSetting
{
	TArray<struct FName>                               BonesToRemove;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ReferencePose
// 0x0018
struct FReferencePose
{
	struct FName                                       PoseName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ReferencePose;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.TriIndices
// 0x000C
struct FTriIndices
{
	int                                                v0;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                v1;                                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                v2;                                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TriMeshCollisionData
// 0x0038
struct FTriMeshCollisionData
{
	TArray<struct FVector>                             Vertices;                                                 // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FTriIndices>                         Indices;                                                  // 0x0010(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      bFlipNormals : 1;                                         // 0x0020(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0021(0x0017) MISSED OFFSET
};

// ScriptStruct Engine.MorphTargetMap
// 0x0010
struct FMorphTargetMap
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMorphTarget*                                MorphTarget;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BoneMirrorExport
// 0x0014
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceBoneName;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimationGroupReference
// 0x000C
struct FAnimationGroupReference
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimExtractContext
// 0x0008
struct FAnimExtractContext
{
	bool                                               bExtractRootMotion;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CurrentTime;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x0078
struct FSpriteCategoryInfo
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       Description;                                              // 0x0040(0x0018)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct Engine.AnimNotifyTrack
// 0x0028
struct FAnimNotifyTrack
{
	struct FName                                       TrackName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TrackColor;                                               // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.VectorCurve
// 0x0168 (0x0180 - 0x0018)
struct FVectorCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurves[0x3];                                         // 0x0018(0x0078)
};

// ScriptStruct Engine.TransformCurve
// 0x0480 (0x0498 - 0x0018)
struct FTransformCurve : public FAnimCurveBase
{
	struct FVectorCurve                                TranslationCurve;                                         // 0x0018(0x0180)
	struct FVectorCurve                                RotationCurve;                                            // 0x0198(0x0180)
	struct FVectorCurve                                ScaleCurve;                                               // 0x0318(0x0180)
};

// ScriptStruct Engine.SkeletalMeshComponentPreClothTickFunction
// 0x0008 (0x0050 - 0x0048)
struct FSkeletalMeshComponentPreClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.FogVolumeInfo
// 0x0078
struct FFogVolumeInfo
{
	class UFogVolumeComponent*                         Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0008(0x0060) MISSED OFFSET
	class UTexture*                                    VolumeTexture;                                            // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WaterSimPlane
// 0x0030
struct FWaterSimPlane
{
	class UClass*                                      WaterId;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WaterOwner;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPlane                                      NonFFTPlane;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFFT;                                                  // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              FFTBasePlaneHeight;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BatchedPoint
// 0x0028
struct FBatchedPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              PointSize;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BatchedLine
// 0x0034
struct FBatchedLine
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TexturePlatformData
// 0x0028
struct FTexturePlatformData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.TextureSource
// 0x0080
struct FTextureSource
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.ClusterNode
// 0x0028
struct FClusterNode
{
	struct FVector                                     BoundMin;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                FirstChild;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoundMax;                                                 // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                LastChild;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FirstInstance;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastInstance;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MobileInstancedStaticMeshLOD
// 0x0008
struct FMobileInstancedStaticMeshLOD
{
	float                                              LODReduction;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToLOD;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleSystemAggregateTickFunction
// 0x0030 (0x0078 - 0x0048)
struct FParticleSystemAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	class UParticleSystemAggregateTickSettings*        Settings;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0058(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x0010
struct FRootMotionExtractionStep
{
	class UAnimSequence*                               AnimSequence;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartPosition;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndPosition;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AlphaBlend
// 0x0030
struct FAlphaBlend
{
	TEnumAsByte<EAlphaBlendOption>                     BlendOption;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BeginValue;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredValue;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CustomCurve;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlphaLerp;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AlphaBlend;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AlphaTarget;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendTimeRemaining;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendedValue;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimationTransitionRule
// 0x0010
struct FAnimationTransitionRule
{
	struct FName                                       RuleToExecute;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               TransitionReturnVal;                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                TransitionIndex;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationState
// 0x0020 (0x0028 - 0x0008)
struct FAnimationState : public FAnimationStateBase
{
	TArray<struct FAnimationTransitionRule>            Transitions;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SlotEvaluationPose
// 0x0048
struct FSlotEvaluationPose
{
	TEnumAsByte<EAdditiveAnimationType>                AdditiveType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x0008
struct FPerBoneBlendWeight
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendWeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x0010
struct FPerBoneBlendWeights
{
	TArray<struct FPerBoneBlendWeight>                 BoneBlendWeights;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.A2Pose
// 0x0010
struct FA2Pose
{
	TArray<struct FTransform>                          Bones;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.A2CSPose
// 0x0018 (0x0028 - 0x0010)
struct FA2CSPose : public FA2Pose
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	TArray<unsigned char>                              ComponentSpaceFlags;                                      // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimMontageInstance
// 0x00A0
struct FAnimMontageInstance
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DesiredWeight;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DefaultBlendTimeMultiplier;                               // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<int>                                        NextSections;                                             // 0x0018(0x0010) (ZeroConstructor)
	TArray<int>                                        PrevSections;                                             // 0x0028(0x0010) (ZeroConstructor)
	bool                                               bPlaying;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0039(0x002F) MISSED OFFSET
	TArray<struct FAnimNotifyEvent>                    ActiveStateBranchingPoints;                               // 0x0068(0x0010) (ZeroConstructor, Transient)
	float                                              Position;                                                 // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0080(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
	float                                              Mins[0x3];                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Ranges[0x3];                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      CurveWeights;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x0030
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x0020
struct FAnimSequenceTrackContainer
{
	TArray<struct FRawAnimSequenceTrack>               AnimationTracks;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               TrackNames;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.GridBlendSample
// 0x001C
struct FGridBlendSample
{
	struct FEditorElement                              GridElement;                                              // 0x0000(0x0018)
	float                                              BlendWeight;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AssetImportInfo
// 0x0001
struct FAssetImportInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x0018
struct FAnimParentNodeAssetOverride
{
	class UAnimationAsset*                             NewAsset;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ParentNodeGuid;                                           // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x0018
struct FDataTableCategoryHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColumnName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowContents;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DataTableRowHandle
// 0x0010
struct FDataTableRowHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintDebugData
// 0x0001
struct FBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0008
struct FPointerToUberGraphFrame
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x0140
struct FDebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData00[0x140];                                     // 0x0000(0x0140) MISSED OFFSET
};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0014
struct FNodeToCodeAssociation
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0001
struct FAnimBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0001
struct FAnimationFrameSnapshot
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.StateMachineDebugData
// 0x00B0
struct FStateMachineDebugData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	class FString                                      Value;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FVector2D                                   LineExtent;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TextSizingParameters
// 0x0028
struct FTextSizingParameters
{
	float                                              DrawX;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawY;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawXL;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawYL;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scaling;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFont*                                       DrawFont;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SpacingAdjust;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UL;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VL;                                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	int                                                IndexChar;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        AutoCompleteListIndices;                                  // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x01E8
struct FRuntimeCurveLinearColor
{
	struct FRichCurve                                  ColorCurves[0x4];                                         // 0x0000(0x0078)
	class UCurveLinearColor*                           ExternalCurve;                                            // 0x01E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveTableRowHandle
// 0x0010
struct FCurveTableRowHandle
{
	class UCurveTable*                                 CurveTable;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GraphReference
// 0x0020
struct FGraphReference
{
	class UEdGraph*                                    MacroGraph;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlueprint*                                  GraphBlueprint;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       GraphGuid;                                                // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x00C8
struct FEdGraphSchemaAction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FText                                       MenuDescription;                                          // 0x0008(0x0018)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class FString                                      TooltipDescription;                                       // 0x0040(0x0010) (ZeroConstructor)
	struct FText                                       Category;                                                 // 0x0050(0x0018)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0050(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       Keywords;                                                 // 0x0088(0x0018)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0088(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Grouping;                                                 // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionID;                                                // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0x0008 (0x00D0 - 0x00C8)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
	class UEdGraphNode*                                NodeTemplate;                                             // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ScreenMessageString
// 0x0028
struct FScreenMessageString
{
	uint64_t                                           Key;                                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      ScreenMessage;                                            // 0x0008(0x0010) (ZeroConstructor, Transient)
	struct FColor                                      DisplayColor;                                             // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeToDisplay;                                            // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentTimeDisplayed;                                     // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<EFullyLoadPackageType>                 FullyLoadType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      Tag;                                                      // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FName>                               PackagesToLoad;                                           // 0x0018(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             LoadedObjects;                                            // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.LevelStreamingStatus
// 0x0010
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldBeLoaded : 1;                                      // 0x0008(0x0001)
	unsigned char                                      bShouldBeVisible : 1;                                     // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	uint32_t                                           LODIndex;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	class UNetDriver*                                  NetDriver;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WorldContext
// 0x0298
struct FWorldContext
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
	struct FURL                                        LastURL;                                                  // 0x00E0(0x0070)
	struct FURL                                        LastRemoteURL;                                            // 0x0150(0x0070)
	class UPendingNetGame*                             PendingNetGame;                                           // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FFullyLoadedPackagesInfo>            PackagesToFullyLoad;                                      // 0x01C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01D8(0x0010) MISSED OFFSET
	TArray<class ULevel*>                              LoadedLevelsForPendingMapChange;                          // 0x01E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x01F8(0x0018) MISSED OFFSET
	TArray<class UObjectReferencer*>                   ObjectReferencers;                                        // 0x0210(0x0010) (ZeroConstructor)
	TArray<struct FLevelStreamingStatus>               PendingLevelStreamingStatusUpdates;                       // 0x0220(0x0010) (ZeroConstructor)
	class UGameViewportClient*                         GameViewport;                                             // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGameInstance*                               OwningGameInstance;                                       // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNamedNetDriver>                     ActiveNetDrivers;                                         // 0x0240(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0250(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x0010
struct FActiveHapticFeedbackEffect
{
	class UHapticFeedbackEffect*                       HapticEffect;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PoseLink
// 0x0000 (0x0018 - 0x0018)
struct FPoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.AnimNode_HIKBase
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_HIKBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     HIKSettings;                                              // 0x0030(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.HIKElements
// 0x0058
struct FHIKElements
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInterpTrack*                                Track;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                KeyIndex;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UnsnappedPosition;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CameraPreviewInfo
// 0x0030
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class APawn*                                       PawnInst;                                                 // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.SubTrackGroup
// 0x0028
struct FSubTrackGroup
{
	class FString                                      GroupName;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        TrackIndices;                                             // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bIsCollapsed : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bIsSelected : 1;                                          // 0x0020(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x0020
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      SubTrackName;                                             // 0x0008(0x0010) (ZeroConstructor)
	int                                                GroupIndex;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ClientReceiveData
// 0x0040
struct FClientReceiveData
{
	class APlayerController*                           LocalPC;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MessageType;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MessageIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class FString                                      MessageString;                                            // 0x0018(0x0010) (ZeroConstructor)
	class APlayerState*                                RelatedPlayerState_2;                                     // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	class FString                                      CurveName;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     CurveObject;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BeamTargetData
// 0x000C
struct FBeamTargetData
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetPercentage;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0020
struct FStreamedAudioPlatformData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x0028
struct FAssetEditorOrbitCameraPosition
{
	bool                                               bIsSet;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     CamOrbitPoint;                                            // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CamOrbitZoom;                                             // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CamOrbitRotation;                                         // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x0050
struct FMeshSectionInfoMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.MeshSectionInfo
// 0x0008
struct FMeshSectionInfo
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCastShadow;                                              // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x00F8
struct FStaticMeshSourceModel
{
	struct FMeshBuildSettings                          BuildSettings;                                            // 0x0000(0x0040) (Edit)
	struct FMeshReductionSettings                      ReductionSettings;                                        // 0x0040(0x0058) (Edit)
	struct FSimplygonRemeshingSettings                 RemeshingSettings;                                        // 0x0098(0x0050) (Edit)
	int                                                OverriddenLightMapRes;                                    // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistance;                                              // 0x00EC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              ScreenSize;                                               // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviation;                                             // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x001C
struct FStaticMeshOptimizationSettings
{
	TEnumAsByte<EOptimizationType>                     ReductionMethod;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecalcNormals;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              NormalsThreshold;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SilhouetteImportance;                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TextureImportance;                                        // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShadingImportance;                                        // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_ApplyAdditive
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0048(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0064(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x0010 (0x0040 - 0x0030)
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
	bool                                               bIgnoreForRelevancyTest;                                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InternalTimeAccumulator;                                  // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_BlendListBase
// 0x0078 (0x00A8 - 0x0030)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendTime;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TEnumAsByte<EAlphaBlendOption>                     BlendType;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAlphaBlend>                         Blends;                                                   // 0x0060(0x0010) (ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x0070(0x0010) (ZeroConstructor)
	TArray<float>                                      RemainingBlendTimes;                                      // 0x0080(0x0010) (ZeroConstructor)
	int                                                LastActiveChildIndex;                                     // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0094(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_BlendListByBool
// 0x0008 (0x00B0 - 0x00A8)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	bool                                               bActiveValue;                                             // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_BlendListByEnum
// 0x0018 (0x00C0 - 0x00A8)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                          // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      ActiveEnumValue;                                          // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_BlendListByInt
// 0x0008 (0x00B0 - 0x00A8)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                         // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_BlendListByObject
// 0x0018 (0x00C0 - 0x00A8)
struct FAnimNode_BlendListByObject : public FAnimNode_BlendListBase
{
	class UClass*                                      ActiveTypeValue;                                          // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ObjectToPoseIndex;                                        // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.AnimNode_BlendSpacePlayer
// 0x00C8 (0x0108 - 0x0040)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GroupIndex;                                               // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	struct FBlendFilter                                BlendFilter;                                              // 0x0068(0x0090)
	TArray<struct FBlendSampleData>                    BlendSampleDataCache;                                     // 0x00F8(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x0110 - 0x0108)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_HIKFloorContact
// 0x0078 (0x00C0 - 0x0048)
struct FAnimNode_HIKFloorContact : public FAnimNode_HIKBase
{
	bool                                               FeetContact;                                              // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HandsContact;                                             // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FingersContact;                                           // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ToesContact;                                              // 0x004B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKFeetContactType>                   FeetContactType;                                          // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKHandsContactType>                  HandsContactType;                                         // 0x004D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	float                                              DistanceUp;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceDown;                                             // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NbRays;                                                   // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootRadius;                                               // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Smoothing;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCollisionResponseContainer                 OverrideRaycastCollisionResponse;                         // 0x0068(0x0020) (Edit, BlueprintVisible)
	float                                              FeetHeight;                                               // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeetBack;                                                 // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeetMiddle;                                               // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeetFront;                                                // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeetInSide;                                               // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeetOutSide;                                              // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandsHeight;                                              // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandsBack;                                                // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandsMiddle;                                              // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandsFront;                                               // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandsInSide;                                              // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandsOutSide;                                             // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_HIKLookAt
// 0x0040 (0x0088 - 0x0048)
struct FAnimNode_HIKLookAt : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetPosition;                                           // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChestContribution;                                        // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               XYOnly;                                                   // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKLookAtLimits>                      Limits;                                                   // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
	float                                              LimitsHorizontalAngle;                                    // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LimitsVerticalAngle;                                      // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActivationSpeed;                                          // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetPositionSpeed;                                      // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKLookAtInterpolation>               InterpolationMode;                                        // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0071(0x0017) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_HIKOffset
// 0x0018 (0x0060 - 0x0048)
struct FAnimNode_HIKOffset : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachT;                                                   // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0050(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffector>                          Effector;                                                 // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffectorSpace>                     EffectorSpace;                                            // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_HIKPin
// 0x0010 (0x0058 - 0x0048)
struct FAnimNode_HIKPin : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PinTStrength;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PinRStrength;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffector>                          Effector;                                                 // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_HIKPlant
// 0x0018 (0x0060 - 0x0048)
struct FAnimNode_HIKPlant : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HipsLevel;                                                // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionDistance;                                       // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PullFeetInsteadOfAnkles;                                  // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsQuadruped;                                              // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	float                                              ChestLevel;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PullHandsInsteadOfWrists;                                 // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_HIKPull
// 0x0008 (0x0050 - 0x0048)
struct FAnimNode_HIKPull : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffector>                          Effector;                                                 // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_HIKReach
// 0x0038 (0x0080 - 0x0048)
struct FAnimNode_HIKReach : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachT;                                                   // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachR;                                                   // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Orientation;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EHIKEffector>                          Effector;                                                 // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffectorSpace>                     EffectorSpace;                                            // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0072(0x0002) MISSED OFFSET
	struct FName                                       ParentBone;                                               // 0x0074(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_HIKReachRotator
// 0x0028 (0x0070 - 0x0048)
struct FAnimNode_HIKReachRotator : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachT;                                                   // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachR;                                                   // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffector>                          Effector;                                                 // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffectorSpace>                     EffectorSpace;                                            // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_HIKRelativePlant
// 0x0050 (0x0098 - 0x0048)
struct FAnimNode_HIKRelativePlant : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Depth;                                                    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HipsRotationFactor;                                       // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChestRotationFactor;                                      // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceUp;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceDown;                                             // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NbRays;                                                   // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootRadius;                                               // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCollisionResponseContainer                 OverrideRaycastCollisionResponse;                         // 0x0068(0x0020) (Edit, BlueprintVisible)
	float                                              DeltaTime;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Smoothing;                                                // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_HIKResist
// 0x0008 (0x0050 - 0x0048)
struct FAnimNode_HIKResist : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHIKEffector>                          Effector;                                                 // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_HIKSetProperty
// 0x0008 (0x0050 - 0x0048)
struct FAnimNode_HIKSetProperty : public FAnimNode_HIKBase
{
	TEnumAsByte<EHIKProperty>                          Property;                                                 // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_HIKSolve
// 0x0038 (0x0080 - 0x0048)
struct FAnimNode_HIKSolve : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FComponentSpacePoseLink                     InputFKPose;                                              // 0x0050(0x0018) (Edit, BlueprintVisible)
	bool                                               enablePullEngine;                                         // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               enableBodyPartSolving;                                    // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               enableLODSolver;                                          // 0x006A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               enableLegsSNS;                                            // 0x006B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               enableArmsSNS;                                            // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               boneLengthFromInputPose;                                  // 0x006D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveLeftShoulder;                                // 0x006E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveRightShoulder;                               // 0x006F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveLeftArm;                                     // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveRightArm;                                    // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveLeftLeg;                                     // 0x0072(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveRightLeg;                                    // 0x0073(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveLeftHand;                                    // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveRightHand;                                   // 0x0075(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveLeftFoot;                                    // 0x0076(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveRightFoot;                                   // 0x0077(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveHead;                                        // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bodyPartSolveSpine;                                       // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               checkOutputPoseContainsNaNs;                              // 0x007A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x007B(0x0005) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_HIKTest
// 0x0010 (0x0058 - 0x0048)
struct FAnimNode_HIKTest : public FAnimNode_HIKBase
{
	float                                              Alpha;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Param;                                                    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_LayeredBoneBlend
// 0x0070 (0x00A0 - 0x0030)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0030(0x0018) (Edit, BlueprintVisible)
	TArray<struct FPoseLink>                           BlendPoses;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FInputBlendPose>                     LayerSetup;                                               // 0x0058(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x0068(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	bool                                               bMeshSpaceRotationBlend;                                  // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                         // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x26];                                      // 0x007A(0x0026) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0030 - 0x0030)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct Engine.AnimNode_RefPose
// 0x0008 (0x0038 - 0x0030)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	TEnumAsByte<ERefPoseType>                          RefPoseType;                                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Root
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_Root : public FAnimNode_Base
{
	struct FPoseLink                                   Result;                                                   // 0x0030(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_RotateRootBone
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0030(0x0018) (Edit, BlueprintVisible)
	float                                              Pitch;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MeshToComponent;                                          // 0x0050(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_RotationOffsetBlendSpace
// 0x0018 (0x0120 - 0x0108)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 // 0x0108(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x0060 (0x0090 - 0x0030)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	int16_t                                            LastInitializedContextCounter;                            // 0x0030(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	int16_t                                            LastCacheBonesContextCounter;                             // 0x0032(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	int16_t                                            LastUpdatedContextCounter;                                // 0x0034(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	int16_t                                            LastEvaluatedContextCounter;                              // 0x0036(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	struct FPoseLink                                   Pose;                                                     // 0x0038(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0050(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SequenceEvaluator
// 0x0010 (0x0050 - 0x0040)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitTime;                                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0018 (0x0058 - 0x0040)
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoopAnimation;                                           // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GroupIndex;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Slot
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FName                                       SlotName;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	int16_t                                            LastSlotNodeInitializationCounter;                        // 0x0058(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x0078 (0x00A8 - 0x0030)
struct FAnimNode_StateMachine : public FAnimNode_Base
{
	int                                                StateMachineIndexInClass;                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTransitionsPerFrame;                                   // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	int                                                CurrentState;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0048(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0010
struct FAnimationPotentialTransition
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x0090
struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x0050 (0x0080 - 0x0030)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	TEnumAsByte<EEvaluatorDataSource>                  DataSource;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEvaluatorMode>                        EvaluatorMode;                                            // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	int                                                FramesToCachePose;                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0038(0x0040) MISSED OFFSET
	int                                                CacheFramesRemaining;                                     // 0x0078(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x0010 (0x0040 - 0x0030)
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	bool                                               bCanEnterTransition;                                      // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0031(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.AnimationNode_TwoWayBlend
// 0x0040 (0x0070 - 0x0030)
struct FAnimationNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FPoseLink                                   B;                                                        // 0x0048(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0064(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   LinkToCachingNode;                                        // 0x0030(0x0018)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	struct FPoseLink                                   LocalPose;                                                // 0x0030(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0030(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0001
struct FDummySpacerCameraTypes
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.NetTimeStampCalculator
// 0x0068
struct FNetTimeStampCalculator
{
	unsigned char                                      UnknownData00[0x66];                                      // 0x0000(0x0066) MISSED OFFSET
	uint16_t                                           PackedTimeStamp;                                          // 0x0066(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StreamableManager
// 0x00A8
struct FStreamableManager
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct Engine.ServerMigrationTelemetryFailedData
// 0x0010
struct FServerMigrationTelemetryFailedData
{
	class FString                                      Stage;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Engine.ServerMigrationTelemetryActorData
// 0x0028
struct FServerMigrationTelemetryActorData
{
	TAssetPtr<class UClass>                            ActorClass;                                               // 0x0000(0x0020) (BlueprintVisible, BlueprintReadOnly)
	int                                                Count;                                                    // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ServerMigrationTelemetrySucceededData
// 0x0020
struct FServerMigrationTelemetrySucceededData
{
	TArray<struct FServerMigrationTelemetryActorData>  ActorDetails;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              TotalTime;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumClients;                                               // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumActorsMigrated;                                        // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ActorSerialisationBytes;                                  // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ReplicatedPhysicsState
// 0x0050
struct FReplicatedPhysicsState
{
	struct FRepMovement                                ReplicatedMovement;                                       // 0x0000(0x0034)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AttachParent;                                             // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Attached;                                                 // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Initialized;                                              // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.RepTransform
// 0x0018
struct FRepTransform
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.ReplicatedTransformState
// 0x0030
struct FReplicatedTransformState
{
	struct FRepTransform                               ReplicatedMovement;                                       // 0x0000(0x0018)
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AttachParent;                                             // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Attached;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshMergeMorphTarget
// 0x000C
struct FSkelMeshMergeMorphTarget
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
