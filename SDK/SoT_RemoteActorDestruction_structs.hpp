#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RemoteActorDestruction.DestroyActorData
// 0x0004
struct FDestroyActorData
{
	int                                                ActorNetID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RemoteActorDestruction.DestroyAllExistingActorsByClassData
// 0x0010
struct FDestroyAllExistingActorsByClassData
{
	TArray<FString>                                    ActorClassNames;                                          // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
