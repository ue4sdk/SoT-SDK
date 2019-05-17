#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_Lovers_Rose_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TT_Lovers_Rose.BP_TT_Lovers_Rose_C
// 0x0008 (0x04E8 - 0x04E0)
class ABP_TT_Lovers_Rose_C : public ABP_TT_Lovers_Cutscene_Ghost_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TT_Lovers_Rose.BP_TT_Lovers_Rose_C"));
		return ptr;
	}


	void UserConstructionScript();
	void BindToAnimNotify();
	void ExecuteUbergraph_BP_TT_Lovers_Rose(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
