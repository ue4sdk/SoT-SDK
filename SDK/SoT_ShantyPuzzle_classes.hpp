#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShantyPuzzle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ShantyPuzzle.ShantyPuzzleInterface
// 0x0000 (0x0028 - 0x0028)
class UShantyPuzzleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShantyPuzzle.ShantyPuzzleInterface"));
		return ptr;
	}

};


// Class ShantyPuzzle.ShantyPuzzleComponent
// 0x0110 (0x03C0 - 0x02B0)
class UShantyPuzzleComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	class UClass*                                      RequiredShantyItemDesc;                                   // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FShantyPuzzleInteractionZoneDefinition> ShantyPuzzleInteractionZoneDefinitions;                   // 0x02C0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	bool                                               TimeLimited;                                              // 0x02D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldMoveEnsembleToActorPosition;                        // 0x02D1(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x02D2(0x0006) MISSED OFFSET
	struct FGameTimeRange                              ActiveTimeRange;                                          // 0x02D8(0x0010) (Edit)
	TArray<class UShantyPuzzleInteractionZoneComponent*> ShantyPuzzleInteractionZones;                             // 0x02E8(0x0010) (ExportObject, ZeroConstructor)
	class AEnsemble*                                   CurrentlyPlayingShantyPuzzleEnsemble;                     // 0x02F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC0];                                      // 0x0300(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShantyPuzzle.ShantyPuzzleComponent"));
		return ptr;
	}


	void OnEndOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex);
	void OnBeginOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class ShantyPuzzle.ShantyPuzzleInteractionZoneComponent
// 0x0020 (0x05C0 - 0x05A0)
class UShantyPuzzleInteractionZoneComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x05A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShantyPuzzle.ShantyPuzzleInteractionZoneComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
