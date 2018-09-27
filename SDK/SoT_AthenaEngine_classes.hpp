#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaEngine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaEngine.AthenaEngineInterface
// 0x0000 (0x0028 - 0x0028)
class UAthenaEngineInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AthenaEngine.AthenaEngineInterface");
		return ptr;
	}

};


// Class AthenaEngine.EmptyObject
// 0x0000 (0x0028 - 0x0028)
class UEmptyObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AthenaEngine.EmptyObject");
		return ptr;
	}

};


// Class AthenaEngine.StringToAssetClassMap
// 0x0028 (0x0050 - 0x0028)
class UStringToAssetClassMap : public UDataAsset
{
public:
	TArray<struct FStringAssetClassPair>               StringAssetClassPairs;                                    // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AthenaEngine.StringToAssetClassMap");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
