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

// BlueprintGeneratedClass BP_LostLakeSignB_SMP.BP_LostLakeSignB_SMP_C
// 0x000D (0x0618 - 0x060B)
class ABP_LostLakeSignB_SMP_C : public AStaticMeshActor_SMP_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x060B(0x0005) MISSED OFFSET
	class UChildActorComponent*                        BP_LostLakeSignB_Static;                                  // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LostLakeSignB_SMP.BP_LostLakeSignB_SMP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
