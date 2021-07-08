#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_EmissaryTable_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EmissaryTable_01.BP_EmissaryTable_01_C
// 0x0058 (0x0598 - 0x0540)
class ABP_EmissaryTable_01_C : public AEmissaryVoteInteractionActor
{
public:
	class UEmissaryActiveTableVisualiserComponent*     EmissaryActiveTableVisualiser;                            // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVoteAudioComponent*                         VoteAudio;                                                // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshVoteVisualiserComponent*          StaticMeshVoteVisualiser;                                 // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInlineVotingInteractionComponent*           InlineVotingInteraction;                                  // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActionRulesComponent*                       ActionRules;                                              // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        VoteIndicator4;                                           // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        VoteIndicator3;                                           // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        VoteIndicator2;                                           // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        VoteIndicator1;                                           // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_emissary_table_01_a;                                  // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EmissaryTable_01.BP_EmissaryTable_01_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
