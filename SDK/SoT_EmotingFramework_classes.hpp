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

// Class EmotingFramework.EmoteCameraInterface
// 0x0000 (0x0028 - 0x0028)
class UEmoteCameraInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmotingFramework.EmoteCameraInterface"));
		return ptr;
	}

};


// Class EmotingFramework.EmoteCard
// 0x0140 (0x0510 - 0x03D0)
class AEmoteCard : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	UMaterialInstanceDynamic*                          DynamicCardSelectionMaterialInstance;                     // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	UStaticMeshComponent*                              MeshComponent;                                            // 0x03E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	FName                                              RandomCardParameterName;                                  // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FInt32Range                                        RandomCardParameterRange;                                 // 0x03F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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


// Class EmotingFramework.EmotePropData
// 0x0000 (0x0028 - 0x0028)
class UEmotePropData : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmotingFramework.EmotePropData"));
		return ptr;
	}

};


// Class EmotingFramework.EmotePropDiceData
// 0x0008 (0x0030 - 0x0028)
class UEmotePropDiceData : public UEmotePropData
{
public:
	TEnumAsByte<EDiceType>                             DiceType;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmotingFramework.EmotePropDiceData"));
		return ptr;
	}

};


// Class EmotingFramework.EmoteDice
// 0x0120 (0x04F0 - 0x03D0)
class AEmoteDice : public AActor
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x03D0(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmotingFramework.EmoteDice"));
		return ptr;
	}


	void SetDiceMesh(TEnumAsByte<EDiceType> DiceType);
	void SendTelemetryData(const FTransform& OrientationUsed, int RollNumber, TEnumAsByte<EDiceType> DiceType);
	void RollDice(int RollNumber, TEnumAsByte<EDiceType> DiceType);
};


// Class EmotingFramework.EmoteIdListingAsset
// 0x0010 (0x0038 - 0x0028)
class UEmoteIdListingAsset : public UDataAsset
{
public:
	TArray<FName>                                      EmoteIds;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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


// Class EmotingFramework.EmoteZoomInAnalogInputId
// 0x0000 (0x0038 - 0x0038)
class UEmoteZoomInAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmotingFramework.EmoteZoomInAnalogInputId"));
		return ptr;
	}

};


// Class EmotingFramework.EmoteZoomMouseAnalogInputId
// 0x0000 (0x0038 - 0x0038)
class UEmoteZoomMouseAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmotingFramework.EmoteZoomMouseAnalogInputId"));
		return ptr;
	}

};


// Class EmotingFramework.EmoteZoomOutAnalogInputId
// 0x0000 (0x0038 - 0x0038)
class UEmoteZoomOutAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EmotingFramework.EmoteZoomOutAnalogInputId"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
