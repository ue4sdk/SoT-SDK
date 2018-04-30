#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Mast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Mast.BP_Mast_C
// 0x00B8 (0x07A8 - 0x06F0)
class ABP_Mast_C : public AMast
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x06F0(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mast.BP_Mast_C");
		return ptr;
	}


	void Customise_Static_Mesh(class UStaticMesh* New_Static_Mesh, class UStaticMeshComponent* Static_Mesh_Component);
	void Trim_Array_Func(int Size, TArray<class UObject*>* TargetArray);
	void Initialise_Sail_Parameters();
	void Populate_Lists_of_Yards_and_Sails();
	void Cull_Excess_Components(TArray<class UActorComponent*>* TargetArray);
	void Initialise_Sails();
	void UserConstructionScript();
	void OnMastDescLoaded(class UMastDescAsset** MastDesc);
	void ExecuteUbergraph_BP_Mast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
