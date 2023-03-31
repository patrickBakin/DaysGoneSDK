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

// WidgetBlueprintGeneratedClass ChallengeAward.ChallengeAward_C
// 0x0028 (0x0270 - 0x0248)
class UChallengeAward_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      AwardMaterial;                                            // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       Key;                                                      // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSubChallenge;                                          // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCChallengeRank>                     Rank;                                                     // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCChallengeType>                     Type;                                                     // 0x0262(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0263(0x0005) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Award_MI;                                                 // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChallengeAward.ChallengeAward_C");
		return ptr;
	}


	void GetParentKey(const struct FGameplayTag& Key, struct FGameplayTag* ParentKey);
	void SetAwardValues(class UTexture2D* Icon, bool bIsSubChallenge, TEnumAsByte<EDLCChallengeRank> Rank, TEnumAsByte<EDLCChallengeType> Type);
	void SetAward(const struct FName& Key, bool bIsSubChallenge, TEnumAsByte<EDLCChallengeRank> Rank, TEnumAsByte<EDLCChallengeType> Type);
	void OnFail_516F99A54A68B3E029DB76AA48944DF9(class UTexture2D* Texture);
	void OnSuccess_516F99A54A68B3E029DB76AA48944DF9(class UTexture2D* Texture);
	void OnFail_5019D13A4F6D8D4FA102E8A8CA114B52(class UTexture2D* Texture);
	void OnSuccess_5019D13A4F6D8D4FA102E8A8CA114B52(class UTexture2D* Texture);
	void Set_Challenge_From_Save(const struct FGameplayTag& Key);
	void Set_Subchallenge_From_Save(const struct FGameplayTag& Key);
	void ExecuteUbergraph_ChallengeAward(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
