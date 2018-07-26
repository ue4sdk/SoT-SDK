#pragma once

// Sea of Thieves (1.1.6) SDK

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
// 0x0010 (0x0498 - 0x0488)
class ABP_Figurehead_C : public AGenericPart
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Figurehead;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Figurehead.BP_Figurehead_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPartMeshLoaded(class UStaticMesh** Mesh);
	void OnPartDescLoaded(class UGenericPartDescAsset** Desc);
	void ExecuteUbergraph_BP_Figurehead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
