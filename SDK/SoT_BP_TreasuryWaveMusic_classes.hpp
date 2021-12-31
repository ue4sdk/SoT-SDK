#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasuryWaveMusic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C
// 0x0045 (0x0415 - 0x03D0)
class ABP_TreasuryWaveMusic_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMusicZoneComponent*                         MusicZone;                                                // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WaveActiveGroup;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WaveActive;                                               // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WavePassive;                                              // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WaveIsActive;                                             // 0x03F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MusicZoneIsActive;                                        // 0x03F9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TreasuryComplete;                                         // 0x03FA(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03FB(0x0001) MISSED OFFSET
	struct FName                                       AiTypeGroupName;                                          // 0x03FC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AiTypeSirens;                                             // 0x0404(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AiTypeOceanCrawlers;                                      // 0x040C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WaveTypeIsSirens;                                         // 0x0414(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C"));
		return ptr;
	}


	void Client_PlayFinalWaveMusic();
	void Client_StopFinalWaveMusic();
	void Client_SetSirensOrOceanCrawlers(bool InIsSirents);
	void OnRep_WaveType();
	void Server_SetSirensOrOceanCrawlers(bool IsSirens);
	void Server_PlayOneShotSfx_TreasuryFillEmpty(bool InIsWaterFilling);
	void Server_PlayOneShot_TreasuryFillEmpty(bool InIsWaterFilling);
	void OnRep_TreasuryComplete();
	void Server_PlayOneshot_TreasuryComplete();
	void Server_PlayOneshot_NewWave();
	void Client_SetIsMusicZoneActive(bool InIsMusicZoneActive);
	void Server_SetMusicZoneIsActive(bool InIsMusicZoneActive);
	void OnRep_MusicZoneIsActive();
	void Server_UpdateWaveActiveness(bool InIsWaveActive);
	void OnRep_WaveIsActive();
	void Client_SwitchWaveActiveness(bool IsWaveActive);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Multicast_PlayFinalMusic();
	void Multicast_StopFinalMusic();
	void RefreshState();
	void Multicast_RefreshMusic();
	void ExecuteUbergraph_BP_TreasuryWaveMusic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
