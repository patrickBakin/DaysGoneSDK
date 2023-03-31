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

// BlueprintGeneratedClass StaticMeshActor_Env.StaticMeshActor_Env_C
// 0x0012 (0x036A - 0x0358)
class AStaticMeshActor_Env_C : public AStaticMeshActor
{
public:
	TArray<class UStaticMeshComponent*>                StaticMesh_Array;                                         // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               noSMPNeeded;                                              // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               hasError;                                                 // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StaticMeshActor_Env.StaticMeshActor_Env_C");
		return ptr;
	}


	void RequestSMPReplacement();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
