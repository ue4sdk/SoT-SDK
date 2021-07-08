#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Audio_Play_Wwise_Event_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C
// 0x0038 (0x0408 - 0x03D0)
class ABP_Audio_Play_Wwise_Event_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWwiseEmitterComponent*                      BPAudioEvent;                                             // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseEvent*>                         WwiseEvent;                                               // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       Wwise_Game_Parameter;                                     // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Wwise_Game_Parameter_Value;                               // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     Wwise_Object_Pool_Wrapper;                                // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Audio_Play_Wwise_Event.BP_Audio_Play_Wwise_Event_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Audio_Play_Wwise_Event(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
