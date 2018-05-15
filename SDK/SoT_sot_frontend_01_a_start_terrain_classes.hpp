#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_start_terrain_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C
// 0x0030 (0x04A8 - 0x0478)
class Asot_frontend_01_a_start_terrain_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               IsPlaying;                                                // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0481(0x0007) MISSED OFFSET
	class AMatineeActor*                               BakedOpenSeqCam_ExecuteUbergraph_sot_frontend_01_a_start_terrain_RefProperty;// 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_Audio_Play_Wwise_Event_Function_C*       BP_Audio_Play_Wwise_Event_Function_C_2_ExecuteUbergraph_sot_frontend_01_a_start_terrain_RefProperty;// 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                IntroCam_ExecuteUbergraph_sot_frontend_01_a_start_terrain_RefProperty;// 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_Audio_Play_Wwise_Event_Function_C*       BP_Audio_Play_Wwise_Event_Function_C_2_UniqueObjectNameForCooking_993562282_RefProperty;// 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C");
		return ptr;
	}


	void LeaveMapTableAnimation();
	void GetFrontendCamera(class UFrontendCameraComponent** CameraComponent);
	void K2Node_MatineeController_10_MatineeSequenceFinished();
	void K2Node_MatineeController_10_Finished();
	void PlayIntroMatinee();
	void EnteredEngageState();
	void SetMatineePlaybackRate(float PlaybackRate);
	void ReceiveBeginPlay();
	void ExitIntroMatinee();
	void ExecuteUbergraph_sot_frontend_01_a_start_terrain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
