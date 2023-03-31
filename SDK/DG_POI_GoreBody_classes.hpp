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

// BlueprintGeneratedClass POI_GoreBody.POI_GoreBody_C
// 0x0010 (0x0418 - 0x0408)
class APOI_GoreBody_C : public ABendPOIGore
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        GoreBodySlot;                                             // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass POI_GoreBody.POI_GoreBody_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void ExecuteUbergraph_POI_GoreBody(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
