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

// BlueprintGeneratedClass BP_LGT_CinSlave.BP_LGT_CinSlave_C
// 0x0017 (0x0554 - 0x053D)
class ABP_LGT_CinSlave_C : public ABP_LGT_CinMaster_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x053D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_LGT_CinMaster_C*                         Master_Rig_Ref;                                           // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Copy_Master_Key;                                          // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Copy_Master_Fill;                                         // 0x0551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Copy_Master_Rim;                                          // 0x0552(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Copy_Master_Aux;                                          // 0x0553(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LGT_CinSlave.BP_LGT_CinSlave_C");
		return ptr;
	}


	void CopyLightValues(class UBendSpotLightComponent* sourceLight, class UBendSpotLightComponent** destLight);
	void Check_For_Copy_From_Master();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EditorTicker(float* Delta_Seconds, struct FVector* CameraLocation);
	void LinkedCameraStateChanged(class ACameraActor** DisabledCamera, class ACameraActor** EnabledCamera);
	void ExecuteUbergraph_BP_LGT_CinSlave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
