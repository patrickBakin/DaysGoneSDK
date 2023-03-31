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

// AnimBlueprintGeneratedClass bike_set_Vim.bike_set_Vim_C
// 0x057C (0x0A1C - 0x04A0)
class Ubike_set_Vim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9BBA3E8F4F8DD8E09CBAB199C6870511;      // 0x04A8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_94FC950545E9A3B02B99A8AF9EFBBF2B;// 0x04F0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0240719C489034D4636345BF0492F0FC;// 0x0538(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7A4545DC4B1F3EC3635C1BAD678CBFB9;// 0x05E0(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BCF972CC4D9AD1238D45A889FE60BEFE;// 0x0688(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0C0909F54DF4EBFF70557C88A8700A1A;// 0x0730(0x00A8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B532093E43383532EFC01FAC29555B9E;// 0x07D8(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_36EF4A5D4EAB81923203B6A4E87CAA51;// 0x0840(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FDB81F3E427615E428C73FB2532EEF4E;// 0x0888(0x0110)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F87B854E4B345017240563BBFC25C279;// 0x0998(0x0048)
	struct FVector                                     Back_Wheel_Offset;                                        // 0x09E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Back_Wheel_Rotation;                                      // 0x09EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Front_Wheel_Offset;                                       // 0x09F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Front_Wheel_Rotation;                                     // 0x0A04(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWheeledVehicleMovementComponent*            Vehicle_Movement;                                         // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringNeg1To1;                                          // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass bike_set_Vim.bike_set_Vim_C");
		return ptr;
	}


	void UpdateWheel(int WheelIndex, struct FVector* Offset, struct FRotator* Rotator);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_bike_set_Vim_AnimGraphNode_SequenceEvaluator_B532093E43383532EFC01FAC29555B9E();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_bike_set_Vim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
