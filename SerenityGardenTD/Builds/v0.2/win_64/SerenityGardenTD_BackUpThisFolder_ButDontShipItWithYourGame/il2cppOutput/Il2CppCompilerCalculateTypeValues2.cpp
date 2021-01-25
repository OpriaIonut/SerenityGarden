#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// SerenityGarden.StageScriptable
struct StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050;
// System.Collections.Generic.List`1<SerenityGarden.StageScriptable>
struct List_1_t14E65267D7AAC79E99C6BCA03489C8B383479775;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// SerenityGarden.LogicProcessBase
struct  LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean SerenityGarden.LogicProcessBase::isInitialized
	bool ___isInitialized_4;

public:
	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540, ___isInitialized_4)); }
	inline bool get_isInitialized_4() const { return ___isInitialized_4; }
	inline bool* get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(bool value)
	{
		___isInitialized_4 = value;
	}
};


// SerenityGarden.ShopClickEvents
struct  ShopClickEvents_t59BA417DC02955E919A042D9508BA85707879CFE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// SerenityGarden.StageSelectionManagement
struct  StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TMPro.TextMeshProUGUI SerenityGarden.StageSelectionManagement::descriptionText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___descriptionText_5;
	// SerenityGarden.StageScriptable SerenityGarden.StageSelectionManagement::selectedStage
	StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * ___selectedStage_6;

public:
	inline static int32_t get_offset_of_descriptionText_5() { return static_cast<int32_t>(offsetof(StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91, ___descriptionText_5)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_descriptionText_5() const { return ___descriptionText_5; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_descriptionText_5() { return &___descriptionText_5; }
	inline void set_descriptionText_5(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___descriptionText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptionText_5), (void*)value);
	}

	inline static int32_t get_offset_of_selectedStage_6() { return static_cast<int32_t>(offsetof(StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91, ___selectedStage_6)); }
	inline StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * get_selectedStage_6() const { return ___selectedStage_6; }
	inline StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 ** get_address_of_selectedStage_6() { return &___selectedStage_6; }
	inline void set_selectedStage_6(StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * value)
	{
		___selectedStage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedStage_6), (void*)value);
	}
};

struct StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91_StaticFields
{
public:
	// SerenityGarden.StageSelectionManagement SerenityGarden.StageSelectionManagement::instance
	StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91_StaticFields, ___instance_4)); }
	inline StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91 * get_instance_4() const { return ___instance_4; }
	inline StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// SerenityGarden.StageUIBlock
struct  StageUIBlock_tDAE3DA9172EB42D983D840A52052ED1189F414D3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject[] SerenityGarden.StageUIBlock::stars
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___stars_4;
	// TMPro.TextMeshProUGUI SerenityGarden.StageUIBlock::titleText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___titleText_5;
	// System.String SerenityGarden.StageUIBlock::generatedDescription
	String_t* ___generatedDescription_6;
	// SerenityGarden.StageScriptable SerenityGarden.StageUIBlock::stage
	StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * ___stage_7;

public:
	inline static int32_t get_offset_of_stars_4() { return static_cast<int32_t>(offsetof(StageUIBlock_tDAE3DA9172EB42D983D840A52052ED1189F414D3, ___stars_4)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_stars_4() const { return ___stars_4; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_stars_4() { return &___stars_4; }
	inline void set_stars_4(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___stars_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stars_4), (void*)value);
	}

	inline static int32_t get_offset_of_titleText_5() { return static_cast<int32_t>(offsetof(StageUIBlock_tDAE3DA9172EB42D983D840A52052ED1189F414D3, ___titleText_5)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_titleText_5() const { return ___titleText_5; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_titleText_5() { return &___titleText_5; }
	inline void set_titleText_5(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___titleText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___titleText_5), (void*)value);
	}

	inline static int32_t get_offset_of_generatedDescription_6() { return static_cast<int32_t>(offsetof(StageUIBlock_tDAE3DA9172EB42D983D840A52052ED1189F414D3, ___generatedDescription_6)); }
	inline String_t* get_generatedDescription_6() const { return ___generatedDescription_6; }
	inline String_t** get_address_of_generatedDescription_6() { return &___generatedDescription_6; }
	inline void set_generatedDescription_6(String_t* value)
	{
		___generatedDescription_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generatedDescription_6), (void*)value);
	}

	inline static int32_t get_offset_of_stage_7() { return static_cast<int32_t>(offsetof(StageUIBlock_tDAE3DA9172EB42D983D840A52052ED1189F414D3, ___stage_7)); }
	inline StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * get_stage_7() const { return ___stage_7; }
	inline StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 ** get_address_of_stage_7() { return &___stage_7; }
	inline void set_stage_7(StageScriptable_t88CF66F543F9E68C61B7C955EF3BA5C7E50E4050 * value)
	{
		___stage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stage_7), (void*)value);
	}
};


