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

// BlueprintGeneratedClass POI_MultiOpenWorldCorpse.POI_MultiOpenWorldCorpse_C
// 0x0055 (0x0455 - 0x0400)
class APOI_MultiOpenWorldCorpse_C : public ABendPOI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendCrowdFlowFoodAttractorComponent*        BendCrowdFlowFoodAttractor;                               // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Done_Populating;                                          // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Rerun_Construction;                                       // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0412(0x0006) MISSED OFFSET
	class AOpenWorldCorpses_C*                         open_world_corpse_;                                       // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class UChildActorComponent*>                Slot_Array;                                               // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               Socket_Names;                                             // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Body_parts_to_rotate_towards;                             // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Distance_from_socket_offset;                              // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass POI_MultiOpenWorldCorpse.POI_MultiOpenWorldCorpse_C");
		return ptr;
	}


	void Construction_Script_Function_Call();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_POI_MultiOpenWorldCorpse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
