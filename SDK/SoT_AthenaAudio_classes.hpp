#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaAudio.AthenaAudioConfig
// 0x0010 (0x0038 - 0x0028)
class UAthenaAudioConfig : public UDataAsset
{
public:
	UWwiseObjectPoolWrapper*                           ItemProxyPool;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	UWwiseObjectPoolWrapper*                           AnimNotifyPool;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.AthenaAudioConfig"));
		return ptr;
	}

};


// Class AthenaAudio.AthenaAudioModuleSettings
// 0x0010 (0x0048 - 0x0038)
class UAthenaAudioModuleSettings : public UDeveloperSettings
{
public:
	FStringAssetReference                              AudioConfigAsset;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.AthenaAudioModuleSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