// SerenityGarden.StageUISpawner
struct  StageUISpawner_tE2D31C373D6FAD5560024331F44815B3AA65A1AE  : public LogicProcessBase_t0BA44484532560F6B824BAA719C44898468A1540
{
public:
	// UnityEngine.GameObject SerenityGarden.StageUISpawner::stageUIPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___stageUIPrefab_5;
	// UnityEngine.Transform SerenityGarden.StageUISpawner::spawnParent
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___spawnParent_6;
	// System.Collections.Generic.List`1<SerenityGarden.StageScriptable> SerenityGarden.StageUISpawner::allStages
	List_1_t14E65267D7AAC79E99C6BCA03489C8B383479775 * ___allStages_7;

public:
	inline static int32_t get_offset_of_stageUIPrefab_5() { return static_cast<int32_t>(offsetof(StageUISpawner_tE2D31C373D6FAD5560024331F44815B3AA65A1AE, ___stageUIPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_stageUIPrefab_5() const { return ___stageUIPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_stageUIPrefab_5() { return &___stageUIPrefab_5; }
	inline void set_stageUIPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___stageUIPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stageUIPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_spawnParent_6() { return static_cast<int32_t>(offsetof(StageUISpawner_tE2D31C373D6FAD5560024331F44815B3AA65A1AE, ___spawnParent_6)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_spawnParent_6() const { return ___spawnParent_6; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_spawnParent_6() { return &___spawnParent_6; }
	inline void set_spawnParent_6(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___spawnParent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnParent_6), (void*)value);
	}

	inline static int32_t get_offset_of_allStages_7() { return static_cast<int32_t>(offsetof(StageUISpawner_tE2D31C373D6FAD5560024331F44815B3AA65A1AE, ___allStages_7)); }
	inline List_1_t14E65267D7AAC79E99C6BCA03489C8B383479775 * get_allStages_7() const { return ___allStages_7; }
	inline List_1_t14E65267D7AAC79E99C6BCA03489C8B383479775 ** get_address_of_allStages_7() { return &___allStages_7; }
	inline void set_allStages_7(List_1_t14E65267D7AAC79E99C6BCA03489C8B383479775 * value)
	{
		___allStages_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allStages_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3756;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize3756 = { sizeof (ShopClickEvents_t59BA417DC02955E919A042D9508BA85707879CFE), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3757;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize3757 = { sizeof (StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91), -1, sizeof(StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91_StaticFields), 0 };
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3757[3] = 
{
	StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91_StaticFields::get_offset_of_instance_4(),
	StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91::get_offset_of_descriptionText_5(),
	StageSelectionManagement_tD97E96A4858C2A21F70AEE99932C610C71F63F91::get_offset_of_selectedStage_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3758;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize3758 = { sizeof (StageUIBlock_tDAE3DA9172EB42D983D840A52052ED1189F414D3), -1, 0, 0 };
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3758[4] = 
{
	StageUIBlock_tDAE3DA9172EB42D983D840A52052ED1189F414D3::get_offset_of_stars_4(),
	StageUIBlock_tDAE3DA9172EB42D983D840A52052ED1189F414D3::get_offset_of_titleText_5(),
	StageUIBlock_tDAE3DA9172EB42D983D840A52052ED1189F414D3::get_offset_of_generatedDescription_6(),
	StageUIBlock_tDAE3DA9172EB42D983D840A52052ED1189F414D3::get_offset_of_stage_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3759;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize3759 = { sizeof (StageUISpawner_tE2D31C373D6FAD5560024331F44815B3AA65A1AE), -1, 0, 0 };
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3759[3] = 
{
	StageUISpawner_tE2D31C373D6FAD5560024331F44815B3AA65A1AE::get_offset_of_stageUIPrefab_5(),
	StageUISpawner_tE2D31C373D6FAD5560024331F44815B3AA65A1AE::get_offset_of_spawnParent_6(),
	StageUISpawner_tE2D31C373D6FAD5560024331F44815B3AA65A1AE::get_offset_of_allStages_7(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
