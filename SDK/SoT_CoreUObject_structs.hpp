#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	None                           = 1,
	CIM_CurveBreak                 = 2,
	None01                         = 3
};


// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive    = 0,
	None                           = 1,
	IntProperty                    = 2,
	EMoveComponentAction__Move     = 3
};


// Enum CoreUObject.EUnit
enum class EUnit : uint8_t
{
	EUnit__Micrometers             = 0,
	None                           = 1,
	EUnit__Kilometers              = 2,
	None01                         = 3,
	NameProperty                   = 4,
	EUnit__Miles                   = 5,
	None02                         = 6,
	EUnit__MetersPerSecond         = 7,
	None03                         = 8,
	HoleContainer                  = 9,
	EUnit__Farenheit               = 10,
	None04                         = 11,
	EUnit__Grams                   = 12,
	None05                         = 13,
	UInt16Property                 = 14,
	EUnit__Pounds                  = 15,
	None06                         = 16,
	Int8Property                   = 17,
	EUnit__KilogramsForce          = 18,
	None07                         = 19,
	EUnit__Gigahertz               = 20,
	None08                         = 21,
	EUnit__Megabytes               = 22,
	None09                         = 23,
	EUnit__Milliseconds            = 24,
	None10                         = 25,
	EUnit__Days                    = 26,
	None11                         = 27,
	EUnit__EUnit_MAX               = 28,
	None12                         = 29,
	None13                         = 30,
	None14                         = 31,
	None15                         = 32,
	BoolProperty                   = 33,
	None16                         = 34,
	None17                         = 35
};


// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
	EMouseCursor__None             = 0,
	None                           = 1,
	EMouseCursor__ResizeUpDown     = 2,
	None01                         = 3,
	EMouseCursor__Crosshairs       = 4,
	None02                         = 5,
	StructProperty                 = 6,
	EMouseCursor__SlashedCircle    = 7,
	None03                         = 8,
	TextProperty                   = 9
};


// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	None                           = 1,
	PF_G16                         = 2,
	None01                         = 3,
	PF_UYVY                        = 4,
	None02                         = 5,
	PF_ShadowDepth                 = 6,
	None03                         = 7,
	PF_G16R16F_FILTER              = 8,
	None04                         = 9,
	PF_D24                         = 10,
	None05                         = 11,
	PF_V8U8                        = 12,
	None06                         = 13,
	PF_R32_UINT                    = 14,
	None07                         = 15,
	PF_R16_UINT                    = 16,
	None08                         = 17,
	PF_R5G6B5_UNORM                = 18,
	None09                         = 19,
	PF_R8G8                        = 20,
	None10                         = 21,
	PF_X24_G8                      = 22,
	None11                         = 23,
	PF_R32G32B32A32_UINT           = 24,
	None12                         = 25,
	PF_ASTC_8x8                    = 26,
	None13                         = 27,
	PF_BC7                         = 28,
	None14                         = 29,
	PF_R32G32_SINT                 = 30,
	None15                         = 31,
	None16                         = 32
};


// Enum CoreUObject.EAxis
enum class EAxis : uint8_t
{
	EAxis__None                    = 0,
	None                           = 1,
	EAxis__EAxis_MAX               = 2,
	ETextCommit__Default           = 3
};


// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
	ELogTimes__None                = 0,
	None                           = 1,
	ESearchDir__FromStart          = 2
};


// Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
	ESearchDir__FromStart          = 0,
	None                           = 1
};


// Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive     = 0,
	None                           = 1
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CoreUObject.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                        // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                B;                                                        // 0x0004(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                C;                                                        // 0x0008(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                D;                                                        // 0x000C(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

    inline FVector() : X(0.f), Y(0.f), Z(0.f) {}

    inline FVector(float x, float y, float z) : X(x), Y(y), Z(z) {}

    inline FVector operator + (const FVector& other) const { return FVector(X + other.X, Y + other.Y, Z + other.Z); }

    inline FVector operator - (const FVector& other) const { return FVector(X - other.X, Y - other.Y, Z - other.Z); }

    inline FVector operator * (float scalar) const { return FVector(X * scalar, Y * scalar, Z * scalar); }

    inline FVector& operator=  (const FVector& other) { X  = other.X; Y  = other.Y; Z  = other.Z; return *this; }

    inline FVector& operator+= (const FVector& other) { X += other.X; Y += other.Y; Z += other.Z; return *this; }

    inline FVector& operator-= (const FVector& other) { X -= other.X; Y -= other.Y; Z -= other.Z; return *this; }

    inline FVector& operator*= (const float other)    { X *= other;   Y *= other;   Z *= other;   return *this; }

};

