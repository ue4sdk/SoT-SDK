#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EmotingFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EmotingFramework.EmoteCard
// 0x0140 (0x0510 - 0x03D0)
class AEmoteCard : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicCardSelectionMaterialInstance;                     // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       RandomCardParameterName;                                  // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FInt32Range                                 RandomCardParameterRange;                                 // 0x03F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x110];                                     // 0x0400(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmotingFramework.EmoteCard"));
		return ptr;
	}

};


// Class EmotingFramework.EmoteCoin
// 0x0118 (0x04E8 - 0x03D0)
class AEmoteCoin : public AActor
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x03D0(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmotingFramework.EmoteCoin"));
		return ptr;
	}

};


// Class EmotingFramework.EmoteIdListingAsset
// 0x0010 (0x0038 - 0x0028)
class UEmoteIdListingAsset : public UDataAsset
{
public:
	TArray<struct FName>                               EmoteIds;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmotingFramework.EmoteIdListingAsset"));
		return ptr;
	}

};


// Class EmotingFramework.EmoteSettings
// 0x0008 (0x0040 - 0x0038)
class UEmoteSettings : public UDeveloperSettings
{
public:
	int                                                Pages;                                                    // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmotingFramework.EmoteSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
