#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_HttpJournal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HttpJournal.HttpJournalSettings
// 0x0028 (0x0050 - 0x0028)
class UHttpJournalSettings : public UObject
{
public:
	class FString                                      JournalUrl;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      JournalAuthKey;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	int                                                MaxLogVerbosity;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class HttpJournal.HttpJournalSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
