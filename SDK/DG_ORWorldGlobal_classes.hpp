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

// BlueprintGeneratedClass ORWorldGlobal.ORWorldGlobal_C
// 0x0020 (0x0378 - 0x0358)
class AORWorldGlobal_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendVehicleClassRef*                        Bike_03ClassRef;                                          // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_BendWorldManagerV3_C*                    BP_BendWorldManagerV3_C_1_ExecuteUbergraph_ORWorldGlobal_RefProperty;// 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_WorldSpec_Base_C*                        BP_WorldSpec_Base_C_2_ExecuteUbergraph_ORWorldGlobal_RefProperty;// 0x0370(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ORWorldGlobal.ORWorldGlobal_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_ORWorldGlobal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
