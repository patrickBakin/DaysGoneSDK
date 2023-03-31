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

// BlueprintGeneratedClass OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C
// 0x002E (0x00E4 - 0x00B6)
class UOW_Master_InteractiveMusic_C : public UBase_InteractiveMusic_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CanPlayIneractiveMusic;                                   // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	int                                                NewVar_1;                                                 // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WithinInfestationZone;                                    // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	int                                                IntSwitchFoundValue;                                      // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        Array_1_To_31;                                            // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentTickNumber;                                        // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C");
		return ptr;
	}


	void SetupArrays();
	void IntSwitchFunction(int Value_In_Register, TArray<int>* List_Of_Values, int* Return_Index);
	void TickMusic(float Delta_Time, int Tick_Number);
	void Damaged_Player();
	void BulletBy_Player();
	void OnBulletPassedByNearPlayer();
	void OnPlayerDamaged(class UClass** TypeOfDamage, float* AmountOfDamage, float* CurrentHealth);
	void OnTick(float* DeltaTime, int* TickNumber);
	void OnPlay();
	void OnEnteredInfestation_Event_1(class UBendNestingZone* Zone);
	void OnLeftInfestation_Event_1(class UBendNestingZone* Zone);
	void OnTriggerMissionViaMissionTrigger_Event_1(class UBendMissionData* MissionData);
	void ExecuteUbergraph_OW_Master_InteractiveMusic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
