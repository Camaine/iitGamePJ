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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t833694590;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t1286196574;
// System.ComponentModel.LicenseContext
struct LicenseContext_t1597291123;
// System.ComponentModel.ListEntry
struct ListEntry_t3890785597;
// System.Delegate
struct Delegate_t1462652325;
// System.IntPtr[]
struct IntPtrU5BU5D_t3973137824;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1096780766;
// System.Collections.ArrayList
struct ArrayList_t4142489098;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1227701145;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t2140452791;
// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t3588577156;
// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t352967723;
// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t678229524;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t974762688;
// System.Attribute[]
struct AttributeU5BU5D_t2062566378;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t222333103;
// System.Collections.IComparer
struct IComparer_t3905337595;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t4199658932;
// System.ComponentModel.TypeConverter
struct TypeConverter_t3820489046;
// System.Collections.Hashtable
struct Hashtable_t1289739904;
// System.Char[]
struct CharU5BU5D_t3282938201;
// System.Void
struct Void_t3348323986;
// System.Exception
struct Exception_t2856182317;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t2525785445;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t4127117629;
// System.ComponentModel.ISite
struct ISite_t2916322773;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t663758033;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2949878547;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t295517103;
// System.IAsyncResult
struct IAsyncResult_t2988228258;
// System.AsyncCallback
struct AsyncCallback_t2694001226;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef INSTANCEDESCRIPTOR_T3745943328_H
#define INSTANCEDESCRIPTOR_T3745943328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t3745943328  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t3745943328, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t3745943328, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t3745943328, ___isComplete_2)); }
	inline bool get_isComplete_2() const { return ___isComplete_2; }
	inline bool* get_address_of_isComplete_2() { return &___isComplete_2; }
	inline void set_isComplete_2(bool value)
	{
		___isComplete_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEDESCRIPTOR_T3745943328_H
#ifndef CUSTOMTYPEDESCRIPTOR_T1436110343_H
#define CUSTOMTYPEDESCRIPTOR_T1436110343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t1436110343  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t1436110343, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMTYPEDESCRIPTOR_T1436110343_H
#ifndef CULTUREINFOCOMPARER_T633340472_H
#define CULTUREINFOCOMPARER_T633340472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t633340472  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T633340472_H
#ifndef LICENSE_T1620764037_H
#define LICENSE_T1620764037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.License
struct  License_t1620764037  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSE_T1620764037_H
#ifndef LICENSECONTEXT_T1597291123_H
#define LICENSECONTEXT_T1597291123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseContext
struct  LicenseContext_t1597291123  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSECONTEXT_T1597291123_H
#ifndef LICENSEMANAGER_T1107488353_H
#define LICENSEMANAGER_T1107488353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseManager
struct  LicenseManager_t1107488353  : public RuntimeObject
{
public:

public:
};

struct LicenseManager_t1107488353_StaticFields
{
public:
	// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager::mycontext
	LicenseContext_t1597291123 * ___mycontext_0;
	// System.Object System.ComponentModel.LicenseManager::contextLockUser
	RuntimeObject * ___contextLockUser_1;
	// System.Object System.ComponentModel.LicenseManager::lockObject
	RuntimeObject * ___lockObject_2;

public:
	inline static int32_t get_offset_of_mycontext_0() { return static_cast<int32_t>(offsetof(LicenseManager_t1107488353_StaticFields, ___mycontext_0)); }
	inline LicenseContext_t1597291123 * get_mycontext_0() const { return ___mycontext_0; }
	inline LicenseContext_t1597291123 ** get_address_of_mycontext_0() { return &___mycontext_0; }
	inline void set_mycontext_0(LicenseContext_t1597291123 * value)
	{
		___mycontext_0 = value;
		Il2CppCodeGenWriteBarrier((&___mycontext_0), value);
	}

	inline static int32_t get_offset_of_contextLockUser_1() { return static_cast<int32_t>(offsetof(LicenseManager_t1107488353_StaticFields, ___contextLockUser_1)); }
	inline RuntimeObject * get_contextLockUser_1() const { return ___contextLockUser_1; }
	inline RuntimeObject ** get_address_of_contextLockUser_1() { return &___contextLockUser_1; }
	inline void set_contextLockUser_1(RuntimeObject * value)
	{
		___contextLockUser_1 = value;
		Il2CppCodeGenWriteBarrier((&___contextLockUser_1), value);
	}

	inline static int32_t get_offset_of_lockObject_2() { return static_cast<int32_t>(offsetof(LicenseManager_t1107488353_StaticFields, ___lockObject_2)); }
	inline RuntimeObject * get_lockObject_2() const { return ___lockObject_2; }
	inline RuntimeObject ** get_address_of_lockObject_2() { return &___lockObject_2; }
	inline void set_lockObject_2(RuntimeObject * value)
	{
		___lockObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEMANAGER_T1107488353_H
#ifndef LICENSEPROVIDER_T3288447706_H
#define LICENSEPROVIDER_T3288447706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProvider
struct  LicenseProvider_t3288447706  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDER_T3288447706_H
#ifndef EVENTHANDLERLIST_T4127117629_H
#define EVENTHANDLERLIST_T4127117629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t4127117629  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t3890785597 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t1462652325 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t4127117629, ___entries_0)); }
	inline ListEntry_t3890785597 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t3890785597 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t3890785597 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t4127117629, ___null_entry_1)); }
	inline Delegate_t1462652325 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t1462652325 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t1462652325 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T4127117629_H
#ifndef EXCEPTION_T2856182317_H
#define EXCEPTION_T2856182317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2856182317  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3973137824* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2856182317 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2856182317, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3973137824* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3973137824** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3973137824* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2856182317, ___inner_exception_1)); }
	inline Exception_t2856182317 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2856182317 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2856182317 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2856182317, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2856182317, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2856182317, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2856182317, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2856182317, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2856182317, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2856182317, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2856182317, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2856182317, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T2856182317_H
#ifndef LISTSORTDESCRIPTIONCOLLECTION_T535237205_H
#define LISTSORTDESCRIPTIONCOLLECTION_T535237205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescriptionCollection
struct  ListSortDescriptionCollection_t535237205  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.ListSortDescriptionCollection::list
	ArrayList_t4142489098 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ListSortDescriptionCollection_t535237205, ___list_0)); }
	inline ArrayList_t4142489098 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4142489098 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4142489098 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDESCRIPTIONCOLLECTION_T535237205_H
#ifndef LISTENTRY_T3890785597_H
#define LISTENTRY_T3890785597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t3890785597  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t1462652325 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t3890785597 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t3890785597, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t3890785597, ___value_1)); }
	inline Delegate_t1462652325 * get_value_1() const { return ___value_1; }
	inline Delegate_t1462652325 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t1462652325 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t3890785597, ___next_2)); }
	inline ListEntry_t3890785597 * get_next_2() const { return ___next_2; }
	inline ListEntry_t3890785597 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t3890785597 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T3890785597_H
#ifndef EVENTARGS_T2777409686_H
#define EVENTARGS_T2777409686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t2777409686  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t2777409686_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t2777409686 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t2777409686_StaticFields, ___Empty_0)); }
	inline EventArgs_t2777409686 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t2777409686 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t2777409686 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T2777409686_H
#ifndef EVENTDESCRIPTORCOLLECTION_T3387586206_H
#define EVENTDESCRIPTORCOLLECTION_T3387586206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t3387586206  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.EventDescriptorCollection::eventList
	ArrayList_t4142489098 * ___eventList_0;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::isReadOnly
	bool ___isReadOnly_1;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3387586206, ___eventList_0)); }
	inline ArrayList_t4142489098 * get_eventList_0() const { return ___eventList_0; }
	inline ArrayList_t4142489098 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(ArrayList_t4142489098 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_isReadOnly_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3387586206, ___isReadOnly_1)); }
	inline bool get_isReadOnly_1() const { return ___isReadOnly_1; }
	inline bool* get_address_of_isReadOnly_1() { return &___isReadOnly_1; }
	inline void set_isReadOnly_1(bool value)
	{
		___isReadOnly_1 = value;
	}
};

