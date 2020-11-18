#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BarrelsOfPlenty_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BarrelsOfPlenty.BarrelsOfPlentyDebugSpawnLocation
// 0x0020 (0x0490 - 0x0470)
class ABarrelsOfPlentyDebugSpawnLocation : public AActor
{
public:
	TArray<struct FBarrelsOfPlentyDebugLocationEntry>  Objects;                                                  // 0x0470(0x0010) (Net, ZeroConstructor)
	struct FVector                                     SpawnCentre;                                              // 0x0480(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x048C(0x0004) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BarrelsOfPlenty.BarrelsOfPlentyDebugSpawnLocation"));
		return ptr;
	}

};


// Class BarrelsOfPlenty.BarrelsOfPlentySpawnProxy
// 0x0018 (0x0488 - 0x0470)
class ABarrelsOfPlentySpawnProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0470(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BarrelsOfPlenty.BarrelsOfPlentySpawnProxy"));
		return ptr;
	}

};


// Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStep
// 0x0008 (0x0070 - 0x0068)
class USpawnBarrelsOfPlentyStep : public UTaleQuestStep
{
public:
	class USpawnBarrelsOfPlentyStepDesc*               Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStep"));
		return ptr;
	}

};


// Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStepDesc
// 0x0010 (0x0040 - 0x0030)
class USpawnBarrelsOfPlentyStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        LocatorVar;                                               // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
