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

// BlueprintGeneratedClass FIN_MusicManager.FIN_MusicManager_C
// 0x0013 (0x0088 - 0x0075)
class UFIN_MusicManager_C : public UBendMusicManagerBP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       FIN_CinSelect;                                            // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FIN_MusicManager.FIN_MusicManager_C");
		return ptr;
	}


	void PlayNeroStealth();
	void PlayInteractiveMusic(bool* Bool);
	void MusicEventUpdate(struct FName* Event_Name, bool* Bool);
	void OnSetAsCurrentMusicManager(struct FName* MusicEventName);
	void ExecuteUbergraph_FIN_MusicManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