// ScriptStruct CoreUObject.Vector4
// 0x0010
struct alignas(16) FVector4
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

	inline FVector2D()
		: X(0), Y(0)
	{ }

	inline FVector2D(float x, float y)
		: X(x),
		  Y(y)
	{ }

};

// ScriptStruct CoreUObject.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                                       // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     v2;                                                       // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Plane
// 0x0004 (0x0010 - 0x000C)
struct alignas(16) FPlane : public FVector
{
	float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Rotator
// 0x000C
struct FRotator
{
	float                                              Pitch;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Roll;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Quat
// 0x0010
struct alignas(16) FQuat
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.PackedNormal
// 0x0004
struct FPackedNormal
{
	unsigned char                                      X;                                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      Y;                                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      Z;                                                        // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      W;                                                        // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.IntVector
// 0x000C
struct FIntVector
{
	int                                                X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      G;                                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      R;                                                        // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      A;                                                        // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              G;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              B;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              A;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

	inline FLinearColor()
		: R(0), G(0), B(0), A(0)
	{ }

	inline FLinearColor(float r, float g, float b, float a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

};

// ScriptStruct CoreUObject.Box
// 0x001C
struct FBox
{
	struct FVector                                     Min;                                                      // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     Max;                                                      // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      IsValid;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.Box2D
// 0x0014
struct FBox2D
{
	struct FVector2D                                   Min;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector2D                                   Max;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      IsValid;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.OrientedBox
// 0x003C
struct FOrientedBox
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     AxisX;                                                    // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     AxisY;                                                    // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     AxisZ;                                                    // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ExtentX;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ExtentY;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FPlane                                      YPlane;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FPlane                                      ZPlane;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FPlane                                      WPlane;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointFloat
// 0x0014
struct FInterpCurvePointFloat
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutVal;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangent;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveFloat
// 0x0018
struct FInterpCurveFloat
{
	TArray<struct FInterpCurvePointFloat>              Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
// 0x0020
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutVal;                                                   // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ArriveTangent;                                            // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LeaveTangent;                                             // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveVector2D
// 0x0018
struct FInterpCurveVector2D
{
	TArray<struct FInterpCurvePointVector2D>           Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointVector
// 0x002C
struct FInterpCurvePointVector
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutVal;                                                   // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ArriveTangent;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeaveTangent;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveVector
// 0x0018
struct FInterpCurveVector
{
	TArray<struct FInterpCurvePointVector>             Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointQuat
// 0x0050
struct FInterpCurvePointQuat
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FQuat                                       OutVal;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FQuat                                       ArriveTangent;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FQuat                                       LeaveTangent;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveQuat
// 0x0018
struct FInterpCurveQuat
{
	TArray<struct FInterpCurvePointQuat>               Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// 0x0050
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTwoVectors                                 OutVal;                                                   // 0x0004(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTwoVectors                                 ArriveTangent;                                            // 0x001C(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTwoVectors                                 LeaveTangent;                                             // 0x0034(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
// 0x0018
struct FInterpCurveTwoVectors
{
	TArray<struct FInterpCurvePointTwoVectors>         Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// 0x0038
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutVal;                                                   // 0x0004(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ArriveTangent;                                            // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LeaveTangent;                                             // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveLinearColor
// 0x0018
struct FInterpCurveLinearColor
{
	TArray<struct FInterpCurvePointLinearColor>        Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.Transform
// 0x0030
struct alignas(16) FTransform
{
	struct FQuat                                       Rotation;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector                                     Scale3D;                                                  // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct CoreUObject.RandomStream
// 0x0008
struct FRandomStream
{
	int                                                InitialSeed;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Seed;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.DateTime
// 0x0008
struct FDateTime
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct CoreUObject.Timespan
// 0x0008
struct FTimespan
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct CoreUObject.StringAssetReference
// 0x0010
struct FStringAssetReference
{
	class FString                                      AssetLongPathname;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct CoreUObject.StringClassReference
// 0x0000 (0x0010 - 0x0010)
struct FStringClassReference : public FStringAssetReference
{

};

// ScriptStruct CoreUObject.FallbackStruct
// 0x0001
struct FFallbackStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct CoreUObject.FloatRangeBound
// 0x0008
struct FFloatRangeBound
{
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.FloatRange
// 0x0010
struct FFloatRange
{
	struct FFloatRangeBound                            LowerBound;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRangeBound                            UpperBound;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.Int32RangeBound
// 0x0008
struct FInt32RangeBound
{
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.Int32Range
// 0x0010
struct FInt32Range
{
	struct FInt32RangeBound                            LowerBound;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FInt32RangeBound                            UpperBound;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.FloatInterval
// 0x0008
struct FFloatInterval
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.Int32Interval
// 0x0008
struct FInt32Interval
{
	int                                                Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
