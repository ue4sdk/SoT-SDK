#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_VectorVM_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class VectorVM.NiagaraDataObject
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VectorVM.NiagaraDataObject");
		return ptr;
	}

};


// Class VectorVM.NiagaraCurveDataObject
// 0x0008 (0x0030 - 0x0028)
class UNiagaraCurveDataObject : public UNiagaraDataObject
{
public:
	class UCurveVector*                                CurveObj;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VectorVM.NiagaraCurveDataObject");
		return ptr;
	}

};


// Class VectorVM.NiagaraSparseVolumeDataObject
// 0x0020 (0x0048 - 0x0028)
class UNiagaraSparseVolumeDataObject : public UNiagaraDataObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VectorVM.NiagaraSparseVolumeDataObject");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
