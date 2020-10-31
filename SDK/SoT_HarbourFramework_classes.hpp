#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_HarbourFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HarbourFramework.HarbourInterface
// 0x0000 (0x0028 - 0x0028)
class UHarbourInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HarbourFramework.HarbourInterface"));
		return ptr;
	}

};


// Class HarbourFramework.HarbourComponent
// 0x0020 (0x02B0 - 0x0290)
class UHarbourComponent : public USceneComponent
{
public:
	float                                              HarbourRadiusInCentimetres;                               // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0294(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HarbourFramework.HarbourComponent"));
		return ptr;
	}

};


// Class HarbourFramework.HarbourServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UHarbourServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HarbourFramework.HarbourServiceInterface"));
		return ptr;
	}

};


// Class HarbourFramework.HarbourService
// 0x0028 (0x0050 - 0x0028)
class UHarbourService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HarbourFramework.HarbourService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
