#pragma once

// Sea of Thieves (2.1) SDK

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
// 0x0030 (0x02E0 - 0x02B0)
class UHarbourComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	float                                              HarbourRadiusInCentimetres;                               // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x02BC(0x0024) MISSED OFFSET

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
