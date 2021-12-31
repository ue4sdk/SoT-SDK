#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomDeath_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomDeath.CustomDeathInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomDeathInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomDeath.CustomDeathInterface"));
		return ptr;
	}


	void SetShouldUseRevivalFlow(const FSetShouldUseRevivalFlowData& SetShouldUseRevivalFlowData);
	void SetShouldSkipFerryOfTheDamned(const FSetShouldSkipFerryOfTheDamnedData& SetShouldSkipFerryOfTheDamnedData);
	void SetGameModeDeathPenaltyRespawnTimer(const FGameModeDeathPenaltyRespawnTimerData& GameModeDeathPenaltyRespawnTimerData);
	bool SetCustomPlayerStart(const FSetCustomPlayerStartData& SetCustomPlayerStartData);
	void SetCustomConfigForPlayer(int PlayerId, const FCustomDeathConfiguration& CustomDeathConfiguration);
	void ResetCustomConfigForPlayer(const FResetCustomConfigForPlayerData& ResetCustomConfigForPlayerData);
	void KillPlayer(const FKillPlayerData& KillPlayerData);
	void KillCrew(const FKillCrewData& KillCrewData);
	bool GetShouldUseRevivalFlow(int PlayerId, bool bDefaultValue);
	bool GetShouldSkipFerryOfTheDamned(int PlayerId);
	APlayerStart* GetCustomPlayerStart(int PlayerId);
	void ForcePlayerRespawn(const FForcePlayerRespawnData& ForcePlayerRespawnData);
	int DestroyCustomPlayerStart(const FDestroyCustomPlayerStartData& DestroyCustomPlayerStartData);
	APlayerStart* CreateNewCustomPlayerStart(const FCustomPlayerStartConfigData& CustomPlayerStartConfigData);
};


// Class CustomDeath.CustomDeathService
// 0x0098 (0x0468 - 0x03D0)
class ACustomDeathService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03D0(0x0038) MISSED OFFSET
	TArray<APlayerStart*>                              CustomPlayerStarts;                                       // 0x0408(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0418(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomDeath.CustomDeathService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
