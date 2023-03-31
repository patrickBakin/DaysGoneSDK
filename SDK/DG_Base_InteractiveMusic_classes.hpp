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

// BlueprintGeneratedClass Base_InteractiveMusic.Base_InteractiveMusic_C
// 0x003E (0x00B6 - 0x0078)
class UBase_InteractiveMusic_C : public UBendMusic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              NumBulletBys;                                             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NumTimesPlayerDamaged;                                    // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MusicIsPlaying;                                           // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InHightState;                                             // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InMediumState;                                            // 0x008A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InLow1State;                                              // 0x008B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InEndState;                                               // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InLow2State;                                              // 0x008D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InIdleState;                                              // 0x008E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x008F(0x0001) MISSED OFFSET
	struct FName                                       MX_IntensityOverride;                                     // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InHordeState;                                             // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InOW_Job;                                                 // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InOW_CampJob;                                             // 0x009A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InOW_Encampment;                                          // 0x009B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InOW_AmbEvent;                                            // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InOW_StealthComb;                                         // 0x009D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InOW_BikeRide;                                            // 0x009E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x009F(0x0001) MISSED OFFSET
	int                                                ThermMarauders;                                           // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ThermRippers;                                             // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ThermMilitia;                                             // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ThermFreakers;                                            // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ThermHorde;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InOW_Horde;                                               // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InBikeState;                                              // 0x00B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_InteractiveMusic.Base_InteractiveMusic_C");
		return ptr;
	}


	void SetBikeRide_Night();
	void SetComb_MarauderMilitia();
	void SetComb_FreakCrow();
	void ResetSates();
	void SetBikeState();
	void SetBikeRide();
	void SetComb_MarauderCamper();
	void SetComb_Freaker();
	void SetComb_MarauderLoner();
	void SetComb_Ripper();
	void SetComb_Horde();
	void SetComb_Militia();
	void SetHordeState();
	void SetIdleState();
	void SetLow2State();
	void SetMediumState();
	void SetHighState();
	void SetLow1State();
	void SetEndingState();
	void OnSetAsPrimary();
	void OnSetAsSecondary();
	void OnSetAsLast();
	void OnPlay();
	void OnStop();
	void ExecuteUbergraph_Base_InteractiveMusic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
