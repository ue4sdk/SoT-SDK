#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ContestMatchmaking.ServerCrewModel
// 0x0060
struct FServerCrewModel
{
	FGuid                                              CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	FUniqueNetIdRepl                                   UserId;                                                   // 0x0010(0x0018)
	FGuid                                              ServerId;                                                 // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                SessionType;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<FVector2D>                                  Positions;                                                // 0x0040(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Resources;                                                // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct ContestMatchmaking.ContestMatchmakingServerRequestModel
// 0x0088
struct FContestMatchmakingServerRequestModel
{
	FGuid                                              ServerId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	FString                                            VmId;                                                     // 0x0010(0x0010) (ZeroConstructor)
	FString                                            PrivateServerId;                                          // 0x0020(0x0010) (ZeroConstructor)
	FString                                            ServerLocation;                                           // 0x0030(0x0010) (ZeroConstructor)
	uint32_t                                           FeatureHash;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<FString>                                    PlayModeTags;                                             // 0x0048(0x0010) (ZeroConstructor)
	TArray<FString>                                    PlayModeStates;                                           // 0x0058(0x0010) (ZeroConstructor)
	TArray<FServerCrewModel>                           Crews;                                                    // 0x0068(0x0010) (ZeroConstructor)
	FGuid                                              RequestCorrelationId;                                     // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ContestMatchmaking.ServerCrewResponseModel
// 0x0078
struct FServerCrewResponseModel
{
	TArray<FServerCrewModel>                           Crews;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TMap<FString, FString>                             OptionalPlayModeInfo;                                     // 0x0010(0x0050) (ZeroConstructor)
	FTimespan                                          RetryAfter;                                               // 0x0060(0x0008) (ZeroConstructor)
	FTimespan                                          MigrationThreshold;                                       // 0x0068(0x0008) (ZeroConstructor)
	FTimespan                                          ExpireAfter;                                              // 0x0070(0x0008) (ZeroConstructor)
};

// ScriptStruct ContestMatchmaking.OptionalPlayModeModel
// 0x0050
struct FOptionalPlayModeModel
{
	TMap<FString, FString>                             OptionalPlayModeMap;                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct ContestMatchmaking.ServerRegionModel
// 0x000C
struct FServerRegionModel
{
	FVector2D                                          Position;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ContestMatchmaking.ServerContendedModel
// 0x0030
struct FServerContendedModel
{
	TArray<FVector2D>                                  Positions;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<FServerRegionModel>                         Regions;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   Resources;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct ContestMatchmaking.ServerCrewRequestModel
// 0x00B0
struct FServerCrewRequestModel
{
	FGuid                                              ServerId;                                                 // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	FString                                            VmId;                                                     // 0x0010(0x0010) (ZeroConstructor)
	FString                                            PrivateServerId;                                          // 0x0020(0x0010) (ZeroConstructor)
	FString                                            ServerLocation;                                           // 0x0030(0x0010) (ZeroConstructor)
	uint32_t                                           FeatureHash;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<FString>                                    PlayModeTags;                                             // 0x0048(0x0010) (ZeroConstructor)
	FString                                            PlayModeState;                                            // 0x0058(0x0010) (ZeroConstructor)
	int                                                CrewCount;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CrewCountBucket;                                          // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CrewMin;                                                  // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CrewMax;                                                  // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	FTimespan                                          Uptime;                                                   // 0x0078(0x0008) (ZeroConstructor)
	FServerContendedModel                              Contended;                                                // 0x0080(0x0030)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
