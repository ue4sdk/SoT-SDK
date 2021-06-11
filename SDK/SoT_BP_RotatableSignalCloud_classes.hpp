#pragma once

// Sea of Thieves (2.1) SDK

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
// 0x0010 (0x0520 - 0x0510)
class ABP_RotatableSignalCloud_C : public AGameplayEventSignal_StaticMesh
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URotateMeshToLocalPlayerComponent*           RotateMeshToLocalPlayer;                                  // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
