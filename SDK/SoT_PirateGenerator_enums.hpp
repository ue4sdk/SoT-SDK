#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PirateGenerator.EIPGEthnicity
enum class EIPGEthnicity : uint8_t
{
	EIPGEthnicity__UNSPECIFIED     = 0,
	EIPGEthnicity__ASIAN           = 1,
	EIPGEthnicity__BLACK           = 2,
	EIPGEthnicity__WHITE           = 3,
	EIPGEthnicity__EIPGEthnicity_MAX = 4
};


// Enum PirateGenerator.EIPGGender
enum class EIPGGender : uint8_t
{
	EIPGGender__UNSPECIFIED        = 0,
	EIPGGender__MALE               = 1,
	EIPGGender__FEMALE             = 2,
	EIPGGender__EIPGGender_MAX     = 3
};


// Enum PirateGenerator.EIPGPirateType
enum class EIPGPirateType : uint8_t
{
	EIPGPirateType__PLAYER         = 0,
	EIPGPirateType__NPC            = 1,
	EIPGPirateType__EIPGPirateType_MAX = 2
};


// Enum PirateGenerator.EIPGTestEnum
enum class EIPGTestEnum : uint8_t
{
	EIPGTestEnum__RANDOM           = 0,
	EIPGTestEnum__RANDOM_OR_NONE   = 1,
	EIPGTestEnum__EIPGTestEnum_MAX = 2
};


// Enum PirateGenerator.EIPGSetMode
enum class EIPGSetMode : uint8_t
{
	EIPGSetMode__RANDOM            = 0,
	EIPGSetMode__RANDOM_OR_NONE    = 1,
	EIPGSetMode__BLEND2_FIRST_ORDER = 2,
	EIPGSetMode__BLEND2_RANDOM     = 3,
	EIPGSetMode__NONE              = 4,
	EIPGSetMode__BLEND2_LAST_UNDERSCORE = 5,
	EIPGSetMode__EIPGSetMode_MAX   = 6
};


// Enum PirateGenerator.EIPGBlendType
enum class EIPGBlendType : uint8_t
{
	EIPGBlendType__NIX             = 0,
	EIPGBlendType__NIL             = 1,
	EIPGBlendType__RND             = 2,
	EIPGBlendType__ONOFF           = 3,
	EIPGBlendType__POSNEG          = 4,
	EIPGBlendType__MAP             = 5,
	EIPGBlendType__ON              = 6,
	EIPGBlendType__ONOFF_NEAREST   = 7,
	EIPGBlendType__ONOFF_BIAS      = 8,
	EIPGBlendType__ONOFF_BIAS_NEAREST = 9,
	EIPGBlendType__EIPGBlendType_MAX = 10
};


// Enum PirateGenerator.EPirateBakeFlags
enum class EPirateBakeFlags : uint8_t
{
	EPirateBakeFlags__None         = 0,
	EPirateBakeFlags__FirstPerson  = 1,
	EPirateBakeFlags__NoObjectFading = 2,
	EPirateBakeFlags__NoLODs       = 3,
	EPirateBakeFlags__StripTopLOD  = 4,
	EPirateBakeFlags__KeepCPUData  = 5,
	EPirateBakeFlags__DiscardImmediately = 6,
	EPirateBakeFlags__HighPriority = 7,
	EPirateBakeFlags__EPirateBakeFlags_MAX = 8
};


// Enum PirateGenerator.EFileAccessAsyncResult
enum class EFileAccessAsyncResult : uint8_t
{
	EFileAccessAsyncResult__Succeeded = 0,
	EFileAccessAsyncResult__Failed = 1,
	EFileAccessAsyncResult__EFileAccessAsyncResult_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
