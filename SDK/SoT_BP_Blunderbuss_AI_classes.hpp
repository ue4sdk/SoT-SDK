#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Blunderbuss_AI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Blunderbuss_AI.BP_Blunderbuss_AI_C
// 0x0009 (0x0AE9 - 0x0AE0)
class ABP_Blunderbuss_AI_C : public ABP_Blunderbuss_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<EEmitterRelationship>                  sfx_relationship_1;                                       // 0x0AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Blunderbuss_AI.BP_Blunderbuss_AI_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Blunderbuss_AI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
