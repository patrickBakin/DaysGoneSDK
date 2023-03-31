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

// BlueprintGeneratedClass Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C
// 0x00A2 (0x2BEA - 0x2B48)
class ABend_WpnCrossbow_Standard_C : public ABend_Wpn_Crossbow_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2B48(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        Bolt;                                                     // 0x2B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    bolt_mat_2;                                               // 0x2B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    bolt_mat_3;                                               // 0x2B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    bolt_mat_4;                                               // 0x2B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    bolt_mat_5;                                               // 0x2B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    bolt_mat_6;                                               // 0x2B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    bolt_mat_7;                                               // 0x2B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isBoltShot_2;                                             // 0x2B88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isBoltShot_3;                                             // 0x2B89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isBoltShot_4;                                             // 0x2B8A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isBoltShot_5;                                             // 0x2B8B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isBoltShot_6;                                             // 0x2B8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isBoltShot_7;                                             // 0x2B8D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x2B8E(0x0002) MISSED OFFSET
	int                                                CurrentBolts;                                             // 0x2B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2B94(0x0004) MISSED OFFSET
	class UMaterial*                                   InvisibleMat;                                             // 0x2B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           NormalBoltMat;                                            // 0x2BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TripWireArrowCount;                                       // 0x2BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TripWireLocation1;                                        // 0x2BAC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TripWireLocation2;                                        // 0x2BB8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2BC4(0x0004) MISSED OFFSET
	TArray<int>                                        NewVar_1;                                                 // 0x2BC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          NormalMat;                                                // 0x2BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AIncendiary_Bolt_AnimProp_C*                 IncendiaryBoltActor;                                      // 0x2BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClipLoaded;                                               // 0x2BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstLoad;                                                // 0x2BE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C");
		return ptr;
	}


	void DoIHaveIncendiaryBolts(bool* HaveIncendiaryBolts);
	void UserConstructionScript();
	void OnFired();
	void OnDrawStarted();
	void OnClipLoaded(int* MaterialIndex);
	void OnHolsterStarted();
	void OnReloadStarted();
	void OnReloadFinished();
	void ExecuteUbergraph_Bend_WpnCrossbow_Standard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
