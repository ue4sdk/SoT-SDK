#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TheArtOfTheTrickster_VaultEncounter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TheArtOfTheTrickster_VaultEncounter.BP_TheArtOfTheTrickster_VaultEncounter_C
// 0x0031 (0x00D9 - 0x00A8)
class UBP_TheArtOfTheTrickster_VaultEncounter_C : public UBlueprintSpawnAIStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CaptainName;                                              // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              NamePool;                                                 // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentNameIndex;                                         // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EnemiesLeft;                                              // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TotemSpawned;                                             // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TheArtOfTheTrickster_VaultEncounter.BP_TheArtOfTheTrickster_VaultEncounter_C"));
		return ptr;
	}


	void OnSpawn(class APawn* Pawn);
	void OnDespawn(class APawn* Pawn, TEnumAsByte<ECharacterDeathType> DeathType);
	void ExecuteUbergraph_BP_TheArtOfTheTrickster_VaultEncounter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
