#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_torch_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bsp_torch_a.bsp_torch_a_C
// 0x0018 (0x04B8 - 0x04A0)
class Absp_torch_a_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    vfx_fire_torch;                                           // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass bsp_torch_a.bsp_torch_a_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_bsp_torch_a(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
