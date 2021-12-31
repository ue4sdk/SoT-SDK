#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RotatableSignalCloud_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RotatableSignalCloud.BP_RotatableSignalCloud_C
// 0x0010 (0x04C0 - 0x04B0)
class ABP_RotatableSignalCloud_C : public AGameplayEventSignal_StaticMesh
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	URotateMeshToLocalPlayerComponent*                 RotateMeshToLocalPlayer;                                  // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RotatableSignalCloud.BP_RotatableSignalCloud_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_RotatableSignalCloud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
