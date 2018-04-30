#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Lantern.BP_Lantern_C
// 0x005C (0x0944 - 0x08E8)
class ABP_Lantern_C : public ALantern
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x08E8(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lantern.BP_Lantern_C");
		return ptr;
	}


	void CreateLanternDynamicMaterial();
	void OnAttachThirdPerson();
	void OnAttachFirstPerson();
	void TurnOff();
	void TurnOn();
	void UserConstructionScript();
	void ReceiveWieldFirstPerson();
	void ReceiveWieldThirdPerson();
	void ReceiveBeginPlay();
	void ReceiveLightChange();
	void TriggerGlow();
	void PostMeshChangedBPEvent();
	void ExecuteUbergraph_BP_Lantern(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
