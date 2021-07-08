#pragma once

// Sea of Thieves (2) SDK

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
// 0x0020 (0x03F0 - 0x03D0)
class ABarrelsOfPlentyDebugSpawnLocation : public AActor
{
public:
	TArray<struct FBarrelsOfPlentyDebugLocationEntry>  Objects;                                                  // 0x03D0(0x0010) (Net, ZeroConstructor)
	struct FVector                                     SpawnCentre;                                              // 0x03E0(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x03EC(0x0004) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BarrelsOfPlenty.BarrelsOfPlentyDebugSpawnLocation"));
		return ptr;
	}

};


// Class BarrelsOfPlenty.BarrelsOfPlentySpawnProxy
// 0x0028 (0x03F8 - 0x03D0)
class ABarrelsOfPlentySpawnProxy : public AActor
{
public:
	class AShip*                                       Ship;                                                     // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D8(0x0018) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x03F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

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
