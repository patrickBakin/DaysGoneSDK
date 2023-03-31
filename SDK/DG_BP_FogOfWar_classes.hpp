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

// BlueprintGeneratedClass BP_FogOfWar.BP_FogOfWar_C
// 0x0010 (0x0420 - 0x0410)
class ABP_FogOfWar_C : public AFogOfWar
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FogOfWar.BP_FogOfWar_C");
		return ptr;
	}


	void SetVisibility(bool Visible);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMissionBegin_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID);
	void ExecuteUbergraph_BP_FogOfWar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
