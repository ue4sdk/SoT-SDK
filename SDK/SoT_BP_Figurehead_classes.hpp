#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Figurehead_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Figurehead.BP_Figurehead_C
// 0x0010 (0x04C0 - 0x04B0)
class ABP_Figurehead_C : public AGenericPart
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Figurehead;                                               // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Figurehead.BP_Figurehead_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnPartMeshLoaded(class UStaticMesh* Mesh);
	void OnPartDescLoaded(class UGenericPartDescAsset* Desc);
	void ExecuteUbergraph_BP_Figurehead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
