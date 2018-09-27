#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipNetProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShipNetProxy.BP_SmallShipNetProxy_C
// 0x0018 (0x0518 - 0x0500)
class ABP_SmallShipNetProxy_C : public AShipNetProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Materials;                                        // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SmallShipNetProxy.BP_SmallShipNetProxy_C");
		return ptr;
	}


	void Set_Value_on_All_Materials(const struct FName& Variable_Name, float Value);
	void Apply_Bits_to_Lanterns(unsigned char byte);
	void Create_Dynamic_Materials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnLanternStateChanged(unsigned char LanternStateBits);
	void ExecuteUbergraph_BP_SmallShipNetProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
