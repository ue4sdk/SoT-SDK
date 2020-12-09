#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Snake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Snake.BP_Snake_C
// 0x0020 (0x0BF0 - 0x0BD0)
class ABP_Snake_C : public ABP_Fauna_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAIItemSpawnComponent*                       AIItemSpawn;                                              // 0x0BD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVenomComponent*                             Venom;                                                    // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SnakeSkeletalMesh;                                        // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Snake.BP_Snake_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnAgitatedDirected(const struct FVector& SourceLocation, const struct FVector& Direction, class AActor* Crate);
	void ExecuteUbergraph_BP_Snake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
