#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShantyPuzzle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ShantyPuzzle.ShantyPuzzleComponent
// 0x00E0 (0x0370 - 0x0290)
class UShantyPuzzleComponent : public USceneComponent
{
public:
	TArray<struct FShantyPuzzleInteractionZoneDefinition> ShantyPuzzleInteractionZoneDefinitions;                   // 0x0290(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	bool                                               TimeLimited;                                              // 0x02A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldMoveEnsembleToActorPosition;                        // 0x02A1(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02A2(0x0006) MISSED OFFSET
	struct FGameTimeRange                              ActiveTimeRange;                                          // 0x02A8(0x0010) (Edit)
	TArray<class UShantyPuzzleInteractionZoneComponent*> ShantyPuzzleInteractionZones;                             // 0x02B8(0x0010) (ExportObject, ZeroConstructor)
	class AEnsemble*                                   CurrentlyPlayingShantyPuzzleEnsemble;                     // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x02D0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShantyPuzzle.ShantyPuzzleComponent"));
		return ptr;
	}


	void OnEndOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex);
	void OnBeginOverlap(class AActor* InActor, class UPrimitiveComponent* InComponent, int InOtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class ShantyPuzzle.ShantyPuzzleInteractionZoneComponent
// 0x0020 (0x0570 - 0x0550)
class UShantyPuzzleInteractionZoneComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0550(0x0020) MISSED OFFSET

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
