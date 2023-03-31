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

// BlueprintGeneratedClass BendVehicleCamLookBehind.BendVehicleCamLookBehind_C
// 0x0010 (0x0390 - 0x0380)
class UBendVehicleCamLookBehind_C : public UBendCamFollow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              GolfCartZ;                                                // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultZ;                                                 // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendVehicleCamLookBehind.BendVehicleCamLookBehind_C");
		return ptr;
	}


	void OnActivate();
	void ExecuteUbergraph_BendVehicleCamLookBehind(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
