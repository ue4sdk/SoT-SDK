#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShipNetProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeShipNetProxy.BP_LargeShipNetProxy_C
// 0x0018 (0x0498 - 0x0480)
class ABP_LargeShipNetProxy_C : public AShipNetProxy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Materials;                                        // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LargeShipNetProxy.BP_LargeShipNetProxy_C"));
		return ptr;
	}


	void Set_Colour_on_All_Materials(const struct FName& Variable_Name, const struct FLinearColor& Value);
	void Set_Value_on_All_Materials(const struct FName& Variable_Name, float Value);
	void Apply_Bits_to_Lanterns(int Lantern_Bits);
	void Create_Dynamic_Materials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnLanternStateChanged(int LanternStateBits);
	void ExecuteUbergraph_BP_LargeShipNetProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
