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

// BlueprintGeneratedClass BP_AmbientEventMarker_NestFeast.BP_AmbientEventMarker_NestFeast_C
// 0x0014 (0x0570 - 0x055C)
class ABP_AmbientEventMarker_NestFeast_C : public ABP_AmbientEventMarker_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ANest_C*                                     NestActor;                                                // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbientEventMarker_NestFeast.BP_AmbientEventMarker_NestFeast_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AmbientEventMarker_NestFeast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
