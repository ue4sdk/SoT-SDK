#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_animation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass sot_frontend_01_a_animation.sot_frontend_01_a_animation_C
// 0x0058 (0x0500 - 0x04A8)
class Asot_frontend_01_a_animation_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AStaticMeshActor*                            shipSelectUI_title_14_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty;// 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            shipSelectUI_gallion_10_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty;// 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            shipSelectUI_sloop_12_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty;// 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          shipSelect_CharMarker2_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty;// 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_PirateGenerator_LineUp_C*                BP_PirateGenerator_LineUp_C_4_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty;// 0x04D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               MatineeActor_ShipSelect_ExecuteUbergraph_sot_frontend_01_a_animation_RefProperty;// 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               MatineeActor_ShipSelect_UniqueObjectNameForCooking_1530807069_RefProperty;// 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                ShipSelectScreenCam_UniqueObjectNameForCooking_1530807069_RefProperty;// 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               MatineeActor_ShipSelect_UniqueObjectNameForCooking_1530807072_RefProperty;// 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_PirateGenerator_LineUp_C*                BP_PirateGenerator_LineUp_C_4_UniqueObjectNameForCooking_1530807072_RefProperty;// 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass sot_frontend_01_a_animation.sot_frontend_01_a_animation_C"));
		return ptr;
	}


	void OnReturnToPirateSelection();
	void GetPirateSelector(class UPirateSelector** PirateSelectorComponent);
	void GetFrontendCameraComponent(class UFrontendCameraComponent** Frontend_Camera_Component);
	void goToShipSelCam();
	void ReceiveBeginPlay();
	void ShipSelect();
	void GenerateShipSelectionPirate();
	void HideShipSelectionPirate();
	void ExecuteUbergraph_sot_frontend_01_a_animation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
