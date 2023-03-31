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

// BlueprintGeneratedClass EditorTickableActor.EditorTickableActor_C
// 0x003C (0x0384 - 0x0348)
class AEditorTickableActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Allow_Tick_in_Editor;                                     // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	float                                              Editor_Tick_Interval;                                     // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Editor_Last_Tick_Time;                                    // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Editor_Update_Time;                                       // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Do_Editor_Tick;                                           // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	TArray<struct FStruct_PeriodicTickers>             Periodic_Tickers;                                         // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Periodic_Tickers_Last_Update_Time;                        // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EditorTickableActor.EditorTickableActor_C");
		return ptr;
	}


	void DebugPrint(int Periodic_Ticker_Index, bool Print_Immediately, const struct FString& Message, const struct FLinearColor& Color, float Display_Time);
	void PeriodicTickersTrigger(int Ticker_Index, float* Period, float* Delta, bool* Triggered);
	void PeriodicTickersUpdate();
	void DoEditorTickInterval(bool* Tick);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void Editor_Tick();
	void ExecuteUbergraph_EditorTickableActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
