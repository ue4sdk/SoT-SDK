#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Instance_Struct.Instance_Struct
// 0x0018
struct FInstance_Struct
{
	class UStaticMesh*                                 Instanced_Mesh_3_DA0ED9664F980CB6723E5F8DBAE0E4F1;        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Transforms_6_F7C0C11A4AE9312CF4488D9060794DA0;            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
