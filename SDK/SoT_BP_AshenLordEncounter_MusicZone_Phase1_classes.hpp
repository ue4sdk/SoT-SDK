#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AshenLordEncounter_MusicZone_Phase1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AshenLordEncounter_MusicZone_Phase1.BP_AshenLordEncounter_MusicZone_Phase1_C
// 0x0019 (0x0449 - 0x0430)
class ABP_AshenLordEncounter_MusicZone_Phase1_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMusicZoneComponent*                         AnticipationMusicZone;                                    // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawnerMusicZoneComponent*                AISpawnerMusicZone;                                       // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInVulnerableState;                                      // 0x0448(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AshenLordEncounter_MusicZone_Phase1.BP_AshenLordEncounter_MusicZone_Phase1_C"));
		return ptr;
	}


	void OnRep_IsInVulnerableState();
	void UserConstructionScript();
	void OnVulnerabilityStateEntered();
	void ExecuteUbergraph_BP_AshenLordEncounter_MusicZone_Phase1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
