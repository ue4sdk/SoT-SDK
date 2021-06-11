#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ContestRowboats_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ContestRowboats.ContestRowboatsServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UContestRowboatsServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ContestRowboats.ContestRowboatsServiceInterface"));
		return ptr;
	}

};


// Class ContestRowboats.ContestRowboatsService
// 0x0060 (0x0490 - 0x0430)
class AContestRowboatsService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET
	class UClass*                                      RowboatClass;                                             // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0440(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ContestRowboats.ContestRowboatsService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
