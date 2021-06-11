#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Audio_LegendarySkullCloud_Play_Wwise_Event_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Audio_LegendarySkullCloud_Play_Wwise_Event.BP_Audio_LegendarySkullCloud_Play_Wwise_Event_C
// 0x0038 (0x0468 - 0x0430)
class ABP_Audio_LegendarySkullCloud_Play_Wwise_Event_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWwiseEmitter                               LegendaryFortHorn;                                        // 0x0440(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                                 LegendaryHornEvent;                                       // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Audio_LegendarySkullCloud_Play_Wwise_Event.BP_Audio_LegendarySkullCloud_Play_Wwise_Event_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Audio_LegendarySkullCloud_Play_Wwise_Event(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