struct EventDescriptorCollection_t3387586206_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t3387586206 * ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3387586206_StaticFields, ___Empty_2)); }
	inline EventDescriptorCollection_t3387586206 * get_Empty_2() const { return ___Empty_2; }
	inline EventDescriptorCollection_t3387586206 ** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(EventDescriptorCollection_t3387586206 * value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T3387586206_H
#ifndef TYPECONVERTER_T3820489046_H
#define TYPECONVERTER_T3820489046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t3820489046  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T3820489046_H
#ifndef ATTRIBUTE_T2192553355_H
#define ATTRIBUTE_T2192553355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2192553355  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2192553355_H
#ifndef MARSHALBYREFOBJECT_T3101711328_H
#define MARSHALBYREFOBJECT_T3101711328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t3101711328  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1227701145 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t3101711328, ____identity_0)); }
	inline ServerIdentity_t1227701145 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1227701145 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1227701145 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T3101711328_H
#ifndef READONLYCOLLECTIONBASE_T4117235904_H
#define READONLYCOLLECTIONBASE_T4117235904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t4117235904  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t4142489098 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t4117235904, ___list_0)); }
	inline ArrayList_t4142489098 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4142489098 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4142489098 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T4117235904_H
#ifndef BACKGROUNDWORKER_T307484986_H
#define BACKGROUNDWORKER_T307484986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker
struct  BackgroundWorker_t307484986  : public RuntimeObject
{
public:
	// System.ComponentModel.AsyncOperation System.ComponentModel.BackgroundWorker::async
	AsyncOperation_t2140452791 * ___async_0;
	// System.Boolean System.ComponentModel.BackgroundWorker::cancel_pending
	bool ___cancel_pending_1;
	// System.Boolean System.ComponentModel.BackgroundWorker::report_progress
	bool ___report_progress_2;
	// System.Boolean System.ComponentModel.BackgroundWorker::support_cancel
	bool ___support_cancel_3;
	// System.ComponentModel.DoWorkEventHandler System.ComponentModel.BackgroundWorker::DoWork
	DoWorkEventHandler_t3588577156 * ___DoWork_4;
	// System.ComponentModel.ProgressChangedEventHandler System.ComponentModel.BackgroundWorker::ProgressChanged
	ProgressChangedEventHandler_t352967723 * ___ProgressChanged_5;
	// System.ComponentModel.RunWorkerCompletedEventHandler System.ComponentModel.BackgroundWorker::RunWorkerCompleted
	RunWorkerCompletedEventHandler_t678229524 * ___RunWorkerCompleted_6;

public:
	inline static int32_t get_offset_of_async_0() { return static_cast<int32_t>(offsetof(BackgroundWorker_t307484986, ___async_0)); }
	inline AsyncOperation_t2140452791 * get_async_0() const { return ___async_0; }
	inline AsyncOperation_t2140452791 ** get_address_of_async_0() { return &___async_0; }
	inline void set_async_0(AsyncOperation_t2140452791 * value)
	{
		___async_0 = value;
		Il2CppCodeGenWriteBarrier((&___async_0), value);
	}

	inline static int32_t get_offset_of_cancel_pending_1() { return static_cast<int32_t>(offsetof(BackgroundWorker_t307484986, ___cancel_pending_1)); }
	inline bool get_cancel_pending_1() const { return ___cancel_pending_1; }
	inline bool* get_address_of_cancel_pending_1() { return &___cancel_pending_1; }
	inline void set_cancel_pending_1(bool value)
	{
		___cancel_pending_1 = value;
	}

	inline static int32_t get_offset_of_report_progress_2() { return static_cast<int32_t>(offsetof(BackgroundWorker_t307484986, ___report_progress_2)); }
	inline bool get_report_progress_2() const { return ___report_progress_2; }
	inline bool* get_address_of_report_progress_2() { return &___report_progress_2; }
	inline void set_report_progress_2(bool value)
	{
		___report_progress_2 = value;
	}

	inline static int32_t get_offset_of_support_cancel_3() { return static_cast<int32_t>(offsetof(BackgroundWorker_t307484986, ___support_cancel_3)); }
	inline bool get_support_cancel_3() const { return ___support_cancel_3; }
	inline bool* get_address_of_support_cancel_3() { return &___support_cancel_3; }
	inline void set_support_cancel_3(bool value)
	{
		___support_cancel_3 = value;
	}

	inline static int32_t get_offset_of_DoWork_4() { return static_cast<int32_t>(offsetof(BackgroundWorker_t307484986, ___DoWork_4)); }
	inline DoWorkEventHandler_t3588577156 * get_DoWork_4() const { return ___DoWork_4; }
	inline DoWorkEventHandler_t3588577156 ** get_address_of_DoWork_4() { return &___DoWork_4; }
	inline void set_DoWork_4(DoWorkEventHandler_t3588577156 * value)
	{
		___DoWork_4 = value;
		Il2CppCodeGenWriteBarrier((&___DoWork_4), value);
	}

	inline static int32_t get_offset_of_ProgressChanged_5() { return static_cast<int32_t>(offsetof(BackgroundWorker_t307484986, ___ProgressChanged_5)); }
	inline ProgressChangedEventHandler_t352967723 * get_ProgressChanged_5() const { return ___ProgressChanged_5; }
	inline ProgressChangedEventHandler_t352967723 ** get_address_of_ProgressChanged_5() { return &___ProgressChanged_5; }
	inline void set_ProgressChanged_5(ProgressChangedEventHandler_t352967723 * value)
	{
		___ProgressChanged_5 = value;
		Il2CppCodeGenWriteBarrier((&___ProgressChanged_5), value);
	}

	inline static int32_t get_offset_of_RunWorkerCompleted_6() { return static_cast<int32_t>(offsetof(BackgroundWorker_t307484986, ___RunWorkerCompleted_6)); }
	inline RunWorkerCompletedEventHandler_t678229524 * get_RunWorkerCompleted_6() const { return ___RunWorkerCompleted_6; }
	inline RunWorkerCompletedEventHandler_t678229524 ** get_address_of_RunWorkerCompleted_6() { return &___RunWorkerCompleted_6; }
	inline void set_RunWorkerCompleted_6(RunWorkerCompletedEventHandler_t678229524 * value)
	{
		___RunWorkerCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((&___RunWorkerCompleted_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDWORKER_T307484986_H
#ifndef ATTRIBUTECOLLECTION_T222333103_H
#define ATTRIBUTECOLLECTION_T222333103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t222333103  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.AttributeCollection::attrList
	ArrayList_t4142489098 * ___attrList_0;

public:
	inline static int32_t get_offset_of_attrList_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t222333103, ___attrList_0)); }
	inline ArrayList_t4142489098 * get_attrList_0() const { return ___attrList_0; }
	inline ArrayList_t4142489098 ** get_address_of_attrList_0() { return &___attrList_0; }
	inline void set_attrList_0(ArrayList_t4142489098 * value)
	{
		___attrList_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrList_0), value);
	}
};

struct AttributeCollection_t222333103_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t222333103 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t222333103_StaticFields, ___Empty_1)); }
	inline AttributeCollection_t222333103 * get_Empty_1() const { return ___Empty_1; }
	inline AttributeCollection_t222333103 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(AttributeCollection_t222333103 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T222333103_H
#ifndef ASYNCOPERATIONMANAGER_T1675359452_H
#define ASYNCOPERATIONMANAGER_T1675359452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncOperationManager
struct  AsyncOperationManager_t1675359452  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCOPERATIONMANAGER_T1675359452_H
#ifndef ASYNCOPERATION_T2140452791_H
#define ASYNCOPERATION_T2140452791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncOperation
struct  AsyncOperation_t2140452791  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContext System.ComponentModel.AsyncOperation::ctx
	SynchronizationContext_t974762688 * ___ctx_0;
	// System.Object System.ComponentModel.AsyncOperation::state
	RuntimeObject * ___state_1;
	// System.Boolean System.ComponentModel.AsyncOperation::done
	bool ___done_2;

public:
	inline static int32_t get_offset_of_ctx_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t2140452791, ___ctx_0)); }
	inline SynchronizationContext_t974762688 * get_ctx_0() const { return ___ctx_0; }
	inline SynchronizationContext_t974762688 ** get_address_of_ctx_0() { return &___ctx_0; }
	inline void set_ctx_0(SynchronizationContext_t974762688 * value)
	{
		___ctx_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_0), value);
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t2140452791, ___state_1)); }
	inline RuntimeObject * get_state_1() const { return ___state_1; }
	inline RuntimeObject ** get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(RuntimeObject * value)
	{
		___state_1 = value;
		Il2CppCodeGenWriteBarrier((&___state_1), value);
	}

	inline static int32_t get_offset_of_done_2() { return static_cast<int32_t>(offsetof(AsyncOperation_t2140452791, ___done_2)); }
	inline bool get_done_2() const { return ___done_2; }
	inline bool* get_address_of_done_2() { return &___done_2; }
	inline void set_done_2(bool value)
	{
		___done_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCOPERATION_T2140452791_H
#ifndef ENUMCOMPARER_T3271190555_H
#define ENUMCOMPARER_T3271190555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t3271190555  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T3271190555_H
#ifndef MEMBERDESCRIPTOR_T3329881238_H
#define MEMBERDESCRIPTOR_T3329881238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3329881238  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t2062566378* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t222333103 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3329881238, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3329881238, ___attrs_1)); }
	inline AttributeU5BU5D_t2062566378* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t2062566378** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t2062566378* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3329881238, ___attrCollection_2)); }
	inline AttributeCollection_t222333103 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t222333103 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t222333103 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t3329881238_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3329881238_StaticFields, ___default_comparer_3)); }
	inline RuntimeObject* get_default_comparer_3() const { return ___default_comparer_3; }
	inline RuntimeObject** get_address_of_default_comparer_3() { return &___default_comparer_3; }
	inline void set_default_comparer_3(RuntimeObject* value)
	{
		___default_comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T3329881238_H
#ifndef VALUETYPE_T3877923273_H
#define VALUETYPE_T3877923273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3877923273  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3877923273_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3877923273_marshaled_com
{
};
#endif // VALUETYPE_T3877923273_H
#ifndef DESIGNERTRANSACTION_T2727282508_H
#define DESIGNERTRANSACTION_T2727282508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.DesignerTransaction
struct  DesignerTransaction_t2727282508  : public RuntimeObject
{
public:
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::committed
	bool ___committed_0;
	// System.Boolean System.ComponentModel.Design.DesignerTransaction::canceled
	bool ___canceled_1;

public:
	inline static int32_t get_offset_of_committed_0() { return static_cast<int32_t>(offsetof(DesignerTransaction_t2727282508, ___committed_0)); }
	inline bool get_committed_0() const { return ___committed_0; }
	inline bool* get_address_of_committed_0() { return &___committed_0; }
	inline void set_committed_0(bool value)
	{
		___committed_0 = value;
	}

	inline static int32_t get_offset_of_canceled_1() { return static_cast<int32_t>(offsetof(DesignerTransaction_t2727282508, ___canceled_1)); }
	inline bool get_canceled_1() const { return ___canceled_1; }
	inline bool* get_address_of_canceled_1() { return &___canceled_1; }
	inline void set_canceled_1(bool value)
	{
		___canceled_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERTRANSACTION_T2727282508_H
#ifndef EVENTDESCRIPTOR_T4035432713_H
#define EVENTDESCRIPTOR_T4035432713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t4035432713  : public MemberDescriptor_t3329881238
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T4035432713_H
#ifndef ENUMCONVERTER_T2754704621_H
#define ENUMCONVERTER_T2754704621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t2754704621  : public TypeConverter_t3820489046
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t4199658932 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t2754704621, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t2754704621, ___stdValues_1)); }
	inline StandardValuesCollection_t4199658932 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t4199658932 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t4199658932 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T2754704621_H
