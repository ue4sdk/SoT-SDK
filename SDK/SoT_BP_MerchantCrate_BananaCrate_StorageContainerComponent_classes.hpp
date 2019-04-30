#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_BananaCrate_StorageContainerComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_BananaCrate_StorageContainerComponent.BP_MerchantCrate_BananaCrate_StorageContainerComponent_C
// 0x0000 (0x0250 - 0x0250)
class UBP_MerchantCrate_BananaCrate_StorageContainerComponent_C : public UStorageContainerComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantCrate_BananaCrate_StorageContainerComponent.BP_MerchantCrate_BananaCrate_StorageContainerComponent_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
