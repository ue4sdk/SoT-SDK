#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_arena_start_anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C
// 0x0018 (0x04C8 - 0x04B0)
class Asot_frontend_01_arena_start_anim_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Audio_Play_Wwise_Event_Function_C*       Arena_Audio_Comp_ExecuteUbergraph_sot_frontend_01_arena_start_anim_RefProperty;// 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               ArenaTutorial_Matinee_ExecuteUbergraph_sot_frontend_01_arena_start_anim_RefProperty;// 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C"));
		return ptr;
	}


	void LeaveArenaTutorialAnimation();
	void GetFrontendCameraComponent(class UFrontendCameraComponent** Camera_Component);
	void K2Node_MatineeController_35_Finished();
	void ReceiveBeginPlay();
	void StartArenaTutorial();
	void EndArenaTutorial();
	void SkipArenaTutorial();
	void ExecuteUbergraph_sot_frontend_01_arena_start_anim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
