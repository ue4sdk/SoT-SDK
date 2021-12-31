#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RemoteEmergentVoyage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RemoteEmergentVoyage.RemoteEmergentVoyageInterface
// 0x0000 (0x0028 - 0x0028)
class URemoteEmergentVoyageInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RemoteEmergentVoyage.RemoteEmergentVoyageInterface"));
		return ptr;
	}

};


// Class RemoteEmergentVoyage.RemoteEmergentVoyageService
// 0x0008 (0x0030 - 0x0028)
class URemoteEmergentVoyageService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RemoteEmergentVoyage.RemoteEmergentVoyageService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
