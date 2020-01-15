#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Waterfall_crooks_hollow_DynamicFlow_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Waterfall_crooks_hollow_DynamicFlow_02.BP_Waterfall_crooks_hollow_DynamicFlow_02_C
// 0x0018 (0x0428 - 0x0410)
class ABP_Waterfall_crooks_hollow_DynamicFlow_02_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDynamicFlowComponent*                       DynamicFlow;                                              // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Waterfall_crooks_hollow_DynamicFlow_02.BP_Waterfall_crooks_hollow_DynamicFlow_02_C"));
		return ptr;
	}


	void Initialize_Materials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Waterfall_crooks_hollow_DynamicFlow_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