#ifndef EXPANDABLEOBJECTCONVERTER_T3171151092_H
#define EXPANDABLEOBJECTCONVERTER_T3171151092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t3171151092  : public TypeConverter_t3820489046
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T3171151092_H
#ifndef GUIDCONVERTER_T678386038_H
#define GUIDCONVERTER_T678386038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t678386038  : public TypeConverter_t3820489046
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T678386038_H
#ifndef LISTBINDABLEATTRIBUTE_T300571407_H
#define LISTBINDABLEATTRIBUTE_T300571407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t300571407  : public Attribute_t2192553355
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t300571407, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t300571407_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t300571407 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t300571407 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t300571407 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t300571407_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t300571407 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t300571407 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t300571407 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t300571407_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t300571407 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t300571407 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t300571407 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t300571407_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t300571407 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t300571407 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t300571407 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T300571407_H
#ifndef LICFILELICENSEPROVIDER_T3649310256_H
#define LICFILELICENSEPROVIDER_T3649310256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicenseProvider
struct  LicFileLicenseProvider_t3649310256  : public LicenseProvider_t3288447706
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSEPROVIDER_T3649310256_H
#ifndef LICFILELICENSE_T3846033349_H
#define LICFILELICENSE_T3846033349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicFileLicense
struct  LicFileLicense_t3846033349  : public License_t1620764037
{
public:
	// System.String System.ComponentModel.LicFileLicense::_key
	String_t* ____key_0;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(LicFileLicense_t3846033349, ____key_0)); }
	inline String_t* get__key_0() const { return ____key_0; }
	inline String_t** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(String_t* value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICFILELICENSE_T3846033349_H
#ifndef LICENSEPROVIDERATTRIBUTE_T100901307_H
#define LICENSEPROVIDERATTRIBUTE_T100901307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseProviderAttribute
struct  LicenseProviderAttribute_t100901307  : public Attribute_t2192553355
{
public:
	// System.Type System.ComponentModel.LicenseProviderAttribute::Provider
	Type_t * ___Provider_0;

public:
	inline static int32_t get_offset_of_Provider_0() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t100901307, ___Provider_0)); }
	inline Type_t * get_Provider_0() const { return ___Provider_0; }
	inline Type_t ** get_address_of_Provider_0() { return &___Provider_0; }
	inline void set_Provider_0(Type_t * value)
	{
		___Provider_0 = value;
		Il2CppCodeGenWriteBarrier((&___Provider_0), value);
	}
};

struct LicenseProviderAttribute_t100901307_StaticFields
{
public:
	// System.ComponentModel.LicenseProviderAttribute System.ComponentModel.LicenseProviderAttribute::Default
	LicenseProviderAttribute_t100901307 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(LicenseProviderAttribute_t100901307_StaticFields, ___Default_1)); }
	inline LicenseProviderAttribute_t100901307 * get_Default_1() const { return ___Default_1; }
	inline LicenseProviderAttribute_t100901307 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(LicenseProviderAttribute_t100901307 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEPROVIDERATTRIBUTE_T100901307_H
#ifndef PROPERTYDESCRIPTOR_T2949878547_H
#define PROPERTYDESCRIPTOR_T2949878547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t2949878547  : public MemberDescriptor_t3329881238
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t3820489046 * ___converter_4;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::notifiers
	Hashtable_t1289739904 * ___notifiers_5;

public:
	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t2949878547, ___converter_4)); }
	inline TypeConverter_t3820489046 * get_converter_4() const { return ___converter_4; }
	inline TypeConverter_t3820489046 ** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(TypeConverter_t3820489046 * value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}

	inline static int32_t get_offset_of_notifiers_5() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t2949878547, ___notifiers_5)); }
	inline Hashtable_t1289739904 * get_notifiers_5() const { return ___notifiers_5; }
	inline Hashtable_t1289739904 ** get_address_of_notifiers_5() { return &___notifiers_5; }
	inline void set_notifiers_5(Hashtable_t1289739904 * value)
	{
		___notifiers_5 = value;
		Il2CppCodeGenWriteBarrier((&___notifiers_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T2949878547_H
#ifndef VOID_T3348323986_H
#define VOID_T3348323986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3348323986 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3348323986_H
#ifndef ENUM_T255700964_H
#define ENUM_T255700964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t255700964  : public ValueType_t3877923273
{
public:

public:
};

struct Enum_t255700964_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3282938201* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t255700964_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3282938201* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3282938201** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3282938201* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t255700964_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t255700964_marshaled_com
{
};
#endif // ENUM_T255700964_H
#ifndef REFERENCECONVERTER_T2514389054_H
#define REFERENCECONVERTER_T2514389054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t2514389054  : public TypeConverter_t3820489046
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t2514389054, ___reference_type_0)); }
	inline Type_t * get_reference_type_0() const { return ___reference_type_0; }
	inline Type_t ** get_address_of_reference_type_0() { return &___reference_type_0; }
	inline void set_reference_type_0(Type_t * value)
	{
		___reference_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___reference_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T2514389054_H
#ifndef SYSTEMEXCEPTION_T637859339_H
#define SYSTEMEXCEPTION_T637859339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t637859339  : public Exception_t2856182317
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T637859339_H
#ifndef IMMUTABLEOBJECTATTRIBUTE_T3688055386_H
#define IMMUTABLEOBJECTATTRIBUTE_T3688055386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ImmutableObjectAttribute
struct  ImmutableObjectAttribute_t3688055386  : public Attribute_t2192553355
{
public:
	// System.Boolean System.ComponentModel.ImmutableObjectAttribute::immutable
	bool ___immutable_0;

public:
	inline static int32_t get_offset_of_immutable_0() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t3688055386, ___immutable_0)); }
	inline bool get_immutable_0() const { return ___immutable_0; }
	inline bool* get_address_of_immutable_0() { return &___immutable_0; }
	inline void set_immutable_0(bool value)
	{
		___immutable_0 = value;
	}
};

struct ImmutableObjectAttribute_t3688055386_StaticFields
{
public:
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Default
	ImmutableObjectAttribute_t3688055386 * ___Default_1;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::No
	ImmutableObjectAttribute_t3688055386 * ___No_2;
	// System.ComponentModel.ImmutableObjectAttribute System.ComponentModel.ImmutableObjectAttribute::Yes
	ImmutableObjectAttribute_t3688055386 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t3688055386_StaticFields, ___Default_1)); }
	inline ImmutableObjectAttribute_t3688055386 * get_Default_1() const { return ___Default_1; }
	inline ImmutableObjectAttribute_t3688055386 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(ImmutableObjectAttribute_t3688055386 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t3688055386_StaticFields, ___No_2)); }
	inline ImmutableObjectAttribute_t3688055386 * get_No_2() const { return ___No_2; }
	inline ImmutableObjectAttribute_t3688055386 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(ImmutableObjectAttribute_t3688055386 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(ImmutableObjectAttribute_t3688055386_StaticFields, ___Yes_3)); }
	inline ImmutableObjectAttribute_t3688055386 * get_Yes_3() const { return ___Yes_3; }
	inline ImmutableObjectAttribute_t3688055386 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(ImmutableObjectAttribute_t3688055386 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMMUTABLEOBJECTATTRIBUTE_T3688055386_H
#ifndef EDITORATTRIBUTE_T1963488552_H
#define EDITORATTRIBUTE_T1963488552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t1963488552  : public Attribute_t2192553355
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t1963488552, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t1963488552, ___basename_1)); }
	inline String_t* get_basename_1() const { return ___basename_1; }
	inline String_t** get_address_of_basename_1() { return &___basename_1; }
	inline void set_basename_1(String_t* value)
	{
		___basename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORATTRIBUTE_T1963488552_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef COLLECTIONCONVERTER_T322281050_H
#define COLLECTIONCONVERTER_T322281050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t322281050  : public TypeConverter_t3820489046
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T322281050_H
#ifndef BROWSABLEATTRIBUTE_T994652139_H
#define BROWSABLEATTRIBUTE_T994652139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t994652139  : public Attribute_t2192553355
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t994652139, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t994652139_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t994652139 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t994652139 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t994652139 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t994652139_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t994652139 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t994652139 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t994652139 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t994652139_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t994652139 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t994652139 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t994652139 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t994652139_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t994652139 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t994652139 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t994652139 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T994652139_H
#ifndef BOOLEANCONVERTER_T828148105_H
#define BOOLEANCONVERTER_T828148105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t828148105  : public TypeConverter_t3820489046
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T828148105_H
#ifndef CULTUREINFOCONVERTER_T3682305349_H
#define CULTUREINFOCONVERTER_T3682305349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t3682305349  : public TypeConverter_t3820489046
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t4199658932 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t3682305349, ____standardValues_0)); }
	inline StandardValuesCollection_t4199658932 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t4199658932 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t4199658932 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T3682305349_H
