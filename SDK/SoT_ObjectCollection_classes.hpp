#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ObjectCollection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ObjectCollection.ObjectCollectorInterface
// 0x0000 (0x0028 - 0x0028)
class UObjectCollectorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ObjectCollection.ObjectCollectorInterface");
		return ptr;
	}

};


// Class ObjectCollection.TestCollector
// 0x0060 (0x0088 - 0x0028)
class UTestCollector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ObjectCollection.TestCollector");
		return ptr;
	}

};


// Class ObjectCollection.TestObjectForCollection
// 0x0048 (0x0070 - 0x0028)
class UTestObjectForCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ObjectCollection.TestObjectForCollection");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
