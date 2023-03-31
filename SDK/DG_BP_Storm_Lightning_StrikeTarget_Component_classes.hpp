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

// BlueprintGeneratedClass BP_Storm_Lightning_StrikeTarget_Component.BP_Storm_Lightning_StrikeTarget_Component_C
// 0x0028 (0x00F8 - 0x00D0)
class UBP_Storm_Lightning_StrikeTarget_Component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Struck_By_Lightning;                                      // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	class ABP_Storm_Manager_C*                         Storm_Manager;                                            // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class ABP_Storm_Lightning_C*>               AvailableStorms;                                          // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Storm_Lightning_StrikeTarget_Component.BP_Storm_Lightning_StrikeTarget_Component_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void Strike_Me();
	void Editor_Begin_Play_Trigger();
	void ExecuteUbergraph_BP_Storm_Lightning_StrikeTarget_Component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