#ifndef DATETIMECONVERTER_T342536956_H
#define DATETIMECONVERTER_T342536956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t342536956  : public TypeConverter_t3820489046
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T342536956_H
#ifndef DOWORKEVENTARGS_T105591734_H
#define DOWORKEVENTARGS_T105591734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoWorkEventArgs
struct  DoWorkEventArgs_t105591734  : public EventArgs_t2777409686
{
public:
	// System.Object System.ComponentModel.DoWorkEventArgs::arg
	RuntimeObject * ___arg_1;
	// System.Object System.ComponentModel.DoWorkEventArgs::result
	RuntimeObject * ___result_2;
	// System.Boolean System.ComponentModel.DoWorkEventArgs::cancel
	bool ___cancel_3;

public:
	inline static int32_t get_offset_of_arg_1() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t105591734, ___arg_1)); }
	inline RuntimeObject * get_arg_1() const { return ___arg_1; }
	inline RuntimeObject ** get_address_of_arg_1() { return &___arg_1; }
	inline void set_arg_1(RuntimeObject * value)
	{
		___arg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arg_1), value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t105591734, ___result_2)); }
	inline RuntimeObject * get_result_2() const { return ___result_2; }
	inline RuntimeObject ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(RuntimeObject * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier((&___result_2), value);
	}

	inline static int32_t get_offset_of_cancel_3() { return static_cast<int32_t>(offsetof(DoWorkEventArgs_t105591734, ___cancel_3)); }
	inline bool get_cancel_3() const { return ___cancel_3; }
	inline bool* get_address_of_cancel_3() { return &___cancel_3; }
	inline void set_cancel_3(bool value)
	{
		___cancel_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOWORKEVENTARGS_T105591734_H
#ifndef BASENUMBERCONVERTER_T1611446855_H
#define BASENUMBERCONVERTER_T1611446855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t1611446855  : public TypeConverter_t3820489046
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t1611446855, ___InnerType_0)); }
	inline Type_t * get_InnerType_0() const { return ___InnerType_0; }
	inline Type_t ** get_address_of_InnerType_0() { return &___InnerType_0; }
	inline void set_InnerType_0(Type_t * value)
	{
		___InnerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___InnerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T1611446855_H
#ifndef ASYNCCOMPLETEDEVENTARGS_T2411146098_H
#define ASYNCCOMPLETEDEVENTARGS_T2411146098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncCompletedEventArgs
struct  AsyncCompletedEventArgs_t2411146098  : public EventArgs_t2777409686
{
public:
	// System.Exception System.ComponentModel.AsyncCompletedEventArgs::_error
	Exception_t2856182317 * ____error_1;
	// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::_cancelled
	bool ____cancelled_2;
	// System.Object System.ComponentModel.AsyncCompletedEventArgs::_userState
	RuntimeObject * ____userState_3;

public:
	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t2411146098, ____error_1)); }
	inline Exception_t2856182317 * get__error_1() const { return ____error_1; }
	inline Exception_t2856182317 ** get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(Exception_t2856182317 * value)
	{
		____error_1 = value;
		Il2CppCodeGenWriteBarrier((&____error_1), value);
	}

	inline static int32_t get_offset_of__cancelled_2() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t2411146098, ____cancelled_2)); }
	inline bool get__cancelled_2() const { return ____cancelled_2; }
	inline bool* get_address_of__cancelled_2() { return &____cancelled_2; }
	inline void set__cancelled_2(bool value)
	{
		____cancelled_2 = value;
	}

	inline static int32_t get_offset_of__userState_3() { return static_cast<int32_t>(offsetof(AsyncCompletedEventArgs_t2411146098, ____userState_3)); }
	inline RuntimeObject * get__userState_3() const { return ____userState_3; }
	inline RuntimeObject ** get_address_of__userState_3() { return &____userState_3; }
	inline void set__userState_3(RuntimeObject * value)
	{
		____userState_3 = value;
		Il2CppCodeGenWriteBarrier((&____userState_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCOMPLETEDEVENTARGS_T2411146098_H
#ifndef CHARCONVERTER_T3649030306_H
#define CHARCONVERTER_T3649030306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t3649030306  : public TypeConverter_t3820489046
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T3649030306_H
#ifndef DEFAULTEVENTATTRIBUTE_T2395792111_H
#define DEFAULTEVENTATTRIBUTE_T2395792111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t2395792111  : public Attribute_t2192553355
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t2395792111, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t2395792111_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t2395792111 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t2395792111_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t2395792111 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t2395792111 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t2395792111 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T2395792111_H
#ifndef COMPONENTCOLLECTION_T879089334_H
#define COMPONENTCOLLECTION_T879089334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t879089334  : public ReadOnlyCollectionBase_t4117235904
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T879089334_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T1563973794_H
#define DEFAULTPROPERTYATTRIBUTE_T1563973794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t1563973794  : public Attribute_t2192553355
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1563973794, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t1563973794_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t1563973794 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1563973794_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t1563973794 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t1563973794 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t1563973794 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T1563973794_H
#ifndef DESCRIPTIONATTRIBUTE_T1603849284_H
#define DESCRIPTIONATTRIBUTE_T1603849284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t1603849284  : public Attribute_t2192553355
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t1603849284, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t1603849284_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t1603849284 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t1603849284_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t1603849284 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t1603849284 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t1603849284 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T1603849284_H
#ifndef DESIGNONLYATTRIBUTE_T3711432706_H
#define DESIGNONLYATTRIBUTE_T3711432706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t3711432706  : public Attribute_t2192553355
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3711432706, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t3711432706_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t3711432706 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t3711432706 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t3711432706 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3711432706_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t3711432706 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t3711432706 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t3711432706 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3711432706_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t3711432706 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t3711432706 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t3711432706 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3711432706_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t3711432706 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t3711432706 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t3711432706 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T3711432706_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T1349309778_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T1349309778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t1349309778  : public Attribute_t2192553355
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1349309778, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t1349309778_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t1349309778 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t1349309778 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t1349309778 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1349309778_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t1349309778 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t1349309778 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t1349309778 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1349309778_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t1349309778 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t1349309778 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t1349309778 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1349309778_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t1349309778 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t1349309778 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t1349309778 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T1349309778_H
#ifndef DESIGNERATTRIBUTE_T1515961380_H
#define DESIGNERATTRIBUTE_T1515961380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t1515961380  : public Attribute_t2192553355
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t1515961380, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t1515961380, ___basetypename_1)); }
	inline String_t* get_basetypename_1() const { return ___basetypename_1; }
	inline String_t** get_address_of_basetypename_1() { return &___basetypename_1; }
	inline void set_basetypename_1(String_t* value)
	{
		___basetypename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basetypename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERATTRIBUTE_T1515961380_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T1218629555_H
#define DESIGNERCATEGORYATTRIBUTE_T1218629555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t1218629555  : public Attribute_t2192553355
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1218629555, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t1218629555_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t1218629555 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t1218629555 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t1218629555 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t1218629555 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1218629555_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t1218629555 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t1218629555 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t1218629555 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1218629555_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t1218629555 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t1218629555 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t1218629555 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1218629555_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t1218629555 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t1218629555 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t1218629555 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1218629555_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t1218629555 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t1218629555 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t1218629555 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T1218629555_H
#ifndef CANCELEVENTARGS_T1218388547_H
#define CANCELEVENTARGS_T1218388547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CancelEventArgs
struct  CancelEventArgs_t1218388547  : public EventArgs_t2777409686
{
public:
	// System.Boolean System.ComponentModel.CancelEventArgs::cancel
	bool ___cancel_1;

public:
	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(CancelEventArgs_t1218388547, ___cancel_1)); }
	inline bool get_cancel_1() const { return ___cancel_1; }
	inline bool* get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(bool value)
	{
		___cancel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANCELEVENTARGS_T1218388547_H
#ifndef CATEGORYATTRIBUTE_T2525785445_H
#define CATEGORYATTRIBUTE_T2525785445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t2525785445  : public Attribute_t2192553355
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t2525785445_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::action
	CategoryAttribute_t2525785445 * ___action_2;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::appearance
	CategoryAttribute_t2525785445 * ___appearance_3;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::behaviour
	CategoryAttribute_t2525785445 * ___behaviour_4;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::data
	CategoryAttribute_t2525785445 * ___data_5;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t2525785445 * ___def_6;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::design
	CategoryAttribute_t2525785445 * ___design_7;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::drag_drop
	CategoryAttribute_t2525785445 * ___drag_drop_8;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::focus
	CategoryAttribute_t2525785445 * ___focus_9;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::format
	CategoryAttribute_t2525785445 * ___format_10;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::key
	CategoryAttribute_t2525785445 * ___key_11;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::layout
	CategoryAttribute_t2525785445 * ___layout_12;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::mouse
	CategoryAttribute_t2525785445 * ___mouse_13;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::window_style
	CategoryAttribute_t2525785445 * ___window_style_14;
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::async
	CategoryAttribute_t2525785445 * ___async_15;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_16;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___action_2)); }
	inline CategoryAttribute_t2525785445 * get_action_2() const { return ___action_2; }
	inline CategoryAttribute_t2525785445 ** get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(CategoryAttribute_t2525785445 * value)
	{
		___action_2 = value;
		Il2CppCodeGenWriteBarrier((&___action_2), value);
	}

	inline static int32_t get_offset_of_appearance_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___appearance_3)); }
	inline CategoryAttribute_t2525785445 * get_appearance_3() const { return ___appearance_3; }
	inline CategoryAttribute_t2525785445 ** get_address_of_appearance_3() { return &___appearance_3; }
	inline void set_appearance_3(CategoryAttribute_t2525785445 * value)
	{
		___appearance_3 = value;
		Il2CppCodeGenWriteBarrier((&___appearance_3), value);
	}

	inline static int32_t get_offset_of_behaviour_4() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___behaviour_4)); }
	inline CategoryAttribute_t2525785445 * get_behaviour_4() const { return ___behaviour_4; }
	inline CategoryAttribute_t2525785445 ** get_address_of_behaviour_4() { return &___behaviour_4; }
	inline void set_behaviour_4(CategoryAttribute_t2525785445 * value)
	{
		___behaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___behaviour_4), value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___data_5)); }
	inline CategoryAttribute_t2525785445 * get_data_5() const { return ___data_5; }
	inline CategoryAttribute_t2525785445 ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(CategoryAttribute_t2525785445 * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}

	inline static int32_t get_offset_of_def_6() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___def_6)); }
	inline CategoryAttribute_t2525785445 * get_def_6() const { return ___def_6; }
	inline CategoryAttribute_t2525785445 ** get_address_of_def_6() { return &___def_6; }
	inline void set_def_6(CategoryAttribute_t2525785445 * value)
	{
		___def_6 = value;
		Il2CppCodeGenWriteBarrier((&___def_6), value);
	}

	inline static int32_t get_offset_of_design_7() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___design_7)); }
	inline CategoryAttribute_t2525785445 * get_design_7() const { return ___design_7; }
	inline CategoryAttribute_t2525785445 ** get_address_of_design_7() { return &___design_7; }
	inline void set_design_7(CategoryAttribute_t2525785445 * value)
	{
		___design_7 = value;
		Il2CppCodeGenWriteBarrier((&___design_7), value);
	}

	inline static int32_t get_offset_of_drag_drop_8() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___drag_drop_8)); }
	inline CategoryAttribute_t2525785445 * get_drag_drop_8() const { return ___drag_drop_8; }
	inline CategoryAttribute_t2525785445 ** get_address_of_drag_drop_8() { return &___drag_drop_8; }
	inline void set_drag_drop_8(CategoryAttribute_t2525785445 * value)
	{
		___drag_drop_8 = value;
		Il2CppCodeGenWriteBarrier((&___drag_drop_8), value);
	}

	inline static int32_t get_offset_of_focus_9() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___focus_9)); }
	inline CategoryAttribute_t2525785445 * get_focus_9() const { return ___focus_9; }
	inline CategoryAttribute_t2525785445 ** get_address_of_focus_9() { return &___focus_9; }
	inline void set_focus_9(CategoryAttribute_t2525785445 * value)
	{
		___focus_9 = value;
		Il2CppCodeGenWriteBarrier((&___focus_9), value);
	}

	inline static int32_t get_offset_of_format_10() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___format_10)); }
	inline CategoryAttribute_t2525785445 * get_format_10() const { return ___format_10; }
	inline CategoryAttribute_t2525785445 ** get_address_of_format_10() { return &___format_10; }
	inline void set_format_10(CategoryAttribute_t2525785445 * value)
	{
		___format_10 = value;
		Il2CppCodeGenWriteBarrier((&___format_10), value);
	}

	inline static int32_t get_offset_of_key_11() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___key_11)); }
	inline CategoryAttribute_t2525785445 * get_key_11() const { return ___key_11; }
	inline CategoryAttribute_t2525785445 ** get_address_of_key_11() { return &___key_11; }
	inline void set_key_11(CategoryAttribute_t2525785445 * value)
	{
		___key_11 = value;
		Il2CppCodeGenWriteBarrier((&___key_11), value);
	}

	inline static int32_t get_offset_of_layout_12() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___layout_12)); }
	inline CategoryAttribute_t2525785445 * get_layout_12() const { return ___layout_12; }
	inline CategoryAttribute_t2525785445 ** get_address_of_layout_12() { return &___layout_12; }
	inline void set_layout_12(CategoryAttribute_t2525785445 * value)
	{
		___layout_12 = value;
		Il2CppCodeGenWriteBarrier((&___layout_12), value);
	}

	inline static int32_t get_offset_of_mouse_13() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___mouse_13)); }
	inline CategoryAttribute_t2525785445 * get_mouse_13() const { return ___mouse_13; }
	inline CategoryAttribute_t2525785445 ** get_address_of_mouse_13() { return &___mouse_13; }
	inline void set_mouse_13(CategoryAttribute_t2525785445 * value)
	{
		___mouse_13 = value;
		Il2CppCodeGenWriteBarrier((&___mouse_13), value);
	}

	inline static int32_t get_offset_of_window_style_14() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___window_style_14)); }
	inline CategoryAttribute_t2525785445 * get_window_style_14() const { return ___window_style_14; }
	inline CategoryAttribute_t2525785445 ** get_address_of_window_style_14() { return &___window_style_14; }
	inline void set_window_style_14(CategoryAttribute_t2525785445 * value)
	{
		___window_style_14 = value;
		Il2CppCodeGenWriteBarrier((&___window_style_14), value);
	}

	inline static int32_t get_offset_of_async_15() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___async_15)); }
	inline CategoryAttribute_t2525785445 * get_async_15() const { return ___async_15; }
	inline CategoryAttribute_t2525785445 ** get_address_of_async_15() { return &___async_15; }
	inline void set_async_15(CategoryAttribute_t2525785445 * value)
	{
		___async_15 = value;
		Il2CppCodeGenWriteBarrier((&___async_15), value);
	}

	inline static int32_t get_offset_of_lockobj_16() { return static_cast<int32_t>(offsetof(CategoryAttribute_t2525785445_StaticFields, ___lockobj_16)); }
	inline RuntimeObject * get_lockobj_16() const { return ___lockobj_16; }
	inline RuntimeObject ** get_address_of_lockobj_16() { return &___lockobj_16; }
	inline void set_lockobj_16(RuntimeObject * value)
	{
		___lockobj_16 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYATTRIBUTE_T2525785445_H
#ifndef RUNTIMELICENSECONTEXT_T1187132955_H
#define RUNTIMELICENSECONTEXT_T1187132955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.RuntimeLicenseContext
struct  RuntimeLicenseContext_t1187132955  : public LicenseContext_t1597291123
{
public:
	// System.Collections.Hashtable System.ComponentModel.Design.RuntimeLicenseContext::extraassemblies
	Hashtable_t1289739904 * ___extraassemblies_0;
	// System.Collections.Hashtable System.ComponentModel.Design.RuntimeLicenseContext::keys
	Hashtable_t1289739904 * ___keys_1;

public:
	inline static int32_t get_offset_of_extraassemblies_0() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t1187132955, ___extraassemblies_0)); }
	inline Hashtable_t1289739904 * get_extraassemblies_0() const { return ___extraassemblies_0; }
	inline Hashtable_t1289739904 ** get_address_of_extraassemblies_0() { return &___extraassemblies_0; }
	inline void set_extraassemblies_0(Hashtable_t1289739904 * value)
	{
		___extraassemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___extraassemblies_0), value);
	}

	inline static int32_t get_offset_of_keys_1() { return static_cast<int32_t>(offsetof(RuntimeLicenseContext_t1187132955, ___keys_1)); }
	inline Hashtable_t1289739904 * get_keys_1() const { return ___keys_1; }
	inline Hashtable_t1289739904 ** get_address_of_keys_1() { return &___keys_1; }
	inline void set_keys_1(Hashtable_t1289739904 * value)
	{
		___keys_1 = value;
		Il2CppCodeGenWriteBarrier((&___keys_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMELICENSECONTEXT_T1187132955_H
#ifndef DISPLAYNAMEATTRIBUTE_T1113861413_H
#define DISPLAYNAMEATTRIBUTE_T1113861413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DisplayNameAttribute
struct  DisplayNameAttribute_t1113861413  : public Attribute_t2192553355
{
public:
	// System.String System.ComponentModel.DisplayNameAttribute::attributeDisplayName
	String_t* ___attributeDisplayName_1;

public:
	inline static int32_t get_offset_of_attributeDisplayName_1() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t1113861413, ___attributeDisplayName_1)); }
	inline String_t* get_attributeDisplayName_1() const { return ___attributeDisplayName_1; }
	inline String_t** get_address_of_attributeDisplayName_1() { return &___attributeDisplayName_1; }
	inline void set_attributeDisplayName_1(String_t* value)
	{
		___attributeDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___attributeDisplayName_1), value);
	}
};

