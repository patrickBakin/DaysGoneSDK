#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Flamethrower_Animation.Flamethrower_Animation_C
// 0x0960 (0x0E00 - 0x04A0)
class UFlamethrower_Animation_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CD7CEDAB4D2CE562FAE8219D4BAC9808;      // 0x04A8(0x0048)
	struct FBendAnimNode_TransformBone                 BendAnimGraphNode_TransformBone_3A8A1DAD475A98CC00367E82D465C14B;// 0x04F0(0x00C0)
	struct FBendAnimNode_TransformBone                 BendAnimGraphNode_TransformBone_A01BA91F4FE68418C2E5329DF7A972A1;// 0x05B0(0x00C0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5AE1854848954EACF7B3CAA7CC8AA40C;// 0x0670(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_25B62C0445488DB3D9918DB5C1CFBD50;// 0x06B8(0x0038)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_94CC78C64B20C386254947A76F7E8E0A;// 0x06F0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0738(0x0008) MISSED OFFSET
	struct FBendAnimNode_TransformBone                 BendAnimGraphNode_TransformBone_365D717045831F3467AB7495D8623D5E;// 0x0740(0x00C0)
	struct FBendAnimNode_TransformBone                 BendAnimGraphNode_TransformBone_99F43B75454BB062028A509084CFC4F7;// 0x0800(0x00C0)
	struct FBendAnimNode_TransformBone                 BendAnimGraphNode_TransformBone_FAA926EC4DD8457C8B365FBCAD3A1946;// 0x08C0(0x00C0)
	struct FBendAnimNode_TransformBone                 BendAnimGraphNode_TransformBone_2984C43D4B831BB60A33819B3A72A9E4;// 0x0980(0x00C0)
	struct FBendAnimNode_TransformBone                 BendAnimGraphNode_TransformBone_B6C83E9A4C384DA7A2812BA9EFB7C5A0;// 0x0A40(0x00C0)
	struct FBendAnimNode_TransformBone                 BendAnimGraphNode_TransformBone_A53AF77D47A8B799A600A594C3FF49E0;// 0x0B00(0x00C0)
	struct FBendAnimNode_TransformBone                 BendAnimGraphNode_TransformBone_0A1A39404380EDC7C9BCDD9958E64428;// 0x0BC0(0x00C0)
	struct FBendAnimNode_TransformBone                 BendAnimGraphNode_TransformBone_450AAD5147A4BB1D60B0C686B44E872A;// 0x0C80(0x00C0)
	struct FBendAnimNode_TransformBone                 BendAnimGraphNode_TransformBone_C089AAE846869649AA91739C88AF793F;// 0x0D40(0x00C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Flamethrower_Animation.Flamethrower_Animation_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Flamethrower_Animation_BendAnimGraphNode_TransformBone_3A8A1DAD475A98CC00367E82D465C14B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Flamethrower_Animation_BendAnimGraphNode_TransformBone_A01BA91F4FE68418C2E5329DF7A972A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Flamethrower_Animation_BendAnimGraphNode_TransformBone_365D717045831F3467AB7495D8623D5E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Flamethrower_Animation_BendAnimGraphNode_TransformBone_99F43B75454BB062028A509084CFC4F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Flamethrower_Animation_BendAnimGraphNode_TransformBone_FAA926EC4DD8457C8B365FBCAD3A1946();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Flamethrower_Animation_BendAnimGraphNode_TransformBone_2984C43D4B831BB60A33819B3A72A9E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Flamethrower_Animation_BendAnimGraphNode_TransformBone_B6C83E9A4C384DA7A2812BA9EFB7C5A0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Flamethrower_Animation_BendAnimGraphNode_TransformBone_A53AF77D47A8B799A600A594C3FF49E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Flamethrower_Animation_BendAnimGraphNode_TransformBone_0A1A39404380EDC7C9BCDD9958E64428();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Flamethrower_Animation_BendAnimGraphNode_TransformBone_450AAD5147A4BB1D60B0C686B44E872A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Flamethrower_Animation_BendAnimGraphNode_TransformBone_C089AAE846869649AA91739C88AF793F();
	void ExecuteUbergraph_Flamethrower_Animation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
