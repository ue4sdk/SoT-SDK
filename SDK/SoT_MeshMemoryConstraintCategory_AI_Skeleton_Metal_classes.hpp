#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MeshMemoryConstraintCategory_AI_Skeleton_Metal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeshMemoryConstraintCategory_AI_Skeleton_Metal.MeshMemoryConstraintCategory_AI_Skeleton_Metal_C
// 0x0000 (0x0028 - 0x0028)
class UMeshMemoryConstraintCategory_AI_Skeleton_Metal_C : public UMeshMemoryConstraintCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MeshMemoryConstraintCategory_AI_Skeleton_Metal.MeshMemoryConstraintCategory_AI_Skeleton_Metal_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
