#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomServerEntityEnumeration_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomServerEntityEnumeration.EntityEnumerationInterface
// 0x0000 (0x0028 - 0x0028)
class UEntityEnumerationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomServerEntityEnumeration.EntityEnumerationInterface"));
		return ptr;
	}

};


// Class CustomServerEntityEnumeration.EntityEnumerationService
// 0x0028 (0x0050 - 0x0028)
class UEntityEnumerationService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	UWorld*                                            World;                                                    // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomServerEntityEnumeration.EntityEnumerationService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