struct DisplayNameAttribute_t1113861413_StaticFields
{
public:
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_t1113861413 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t1113861413_StaticFields, ___Default_0)); }
	inline DisplayNameAttribute_t1113861413 * get_Default_0() const { return ___Default_0; }
	inline DisplayNameAttribute_t1113861413 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DisplayNameAttribute_t1113861413 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYNAMEATTRIBUTE_T1113861413_H
#ifndef DEFAULTVALUEATTRIBUTE_T2605349726_H
#define DEFAULTVALUEATTRIBUTE_T2605349726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t2605349726  : public Attribute_t2192553355
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t2605349726, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T2605349726_H
#ifndef COMPONENT_T343155537_H
#define COMPONENT_T343155537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t343155537  : public MarshalByRefObject_t3101711328
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t4127117629 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t343155537, ___event_handlers_1)); }
	inline EventHandlerList_t4127117629 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t4127117629 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t4127117629 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t343155537, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t343155537, ___disposedEvent_3)); }
	inline RuntimeObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline RuntimeObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(RuntimeObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T343155537_H
#ifndef BYTECONVERTER_T3361658541_H
#define BYTECONVERTER_T3361658541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t3361658541  : public BaseNumberConverter_t1611446855
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T3361658541_H
#ifndef ARRAYPROPERTYDESCRIPTOR_T4056978827_H
#define ARRAYPROPERTYDESCRIPTOR_T4056978827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct  ArrayPropertyDescriptor_t4056978827  : public PropertyDescriptor_t2949878547
{
public:
	// System.Int32 System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::index
	int32_t ___index_6;
	// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::array_type
	Type_t * ___array_type_7;

public:
	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t4056978827, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}

	inline static int32_t get_offset_of_array_type_7() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t4056978827, ___array_type_7)); }
	inline Type_t * get_array_type_7() const { return ___array_type_7; }
	inline Type_t ** get_address_of_array_type_7() { return &___array_type_7; }
	inline void set_array_type_7(Type_t * value)
	{
		___array_type_7 = value;
		Il2CppCodeGenWriteBarrier((&___array_type_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYPROPERTYDESCRIPTOR_T4056978827_H
#ifndef ARGUMENTEXCEPTION_T2715501635_H
#define ARGUMENTEXCEPTION_T2715501635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t2715501635  : public SystemException_t637859339
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t2715501635, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T2715501635_H
#ifndef ARRAYCONVERTER_T574086176_H
#define ARRAYCONVERTER_T574086176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t574086176  : public CollectionConverter_t322281050
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T574086176_H
#ifndef DELEGATE_T1462652325_H
#define DELEGATE_T1462652325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1462652325  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t663758033 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1462652325, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1462652325, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1462652325, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1462652325, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1462652325, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1462652325, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1462652325, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1462652325, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1462652325, ___data_8)); }
	inline DelegateData_t663758033 * get_data_8() const { return ___data_8; }
	inline DelegateData_t663758033 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t663758033 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1462652325_H
#ifndef BINDABLESUPPORT_T3193395994_H
#define BINDABLESUPPORT_T3193395994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BindableSupport
struct  BindableSupport_t3193395994 
{
public:
	// System.Int32 System.ComponentModel.BindableSupport::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindableSupport_t3193395994, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDABLESUPPORT_T3193395994_H
#ifndef LISTSORTDIRECTION_T3885975491_H
#define LISTSORTDIRECTION_T3885975491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t3885975491 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListSortDirection_t3885975491, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDIRECTION_T3885975491_H
#ifndef DOUBLECONVERTER_T1362206053_H
#define DOUBLECONVERTER_T1362206053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t1362206053  : public BaseNumberConverter_t1611446855
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T1362206053_H
#ifndef EDITORBROWSABLESTATE_T4068982872_H
#define EDITORBROWSABLESTATE_T4068982872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t4068982872 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t4068982872, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLESTATE_T4068982872_H
#ifndef LISTCHANGEDTYPE_T2249708602_H
#define LISTCHANGEDTYPE_T2249708602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedType
struct  ListChangedType_t2249708602 
{
public:
	// System.Int32 System.ComponentModel.ListChangedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListChangedType_t2249708602, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDTYPE_T2249708602_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T2912934056_H
#define DESIGNERSERIALIZATIONVISIBILITY_T2912934056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t2912934056 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t2912934056, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITY_T2912934056_H
#ifndef LICENSEUSAGEMODE_T3819060353_H
#define LICENSEUSAGEMODE_T3819060353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseUsageMode
struct  LicenseUsageMode_t3819060353 
{
public:
	// System.Int32 System.ComponentModel.LicenseUsageMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LicenseUsageMode_t3819060353, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEUSAGEMODE_T3819060353_H
#ifndef LICENSEEXCEPTION_T3303724705_H
#define LICENSEEXCEPTION_T3303724705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.LicenseException
struct  LicenseException_t3303724705  : public SystemException_t637859339
{
public:
	// System.Type System.ComponentModel.LicenseException::type
	Type_t * ___type_11;

public:
	inline static int32_t get_offset_of_type_11() { return static_cast<int32_t>(offsetof(LicenseException_t3303724705, ___type_11)); }
	inline Type_t * get_type_11() const { return ___type_11; }
	inline Type_t ** get_address_of_type_11() { return &___type_11; }
	inline void set_type_11(Type_t * value)
	{
		___type_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LICENSEEXCEPTION_T3303724705_H
#ifndef COMPONENTCONVERTER_T917635515_H
#define COMPONENTCONVERTER_T917635515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t917635515  : public ReferenceConverter_t2514389054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T917635515_H
#ifndef DECIMALCONVERTER_T2171574982_H
#define DECIMALCONVERTER_T2171574982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t2171574982  : public BaseNumberConverter_t1611446855
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T2171574982_H
#ifndef COLLECTIONCHANGEACTION_T2214844204_H
#define COLLECTIONCHANGEACTION_T2214844204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t2214844204 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t2214844204, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEACTION_T2214844204_H
#ifndef INT16CONVERTER_T1368453733_H
#define INT16CONVERTER_T1368453733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t1368453733  : public BaseNumberConverter_t1611446855
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T1368453733_H
#ifndef INT64CONVERTER_T250217620_H
#define INT64CONVERTER_T250217620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t250217620  : public BaseNumberConverter_t1611446855
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T250217620_H
#ifndef INT32CONVERTER_T3709594130_H
#define INT32CONVERTER_T3709594130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t3709594130  : public BaseNumberConverter_t1611446855
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T3709594130_H
#ifndef EDITORBROWSABLEATTRIBUTE_T1560301067_H
#define EDITORBROWSABLEATTRIBUTE_T1560301067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t1560301067  : public Attribute_t2192553355
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t1560301067, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T1560301067_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T1622385013_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T1622385013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t1622385013  : public Attribute_t2192553355
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1622385013, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t1622385013_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t1622385013 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t1622385013 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t1622385013 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t1622385013 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1622385013_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t1622385013 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t1622385013 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t1622385013 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1622385013_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t1622385013 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t1622385013 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t1622385013 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1622385013_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t1622385013 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t1622385013 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t1622385013 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1622385013_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t1622385013 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t1622385013 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t1622385013 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T1622385013_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T1881819480_H
#define INVALIDENUMARGUMENTEXCEPTION_T1881819480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t1881819480  : public ArgumentException_t2715501635
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T1881819480_H
#ifndef MULTICASTDELEGATE_T3875463140_H
#define MULTICASTDELEGATE_T3875463140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3875463140  : public Delegate_t1462652325
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3875463140 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3875463140 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3875463140, ___prev_9)); }
	inline MulticastDelegate_t3875463140 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3875463140 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3875463140 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3875463140, ___kpm_next_10)); }
	inline MulticastDelegate_t3875463140 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3875463140 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3875463140 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3875463140_H
#ifndef COLLECTIONCHANGEEVENTARGS_T1576078202_H
#define COLLECTIONCHANGEEVENTARGS_T1576078202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t1576078202  : public EventArgs_t2777409686
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1576078202, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1576078202, ___theElement_2)); }
	inline RuntimeObject * get_theElement_2() const { return ___theElement_2; }
	inline RuntimeObject ** get_address_of_theElement_2() { return &___theElement_2; }
	inline void set_theElement_2(RuntimeObject * value)
	{
		___theElement_2 = value;
		Il2CppCodeGenWriteBarrier((&___theElement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTARGS_T1576078202_H
#ifndef LISTCHANGEDEVENTARGS_T534846928_H
#define LISTCHANGEDEVENTARGS_T534846928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListChangedEventArgs
struct  ListChangedEventArgs_t534846928  : public EventArgs_t2777409686
{
public:
	// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::changedType
	int32_t ___changedType_1;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::oldIndex
	int32_t ___oldIndex_2;
	// System.Int32 System.ComponentModel.ListChangedEventArgs::newIndex
	int32_t ___newIndex_3;
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListChangedEventArgs::propDesc
	PropertyDescriptor_t2949878547 * ___propDesc_4;

public:
	inline static int32_t get_offset_of_changedType_1() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t534846928, ___changedType_1)); }
	inline int32_t get_changedType_1() const { return ___changedType_1; }
	inline int32_t* get_address_of_changedType_1() { return &___changedType_1; }
	inline void set_changedType_1(int32_t value)
	{
		___changedType_1 = value;
	}

	inline static int32_t get_offset_of_oldIndex_2() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t534846928, ___oldIndex_2)); }
	inline int32_t get_oldIndex_2() const { return ___oldIndex_2; }
	inline int32_t* get_address_of_oldIndex_2() { return &___oldIndex_2; }
	inline void set_oldIndex_2(int32_t value)
	{
		___oldIndex_2 = value;
	}

	inline static int32_t get_offset_of_newIndex_3() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t534846928, ___newIndex_3)); }
	inline int32_t get_newIndex_3() const { return ___newIndex_3; }
	inline int32_t* get_address_of_newIndex_3() { return &___newIndex_3; }
	inline void set_newIndex_3(int32_t value)
	{
		___newIndex_3 = value;
	}

	inline static int32_t get_offset_of_propDesc_4() { return static_cast<int32_t>(offsetof(ListChangedEventArgs_t534846928, ___propDesc_4)); }
	inline PropertyDescriptor_t2949878547 * get_propDesc_4() const { return ___propDesc_4; }
	inline PropertyDescriptor_t2949878547 ** get_address_of_propDesc_4() { return &___propDesc_4; }
	inline void set_propDesc_4(PropertyDescriptor_t2949878547 * value)
	{
		___propDesc_4 = value;
		Il2CppCodeGenWriteBarrier((&___propDesc_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTCHANGEDEVENTARGS_T534846928_H
#ifndef LISTSORTDESCRIPTION_T3203102855_H
#define LISTSORTDESCRIPTION_T3203102855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDescription
struct  ListSortDescription_t3203102855  : public RuntimeObject
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListSortDescription::propertyDescriptor
	PropertyDescriptor_t2949878547 * ___propertyDescriptor_0;
	// System.ComponentModel.ListSortDirection System.ComponentModel.ListSortDescription::sortDirection
	int32_t ___sortDirection_1;

public:
	inline static int32_t get_offset_of_propertyDescriptor_0() { return static_cast<int32_t>(offsetof(ListSortDescription_t3203102855, ___propertyDescriptor_0)); }
	inline PropertyDescriptor_t2949878547 * get_propertyDescriptor_0() const { return ___propertyDescriptor_0; }
	inline PropertyDescriptor_t2949878547 ** get_address_of_propertyDescriptor_0() { return &___propertyDescriptor_0; }
	inline void set_propertyDescriptor_0(PropertyDescriptor_t2949878547 * value)
	{
		___propertyDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((&___propertyDescriptor_0), value);
	}

	inline static int32_t get_offset_of_sortDirection_1() { return static_cast<int32_t>(offsetof(ListSortDescription_t3203102855, ___sortDirection_1)); }
	inline int32_t get_sortDirection_1() const { return ___sortDirection_1; }
	inline int32_t* get_address_of_sortDirection_1() { return &___sortDirection_1; }
	inline void set_sortDirection_1(int32_t value)
	{
		___sortDirection_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDESCRIPTION_T3203102855_H
#ifndef PROCESSWORKEREVENTHANDLER_T2685475342_H
#define PROCESSWORKEREVENTHANDLER_T2685475342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler
struct  ProcessWorkerEventHandler_t2685475342  : public MulticastDelegate_t3875463140
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSWORKEREVENTHANDLER_T2685475342_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { sizeof (InstanceDescriptor_t3745943328), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1300[3] = 
{
	InstanceDescriptor_t3745943328::get_offset_of_member_0(),
	InstanceDescriptor_t3745943328::get_offset_of_arguments_1(),
	InstanceDescriptor_t3745943328::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { sizeof (DesignerTransaction_t2727282508), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1301[2] = 
{
	DesignerTransaction_t2727282508::get_offset_of_committed_0(),
	DesignerTransaction_t2727282508::get_offset_of_canceled_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { sizeof (RuntimeLicenseContext_t1187132955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1310[2] = 
{
	RuntimeLicenseContext_t1187132955::get_offset_of_extraassemblies_0(),
	RuntimeLicenseContext_t1187132955::get_offset_of_keys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { sizeof (ArrayConverter_t574086176), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { sizeof (ArrayPropertyDescriptor_t4056978827), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1312[2] = 
{
	ArrayPropertyDescriptor_t4056978827::get_offset_of_index_6(),
	ArrayPropertyDescriptor_t4056978827::get_offset_of_array_type_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { sizeof (AsyncCompletedEventArgs_t2411146098), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1313[3] = 
{
	AsyncCompletedEventArgs_t2411146098::get_offset_of__error_1(),
	AsyncCompletedEventArgs_t2411146098::get_offset_of__cancelled_2(),
	AsyncCompletedEventArgs_t2411146098::get_offset_of__userState_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { sizeof (AsyncOperation_t2140452791), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1314[3] = 
{
	AsyncOperation_t2140452791::get_offset_of_ctx_0(),
	AsyncOperation_t2140452791::get_offset_of_state_1(),
	AsyncOperation_t2140452791::get_offset_of_done_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { sizeof (AsyncOperationManager_t1675359452), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { sizeof (AttributeCollection_t222333103), -1, sizeof(AttributeCollection_t222333103_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1316[2] = 
{
	AttributeCollection_t222333103::get_offset_of_attrList_0(),
	AttributeCollection_t222333103_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { sizeof (BackgroundWorker_t307484986), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1317[7] = 
{
	BackgroundWorker_t307484986::get_offset_of_async_0(),
	BackgroundWorker_t307484986::get_offset_of_cancel_pending_1(),
	BackgroundWorker_t307484986::get_offset_of_report_progress_2(),
	BackgroundWorker_t307484986::get_offset_of_support_cancel_3(),
	BackgroundWorker_t307484986::get_offset_of_DoWork_4(),
	BackgroundWorker_t307484986::get_offset_of_ProgressChanged_5(),
	BackgroundWorker_t307484986::get_offset_of_RunWorkerCompleted_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { sizeof (ProcessWorkerEventHandler_t2685475342), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { sizeof (BaseNumberConverter_t1611446855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1319[1] = 
{
	BaseNumberConverter_t1611446855::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { sizeof (BindableSupport_t3193395994)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1320[4] = 
{
	BindableSupport_t3193395994::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { sizeof (BooleanConverter_t828148105), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { sizeof (BrowsableAttribute_t994652139), -1, sizeof(BrowsableAttribute_t994652139_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1322[4] = 
{
	BrowsableAttribute_t994652139::get_offset_of_browsable_0(),
	BrowsableAttribute_t994652139_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t994652139_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t994652139_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { sizeof (ByteConverter_t3361658541), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { sizeof (CancelEventArgs_t1218388547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1324[1] = 
{
	CancelEventArgs_t1218388547::get_offset_of_cancel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { sizeof (CategoryAttribute_t2525785445), -1, sizeof(CategoryAttribute_t2525785445_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1325[17] = 
{
	CategoryAttribute_t2525785445::get_offset_of_category_0(),
	CategoryAttribute_t2525785445::get_offset_of_IsLocalized_1(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_action_2(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_appearance_3(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_behaviour_4(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_data_5(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_def_6(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_design_7(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_drag_drop_8(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_focus_9(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_format_10(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_key_11(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_layout_12(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_mouse_13(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_window_style_14(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_async_15(),
	CategoryAttribute_t2525785445_StaticFields::get_offset_of_lockobj_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { sizeof (CharConverter_t3649030306), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { sizeof (CollectionChangeAction_t2214844204)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1327[4] = 
{
	CollectionChangeAction_t2214844204::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { sizeof (CollectionChangeEventArgs_t1576078202), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1328[2] = 
{
	CollectionChangeEventArgs_t1576078202::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t1576078202::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { sizeof (CollectionConverter_t322281050), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { sizeof (Component_t343155537), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1330[3] = 
{
	Component_t343155537::get_offset_of_event_handlers_1(),
	Component_t343155537::get_offset_of_mySite_2(),
	Component_t343155537::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { sizeof (ComponentCollection_t879089334), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { sizeof (ComponentConverter_t917635515), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { sizeof (CultureInfoConverter_t3682305349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1333[1] = 
{
	CultureInfoConverter_t3682305349::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { sizeof (CultureInfoComparer_t633340472), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { sizeof (CustomTypeDescriptor_t1436110343), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1335[1] = 
{
	CustomTypeDescriptor_t1436110343::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { sizeof (DateTimeConverter_t342536956), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { sizeof (DecimalConverter_t2171574982), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { sizeof (DefaultEventAttribute_t2395792111), -1, sizeof(DefaultEventAttribute_t2395792111_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1338[2] = 
{
	DefaultEventAttribute_t2395792111::get_offset_of_eventName_0(),
	DefaultEventAttribute_t2395792111_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { sizeof (DefaultPropertyAttribute_t1563973794), -1, sizeof(DefaultPropertyAttribute_t1563973794_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1339[2] = 
{
	DefaultPropertyAttribute_t1563973794::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t1563973794_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { sizeof (DefaultValueAttribute_t2605349726), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1340[1] = 
{
	DefaultValueAttribute_t2605349726::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { sizeof (DescriptionAttribute_t1603849284), -1, sizeof(DescriptionAttribute_t1603849284_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1341[2] = 
{
	DescriptionAttribute_t1603849284::get_offset_of_desc_0(),
	DescriptionAttribute_t1603849284_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (DesignOnlyAttribute_t3711432706), -1, sizeof(DesignOnlyAttribute_t3711432706_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1342[4] = 
{
	DesignOnlyAttribute_t3711432706::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t3711432706_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t3711432706_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t3711432706_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { sizeof (DesignTimeVisibleAttribute_t1349309778), -1, sizeof(DesignTimeVisibleAttribute_t1349309778_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1343[4] = 
{
	DesignTimeVisibleAttribute_t1349309778::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t1349309778_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t1349309778_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t1349309778_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (DesignerAttribute_t1515961380), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1344[2] = 
{
	DesignerAttribute_t1515961380::get_offset_of_name_0(),
	DesignerAttribute_t1515961380::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (DesignerCategoryAttribute_t1218629555), -1, sizeof(DesignerCategoryAttribute_t1218629555_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1345[5] = 
{
	DesignerCategoryAttribute_t1218629555::get_offset_of_category_0(),
	DesignerCategoryAttribute_t1218629555_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t1218629555_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t1218629555_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t1218629555_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { sizeof (DesignerSerializationVisibility_t2912934056)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1346[4] = 
{
	DesignerSerializationVisibility_t2912934056::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { sizeof (DesignerSerializationVisibilityAttribute_t1622385013), -1, sizeof(DesignerSerializationVisibilityAttribute_t1622385013_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1347[5] = 
{
	DesignerSerializationVisibilityAttribute_t1622385013::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t1622385013_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t1622385013_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t1622385013_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t1622385013_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { sizeof (DisplayNameAttribute_t1113861413), -1, sizeof(DisplayNameAttribute_t1113861413_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1348[2] = 
{
	DisplayNameAttribute_t1113861413_StaticFields::get_offset_of_Default_0(),
	DisplayNameAttribute_t1113861413::get_offset_of_attributeDisplayName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { sizeof (DoWorkEventArgs_t105591734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1349[3] = 
{
	DoWorkEventArgs_t105591734::get_offset_of_arg_1(),
	DoWorkEventArgs_t105591734::get_offset_of_result_2(),
	DoWorkEventArgs_t105591734::get_offset_of_cancel_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { sizeof (DoubleConverter_t1362206053), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { sizeof (EditorAttribute_t1963488552), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1351[2] = 
{
	EditorAttribute_t1963488552::get_offset_of_name_0(),
	EditorAttribute_t1963488552::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { sizeof (EditorBrowsableAttribute_t1560301067), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1352[1] = 
{
	EditorBrowsableAttribute_t1560301067::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { sizeof (EditorBrowsableState_t4068982872)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1353[4] = 
{
	EditorBrowsableState_t4068982872::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { sizeof (EnumConverter_t2754704621), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1354[2] = 
{
	EnumConverter_t2754704621::get_offset_of_type_0(),
	EnumConverter_t2754704621::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { sizeof (EnumComparer_t3271190555), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { sizeof (EventDescriptor_t4035432713), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { sizeof (EventDescriptorCollection_t3387586206), -1, sizeof(EventDescriptorCollection_t3387586206_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1357[3] = 
{
	EventDescriptorCollection_t3387586206::get_offset_of_eventList_0(),
	EventDescriptorCollection_t3387586206::get_offset_of_isReadOnly_1(),
	EventDescriptorCollection_t3387586206_StaticFields::get_offset_of_Empty_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { sizeof (ListEntry_t3890785597), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1358[3] = 
{
	ListEntry_t3890785597::get_offset_of_key_0(),
	ListEntry_t3890785597::get_offset_of_value_1(),
	ListEntry_t3890785597::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { sizeof (EventHandlerList_t4127117629), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1359[2] = 
{
	EventHandlerList_t4127117629::get_offset_of_entries_0(),
	EventHandlerList_t4127117629::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { sizeof (ExpandableObjectConverter_t3171151092), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { sizeof (GuidConverter_t678386038), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1376 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1377 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1378 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1379 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1380 = { sizeof (ImmutableObjectAttribute_t3688055386), -1, sizeof(ImmutableObjectAttribute_t3688055386_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1380[4] = 
{
	ImmutableObjectAttribute_t3688055386::get_offset_of_immutable_0(),
	ImmutableObjectAttribute_t3688055386_StaticFields::get_offset_of_Default_1(),
	ImmutableObjectAttribute_t3688055386_StaticFields::get_offset_of_No_2(),
	ImmutableObjectAttribute_t3688055386_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1381 = { sizeof (Int16Converter_t1368453733), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1382 = { sizeof (Int32Converter_t3709594130), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1383 = { sizeof (Int64Converter_t250217620), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1384 = { sizeof (InvalidEnumArgumentException_t1881819480), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1385 = { sizeof (LicFileLicenseProvider_t3649310256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1386 = { sizeof (LicFileLicense_t3846033349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1386[1] = 
{
	LicFileLicense_t3846033349::get_offset_of__key_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1387 = { sizeof (License_t1620764037), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1388 = { sizeof (LicenseContext_t1597291123), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1389 = { sizeof (LicenseException_t3303724705), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1389[1] = 
{
	LicenseException_t3303724705::get_offset_of_type_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1390 = { sizeof (LicenseManager_t1107488353), -1, sizeof(LicenseManager_t1107488353_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1390[3] = 
{
	LicenseManager_t1107488353_StaticFields::get_offset_of_mycontext_0(),
	LicenseManager_t1107488353_StaticFields::get_offset_of_contextLockUser_1(),
	LicenseManager_t1107488353_StaticFields::get_offset_of_lockObject_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1391 = { sizeof (LicenseProvider_t3288447706), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1392 = { sizeof (LicenseProviderAttribute_t100901307), -1, sizeof(LicenseProviderAttribute_t100901307_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1392[2] = 
{
	LicenseProviderAttribute_t100901307::get_offset_of_Provider_0(),
	LicenseProviderAttribute_t100901307_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1393 = { sizeof (LicenseUsageMode_t3819060353)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1393[3] = 
{
	LicenseUsageMode_t3819060353::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1394 = { sizeof (ListBindableAttribute_t300571407), -1, sizeof(ListBindableAttribute_t300571407_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1394[4] = 
{
	ListBindableAttribute_t300571407_StaticFields::get_offset_of_Default_0(),
	ListBindableAttribute_t300571407_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t300571407_StaticFields::get_offset_of_Yes_2(),
	ListBindableAttribute_t300571407::get_offset_of_bindable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1395 = { sizeof (ListChangedEventArgs_t534846928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1395[4] = 
{
	ListChangedEventArgs_t534846928::get_offset_of_changedType_1(),
	ListChangedEventArgs_t534846928::get_offset_of_oldIndex_2(),
	ListChangedEventArgs_t534846928::get_offset_of_newIndex_3(),
	ListChangedEventArgs_t534846928::get_offset_of_propDesc_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1396 = { sizeof (ListChangedType_t2249708602)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1396[9] = 
{
	ListChangedType_t2249708602::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1397 = { sizeof (ListSortDescription_t3203102855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1397[2] = 
{
	ListSortDescription_t3203102855::get_offset_of_propertyDescriptor_0(),
	ListSortDescription_t3203102855::get_offset_of_sortDirection_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1398 = { sizeof (ListSortDescriptionCollection_t535237205), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1398[1] = 
{
	ListSortDescriptionCollection_t535237205::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1399 = { sizeof (ListSortDirection_t3885975491)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1399[3] = 
{
	ListSortDirection_t3885975491::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
