#pragma once

// Sea of Thieves (2) SDK

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
// 0x0020 (0x04E0 - 0x04C0)
class ABP_SmallShipNetProxy_C : public AShipNetProxy
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UStaticMeshComponent*                              EmissaryFlags;                                            // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<UMaterialInstanceDynamic*>                  Dynamic_Materials;                                        // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallShipNetProxy.BP_SmallShipNetProxy_C"));
		return ptr;
	}


	void Set_Colour_on_All_Materials(const FName& ParameterName, const FLinearColor& Value);
	void Set_Value_on_All_Materials(const FName& Variable_Name, float Value);
	void Apply_Bits_to_Lanterns(int bits);
	void Create_Dynamic_Materials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnLanternStateChanged(int LanternStateBits);
	void OnEmissaryActiveStateChanged(bool InNewEmissaryActiveState);
	void ExecuteUbergraph_BP_SmallShipNetProxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
