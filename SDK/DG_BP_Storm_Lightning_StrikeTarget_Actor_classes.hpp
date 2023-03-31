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

// BlueprintGeneratedClass BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C
// 0x001A (0x03AA - 0x0390)
class ABP_Storm_Lightning_StrikeTarget_Actor_C : public AEditorTickableActorLabeled_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Storm_Lightning_StrikeTarget_Component_C* BP_Storm_Lighting_StrikeTarget_Component;                 // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBillboardComponent*                         TargetIcon;                                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Debug___Print_Output;                                     // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DEBUG___Strike_Now;                                       // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Storm_Lightning_StrikeTarget_Actor.BP_Storm_Lightning_StrikeTarget_Actor_C");
		return ptr;
	}


	void Debug_Prints(float Text_Time_On_Screen);
	void UserConstructionScript();
	void Editor_Tick();
	void EventStrikeMe();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Storm_Lightning_StrikeTarget_Actor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
