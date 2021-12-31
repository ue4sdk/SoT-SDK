#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_OrderofSouls_EmissarySailMesh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OrderofSouls_EmissarySailMesh.BP_OrderofSouls_EmissarySailMesh_C
// 0x0000 (0x05F0 - 0x05F0)
class UBP_OrderofSouls_EmissarySailMesh_C : public UEmissaryRepresentationMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_OrderofSouls_EmissarySailMesh.BP_OrderofSouls_EmissarySailMesh_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
