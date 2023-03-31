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

// BlueprintGeneratedClass OW_MusicManager.OW_MusicManager_C
// 0x0023 (0x0098 - 0x0075)
class UOW_MusicManager_C : public UBendMusicManagerBP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CanPlayInteractiveMusic;                                  // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FName                                       OW_JobSelect;                                             // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OW_CinSelect;                                             // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OW_MusicManager.OW_MusicManager_C");
		return ptr;
	}


	void OW_Restart_Logic();
	void OW_Start_Logic();
	void PlayInteractiveMusic(bool* Bool);
	void MusicEventUpdate(struct FName* Event_Name, bool* Bool);
	void OnSetAsCurrentMusicManager(struct FName* MusicEventName);
	void OnSaveGameLoadedFromCheckpoint();
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void ExecuteUbergraph_OW_MusicManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
