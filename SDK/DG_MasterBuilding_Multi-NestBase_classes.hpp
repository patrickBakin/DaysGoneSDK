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

// BlueprintGeneratedClass MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C
// 0x0138 (0x0660 - 0x0528)
class AMasterBuilding_Multi_NestBase_C : public AMasterBuilding_v2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0528(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_7_Value_295F32D14C73FBB5AA894ABA04D968CC;        // 0x0530(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_7__Direction_295F32D14C73FBB5AA894ABA04D968CC;   // 0x0534(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0535(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_8;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_6_Value_9AA118E543E89FD40C9C65AF81FA16E3;        // 0x0540(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_6__Direction_9AA118E543E89FD40C9C65AF81FA16E3;   // 0x0544(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0545(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_7;                                               // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_5_Value_9F651625464C381959A5FDBB58E769A3;        // 0x0550(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_5__Direction_9F651625464C381959A5FDBB58E769A3;   // 0x0554(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0555(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_6;                                               // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_4_Value_366D8A0848E682379D70DFBA8AE740BB;        // 0x0560(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_4__Direction_366D8A0848E682379D70DFBA8AE740BB;   // 0x0564(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0565(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_5;                                               // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_3_Value_839B0DB14125D5B82E88F288EA64D44B;        // 0x0570(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_839B0DB14125D5B82E88F288EA64D44B;   // 0x0574(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0575(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_2_Value_08F4F08E43037BD1863175806A01AFE7;        // 0x0580(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_08F4F08E43037BD1863175806A01AFE7;   // 0x0584(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0585(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_Value_3DB06A2C4C27D56C1B47EC958C627A55;        // 0x0590(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_3DB06A2C4C27D56C1B47EC958C627A55;   // 0x0594(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Value_6A6F2C314EC012E40F334686267335BB;        // 0x05A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6A6F2C314EC012E40F334686267335BB;   // 0x05A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x05A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             NestIDs___Multi_Nest_Building;                            // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialsNest_2;                                   // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialsNest_3;                                   // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialsNest_4;                                   // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialsNest_5;                                   // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialsNest_6;                                   // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialsNest_7;                                   // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialsNest_8;                                   // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialsNest_9;                                   // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             NestIDsTempArray;                                         // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       Pre_Destroyed;                                            // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C");
		return ptr;
	}


	void CreateDynamicNestMaterials(TArray<class UStaticMeshComponent*>* Static_Mesh_s, TArray<class UMaterialInstanceDynamic*>* Dynamic_Material_Array);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_5__FinishedFunc();
	void Timeline_5__UpdateFunc();
	void Timeline_6__FinishedFunc();
	void Timeline_6__UpdateFunc();
	void Timeline_7__FinishedFunc();
	void Timeline_7__UpdateFunc();
	void ReceiveBeginPlay();
	void Nest_Destroyed(const struct FString& Nest_s_ID);
	void BoundOnNestDestroyed_Event(const struct FString& DestroyedNestID, class ABendNest* DestroyedNest);
	void RetryLoad();
	void FireGoneOut(const struct FString& NestID);
	void NestFireGoneOut_Event(const struct FString& NestID);
	void BurnTheMaterials(const struct FString& NestID, TArray<class UMaterialInstanceDynamic*> Materials);
	void ExecuteUbergraph_MasterBuilding_Multi_NestBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
