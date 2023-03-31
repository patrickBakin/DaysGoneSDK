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

// BlueprintGeneratedClass Bend_SearchBody_Pickup_Populatable.Bend_SearchBody_Pickup_Populatable_C
// 0x002C (0x0700 - 0x06D4)
class ABend_SearchBody_Pickup_Populatable_C : public ABend_SearchBody_Pickup_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterClass>                       CharacterClass;                                           // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIFactionType>                        FactionType;                                              // 0x06E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x06EA(0x0006) MISSED OFFSET
	class ASkeletalMeshActor*                          Mesh;                                                     // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       AttachLocation;                                           // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_SearchBody_Pickup_Populatable.Bend_SearchBody_Pickup_Populatable_C");
		return ptr;
	}


	void UserConstructionScript();
	void InitInteract();
	void ExecuteUbergraph_Bend_SearchBody_Pickup_Populatable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
