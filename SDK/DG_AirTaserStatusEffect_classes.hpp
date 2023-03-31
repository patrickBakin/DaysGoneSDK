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

// BlueprintGeneratedClass AirTaserStatusEffect.AirTaserStatusEffect_C
// 0x0014 (0x007C - 0x0068)
class UAirTaserStatusEffect_C : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0068(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ElectrocutionDamage;                                      // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              secondsPassed;                                            // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthBuffer;                                             // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AirTaserStatusEffect.AirTaserStatusEffect_C");
		return ptr;
	}


	void OnTick(bool* StopEffect);
	void OnStart();
	void OnEnd();
	void ExecuteUbergraph_AirTaserStatusEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
