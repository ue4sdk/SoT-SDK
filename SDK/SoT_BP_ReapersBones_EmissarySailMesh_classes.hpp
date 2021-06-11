#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ReapersBones_EmissarySailMesh_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ReapersBones_EmissarySailMesh.BP_ReapersBones_EmissarySailMesh_C
// 0x0000 (0x05C0 - 0x05C0)
class UBP_ReapersBones_EmissarySailMesh_C : public UEmissaryRepresentationMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ReapersBones_EmissarySailMesh.BP_ReapersBones_EmissarySailMesh_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
