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

// System.IntPtr[]
struct IntPtrU5BU5D_t3973137824;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t1096780766;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t1868406169;
// System.Collections.Hashtable
struct Hashtable_t1289739904;
// System.Text.RegularExpressions.MRUList
struct MRUList_t723177117;
// System.Text.RegularExpressions.Regex
struct Regex_t1901338271;
// System.Text.RegularExpressions.MRUList/Node
struct Node_t1034484664;
// System.UInt16[]
struct UInt16U5BU5D_t1203934362;
// System.String[]
struct StringU5BU5D_t1443727135;
// System.Collections.ArrayList
struct ArrayList_t4142489098;
// System.Collections.IList
struct IList_t1352691609;
// System.Byte[]
struct ByteU5BU5D_t3665519352;
// System.Uri
struct Uri_t3180489251;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t3889859019;
// System.UriParser
struct UriParser_t3111855441;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3251534394;
// System.Text.RegularExpressions.Match
struct Match_t782501982;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t3109691907;
// System.Text.RegularExpressions.Capture[]
struct CaptureU5BU5D_t501910519;
// System.Security.Cryptography.Oid
struct Oid_t479295258;
// System.Security.Cryptography.AsnEncodedDataCollection
struct AsnEncodedDataCollection_t3808329583;
// System.Security.Cryptography.OidCollection
struct OidCollection_t3324998466;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t4279657396;
// System.Void
struct Void_t3348323986;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1723503486;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t4176122178;
// System.Int32[]
struct Int32U5BU5D_t29945824;
// System.Char[]
struct CharU5BU5D_t3282938201;
// System.Collections.Stack
struct Stack_t2359939405;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t663758033;
// System.Collections.BitArray
struct BitArray_t1800151165;
// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t3089282293;
// System.Text.RegularExpressions.IMachine
struct IMachine_t2156508798;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t2622309834;
// System.Text.RegularExpressions.QuickSearch
struct QuickSearch_t2951143959;
// System.Text.RegularExpressions.Interpreter/RepeatContext
struct RepeatContext_t1820156589;
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t1575174450;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1734269663;
// Mono.Security.X509.X509Store
struct X509Store_t3998623456;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t281980317;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t3783658429;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t3908348667;
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t848794873;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t2343074669;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1837753083;
// System.ComponentModel.DoWorkEventArgs
struct DoWorkEventArgs_t105591734;
// System.IAsyncResult
struct IAsyncResult_t2988228258;
// System.AsyncCallback
struct AsyncCallback_t2694001226;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1576078202;
// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t2411146098;




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
#ifndef ENUMERATOR_T1668849238_H
#define ENUMERATOR_T1668849238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MatchCollection/Enumerator
struct  Enumerator_t1668849238  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.MatchCollection/Enumerator::index
	int32_t ___index_0;
	// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.MatchCollection/Enumerator::coll
	MatchCollection_t1868406169 * ___coll_1;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(Enumerator_t1668849238, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_coll_1() { return static_cast<int32_t>(offsetof(Enumerator_t1668849238, ___coll_1)); }
	inline MatchCollection_t1868406169 * get_coll_1() const { return ___coll_1; }
	inline MatchCollection_t1868406169 ** get_address_of_coll_1() { return &___coll_1; }
	inline void set_coll_1(MatchCollection_t1868406169 * value)
	{
		___coll_1 = value;
		Il2CppCodeGenWriteBarrier((&___coll_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1668849238_H
#ifndef FACTORYCACHE_T848794873_H
#define FACTORYCACHE_T848794873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.FactoryCache
struct  FactoryCache_t848794873  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.FactoryCache::capacity
	int32_t ___capacity_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.FactoryCache::factories
	Hashtable_t1289739904 * ___factories_1;
	// System.Text.RegularExpressions.MRUList System.Text.RegularExpressions.FactoryCache::mru_list
	MRUList_t723177117 * ___mru_list_2;

public:
	inline static int32_t get_offset_of_capacity_0() { return static_cast<int32_t>(offsetof(FactoryCache_t848794873, ___capacity_0)); }
	inline int32_t get_capacity_0() const { return ___capacity_0; }
	inline int32_t* get_address_of_capacity_0() { return &___capacity_0; }
	inline void set_capacity_0(int32_t value)
	{
		___capacity_0 = value;
	}

	inline static int32_t get_offset_of_factories_1() { return static_cast<int32_t>(offsetof(FactoryCache_t848794873, ___factories_1)); }
	inline Hashtable_t1289739904 * get_factories_1() const { return ___factories_1; }
	inline Hashtable_t1289739904 ** get_address_of_factories_1() { return &___factories_1; }
	inline void set_factories_1(Hashtable_t1289739904 * value)
	{
		___factories_1 = value;
		Il2CppCodeGenWriteBarrier((&___factories_1), value);
	}

	inline static int32_t get_offset_of_mru_list_2() { return static_cast<int32_t>(offsetof(FactoryCache_t848794873, ___mru_list_2)); }
	inline MRUList_t723177117 * get_mru_list_2() const { return ___mru_list_2; }
	inline MRUList_t723177117 ** get_address_of_mru_list_2() { return &___mru_list_2; }
	inline void set_mru_list_2(MRUList_t723177117 * value)
	{
		___mru_list_2 = value;
		Il2CppCodeGenWriteBarrier((&___mru_list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTORYCACHE_T848794873_H
#ifndef URIPARSER_T3111855441_H
#define URIPARSER_T3111855441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser
struct  UriParser_t3111855441  : public RuntimeObject
{
public:
	// System.String System.UriParser::scheme_name
	String_t* ___scheme_name_2;
	// System.Int32 System.UriParser::default_port
	int32_t ___default_port_3;

public:
	inline static int32_t get_offset_of_scheme_name_2() { return static_cast<int32_t>(offsetof(UriParser_t3111855441, ___scheme_name_2)); }
	inline String_t* get_scheme_name_2() const { return ___scheme_name_2; }
	inline String_t** get_address_of_scheme_name_2() { return &___scheme_name_2; }
	inline void set_scheme_name_2(String_t* value)
	{
		___scheme_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_name_2), value);
	}

	inline static int32_t get_offset_of_default_port_3() { return static_cast<int32_t>(offsetof(UriParser_t3111855441, ___default_port_3)); }
	inline int32_t get_default_port_3() const { return ___default_port_3; }
	inline int32_t* get_address_of_default_port_3() { return &___default_port_3; }
	inline void set_default_port_3(int32_t value)
	{
		___default_port_3 = value;
	}
};

struct UriParser_t3111855441_StaticFields
{
public:
	// System.Object System.UriParser::lock_object
	RuntimeObject * ___lock_object_0;
	// System.Collections.Hashtable System.UriParser::table
	Hashtable_t1289739904 * ___table_1;
	// System.Text.RegularExpressions.Regex System.UriParser::uri_regex
	Regex_t1901338271 * ___uri_regex_4;
	// System.Text.RegularExpressions.Regex System.UriParser::auth_regex
	Regex_t1901338271 * ___auth_regex_5;

public:
	inline static int32_t get_offset_of_lock_object_0() { return static_cast<int32_t>(offsetof(UriParser_t3111855441_StaticFields, ___lock_object_0)); }
	inline RuntimeObject * get_lock_object_0() const { return ___lock_object_0; }
	inline RuntimeObject ** get_address_of_lock_object_0() { return &___lock_object_0; }
	inline void set_lock_object_0(RuntimeObject * value)
	{
		___lock_object_0 = value;
		Il2CppCodeGenWriteBarrier((&___lock_object_0), value);
	}

	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(UriParser_t3111855441_StaticFields, ___table_1)); }
	inline Hashtable_t1289739904 * get_table_1() const { return ___table_1; }
	inline Hashtable_t1289739904 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_t1289739904 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier((&___table_1), value);
	}

	inline static int32_t get_offset_of_uri_regex_4() { return static_cast<int32_t>(offsetof(UriParser_t3111855441_StaticFields, ___uri_regex_4)); }
	inline Regex_t1901338271 * get_uri_regex_4() const { return ___uri_regex_4; }
	inline Regex_t1901338271 ** get_address_of_uri_regex_4() { return &___uri_regex_4; }
	inline void set_uri_regex_4(Regex_t1901338271 * value)
	{
		___uri_regex_4 = value;
		Il2CppCodeGenWriteBarrier((&___uri_regex_4), value);
	}

	inline static int32_t get_offset_of_auth_regex_5() { return static_cast<int32_t>(offsetof(UriParser_t3111855441_StaticFields, ___auth_regex_5)); }
	inline Regex_t1901338271 * get_auth_regex_5() const { return ___auth_regex_5; }
	inline Regex_t1901338271 ** get_address_of_auth_regex_5() { return &___auth_regex_5; }
	inline void set_auth_regex_5(Regex_t1901338271 * value)
	{
		___auth_regex_5 = value;
		Il2CppCodeGenWriteBarrier((&___auth_regex_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIPARSER_T3111855441_H
#ifndef MRULIST_T723177117_H
#define MRULIST_T723177117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MRUList
struct  MRUList_t723177117  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::head
	Node_t1034484664 * ___head_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::tail
	Node_t1034484664 * ___tail_1;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(MRUList_t723177117, ___head_0)); }
	inline Node_t1034484664 * get_head_0() const { return ___head_0; }
	inline Node_t1034484664 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Node_t1034484664 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_tail_1() { return static_cast<int32_t>(offsetof(MRUList_t723177117, ___tail_1)); }
	inline Node_t1034484664 * get_tail_1() const { return ___tail_1; }
	inline Node_t1034484664 ** get_address_of_tail_1() { return &___tail_1; }
	inline void set_tail_1(Node_t1034484664 * value)
	{
		___tail_1 = value;
		Il2CppCodeGenWriteBarrier((&___tail_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MRULIST_T723177117_H
#ifndef NODE_T1034484664_H
#define NODE_T1034484664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MRUList/Node
struct  Node_t1034484664  : public RuntimeObject
{
public:
	// System.Object System.Text.RegularExpressions.MRUList/Node::value
	RuntimeObject * ___value_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::previous
	Node_t1034484664 * ___previous_1;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::next
	Node_t1034484664 * ___next_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Node_t1034484664, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_previous_1() { return static_cast<int32_t>(offsetof(Node_t1034484664, ___previous_1)); }
	inline Node_t1034484664 * get_previous_1() const { return ___previous_1; }
	inline Node_t1034484664 ** get_address_of_previous_1() { return &___previous_1; }
	inline void set_previous_1(Node_t1034484664 * value)
	{
		___previous_1 = value;
		Il2CppCodeGenWriteBarrier((&___previous_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(Node_t1034484664, ___next_2)); }
	inline Node_t1034484664 * get_next_2() const { return ___next_2; }
	inline Node_t1034484664 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(Node_t1034484664 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODE_T1034484664_H
#ifndef LINKREF_T3195455246_H
#define LINKREF_T3195455246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.LinkRef
struct  LinkRef_t3195455246  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKREF_T3195455246_H
#ifndef INTERPRETERFACTORY_T1476489002_H
#define INTERPRETERFACTORY_T1476489002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.InterpreterFactory
struct  InterpreterFactory_t1476489002  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::mapping
	RuntimeObject* ___mapping_0;
	// System.UInt16[] System.Text.RegularExpressions.InterpreterFactory::pattern
	UInt16U5BU5D_t1203934362* ___pattern_1;
	// System.String[] System.Text.RegularExpressions.InterpreterFactory::namesMapping
	StringU5BU5D_t1443727135* ___namesMapping_2;
	// System.Int32 System.Text.RegularExpressions.InterpreterFactory::gap
	int32_t ___gap_3;

public:
	inline static int32_t get_offset_of_mapping_0() { return static_cast<int32_t>(offsetof(InterpreterFactory_t1476489002, ___mapping_0)); }
	inline RuntimeObject* get_mapping_0() const { return ___mapping_0; }
	inline RuntimeObject** get_address_of_mapping_0() { return &___mapping_0; }
	inline void set_mapping_0(RuntimeObject* value)
	{
		___mapping_0 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_0), value);
	}

	inline static int32_t get_offset_of_pattern_1() { return static_cast<int32_t>(offsetof(InterpreterFactory_t1476489002, ___pattern_1)); }
	inline UInt16U5BU5D_t1203934362* get_pattern_1() const { return ___pattern_1; }
	inline UInt16U5BU5D_t1203934362** get_address_of_pattern_1() { return &___pattern_1; }
	inline void set_pattern_1(UInt16U5BU5D_t1203934362* value)
	{
		___pattern_1 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_1), value);
	}

	inline static int32_t get_offset_of_namesMapping_2() { return static_cast<int32_t>(offsetof(InterpreterFactory_t1476489002, ___namesMapping_2)); }
	inline StringU5BU5D_t1443727135* get_namesMapping_2() const { return ___namesMapping_2; }
	inline StringU5BU5D_t1443727135** get_address_of_namesMapping_2() { return &___namesMapping_2; }
	inline void set_namesMapping_2(StringU5BU5D_t1443727135* value)
	{
		___namesMapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___namesMapping_2), value);
	}

	inline static int32_t get_offset_of_gap_3() { return static_cast<int32_t>(offsetof(InterpreterFactory_t1476489002, ___gap_3)); }
	inline int32_t get_gap_3() const { return ___gap_3; }
	inline int32_t* get_address_of_gap_3() { return &___gap_3; }
	inline void set_gap_3(int32_t value)
	{
		___gap_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERPRETERFACTORY_T1476489002_H
#ifndef PATTERNCOMPILER_T2474916417_H
#define PATTERNCOMPILER_T2474916417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler
struct  PatternCompiler_t2474916417  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Text.RegularExpressions.PatternCompiler::pgm
	ArrayList_t4142489098 * ___pgm_0;

public:
	inline static int32_t get_offset_of_pgm_0() { return static_cast<int32_t>(offsetof(PatternCompiler_t2474916417, ___pgm_0)); }
	inline ArrayList_t4142489098 * get_pgm_0() const { return ___pgm_0; }
	inline ArrayList_t4142489098 ** get_address_of_pgm_0() { return &___pgm_0; }
	inline void set_pgm_0(ArrayList_t4142489098 * value)
	{
		___pgm_0 = value;
		Il2CppCodeGenWriteBarrier((&___pgm_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATTERNCOMPILER_T2474916417_H
#ifndef REPEATCONTEXT_T1820156589_H
#define REPEATCONTEXT_T1820156589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/RepeatContext
struct  RepeatContext_t1820156589  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::start
	int32_t ___start_0;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::min
	int32_t ___min_1;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::max
	int32_t ___max_2;
	// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::lazy
	bool ___lazy_3;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::expr_pc
	int32_t ___expr_pc_4;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::previous
	RepeatContext_t1820156589 * ___previous_5;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::count
	int32_t ___count_6;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RepeatContext_t1820156589, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(RepeatContext_t1820156589, ___min_1)); }
	inline int32_t get_min_1() const { return ___min_1; }
	inline int32_t* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(int32_t value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(RepeatContext_t1820156589, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_lazy_3() { return static_cast<int32_t>(offsetof(RepeatContext_t1820156589, ___lazy_3)); }
	inline bool get_lazy_3() const { return ___lazy_3; }
	inline bool* get_address_of_lazy_3() { return &___lazy_3; }
	inline void set_lazy_3(bool value)
	{
		___lazy_3 = value;
	}

	inline static int32_t get_offset_of_expr_pc_4() { return static_cast<int32_t>(offsetof(RepeatContext_t1820156589, ___expr_pc_4)); }
	inline int32_t get_expr_pc_4() const { return ___expr_pc_4; }
	inline int32_t* get_address_of_expr_pc_4() { return &___expr_pc_4; }
	inline void set_expr_pc_4(int32_t value)
	{
		___expr_pc_4 = value;
	}

	inline static int32_t get_offset_of_previous_5() { return static_cast<int32_t>(offsetof(RepeatContext_t1820156589, ___previous_5)); }
	inline RepeatContext_t1820156589 * get_previous_5() const { return ___previous_5; }
	inline RepeatContext_t1820156589 ** get_address_of_previous_5() { return &___previous_5; }
	inline void set_previous_5(RepeatContext_t1820156589 * value)
	{
		___previous_5 = value;
		Il2CppCodeGenWriteBarrier((&___previous_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(RepeatContext_t1820156589, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPEATCONTEXT_T1820156589_H
#ifndef INTERVALCOLLECTION_T3089282293_H
#define INTERVALCOLLECTION_T3089282293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection
struct  IntervalCollection_t3089282293  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Text.RegularExpressions.IntervalCollection::intervals
	ArrayList_t4142489098 * ___intervals_0;

public:
	inline static int32_t get_offset_of_intervals_0() { return static_cast<int32_t>(offsetof(IntervalCollection_t3089282293, ___intervals_0)); }
	inline ArrayList_t4142489098 * get_intervals_0() const { return ___intervals_0; }
	inline ArrayList_t4142489098 ** get_address_of_intervals_0() { return &___intervals_0; }
	inline void set_intervals_0(ArrayList_t4142489098 * value)
	{
		___intervals_0 = value;
		Il2CppCodeGenWriteBarrier((&___intervals_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERVALCOLLECTION_T3089282293_H
#ifndef ENUMERATOR_T3743425539_H
#define ENUMERATOR_T3743425539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection/Enumerator
struct  Enumerator_t3743425539  : public RuntimeObject
{
public:
	// System.Collections.IList System.Text.RegularExpressions.IntervalCollection/Enumerator::list
	RuntimeObject* ___list_0;
	// System.Int32 System.Text.RegularExpressions.IntervalCollection/Enumerator::ptr
	int32_t ___ptr_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3743425539, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_ptr_1() { return static_cast<int32_t>(offsetof(Enumerator_t3743425539, ___ptr_1)); }
	inline int32_t get_ptr_1() const { return ___ptr_1; }
	inline int32_t* get_address_of_ptr_1() { return &___ptr_1; }
	inline void set_ptr_1(int32_t value)
	{
		___ptr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3743425539_H
#ifndef PARSER_T955552346_H
#define PARSER_T955552346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Parser
struct  Parser_t955552346  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Syntax.Parser::pattern
	String_t* ___pattern_0;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ptr
	int32_t ___ptr_1;
	// System.Collections.ArrayList System.Text.RegularExpressions.Syntax.Parser::caps
	ArrayList_t4142489098 * ___caps_2;
	// System.Collections.Hashtable System.Text.RegularExpressions.Syntax.Parser::refs
	Hashtable_t1289739904 * ___refs_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::num_groups
	int32_t ___num_groups_4;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::gap
	int32_t ___gap_5;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Parser_t955552346, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_ptr_1() { return static_cast<int32_t>(offsetof(Parser_t955552346, ___ptr_1)); }
	inline int32_t get_ptr_1() const { return ___ptr_1; }
	inline int32_t* get_address_of_ptr_1() { return &___ptr_1; }
	inline void set_ptr_1(int32_t value)
	{
		___ptr_1 = value;
	}

	inline static int32_t get_offset_of_caps_2() { return static_cast<int32_t>(offsetof(Parser_t955552346, ___caps_2)); }
	inline ArrayList_t4142489098 * get_caps_2() const { return ___caps_2; }
	inline ArrayList_t4142489098 ** get_address_of_caps_2() { return &___caps_2; }
	inline void set_caps_2(ArrayList_t4142489098 * value)
	{
		___caps_2 = value;
		Il2CppCodeGenWriteBarrier((&___caps_2), value);
	}

	inline static int32_t get_offset_of_refs_3() { return static_cast<int32_t>(offsetof(Parser_t955552346, ___refs_3)); }
	inline Hashtable_t1289739904 * get_refs_3() const { return ___refs_3; }
	inline Hashtable_t1289739904 ** get_address_of_refs_3() { return &___refs_3; }
	inline void set_refs_3(Hashtable_t1289739904 * value)
	{
		___refs_3 = value;
		Il2CppCodeGenWriteBarrier((&___refs_3), value);
	}

	inline static int32_t get_offset_of_num_groups_4() { return static_cast<int32_t>(offsetof(Parser_t955552346, ___num_groups_4)); }
	inline int32_t get_num_groups_4() const { return ___num_groups_4; }
	inline int32_t* get_address_of_num_groups_4() { return &___num_groups_4; }
	inline void set_num_groups_4(int32_t value)
	{
		___num_groups_4 = value;
	}

	inline static int32_t get_offset_of_gap_5() { return static_cast<int32_t>(offsetof(Parser_t955552346, ___gap_5)); }
	inline int32_t get_gap_5() const { return ___gap_5; }
	inline int32_t* get_address_of_gap_5() { return &___gap_5; }
	inline void set_gap_5(int32_t value)
	{
		___gap_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T955552346_H
#ifndef QUICKSEARCH_T2951143959_H
#define QUICKSEARCH_T2951143959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.QuickSearch
struct  QuickSearch_t2951143959  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.QuickSearch::str
	String_t* ___str_0;
	// System.Int32 System.Text.RegularExpressions.QuickSearch::len
	int32_t ___len_1;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::ignore
	bool ___ignore_2;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::reverse
	bool ___reverse_3;
	// System.Byte[] System.Text.RegularExpressions.QuickSearch::shift
	ByteU5BU5D_t3665519352* ___shift_4;
	// System.Collections.Hashtable System.Text.RegularExpressions.QuickSearch::shiftExtended
	Hashtable_t1289739904 * ___shiftExtended_5;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(QuickSearch_t2951143959, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_len_1() { return static_cast<int32_t>(offsetof(QuickSearch_t2951143959, ___len_1)); }
	inline int32_t get_len_1() const { return ___len_1; }
	inline int32_t* get_address_of_len_1() { return &___len_1; }
	inline void set_len_1(int32_t value)
	{
		___len_1 = value;
	}

	inline static int32_t get_offset_of_ignore_2() { return static_cast<int32_t>(offsetof(QuickSearch_t2951143959, ___ignore_2)); }
	inline bool get_ignore_2() const { return ___ignore_2; }
	inline bool* get_address_of_ignore_2() { return &___ignore_2; }
	inline void set_ignore_2(bool value)
	{
		___ignore_2 = value;
	}

	inline static int32_t get_offset_of_reverse_3() { return static_cast<int32_t>(offsetof(QuickSearch_t2951143959, ___reverse_3)); }
	inline bool get_reverse_3() const { return ___reverse_3; }
	inline bool* get_address_of_reverse_3() { return &___reverse_3; }
	inline void set_reverse_3(bool value)
	{
		___reverse_3 = value;
	}

	inline static int32_t get_offset_of_shift_4() { return static_cast<int32_t>(offsetof(QuickSearch_t2951143959, ___shift_4)); }
	inline ByteU5BU5D_t3665519352* get_shift_4() const { return ___shift_4; }
	inline ByteU5BU5D_t3665519352** get_address_of_shift_4() { return &___shift_4; }
	inline void set_shift_4(ByteU5BU5D_t3665519352* value)
	{
		___shift_4 = value;
		Il2CppCodeGenWriteBarrier((&___shift_4), value);
	}

	inline static int32_t get_offset_of_shiftExtended_5() { return static_cast<int32_t>(offsetof(QuickSearch_t2951143959, ___shiftExtended_5)); }
	inline Hashtable_t1289739904 * get_shiftExtended_5() const { return ___shiftExtended_5; }
	inline Hashtable_t1289739904 ** get_address_of_shiftExtended_5() { return &___shiftExtended_5; }
	inline void set_shiftExtended_5(Hashtable_t1289739904 * value)
	{
		___shiftExtended_5 = value;
		Il2CppCodeGenWriteBarrier((&___shiftExtended_5), value);
	}
};

struct QuickSearch_t2951143959_StaticFields
{
public:
	// System.Int32 System.Text.RegularExpressions.QuickSearch::THRESHOLD
	int32_t ___THRESHOLD_6;

public:
	inline static int32_t get_offset_of_THRESHOLD_6() { return static_cast<int32_t>(offsetof(QuickSearch_t2951143959_StaticFields, ___THRESHOLD_6)); }
	inline int32_t get_THRESHOLD_6() const { return ___THRESHOLD_6; }
	inline int32_t* get_address_of_THRESHOLD_6() { return &___THRESHOLD_6; }
	inline void set_THRESHOLD_6(int32_t value)
	{
		___THRESHOLD_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUICKSEARCH_T2951143959_H
#ifndef EXPRESSION_T3908348667_H
#define EXPRESSION_T3908348667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Expression
struct  Expression_t3908348667  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T3908348667_H
#ifndef URIBUILDER_T3988738817_H
#define URIBUILDER_T3988738817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriBuilder
struct  UriBuilder_t3988738817  : public RuntimeObject
{
public:
	// System.String System.UriBuilder::scheme
	String_t* ___scheme_0;
	// System.String System.UriBuilder::host
	String_t* ___host_1;
	// System.Int32 System.UriBuilder::port
	int32_t ___port_2;
	// System.String System.UriBuilder::path
	String_t* ___path_3;
	// System.String System.UriBuilder::query
	String_t* ___query_4;
	// System.String System.UriBuilder::fragment
	String_t* ___fragment_5;
	// System.String System.UriBuilder::username
	String_t* ___username_6;
	// System.String System.UriBuilder::password
	String_t* ___password_7;
	// System.Uri System.UriBuilder::uri
	Uri_t3180489251 * ___uri_8;
	// System.Boolean System.UriBuilder::modified
	bool ___modified_9;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriBuilder_t3988738817, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_host_1() { return static_cast<int32_t>(offsetof(UriBuilder_t3988738817, ___host_1)); }
	inline String_t* get_host_1() const { return ___host_1; }
	inline String_t** get_address_of_host_1() { return &___host_1; }
	inline void set_host_1(String_t* value)
	{
		___host_1 = value;
		Il2CppCodeGenWriteBarrier((&___host_1), value);
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(UriBuilder_t3988738817, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}

	inline static int32_t get_offset_of_path_3() { return static_cast<int32_t>(offsetof(UriBuilder_t3988738817, ___path_3)); }
	inline String_t* get_path_3() const { return ___path_3; }
	inline String_t** get_address_of_path_3() { return &___path_3; }
	inline void set_path_3(String_t* value)
	{
		___path_3 = value;
		Il2CppCodeGenWriteBarrier((&___path_3), value);
	}

	inline static int32_t get_offset_of_query_4() { return static_cast<int32_t>(offsetof(UriBuilder_t3988738817, ___query_4)); }
	inline String_t* get_query_4() const { return ___query_4; }
	inline String_t** get_address_of_query_4() { return &___query_4; }
	inline void set_query_4(String_t* value)
	{
		___query_4 = value;
		Il2CppCodeGenWriteBarrier((&___query_4), value);
	}

	inline static int32_t get_offset_of_fragment_5() { return static_cast<int32_t>(offsetof(UriBuilder_t3988738817, ___fragment_5)); }
	inline String_t* get_fragment_5() const { return ___fragment_5; }
	inline String_t** get_address_of_fragment_5() { return &___fragment_5; }
	inline void set_fragment_5(String_t* value)
	{
		___fragment_5 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_5), value);
	}

	inline static int32_t get_offset_of_username_6() { return static_cast<int32_t>(offsetof(UriBuilder_t3988738817, ___username_6)); }
	inline String_t* get_username_6() const { return ___username_6; }
	inline String_t** get_address_of_username_6() { return &___username_6; }
	inline void set_username_6(String_t* value)
	{
		___username_6 = value;
		Il2CppCodeGenWriteBarrier((&___username_6), value);
	}

	inline static int32_t get_offset_of_password_7() { return static_cast<int32_t>(offsetof(UriBuilder_t3988738817, ___password_7)); }
	inline String_t* get_password_7() const { return ___password_7; }
	inline String_t** get_address_of_password_7() { return &___password_7; }
	inline void set_password_7(String_t* value)
	{
		___password_7 = value;
		Il2CppCodeGenWriteBarrier((&___password_7), value);
	}

	inline static int32_t get_offset_of_uri_8() { return static_cast<int32_t>(offsetof(UriBuilder_t3988738817, ___uri_8)); }
	inline Uri_t3180489251 * get_uri_8() const { return ___uri_8; }
	inline Uri_t3180489251 ** get_address_of_uri_8() { return &___uri_8; }
	inline void set_uri_8(Uri_t3180489251 * value)
	{
		___uri_8 = value;
		Il2CppCodeGenWriteBarrier((&___uri_8), value);
	}

	inline static int32_t get_offset_of_modified_9() { return static_cast<int32_t>(offsetof(UriBuilder_t3988738817, ___modified_9)); }
	inline bool get_modified_9() const { return ___modified_9; }
	inline bool* get_address_of_modified_9() { return &___modified_9; }
	inline void set_modified_9(bool value)
	{
		___modified_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIBUILDER_T3988738817_H
#ifndef URI_T3180489251_H
#define URI_T3180489251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t3180489251  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_1;
	// System.String System.Uri::source
	String_t* ___source_2;
	// System.String System.Uri::scheme
	String_t* ___scheme_3;
	// System.String System.Uri::host
	String_t* ___host_4;
	// System.Int32 System.Uri::port
	int32_t ___port_5;
	// System.String System.Uri::path
	String_t* ___path_6;
	// System.String System.Uri::query
	String_t* ___query_7;
	// System.String System.Uri::fragment
	String_t* ___fragment_8;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_9;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_10;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_11;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_12;
	// System.String[] System.Uri::segments
	StringU5BU5D_t1443727135* ___segments_13;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_14;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_15;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_16;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_17;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_18;
	// System.UriParser System.Uri::parser
	UriParser_t3111855441 * ___parser_32;

public:
	inline static int32_t get_offset_of_isUnixFilePath_1() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___isUnixFilePath_1)); }
	inline bool get_isUnixFilePath_1() const { return ___isUnixFilePath_1; }
	inline bool* get_address_of_isUnixFilePath_1() { return &___isUnixFilePath_1; }
	inline void set_isUnixFilePath_1(bool value)
	{
		___isUnixFilePath_1 = value;
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___source_2)); }
	inline String_t* get_source_2() const { return ___source_2; }
	inline String_t** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(String_t* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((&___source_2), value);
	}

	inline static int32_t get_offset_of_scheme_3() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___scheme_3)); }
	inline String_t* get_scheme_3() const { return ___scheme_3; }
	inline String_t** get_address_of_scheme_3() { return &___scheme_3; }
	inline void set_scheme_3(String_t* value)
	{
		___scheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_3), value);
	}

	inline static int32_t get_offset_of_host_4() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___host_4)); }
	inline String_t* get_host_4() const { return ___host_4; }
	inline String_t** get_address_of_host_4() { return &___host_4; }
	inline void set_host_4(String_t* value)
	{
		___host_4 = value;
		Il2CppCodeGenWriteBarrier((&___host_4), value);
	}

	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___port_5)); }
	inline int32_t get_port_5() const { return ___port_5; }
	inline int32_t* get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(int32_t value)
	{
		___port_5 = value;
	}

	inline static int32_t get_offset_of_path_6() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___path_6)); }
	inline String_t* get_path_6() const { return ___path_6; }
	inline String_t** get_address_of_path_6() { return &___path_6; }
	inline void set_path_6(String_t* value)
	{
		___path_6 = value;
		Il2CppCodeGenWriteBarrier((&___path_6), value);
	}

	inline static int32_t get_offset_of_query_7() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___query_7)); }
	inline String_t* get_query_7() const { return ___query_7; }
	inline String_t** get_address_of_query_7() { return &___query_7; }
	inline void set_query_7(String_t* value)
	{
		___query_7 = value;
		Il2CppCodeGenWriteBarrier((&___query_7), value);
	}

	inline static int32_t get_offset_of_fragment_8() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___fragment_8)); }
	inline String_t* get_fragment_8() const { return ___fragment_8; }
	inline String_t** get_address_of_fragment_8() { return &___fragment_8; }
	inline void set_fragment_8(String_t* value)
	{
		___fragment_8 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_8), value);
	}

	inline static int32_t get_offset_of_userinfo_9() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___userinfo_9)); }
	inline String_t* get_userinfo_9() const { return ___userinfo_9; }
	inline String_t** get_address_of_userinfo_9() { return &___userinfo_9; }
	inline void set_userinfo_9(String_t* value)
	{
		___userinfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_9), value);
	}

	inline static int32_t get_offset_of_isUnc_10() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___isUnc_10)); }
	inline bool get_isUnc_10() const { return ___isUnc_10; }
	inline bool* get_address_of_isUnc_10() { return &___isUnc_10; }
	inline void set_isUnc_10(bool value)
	{
		___isUnc_10 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_11() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___isOpaquePart_11)); }
	inline bool get_isOpaquePart_11() const { return ___isOpaquePart_11; }
	inline bool* get_address_of_isOpaquePart_11() { return &___isOpaquePart_11; }
	inline void set_isOpaquePart_11(bool value)
	{
		___isOpaquePart_11 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_12() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___isAbsoluteUri_12)); }
	inline bool get_isAbsoluteUri_12() const { return ___isAbsoluteUri_12; }
	inline bool* get_address_of_isAbsoluteUri_12() { return &___isAbsoluteUri_12; }
	inline void set_isAbsoluteUri_12(bool value)
	{
		___isAbsoluteUri_12 = value;
	}

	inline static int32_t get_offset_of_segments_13() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___segments_13)); }
	inline StringU5BU5D_t1443727135* get_segments_13() const { return ___segments_13; }
	inline StringU5BU5D_t1443727135** get_address_of_segments_13() { return &___segments_13; }
	inline void set_segments_13(StringU5BU5D_t1443727135* value)
	{
		___segments_13 = value;
		Il2CppCodeGenWriteBarrier((&___segments_13), value);
	}

	inline static int32_t get_offset_of_userEscaped_14() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___userEscaped_14)); }
	inline bool get_userEscaped_14() const { return ___userEscaped_14; }
	inline bool* get_address_of_userEscaped_14() { return &___userEscaped_14; }
	inline void set_userEscaped_14(bool value)
	{
		___userEscaped_14 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_15() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___cachedAbsoluteUri_15)); }
	inline String_t* get_cachedAbsoluteUri_15() const { return ___cachedAbsoluteUri_15; }
	inline String_t** get_address_of_cachedAbsoluteUri_15() { return &___cachedAbsoluteUri_15; }
	inline void set_cachedAbsoluteUri_15(String_t* value)
	{
		___cachedAbsoluteUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_15), value);
	}

	inline static int32_t get_offset_of_cachedToString_16() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___cachedToString_16)); }
	inline String_t* get_cachedToString_16() const { return ___cachedToString_16; }
	inline String_t** get_address_of_cachedToString_16() { return &___cachedToString_16; }
	inline void set_cachedToString_16(String_t* value)
	{
		___cachedToString_16 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_16), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_17() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___cachedLocalPath_17)); }
	inline String_t* get_cachedLocalPath_17() const { return ___cachedLocalPath_17; }
	inline String_t** get_address_of_cachedLocalPath_17() { return &___cachedLocalPath_17; }
	inline void set_cachedLocalPath_17(String_t* value)
	{
		___cachedLocalPath_17 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_17), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_18() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___cachedHashCode_18)); }
	inline int32_t get_cachedHashCode_18() const { return ___cachedHashCode_18; }
	inline int32_t* get_address_of_cachedHashCode_18() { return &___cachedHashCode_18; }
	inline void set_cachedHashCode_18(int32_t value)
	{
		___cachedHashCode_18 = value;
	}

	inline static int32_t get_offset_of_parser_32() { return static_cast<int32_t>(offsetof(Uri_t3180489251, ___parser_32)); }
	inline UriParser_t3111855441 * get_parser_32() const { return ___parser_32; }
	inline UriParser_t3111855441 ** get_address_of_parser_32() { return &___parser_32; }
	inline void set_parser_32(UriParser_t3111855441 * value)
	{
		___parser_32 = value;
		Il2CppCodeGenWriteBarrier((&___parser_32), value);
	}
};

struct Uri_t3180489251_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_19;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_20;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_21;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_22;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_23;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_24;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_25;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_26;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_27;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_28;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_29;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_30;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t3889859019* ___schemes_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t3251534394 * ___U3CU3Ef__switchU24map12_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t3251534394 * ___U3CU3Ef__switchU24map13_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t3251534394 * ___U3CU3Ef__switchU24map14_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t3251534394 * ___U3CU3Ef__switchU24map15_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t3251534394 * ___U3CU3Ef__switchU24map16_37;

public:
	inline static int32_t get_offset_of_hexUpperChars_19() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___hexUpperChars_19)); }
	inline String_t* get_hexUpperChars_19() const { return ___hexUpperChars_19; }
	inline String_t** get_address_of_hexUpperChars_19() { return &___hexUpperChars_19; }
	inline void set_hexUpperChars_19(String_t* value)
	{
		___hexUpperChars_19 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_19), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_20() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___SchemeDelimiter_20)); }
	inline String_t* get_SchemeDelimiter_20() const { return ___SchemeDelimiter_20; }
	inline String_t** get_address_of_SchemeDelimiter_20() { return &___SchemeDelimiter_20; }
	inline void set_SchemeDelimiter_20(String_t* value)
	{
		___SchemeDelimiter_20 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_21() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___UriSchemeFile_21)); }
	inline String_t* get_UriSchemeFile_21() const { return ___UriSchemeFile_21; }
	inline String_t** get_address_of_UriSchemeFile_21() { return &___UriSchemeFile_21; }
	inline void set_UriSchemeFile_21(String_t* value)
	{
		___UriSchemeFile_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_22() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___UriSchemeFtp_22)); }
	inline String_t* get_UriSchemeFtp_22() const { return ___UriSchemeFtp_22; }
	inline String_t** get_address_of_UriSchemeFtp_22() { return &___UriSchemeFtp_22; }
	inline void set_UriSchemeFtp_22(String_t* value)
	{
		___UriSchemeFtp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_23() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___UriSchemeGopher_23)); }
	inline String_t* get_UriSchemeGopher_23() const { return ___UriSchemeGopher_23; }
	inline String_t** get_address_of_UriSchemeGopher_23() { return &___UriSchemeGopher_23; }
	inline void set_UriSchemeGopher_23(String_t* value)
	{
		___UriSchemeGopher_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_24() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___UriSchemeHttp_24)); }
	inline String_t* get_UriSchemeHttp_24() const { return ___UriSchemeHttp_24; }
	inline String_t** get_address_of_UriSchemeHttp_24() { return &___UriSchemeHttp_24; }
	inline void set_UriSchemeHttp_24(String_t* value)
	{
		___UriSchemeHttp_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_25() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___UriSchemeHttps_25)); }
	inline String_t* get_UriSchemeHttps_25() const { return ___UriSchemeHttps_25; }
	inline String_t** get_address_of_UriSchemeHttps_25() { return &___UriSchemeHttps_25; }
	inline void set_UriSchemeHttps_25(String_t* value)
	{
		___UriSchemeHttps_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_26() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___UriSchemeMailto_26)); }
	inline String_t* get_UriSchemeMailto_26() const { return ___UriSchemeMailto_26; }
	inline String_t** get_address_of_UriSchemeMailto_26() { return &___UriSchemeMailto_26; }
	inline void set_UriSchemeMailto_26(String_t* value)
	{
		___UriSchemeMailto_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_27() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___UriSchemeNews_27)); }
	inline String_t* get_UriSchemeNews_27() const { return ___UriSchemeNews_27; }
	inline String_t** get_address_of_UriSchemeNews_27() { return &___UriSchemeNews_27; }
	inline void set_UriSchemeNews_27(String_t* value)
	{
		___UriSchemeNews_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_28() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___UriSchemeNntp_28)); }
	inline String_t* get_UriSchemeNntp_28() const { return ___UriSchemeNntp_28; }
	inline String_t** get_address_of_UriSchemeNntp_28() { return &___UriSchemeNntp_28; }
	inline void set_UriSchemeNntp_28(String_t* value)
	{
		___UriSchemeNntp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_28), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_29() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___UriSchemeNetPipe_29)); }
	inline String_t* get_UriSchemeNetPipe_29() const { return ___UriSchemeNetPipe_29; }
	inline String_t** get_address_of_UriSchemeNetPipe_29() { return &___UriSchemeNetPipe_29; }
	inline void set_UriSchemeNetPipe_29(String_t* value)
	{
		___UriSchemeNetPipe_29 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_29), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_30() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___UriSchemeNetTcp_30)); }
	inline String_t* get_UriSchemeNetTcp_30() const { return ___UriSchemeNetTcp_30; }
	inline String_t** get_address_of_UriSchemeNetTcp_30() { return &___UriSchemeNetTcp_30; }
	inline void set_UriSchemeNetTcp_30(String_t* value)
	{
		___UriSchemeNetTcp_30 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_30), value);
	}

	inline static int32_t get_offset_of_schemes_31() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___schemes_31)); }
	inline UriSchemeU5BU5D_t3889859019* get_schemes_31() const { return ___schemes_31; }
	inline UriSchemeU5BU5D_t3889859019** get_address_of_schemes_31() { return &___schemes_31; }
	inline void set_schemes_31(UriSchemeU5BU5D_t3889859019* value)
	{
		___schemes_31 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_33() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___U3CU3Ef__switchU24map12_33)); }
	inline Dictionary_2_t3251534394 * get_U3CU3Ef__switchU24map12_33() const { return ___U3CU3Ef__switchU24map12_33; }
	inline Dictionary_2_t3251534394 ** get_address_of_U3CU3Ef__switchU24map12_33() { return &___U3CU3Ef__switchU24map12_33; }
	inline void set_U3CU3Ef__switchU24map12_33(Dictionary_2_t3251534394 * value)
	{
		___U3CU3Ef__switchU24map12_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_34() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___U3CU3Ef__switchU24map13_34)); }
	inline Dictionary_2_t3251534394 * get_U3CU3Ef__switchU24map13_34() const { return ___U3CU3Ef__switchU24map13_34; }
	inline Dictionary_2_t3251534394 ** get_address_of_U3CU3Ef__switchU24map13_34() { return &___U3CU3Ef__switchU24map13_34; }
	inline void set_U3CU3Ef__switchU24map13_34(Dictionary_2_t3251534394 * value)
	{
		___U3CU3Ef__switchU24map13_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_35() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___U3CU3Ef__switchU24map14_35)); }
	inline Dictionary_2_t3251534394 * get_U3CU3Ef__switchU24map14_35() const { return ___U3CU3Ef__switchU24map14_35; }
	inline Dictionary_2_t3251534394 ** get_address_of_U3CU3Ef__switchU24map14_35() { return &___U3CU3Ef__switchU24map14_35; }
	inline void set_U3CU3Ef__switchU24map14_35(Dictionary_2_t3251534394 * value)
	{
		___U3CU3Ef__switchU24map14_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_36() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___U3CU3Ef__switchU24map15_36)); }
	inline Dictionary_2_t3251534394 * get_U3CU3Ef__switchU24map15_36() const { return ___U3CU3Ef__switchU24map15_36; }
	inline Dictionary_2_t3251534394 ** get_address_of_U3CU3Ef__switchU24map15_36() { return &___U3CU3Ef__switchU24map15_36; }
	inline void set_U3CU3Ef__switchU24map15_36(Dictionary_2_t3251534394 * value)
	{
		___U3CU3Ef__switchU24map15_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_37() { return static_cast<int32_t>(offsetof(Uri_t3180489251_StaticFields, ___U3CU3Ef__switchU24map16_37)); }
	inline Dictionary_2_t3251534394 * get_U3CU3Ef__switchU24map16_37() const { return ___U3CU3Ef__switchU24map16_37; }
	inline Dictionary_2_t3251534394 ** get_address_of_U3CU3Ef__switchU24map16_37() { return &___U3CU3Ef__switchU24map16_37; }
	inline void set_U3CU3Ef__switchU24map16_37(Dictionary_2_t3251534394 * value)
	{
		___U3CU3Ef__switchU24map16_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T3180489251_H
#ifndef MATCHCOLLECTION_T1868406169_H
#define MATCHCOLLECTION_T1868406169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MatchCollection
struct  MatchCollection_t1868406169  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::current
	Match_t782501982 * ___current_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::list
	ArrayList_t4142489098 * ___list_1;

public:
	inline static int32_t get_offset_of_current_0() { return static_cast<int32_t>(offsetof(MatchCollection_t1868406169, ___current_0)); }
	inline Match_t782501982 * get_current_0() const { return ___current_0; }
	inline Match_t782501982 ** get_address_of_current_0() { return &___current_0; }
	inline void set_current_0(Match_t782501982 * value)
	{
		___current_0 = value;
		Il2CppCodeGenWriteBarrier((&___current_0), value);
	}

	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(MatchCollection_t1868406169, ___list_1)); }
	inline ArrayList_t4142489098 * get_list_1() const { return ___list_1; }
	inline ArrayList_t4142489098 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(ArrayList_t4142489098 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHCOLLECTION_T1868406169_H
#ifndef GROUPCOLLECTION_T2622309834_H
#define GROUPCOLLECTION_T2622309834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.GroupCollection
struct  GroupCollection_t2622309834  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::list
	GroupU5BU5D_t3109691907* ___list_0;
	// System.Int32 System.Text.RegularExpressions.GroupCollection::gap
	int32_t ___gap_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(GroupCollection_t2622309834, ___list_0)); }
	inline GroupU5BU5D_t3109691907* get_list_0() const { return ___list_0; }
	inline GroupU5BU5D_t3109691907** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(GroupU5BU5D_t3109691907* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_gap_1() { return static_cast<int32_t>(offsetof(GroupCollection_t2622309834, ___gap_1)); }
	inline int32_t get_gap_1() const { return ___gap_1; }
	inline int32_t* get_address_of_gap_1() { return &___gap_1; }
	inline void set_gap_1(int32_t value)
	{
		___gap_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUPCOLLECTION_T2622309834_H
#ifndef CATEGORYUTILS_T1881244697_H
#define CATEGORYUTILS_T1881244697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.CategoryUtils
struct  CategoryUtils_t1881244697  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYUTILS_T1881244697_H
#ifndef CAPTURECOLLECTION_T4176122178_H
#define CAPTURECOLLECTION_T4176122178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.CaptureCollection
struct  CaptureCollection_t4176122178  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Capture[] System.Text.RegularExpressions.CaptureCollection::list
	CaptureU5BU5D_t501910519* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CaptureCollection_t4176122178, ___list_0)); }
	inline CaptureU5BU5D_t501910519* get_list_0() const { return ___list_0; }
	inline CaptureU5BU5D_t501910519** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(CaptureU5BU5D_t501910519* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURECOLLECTION_T4176122178_H
#ifndef COLLECTIONBASE_T2472237531_H
#define COLLECTIONBASE_T2472237531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2472237531  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t4142489098 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2472237531, ___list_0)); }
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
#endif // COLLECTIONBASE_T2472237531_H
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
#ifndef ASNENCODEDDATA_T2396594692_H
#define ASNENCODEDDATA_T2396594692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnEncodedData
struct  AsnEncodedData_t2396594692  : public RuntimeObject
{
public:
	// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::_oid
	Oid_t479295258 * ____oid_0;
	// System.Byte[] System.Security.Cryptography.AsnEncodedData::_raw
	ByteU5BU5D_t3665519352* ____raw_1;

public:
	inline static int32_t get_offset_of__oid_0() { return static_cast<int32_t>(offsetof(AsnEncodedData_t2396594692, ____oid_0)); }
	inline Oid_t479295258 * get__oid_0() const { return ____oid_0; }
	inline Oid_t479295258 ** get_address_of__oid_0() { return &____oid_0; }
	inline void set__oid_0(Oid_t479295258 * value)
	{
		____oid_0 = value;
		Il2CppCodeGenWriteBarrier((&____oid_0), value);
	}

	inline static int32_t get_offset_of__raw_1() { return static_cast<int32_t>(offsetof(AsnEncodedData_t2396594692, ____raw_1)); }
	inline ByteU5BU5D_t3665519352* get__raw_1() const { return ____raw_1; }
	inline ByteU5BU5D_t3665519352** get_address_of__raw_1() { return &____raw_1; }
	inline void set__raw_1(ByteU5BU5D_t3665519352* value)
	{
		____raw_1 = value;
		Il2CppCodeGenWriteBarrier((&____raw_1), value);
	}
};

struct AsnEncodedData_t2396594692_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.AsnEncodedData::<>f__switch$mapA
	Dictionary_2_t3251534394 * ___U3CU3Ef__switchU24mapA_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_2() { return static_cast<int32_t>(offsetof(AsnEncodedData_t2396594692_StaticFields, ___U3CU3Ef__switchU24mapA_2)); }
	inline Dictionary_2_t3251534394 * get_U3CU3Ef__switchU24mapA_2() const { return ___U3CU3Ef__switchU24mapA_2; }
	inline Dictionary_2_t3251534394 ** get_address_of_U3CU3Ef__switchU24mapA_2() { return &___U3CU3Ef__switchU24mapA_2; }
	inline void set_U3CU3Ef__switchU24mapA_2(Dictionary_2_t3251534394 * value)
	{
		___U3CU3Ef__switchU24mapA_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapA_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASNENCODEDDATA_T2396594692_H
#ifndef ASNENCODEDDATACOLLECTION_T3808329583_H
#define ASNENCODEDDATACOLLECTION_T3808329583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnEncodedDataCollection
struct  AsnEncodedDataCollection_t3808329583  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.AsnEncodedDataCollection::_list
	ArrayList_t4142489098 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(AsnEncodedDataCollection_t3808329583, ____list_0)); }
	inline ArrayList_t4142489098 * get__list_0() const { return ____list_0; }
	inline ArrayList_t4142489098 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t4142489098 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASNENCODEDDATACOLLECTION_T3808329583_H
#ifndef ASNENCODEDDATAENUMERATOR_T477190200_H
#define ASNENCODEDDATAENUMERATOR_T477190200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnEncodedDataEnumerator
struct  AsnEncodedDataEnumerator_t477190200  : public RuntimeObject
{
public:
	// System.Security.Cryptography.AsnEncodedDataCollection System.Security.Cryptography.AsnEncodedDataEnumerator::_collection
	AsnEncodedDataCollection_t3808329583 * ____collection_0;
	// System.Int32 System.Security.Cryptography.AsnEncodedDataEnumerator::_position
	int32_t ____position_1;

public:
	inline static int32_t get_offset_of__collection_0() { return static_cast<int32_t>(offsetof(AsnEncodedDataEnumerator_t477190200, ____collection_0)); }
	inline AsnEncodedDataCollection_t3808329583 * get__collection_0() const { return ____collection_0; }
	inline AsnEncodedDataCollection_t3808329583 ** get_address_of__collection_0() { return &____collection_0; }
	inline void set__collection_0(AsnEncodedDataCollection_t3808329583 * value)
	{
		____collection_0 = value;
		Il2CppCodeGenWriteBarrier((&____collection_0), value);
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(AsnEncodedDataEnumerator_t477190200, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASNENCODEDDATAENUMERATOR_T477190200_H
#ifndef OID_T479295258_H
#define OID_T479295258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Oid
struct  Oid_t479295258  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.Oid::_value
	String_t* ____value_20;
	// System.String System.Security.Cryptography.Oid::_name
	String_t* ____name_21;

public:
	inline static int32_t get_offset_of__value_20() { return static_cast<int32_t>(offsetof(Oid_t479295258, ____value_20)); }
	inline String_t* get__value_20() const { return ____value_20; }
	inline String_t** get_address_of__value_20() { return &____value_20; }
	inline void set__value_20(String_t* value)
	{
		____value_20 = value;
		Il2CppCodeGenWriteBarrier((&____value_20), value);
	}

	inline static int32_t get_offset_of__name_21() { return static_cast<int32_t>(offsetof(Oid_t479295258, ____name_21)); }
	inline String_t* get__name_21() const { return ____name_21; }
	inline String_t** get_address_of__name_21() { return &____name_21; }
	inline void set__name_21(String_t* value)
	{
		____name_21 = value;
		Il2CppCodeGenWriteBarrier((&____name_21), value);
	}
};

struct Oid_t479295258_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Oid::<>f__switch$map10
	Dictionary_2_t3251534394 * ___U3CU3Ef__switchU24map10_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Oid::<>f__switch$map11
	Dictionary_2_t3251534394 * ___U3CU3Ef__switchU24map11_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_22() { return static_cast<int32_t>(offsetof(Oid_t479295258_StaticFields, ___U3CU3Ef__switchU24map10_22)); }
	inline Dictionary_2_t3251534394 * get_U3CU3Ef__switchU24map10_22() const { return ___U3CU3Ef__switchU24map10_22; }
	inline Dictionary_2_t3251534394 ** get_address_of_U3CU3Ef__switchU24map10_22() { return &___U3CU3Ef__switchU24map10_22; }
	inline void set_U3CU3Ef__switchU24map10_22(Dictionary_2_t3251534394 * value)
	{
		___U3CU3Ef__switchU24map10_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map11_23() { return static_cast<int32_t>(offsetof(Oid_t479295258_StaticFields, ___U3CU3Ef__switchU24map11_23)); }
	inline Dictionary_2_t3251534394 * get_U3CU3Ef__switchU24map11_23() const { return ___U3CU3Ef__switchU24map11_23; }
	inline Dictionary_2_t3251534394 ** get_address_of_U3CU3Ef__switchU24map11_23() { return &___U3CU3Ef__switchU24map11_23; }
	inline void set_U3CU3Ef__switchU24map11_23(Dictionary_2_t3251534394 * value)
	{
		___U3CU3Ef__switchU24map11_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map11_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OID_T479295258_H
#ifndef OIDCOLLECTION_T3324998466_H
#define OIDCOLLECTION_T3324998466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidCollection
struct  OidCollection_t3324998466  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.OidCollection::_list
	ArrayList_t4142489098 * ____list_0;
	// System.Boolean System.Security.Cryptography.OidCollection::_readOnly
	bool ____readOnly_1;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(OidCollection_t3324998466, ____list_0)); }
	inline ArrayList_t4142489098 * get__list_0() const { return ____list_0; }
	inline ArrayList_t4142489098 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t4142489098 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}

	inline static int32_t get_offset_of__readOnly_1() { return static_cast<int32_t>(offsetof(OidCollection_t3324998466, ____readOnly_1)); }
	inline bool get__readOnly_1() const { return ____readOnly_1; }
	inline bool* get_address_of__readOnly_1() { return &____readOnly_1; }
	inline void set__readOnly_1(bool value)
	{
		____readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OIDCOLLECTION_T3324998466_H
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
#ifndef OIDENUMERATOR_T501510191_H
#define OIDENUMERATOR_T501510191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidEnumerator
struct  OidEnumerator_t501510191  : public RuntimeObject
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.OidEnumerator::_collection
	OidCollection_t3324998466 * ____collection_0;
	// System.Int32 System.Security.Cryptography.OidEnumerator::_position
	int32_t ____position_1;

public:
	inline static int32_t get_offset_of__collection_0() { return static_cast<int32_t>(offsetof(OidEnumerator_t501510191, ____collection_0)); }
	inline OidCollection_t3324998466 * get__collection_0() const { return ____collection_0; }
	inline OidCollection_t3324998466 ** get_address_of__collection_0() { return &____collection_0; }
	inline void set__collection_0(OidCollection_t3324998466 * value)
	{
		____collection_0 = value;
		Il2CppCodeGenWriteBarrier((&____collection_0), value);
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(OidEnumerator_t501510191, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OIDENUMERATOR_T501510191_H
#ifndef CAPTURE_T3751675586_H
#define CAPTURE_T3751675586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Capture
struct  Capture_t3751675586  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.Capture::index
	int32_t ___index_0;
	// System.Int32 System.Text.RegularExpressions.Capture::length
	int32_t ___length_1;
	// System.String System.Text.RegularExpressions.Capture::text
	String_t* ___text_2;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(Capture_t3751675586, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(Capture_t3751675586, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(Capture_t3751675586, ___text_2)); }
	inline String_t* get_text_2() const { return ___text_2; }
	inline String_t** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(String_t* value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier((&___text_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURE_T3751675586_H
#ifndef BASEMACHINE_T150577323_H
#define BASEMACHINE_T150577323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.BaseMachine
struct  BaseMachine_t150577323  : public RuntimeObject
{
public:
	// System.Boolean System.Text.RegularExpressions.BaseMachine::needs_groups_or_captures
	bool ___needs_groups_or_captures_0;

public:
	inline static int32_t get_offset_of_needs_groups_or_captures_0() { return static_cast<int32_t>(offsetof(BaseMachine_t150577323, ___needs_groups_or_captures_0)); }
	inline bool get_needs_groups_or_captures_0() const { return ___needs_groups_or_captures_0; }
	inline bool* get_address_of_needs_groups_or_captures_0() { return &___needs_groups_or_captures_0; }
	inline void set_needs_groups_or_captures_0(bool value)
	{
		___needs_groups_or_captures_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMACHINE_T150577323_H
#ifndef LITERAL_T3783658429_H
#define LITERAL_T3783658429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Literal
struct  Literal_t3783658429  : public Expression_t3908348667
{
public:
	// System.String System.Text.RegularExpressions.Syntax.Literal::str
	String_t* ___str_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Literal::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(Literal_t3783658429, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Literal_t3783658429, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LITERAL_T3783658429_H
#ifndef FTPSTYLEURIPARSER_T2569753245_H
#define FTPSTYLEURIPARSER_T2569753245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FtpStyleUriParser
struct  FtpStyleUriParser_t2569753245  : public UriParser_t3111855441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FTPSTYLEURIPARSER_T2569753245_H
#ifndef EXPRESSIONCOLLECTION_T4279657396_H
#define EXPRESSIONCOLLECTION_T4279657396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct  ExpressionCollection_t4279657396  : public CollectionBase_t2472237531
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONCOLLECTION_T4279657396_H
#ifndef COMPOSITEEXPRESSION_T982136421_H
#define COMPOSITEEXPRESSION_T982136421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct  CompositeExpression_t982136421  : public Expression_t3908348667
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::expressions
	ExpressionCollection_t4279657396 * ___expressions_0;

public:
	inline static int32_t get_offset_of_expressions_0() { return static_cast<int32_t>(offsetof(CompositeExpression_t982136421, ___expressions_0)); }
	inline ExpressionCollection_t4279657396 * get_expressions_0() const { return ___expressions_0; }
	inline ExpressionCollection_t4279657396 ** get_address_of_expressions_0() { return &___expressions_0; }
	inline void set_expressions_0(ExpressionCollection_t4279657396 * value)
	{
		___expressions_0 = value;
		Il2CppCodeGenWriteBarrier((&___expressions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPOSITEEXPRESSION_T982136421_H
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
#ifndef URISCHEME_T4218144382_H
#define URISCHEME_T4218144382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/UriScheme
struct  UriScheme_t4218144382 
{
public:
	// System.String System.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String System.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 System.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t4218144382, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t4218144382, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___delimiter_1), value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t4218144382, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Uri/UriScheme
struct UriScheme_t4218144382_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of System.Uri/UriScheme
struct UriScheme_t4218144382_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};
#endif // URISCHEME_T4218144382_H
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
#ifndef NEWSSTYLEURIPARSER_T3656819554_H
#define NEWSSTYLEURIPARSER_T3656819554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NewsStyleUriParser
struct  NewsStyleUriParser_t3656819554  : public UriParser_t3111855441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWSSTYLEURIPARSER_T3656819554_H
#ifndef NETTCPSTYLEURIPARSER_T1317871050_H
#define NETTCPSTYLEURIPARSER_T1317871050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NetTcpStyleUriParser
struct  NetTcpStyleUriParser_t1317871050  : public UriParser_t3111855441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETTCPSTYLEURIPARSER_T1317871050_H
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
#ifndef REFERENCE_T1729983868_H
#define REFERENCE_T1729983868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Reference
struct  Reference_t1729983868  : public Expression_t3908348667
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::group
	CapturingGroup_t1723503486 * ___group_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Reference::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_group_0() { return static_cast<int32_t>(offsetof(Reference_t1729983868, ___group_0)); }
	inline CapturingGroup_t1723503486 * get_group_0() const { return ___group_0; }
	inline CapturingGroup_t1723503486 ** get_address_of_group_0() { return &___group_0; }
	inline void set_group_0(CapturingGroup_t1723503486 * value)
	{
		___group_0 = value;
		Il2CppCodeGenWriteBarrier((&___group_0), value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Reference_t1729983868, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCE_T1729983868_H
#ifndef GENERICURIPARSER_T3649137674_H
#define GENERICURIPARSER_T3649137674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GenericUriParser
struct  GenericUriParser_t3649137674  : public UriParser_t3111855441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICURIPARSER_T3649137674_H
#ifndef HTTPSTYLEURIPARSER_T2592170872_H
#define HTTPSTYLEURIPARSER_T2592170872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.HttpStyleUriParser
struct  HttpStyleUriParser_t2592170872  : public UriParser_t3111855441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPSTYLEURIPARSER_T2592170872_H
#ifndef NETPIPESTYLEURIPARSER_T2396196172_H
#define NETPIPESTYLEURIPARSER_T2396196172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NetPipeStyleUriParser
struct  NetPipeStyleUriParser_t2396196172  : public UriParser_t3111855441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETPIPESTYLEURIPARSER_T2396196172_H
#ifndef DEFAULTURIPARSER_T4092887240_H
#define DEFAULTURIPARSER_T4092887240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DefaultUriParser
struct  DefaultUriParser_t4092887240  : public UriParser_t3111855441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTURIPARSER_T4092887240_H
#ifndef INTERVAL_T1976461779_H
#define INTERVAL_T1976461779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interval
struct  Interval_t1976461779 
{
public:
	// System.Int32 System.Text.RegularExpressions.Interval::low
	int32_t ___low_0;
	// System.Int32 System.Text.RegularExpressions.Interval::high
	int32_t ___high_1;
	// System.Boolean System.Text.RegularExpressions.Interval::contiguous
	bool ___contiguous_2;

public:
	inline static int32_t get_offset_of_low_0() { return static_cast<int32_t>(offsetof(Interval_t1976461779, ___low_0)); }
	inline int32_t get_low_0() const { return ___low_0; }
	inline int32_t* get_address_of_low_0() { return &___low_0; }
	inline void set_low_0(int32_t value)
	{
		___low_0 = value;
	}

	inline static int32_t get_offset_of_high_1() { return static_cast<int32_t>(offsetof(Interval_t1976461779, ___high_1)); }
	inline int32_t get_high_1() const { return ___high_1; }
	inline int32_t* get_address_of_high_1() { return &___high_1; }
	inline void set_high_1(int32_t value)
	{
		___high_1 = value;
	}

	inline static int32_t get_offset_of_contiguous_2() { return static_cast<int32_t>(offsetof(Interval_t1976461779, ___contiguous_2)); }
	inline bool get_contiguous_2() const { return ___contiguous_2; }
	inline bool* get_address_of_contiguous_2() { return &___contiguous_2; }
	inline void set_contiguous_2(bool value)
	{
		___contiguous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.Interval
struct Interval_t1976461779_marshaled_pinvoke
{
	int32_t ___low_0;
	int32_t ___high_1;
	int32_t ___contiguous_2;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.Interval
struct Interval_t1976461779_marshaled_com
{
	int32_t ___low_0;
	int32_t ___high_1;
	int32_t ___contiguous_2;
};
#endif // INTERVAL_T1976461779_H
#ifndef GROUP_T1001396390_H
#define GROUP_T1001396390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Group
struct  Group_t1001396390  : public Capture_t3751675586
{
public:
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t4176122178 * ___captures_5;

public:
	inline static int32_t get_offset_of_success_4() { return static_cast<int32_t>(offsetof(Group_t1001396390, ___success_4)); }
	inline bool get_success_4() const { return ___success_4; }
	inline bool* get_address_of_success_4() { return &___success_4; }
	inline void set_success_4(bool value)
	{
		___success_4 = value;
	}

	inline static int32_t get_offset_of_captures_5() { return static_cast<int32_t>(offsetof(Group_t1001396390, ___captures_5)); }
	inline CaptureCollection_t4176122178 * get_captures_5() const { return ___captures_5; }
	inline CaptureCollection_t4176122178 ** get_address_of_captures_5() { return &___captures_5; }
	inline void set_captures_5(CaptureCollection_t4176122178 * value)
	{
		___captures_5 = value;
		Il2CppCodeGenWriteBarrier((&___captures_5), value);
	}
};

struct Group_t1001396390_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t1001396390 * ___Fail_3;

public:
	inline static int32_t get_offset_of_Fail_3() { return static_cast<int32_t>(offsetof(Group_t1001396390_StaticFields, ___Fail_3)); }
	inline Group_t1001396390 * get_Fail_3() const { return ___Fail_3; }
	inline Group_t1001396390 ** get_address_of_Fail_3() { return &___Fail_3; }
	inline void set_Fail_3(Group_t1001396390 * value)
	{
		___Fail_3 = value;
		Il2CppCodeGenWriteBarrier((&___Fail_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T1001396390_H
#ifndef INTSTACK_T2702565151_H
#define INTSTACK_T2702565151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/IntStack
struct  IntStack_t2702565151 
{
public:
	// System.Int32[] System.Text.RegularExpressions.Interpreter/IntStack::values
	Int32U5BU5D_t29945824* ___values_0;
	// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(IntStack_t2702565151, ___values_0)); }
	inline Int32U5BU5D_t29945824* get_values_0() const { return ___values_0; }
	inline Int32U5BU5D_t29945824** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(Int32U5BU5D_t29945824* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(IntStack_t2702565151, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t2702565151_marshaled_pinvoke
{
	int32_t* ___values_0;
	int32_t ___count_1;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t2702565151_marshaled_com
{
	int32_t* ___values_0;
	int32_t ___count_1;
};
#endif // INTSTACK_T2702565151_H
#ifndef X509EXTENSION_T1300854538_H
#define X509EXTENSION_T1300854538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Extension
struct  X509Extension_t1300854538  : public AsnEncodedData_t2396594692
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::_critical
	bool ____critical_3;

public:
	inline static int32_t get_offset_of__critical_3() { return static_cast<int32_t>(offsetof(X509Extension_t1300854538, ____critical_3)); }
	inline bool get__critical_3() const { return ____critical_3; }
	inline bool* get_address_of__critical_3() { return &____critical_3; }
	inline void set__critical_3(bool value)
	{
		____critical_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T1300854538_H
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
#ifndef MARK_T814963683_H
#define MARK_T814963683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Mark
struct  Mark_t814963683 
{
public:
	// System.Int32 System.Text.RegularExpressions.Mark::Start
	int32_t ___Start_0;
	// System.Int32 System.Text.RegularExpressions.Mark::End
	int32_t ___End_1;
	// System.Int32 System.Text.RegularExpressions.Mark::Previous
	int32_t ___Previous_2;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(Mark_t814963683, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(Mark_t814963683, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Previous_2() { return static_cast<int32_t>(offsetof(Mark_t814963683, ___Previous_2)); }
	inline int32_t get_Previous_2() const { return ___Previous_2; }
	inline int32_t* get_address_of_Previous_2() { return &___Previous_2; }
	inline void set_Previous_2(int32_t value)
	{
		___Previous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARK_T814963683_H
#ifndef LINKSTACK_T1900882115_H
#define LINKSTACK_T1900882115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.LinkStack
struct  LinkStack_t1900882115  : public LinkRef_t3195455246
{
public:
	// System.Collections.Stack System.Text.RegularExpressions.LinkStack::stack
	Stack_t2359939405 * ___stack_0;

public:
	inline static int32_t get_offset_of_stack_0() { return static_cast<int32_t>(offsetof(LinkStack_t1900882115, ___stack_0)); }
	inline Stack_t2359939405 * get_stack_0() const { return ___stack_0; }
	inline Stack_t2359939405 ** get_address_of_stack_0() { return &___stack_0; }
	inline void set_stack_0(Stack_t2359939405 * value)
	{
		___stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___stack_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKSTACK_T1900882115_H
#ifndef LINK_T2863025501_H
#define LINK_T2863025501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
struct  Link_t2863025501 
{
public:
	// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link::base_addr
	int32_t ___base_addr_0;
	// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link::offset_addr
	int32_t ___offset_addr_1;

public:
	inline static int32_t get_offset_of_base_addr_0() { return static_cast<int32_t>(offsetof(Link_t2863025501, ___base_addr_0)); }
	inline int32_t get_base_addr_0() const { return ___base_addr_0; }
	inline int32_t* get_address_of_base_addr_0() { return &___base_addr_0; }
	inline void set_base_addr_0(int32_t value)
	{
		___base_addr_0 = value;
	}

	inline static int32_t get_offset_of_offset_addr_1() { return static_cast<int32_t>(offsetof(Link_t2863025501, ___offset_addr_1)); }
	inline int32_t get_offset_addr_1() const { return ___offset_addr_1; }
	inline int32_t* get_address_of_offset_addr_1() { return &___offset_addr_1; }
	inline void set_offset_addr_1(int32_t value)
	{
		___offset_addr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINK_T2863025501_H
#ifndef URITYPECONVERTER_T527541348_H
#define URITYPECONVERTER_T527541348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriTypeConverter
struct  UriTypeConverter_t527541348  : public TypeConverter_t3820489046
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URITYPECONVERTER_T527541348_H
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
#ifndef FILESTYLEURIPARSER_T1379020187_H
#define FILESTYLEURIPARSER_T1379020187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FileStyleUriParser
struct  FileStyleUriParser_t1379020187  : public UriParser_t3111855441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTYLEURIPARSER_T1379020187_H
#ifndef FORMATEXCEPTION_T2589493545_H
#define FORMATEXCEPTION_T2589493545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t2589493545  : public SystemException_t637859339
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T2589493545_H
#ifndef STORELOCATION_T30267697_H
#define STORELOCATION_T30267697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.StoreLocation
struct  StoreLocation_t30267697 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.StoreLocation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StoreLocation_t30267697, ___value___1)); }
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
#endif // STORELOCATION_T30267697_H
#ifndef GENERICURIPARSEROPTIONS_T919417354_H
#define GENERICURIPARSEROPTIONS_T919417354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GenericUriParserOptions
struct  GenericUriParserOptions_t919417354 
{
public:
	// System.Int32 System.GenericUriParserOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GenericUriParserOptions_t919417354, ___value___1)); }
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
#endif // GENERICURIPARSEROPTIONS_T919417354_H
#ifndef URIPARTIAL_T109406523_H
#define URIPARTIAL_T109406523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriPartial
struct  UriPartial_t109406523 
{
public:
	// System.Int32 System.UriPartial::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriPartial_t109406523, ___value___1)); }
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
#endif // URIPARTIAL_T109406523_H
#ifndef SRDESCRIPTIONATTRIBUTE_T88939702_H
#define SRDESCRIPTIONATTRIBUTE_T88939702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SRDescriptionAttribute
struct  SRDescriptionAttribute_t88939702  : public DescriptionAttribute_t1603849284
{
public:
	// System.Boolean System.SRDescriptionAttribute::isReplaced
	bool ___isReplaced_2;

public:
	inline static int32_t get_offset_of_isReplaced_2() { return static_cast<int32_t>(offsetof(SRDescriptionAttribute_t88939702, ___isReplaced_2)); }
	inline bool get_isReplaced_2() const { return ___isReplaced_2; }
	inline bool* get_address_of_isReplaced_2() { return &___isReplaced_2; }
	inline void set_isReplaced_2(bool value)
	{
		___isReplaced_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SRDESCRIPTIONATTRIBUTE_T88939702_H
#ifndef OPENFLAGS_T2159739741_H
#define OPENFLAGS_T2159739741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.OpenFlags
struct  OpenFlags_t2159739741 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.OpenFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpenFlags_t2159739741, ___value___1)); }
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
#endif // OPENFLAGS_T2159739741_H
#ifndef URIIDNSCOPE_T3844882438_H
#define URIIDNSCOPE_T3844882438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriIdnScope
struct  UriIdnScope_t3844882438 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriIdnScope_t3844882438, ___value___1)); }
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
#endif // URIIDNSCOPE_T3844882438_H
#ifndef URIHOSTNAMETYPE_T1560487489_H
#define URIHOSTNAMETYPE_T1560487489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriHostNameType
struct  UriHostNameType_t1560487489 
{
public:
	// System.Int32 System.UriHostNameType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriHostNameType_t1560487489, ___value___1)); }
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
#endif // URIHOSTNAMETYPE_T1560487489_H
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
#ifndef URICOMPONENTS_T2442473460_H
#define URICOMPONENTS_T2442473460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriComponents
struct  UriComponents_t2442473460 
{
public:
	// System.Int32 System.UriComponents::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriComponents_t2442473460, ___value___1)); }
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
#endif // URICOMPONENTS_T2442473460_H
#ifndef URIKIND_T2659104991_H
#define URIKIND_T2659104991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t2659104991 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriKind_t2659104991, ___value___1)); }
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
#endif // URIKIND_T2659104991_H
#ifndef URIFORMAT_T1043553239_H
#define URIFORMAT_T1043553239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriFormat
struct  UriFormat_t1043553239 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriFormat_t1043553239, ___value___1)); }
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
#endif // URIFORMAT_T1043553239_H
#ifndef GROUP_T3601601316_H
#define GROUP_T3601601316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Group
struct  Group_t3601601316  : public CompositeExpression_t982136421
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T3601601316_H
#ifndef CHARACTERCLASS_T3604374701_H
#define CHARACTERCLASS_T3604374701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CharacterClass
struct  CharacterClass_t3604374701  : public Expression_t3908348667
{
public:
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::negate
	bool ___negate_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::ignore
	bool ___ignore_2;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::pos_cats
	BitArray_t1800151165 * ___pos_cats_3;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::neg_cats
	BitArray_t1800151165 * ___neg_cats_4;
	// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.Syntax.CharacterClass::intervals
	IntervalCollection_t3089282293 * ___intervals_5;

public:
	inline static int32_t get_offset_of_negate_1() { return static_cast<int32_t>(offsetof(CharacterClass_t3604374701, ___negate_1)); }
	inline bool get_negate_1() const { return ___negate_1; }
	inline bool* get_address_of_negate_1() { return &___negate_1; }
	inline void set_negate_1(bool value)
	{
		___negate_1 = value;
	}

	inline static int32_t get_offset_of_ignore_2() { return static_cast<int32_t>(offsetof(CharacterClass_t3604374701, ___ignore_2)); }
	inline bool get_ignore_2() const { return ___ignore_2; }
	inline bool* get_address_of_ignore_2() { return &___ignore_2; }
	inline void set_ignore_2(bool value)
	{
		___ignore_2 = value;
	}

	inline static int32_t get_offset_of_pos_cats_3() { return static_cast<int32_t>(offsetof(CharacterClass_t3604374701, ___pos_cats_3)); }
	inline BitArray_t1800151165 * get_pos_cats_3() const { return ___pos_cats_3; }
	inline BitArray_t1800151165 ** get_address_of_pos_cats_3() { return &___pos_cats_3; }
	inline void set_pos_cats_3(BitArray_t1800151165 * value)
	{
		___pos_cats_3 = value;
		Il2CppCodeGenWriteBarrier((&___pos_cats_3), value);
	}

	inline static int32_t get_offset_of_neg_cats_4() { return static_cast<int32_t>(offsetof(CharacterClass_t3604374701, ___neg_cats_4)); }
	inline BitArray_t1800151165 * get_neg_cats_4() const { return ___neg_cats_4; }
	inline BitArray_t1800151165 ** get_address_of_neg_cats_4() { return &___neg_cats_4; }
	inline void set_neg_cats_4(BitArray_t1800151165 * value)
	{
		___neg_cats_4 = value;
		Il2CppCodeGenWriteBarrier((&___neg_cats_4), value);
	}

	inline static int32_t get_offset_of_intervals_5() { return static_cast<int32_t>(offsetof(CharacterClass_t3604374701, ___intervals_5)); }
	inline IntervalCollection_t3089282293 * get_intervals_5() const { return ___intervals_5; }
	inline IntervalCollection_t3089282293 ** get_address_of_intervals_5() { return &___intervals_5; }
	inline void set_intervals_5(IntervalCollection_t3089282293 * value)
	{
		___intervals_5 = value;
		Il2CppCodeGenWriteBarrier((&___intervals_5), value);
	}
};

struct CharacterClass_t3604374701_StaticFields
{
public:
	// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.CharacterClass::upper_case_characters
	Interval_t1976461779  ___upper_case_characters_0;

public:
	inline static int32_t get_offset_of_upper_case_characters_0() { return static_cast<int32_t>(offsetof(CharacterClass_t3604374701_StaticFields, ___upper_case_characters_0)); }
	inline Interval_t1976461779  get_upper_case_characters_0() const { return ___upper_case_characters_0; }
	inline Interval_t1976461779 * get_address_of_upper_case_characters_0() { return &___upper_case_characters_0; }
	inline void set_upper_case_characters_0(Interval_t1976461779  value)
	{
		___upper_case_characters_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCLASS_T3604374701_H
#ifndef X509KEYUSAGEFLAGS_T983569114_H
#define X509KEYUSAGEFLAGS_T983569114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
struct  X509KeyUsageFlags_t983569114 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyUsageFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509KeyUsageFlags_t983569114, ___value___1)); }
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
#endif // X509KEYUSAGEFLAGS_T983569114_H
#ifndef X509NAMETYPE_T3167384597_H
#define X509NAMETYPE_T3167384597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509NameType
struct  X509NameType_t3167384597 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509NameType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509NameType_t3167384597, ___value___1)); }
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
#endif // X509NAMETYPE_T3167384597_H
#ifndef X509REVOCATIONFLAG_T1272748884_H
#define X509REVOCATIONFLAG_T1272748884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509RevocationFlag
struct  X509RevocationFlag_t1272748884 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509RevocationFlag_t1272748884, ___value___1)); }
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
#endif // X509REVOCATIONFLAG_T1272748884_H
#ifndef X509REVOCATIONMODE_T2184710984_H
#define X509REVOCATIONMODE_T2184710984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509RevocationMode
struct  X509RevocationMode_t2184710984 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509RevocationMode_t2184710984, ___value___1)); }
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
#endif // X509REVOCATIONMODE_T2184710984_H
#ifndef X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T2673208641_H
#define X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T2673208641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
struct  X509SubjectKeyIdentifierHashAlgorithm_t2673208641 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierHashAlgorithm_t2673208641, ___value___1)); }
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
#endif // X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T2673208641_H
#ifndef X509VERIFICATIONFLAGS_T1726482264_H
#define X509VERIFICATIONFLAGS_T1726482264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509VerificationFlags
struct  X509VerificationFlags_t1726482264 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509VerificationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509VerificationFlags_t1726482264, ___value___1)); }
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
#endif // X509VERIFICATIONFLAGS_T1726482264_H
#ifndef ASNDECODESTATUS_T2259783958_H
#define ASNDECODESTATUS_T2259783958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnDecodeStatus
struct  AsnDecodeStatus_t2259783958 
{
public:
	// System.Int32 System.Security.Cryptography.AsnDecodeStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AsnDecodeStatus_t2259783958, ___value___1)); }
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
#endif // ASNDECODESTATUS_T2259783958_H
#ifndef MATCH_T782501982_H
#define MATCH_T782501982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Match
struct  Match_t782501982  : public Group_t1001396390
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t1901338271 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	RuntimeObject* ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t2622309834 * ___groups_9;

public:
	inline static int32_t get_offset_of_regex_6() { return static_cast<int32_t>(offsetof(Match_t782501982, ___regex_6)); }
	inline Regex_t1901338271 * get_regex_6() const { return ___regex_6; }
	inline Regex_t1901338271 ** get_address_of_regex_6() { return &___regex_6; }
	inline void set_regex_6(Regex_t1901338271 * value)
	{
		___regex_6 = value;
		Il2CppCodeGenWriteBarrier((&___regex_6), value);
	}

	inline static int32_t get_offset_of_machine_7() { return static_cast<int32_t>(offsetof(Match_t782501982, ___machine_7)); }
	inline RuntimeObject* get_machine_7() const { return ___machine_7; }
	inline RuntimeObject** get_address_of_machine_7() { return &___machine_7; }
	inline void set_machine_7(RuntimeObject* value)
	{
		___machine_7 = value;
		Il2CppCodeGenWriteBarrier((&___machine_7), value);
	}

	inline static int32_t get_offset_of_text_length_8() { return static_cast<int32_t>(offsetof(Match_t782501982, ___text_length_8)); }
	inline int32_t get_text_length_8() const { return ___text_length_8; }
	inline int32_t* get_address_of_text_length_8() { return &___text_length_8; }
	inline void set_text_length_8(int32_t value)
	{
		___text_length_8 = value;
	}

	inline static int32_t get_offset_of_groups_9() { return static_cast<int32_t>(offsetof(Match_t782501982, ___groups_9)); }
	inline GroupCollection_t2622309834 * get_groups_9() const { return ___groups_9; }
	inline GroupCollection_t2622309834 ** get_address_of_groups_9() { return &___groups_9; }
	inline void set_groups_9(GroupCollection_t2622309834 * value)
	{
		___groups_9 = value;
		Il2CppCodeGenWriteBarrier((&___groups_9), value);
	}
};

struct Match_t782501982_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t782501982 * ___empty_10;

public:
	inline static int32_t get_offset_of_empty_10() { return static_cast<int32_t>(offsetof(Match_t782501982_StaticFields, ___empty_10)); }
	inline Match_t782501982 * get_empty_10() const { return ___empty_10; }
	inline Match_t782501982 ** get_address_of_empty_10() { return &___empty_10; }
	inline void set_empty_10(Match_t782501982 * value)
	{
		___empty_10 = value;
		Il2CppCodeGenWriteBarrier((&___empty_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCH_T782501982_H
#ifndef REGEXOPTIONS_T108697606_H
#define REGEXOPTIONS_T108697606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t108697606 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegexOptions_t108697606, ___value___1)); }
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
#endif // REGEXOPTIONS_T108697606_H
#ifndef OPCODE_T4277725355_H
#define OPCODE_T4277725355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.OpCode
struct  OpCode_t4277725355 
{
public:
	// System.UInt16 System.Text.RegularExpressions.OpCode::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpCode_t4277725355, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPCODE_T4277725355_H
#ifndef POSITION_T1440314515_H
#define POSITION_T1440314515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Position
struct  Position_t1440314515 
{
public:
	// System.UInt16 System.Text.RegularExpressions.Position::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Position_t1440314515, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITION_T1440314515_H
#ifndef CATEGORY_T3744121494_H
#define CATEGORY_T3744121494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Category
struct  Category_t3744121494 
{
public:
	// System.UInt16 System.Text.RegularExpressions.Category::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Category_t3744121494, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORY_T3744121494_H
#ifndef PATTERNLINKSTACK_T2694049077_H
#define PATTERNLINKSTACK_T2694049077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
struct  PatternLinkStack_t2694049077  : public LinkStack_t1900882115
{
public:
	// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::link
	Link_t2863025501  ___link_1;

public:
	inline static int32_t get_offset_of_link_1() { return static_cast<int32_t>(offsetof(PatternLinkStack_t2694049077, ___link_1)); }
	inline Link_t2863025501  get_link_1() const { return ___link_1; }
	inline Link_t2863025501 * get_address_of_link_1() { return &___link_1; }
	inline void set_link_1(Link_t2863025501  value)
	{
		___link_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATTERNLINKSTACK_T2694049077_H
#ifndef INTERPRETER_T3316892724_H
#define INTERPRETER_T3316892724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter
struct  Interpreter_t3316892724  : public BaseMachine_t150577323
{
public:
	// System.UInt16[] System.Text.RegularExpressions.Interpreter::program
	UInt16U5BU5D_t1203934362* ___program_1;
	// System.Int32 System.Text.RegularExpressions.Interpreter::program_start
	int32_t ___program_start_2;
	// System.String System.Text.RegularExpressions.Interpreter::text
	String_t* ___text_3;
	// System.Int32 System.Text.RegularExpressions.Interpreter::text_end
	int32_t ___text_end_4;
	// System.Int32 System.Text.RegularExpressions.Interpreter::group_count
	int32_t ___group_count_5;
	// System.Int32 System.Text.RegularExpressions.Interpreter::match_min
	int32_t ___match_min_6;
	// System.Text.RegularExpressions.QuickSearch System.Text.RegularExpressions.Interpreter::qs
	QuickSearch_t2951143959 * ___qs_7;
	// System.Int32 System.Text.RegularExpressions.Interpreter::scan_ptr
	int32_t ___scan_ptr_8;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::repeat
	RepeatContext_t1820156589 * ___repeat_9;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::fast
	RepeatContext_t1820156589 * ___fast_10;
	// System.Text.RegularExpressions.Interpreter/IntStack System.Text.RegularExpressions.Interpreter::stack
	IntStack_t2702565151  ___stack_11;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::deep
	RepeatContext_t1820156589 * ___deep_12;
	// System.Text.RegularExpressions.Mark[] System.Text.RegularExpressions.Interpreter::marks
	MarkU5BU5D_t1575174450* ___marks_13;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_start
	int32_t ___mark_start_14;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_end
	int32_t ___mark_end_15;
	// System.Int32[] System.Text.RegularExpressions.Interpreter::groups
	Int32U5BU5D_t29945824* ___groups_16;

public:
	inline static int32_t get_offset_of_program_1() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___program_1)); }
	inline UInt16U5BU5D_t1203934362* get_program_1() const { return ___program_1; }
	inline UInt16U5BU5D_t1203934362** get_address_of_program_1() { return &___program_1; }
	inline void set_program_1(UInt16U5BU5D_t1203934362* value)
	{
		___program_1 = value;
		Il2CppCodeGenWriteBarrier((&___program_1), value);
	}

	inline static int32_t get_offset_of_program_start_2() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___program_start_2)); }
	inline int32_t get_program_start_2() const { return ___program_start_2; }
	inline int32_t* get_address_of_program_start_2() { return &___program_start_2; }
	inline void set_program_start_2(int32_t value)
	{
		___program_start_2 = value;
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier((&___text_3), value);
	}

	inline static int32_t get_offset_of_text_end_4() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___text_end_4)); }
	inline int32_t get_text_end_4() const { return ___text_end_4; }
	inline int32_t* get_address_of_text_end_4() { return &___text_end_4; }
	inline void set_text_end_4(int32_t value)
	{
		___text_end_4 = value;
	}

	inline static int32_t get_offset_of_group_count_5() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___group_count_5)); }
	inline int32_t get_group_count_5() const { return ___group_count_5; }
	inline int32_t* get_address_of_group_count_5() { return &___group_count_5; }
	inline void set_group_count_5(int32_t value)
	{
		___group_count_5 = value;
	}

	inline static int32_t get_offset_of_match_min_6() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___match_min_6)); }
	inline int32_t get_match_min_6() const { return ___match_min_6; }
	inline int32_t* get_address_of_match_min_6() { return &___match_min_6; }
	inline void set_match_min_6(int32_t value)
	{
		___match_min_6 = value;
	}

	inline static int32_t get_offset_of_qs_7() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___qs_7)); }
	inline QuickSearch_t2951143959 * get_qs_7() const { return ___qs_7; }
	inline QuickSearch_t2951143959 ** get_address_of_qs_7() { return &___qs_7; }
	inline void set_qs_7(QuickSearch_t2951143959 * value)
	{
		___qs_7 = value;
		Il2CppCodeGenWriteBarrier((&___qs_7), value);
	}

	inline static int32_t get_offset_of_scan_ptr_8() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___scan_ptr_8)); }
	inline int32_t get_scan_ptr_8() const { return ___scan_ptr_8; }
	inline int32_t* get_address_of_scan_ptr_8() { return &___scan_ptr_8; }
	inline void set_scan_ptr_8(int32_t value)
	{
		___scan_ptr_8 = value;
	}

	inline static int32_t get_offset_of_repeat_9() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___repeat_9)); }
	inline RepeatContext_t1820156589 * get_repeat_9() const { return ___repeat_9; }
	inline RepeatContext_t1820156589 ** get_address_of_repeat_9() { return &___repeat_9; }
	inline void set_repeat_9(RepeatContext_t1820156589 * value)
	{
		___repeat_9 = value;
		Il2CppCodeGenWriteBarrier((&___repeat_9), value);
	}

	inline static int32_t get_offset_of_fast_10() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___fast_10)); }
	inline RepeatContext_t1820156589 * get_fast_10() const { return ___fast_10; }
	inline RepeatContext_t1820156589 ** get_address_of_fast_10() { return &___fast_10; }
	inline void set_fast_10(RepeatContext_t1820156589 * value)
	{
		___fast_10 = value;
		Il2CppCodeGenWriteBarrier((&___fast_10), value);
	}

	inline static int32_t get_offset_of_stack_11() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___stack_11)); }
	inline IntStack_t2702565151  get_stack_11() const { return ___stack_11; }
	inline IntStack_t2702565151 * get_address_of_stack_11() { return &___stack_11; }
	inline void set_stack_11(IntStack_t2702565151  value)
	{
		___stack_11 = value;
	}

	inline static int32_t get_offset_of_deep_12() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___deep_12)); }
	inline RepeatContext_t1820156589 * get_deep_12() const { return ___deep_12; }
	inline RepeatContext_t1820156589 ** get_address_of_deep_12() { return &___deep_12; }
	inline void set_deep_12(RepeatContext_t1820156589 * value)
	{
		___deep_12 = value;
		Il2CppCodeGenWriteBarrier((&___deep_12), value);
	}

	inline static int32_t get_offset_of_marks_13() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___marks_13)); }
	inline MarkU5BU5D_t1575174450* get_marks_13() const { return ___marks_13; }
	inline MarkU5BU5D_t1575174450** get_address_of_marks_13() { return &___marks_13; }
	inline void set_marks_13(MarkU5BU5D_t1575174450* value)
	{
		___marks_13 = value;
		Il2CppCodeGenWriteBarrier((&___marks_13), value);
	}

	inline static int32_t get_offset_of_mark_start_14() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___mark_start_14)); }
	inline int32_t get_mark_start_14() const { return ___mark_start_14; }
	inline int32_t* get_address_of_mark_start_14() { return &___mark_start_14; }
	inline void set_mark_start_14(int32_t value)
	{
		___mark_start_14 = value;
	}

	inline static int32_t get_offset_of_mark_end_15() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___mark_end_15)); }
	inline int32_t get_mark_end_15() const { return ___mark_end_15; }
	inline int32_t* get_address_of_mark_end_15() { return &___mark_end_15; }
	inline void set_mark_end_15(int32_t value)
	{
		___mark_end_15 = value;
	}

	inline static int32_t get_offset_of_groups_16() { return static_cast<int32_t>(offsetof(Interpreter_t3316892724, ___groups_16)); }
	inline Int32U5BU5D_t29945824* get_groups_16() const { return ___groups_16; }
	inline Int32U5BU5D_t29945824** get_address_of_groups_16() { return &___groups_16; }
	inline void set_groups_16(Int32U5BU5D_t29945824* value)
	{
		___groups_16 = value;
		Il2CppCodeGenWriteBarrier((&___groups_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERPRETER_T3316892724_H
#ifndef OPFLAGS_T1742297921_H
#define OPFLAGS_T1742297921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.OpFlags
struct  OpFlags_t1742297921 
{
public:
	// System.UInt16 System.Text.RegularExpressions.OpFlags::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OpFlags_t1742297921, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPFLAGS_T1742297921_H
#ifndef MODE_T3763988252_H
#define MODE_T3763988252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/Mode
struct  Mode_t3763988252 
{
public:
	// System.Int32 System.Text.RegularExpressions.Interpreter/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t3763988252, ___value___1)); }
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
#endif // MODE_T3763988252_H
#ifndef BACKSLASHNUMBER_T3179526083_H
#define BACKSLASHNUMBER_T3179526083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.BackslashNumber
struct  BackslashNumber_t3179526083  : public Reference_t1729983868
{
public:
	// System.String System.Text.RegularExpressions.Syntax.BackslashNumber::literal
	String_t* ___literal_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ecma
	bool ___ecma_3;

public:
	inline static int32_t get_offset_of_literal_2() { return static_cast<int32_t>(offsetof(BackslashNumber_t3179526083, ___literal_2)); }
	inline String_t* get_literal_2() const { return ___literal_2; }
	inline String_t** get_address_of_literal_2() { return &___literal_2; }
	inline void set_literal_2(String_t* value)
	{
		___literal_2 = value;
		Il2CppCodeGenWriteBarrier((&___literal_2), value);
	}

	inline static int32_t get_offset_of_ecma_3() { return static_cast<int32_t>(offsetof(BackslashNumber_t3179526083, ___ecma_3)); }
	inline bool get_ecma_3() const { return ___ecma_3; }
	inline bool* get_address_of_ecma_3() { return &___ecma_3; }
	inline void set_ecma_3(bool value)
	{
		___ecma_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKSLASHNUMBER_T3179526083_H
#ifndef ALTERNATION_T3054367936_H
#define ALTERNATION_T3054367936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Alternation
struct  Alternation_t3054367936  : public CompositeExpression_t982136421
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALTERNATION_T3054367936_H
#ifndef ASSERTION_T2286234479_H
#define ASSERTION_T2286234479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Assertion
struct  Assertion_t2286234479  : public CompositeExpression_t982136421
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSERTION_T2286234479_H
#ifndef REPETITION_T2150109515_H
#define REPETITION_T2150109515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Repetition
struct  Repetition_t2150109515  : public CompositeExpression_t982136421
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::min
	int32_t ___min_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::max
	int32_t ___max_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.Repetition::lazy
	bool ___lazy_3;

public:
	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(Repetition_t2150109515, ___min_1)); }
	inline int32_t get_min_1() const { return ___min_1; }
	inline int32_t* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(int32_t value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(Repetition_t2150109515, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_lazy_3() { return static_cast<int32_t>(offsetof(Repetition_t2150109515, ___lazy_3)); }
	inline bool get_lazy_3() const { return ___lazy_3; }
	inline bool* get_address_of_lazy_3() { return &___lazy_3; }
	inline void set_lazy_3(bool value)
	{
		___lazy_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPETITION_T2150109515_H
#ifndef X509INCLUDEOPTION_T3359666772_H
#define X509INCLUDEOPTION_T3359666772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509IncludeOption
struct  X509IncludeOption_t3359666772 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509IncludeOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509IncludeOption_t3359666772, ___value___1)); }
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
#endif // X509INCLUDEOPTION_T3359666772_H
#ifndef X509KEYUSAGEEXTENSION_T1586506968_H
#define X509KEYUSAGEEXTENSION_T1586506968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct  X509KeyUsageExtension_t1586506968  : public X509Extension_t1300854538
{
public:
	// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_keyUsages
	int32_t ____keyUsages_7;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_status
	int32_t ____status_8;

public:
	inline static int32_t get_offset_of__keyUsages_7() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_t1586506968, ____keyUsages_7)); }
	inline int32_t get__keyUsages_7() const { return ____keyUsages_7; }
	inline int32_t* get_address_of__keyUsages_7() { return &____keyUsages_7; }
	inline void set__keyUsages_7(int32_t value)
	{
		____keyUsages_7 = value;
	}

	inline static int32_t get_offset_of__status_8() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_t1586506968, ____status_8)); }
	inline int32_t get__status_8() const { return ____status_8; }
	inline int32_t* get_address_of__status_8() { return &____status_8; }
	inline void set__status_8(int32_t value)
	{
		____status_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509KEYUSAGEEXTENSION_T1586506968_H
#ifndef POSITIONASSERTION_T3928715742_H
#define POSITIONASSERTION_T3928715742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.PositionAssertion
struct  PositionAssertion_t3928715742  : public Expression_t3908348667
{
public:
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.PositionAssertion::pos
	uint16_t ___pos_0;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(PositionAssertion_t3928715742, ___pos_0)); }
	inline uint16_t get_pos_0() const { return ___pos_0; }
	inline uint16_t* get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(uint16_t value)
	{
		___pos_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONASSERTION_T3928715742_H
#ifndef KEY_T1212329407_H
#define KEY_T1212329407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.FactoryCache/Key
struct  Key_t1212329407  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.FactoryCache/Key::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.FactoryCache/Key::options
	int32_t ___options_1;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Key_t1212329407, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(Key_t1212329407, ___options_1)); }
	inline int32_t get_options_1() const { return ___options_1; }
	inline int32_t* get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(int32_t value)
	{
		___options_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_T1212329407_H
#ifndef EXPRESSIONASSERTION_T281980317_H
#define EXPRESSIONASSERTION_T281980317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct  ExpressionAssertion_t281980317  : public Assertion_t2286234479
{
public:
	// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::reverse
	bool ___reverse_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::negate
	bool ___negate_2;

public:
	inline static int32_t get_offset_of_reverse_1() { return static_cast<int32_t>(offsetof(ExpressionAssertion_t281980317, ___reverse_1)); }
	inline bool get_reverse_1() const { return ___reverse_1; }
	inline bool* get_address_of_reverse_1() { return &___reverse_1; }
	inline void set_reverse_1(bool value)
	{
		___reverse_1 = value;
	}

	inline static int32_t get_offset_of_negate_2() { return static_cast<int32_t>(offsetof(ExpressionAssertion_t281980317, ___negate_2)); }
	inline bool get_negate_2() const { return ___negate_2; }
	inline bool* get_address_of_negate_2() { return &___negate_2; }
	inline void set_negate_2(bool value)
	{
		___negate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONASSERTION_T281980317_H
#ifndef X509STORE_T3819592221_H
#define X509STORE_T3819592221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Store
struct  X509Store_t3819592221  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Store::_name
	String_t* ____name_0;
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509Store::_location
	int32_t ____location_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::list
	X509Certificate2Collection_t1734269663 * ___list_2;
	// System.Security.Cryptography.X509Certificates.OpenFlags System.Security.Cryptography.X509Certificates.X509Store::_flags
	int32_t ____flags_3;
	// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::store
	X509Store_t3998623456 * ___store_4;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(X509Store_t3819592221, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__location_1() { return static_cast<int32_t>(offsetof(X509Store_t3819592221, ____location_1)); }
	inline int32_t get__location_1() const { return ____location_1; }
	inline int32_t* get_address_of__location_1() { return &____location_1; }
	inline void set__location_1(int32_t value)
	{
		____location_1 = value;
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(X509Store_t3819592221, ___list_2)); }
	inline X509Certificate2Collection_t1734269663 * get_list_2() const { return ___list_2; }
	inline X509Certificate2Collection_t1734269663 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(X509Certificate2Collection_t1734269663 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}

	inline static int32_t get_offset_of__flags_3() { return static_cast<int32_t>(offsetof(X509Store_t3819592221, ____flags_3)); }
	inline int32_t get__flags_3() const { return ____flags_3; }
	inline int32_t* get_address_of__flags_3() { return &____flags_3; }
	inline void set__flags_3(int32_t value)
	{
		____flags_3 = value;
	}

	inline static int32_t get_offset_of_store_4() { return static_cast<int32_t>(offsetof(X509Store_t3819592221, ___store_4)); }
	inline X509Store_t3998623456 * get_store_4() const { return ___store_4; }
	inline X509Store_t3998623456 ** get_address_of_store_4() { return &___store_4; }
	inline void set_store_4(X509Store_t3998623456 * value)
	{
		___store_4 = value;
		Il2CppCodeGenWriteBarrier((&___store_4), value);
	}
};

struct X509Store_t3819592221_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Store::<>f__switch$mapF
	Dictionary_2_t3251534394 * ___U3CU3Ef__switchU24mapF_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_5() { return static_cast<int32_t>(offsetof(X509Store_t3819592221_StaticFields, ___U3CU3Ef__switchU24mapF_5)); }
	inline Dictionary_2_t3251534394 * get_U3CU3Ef__switchU24mapF_5() const { return ___U3CU3Ef__switchU24mapF_5; }
	inline Dictionary_2_t3251534394 ** get_address_of_U3CU3Ef__switchU24mapF_5() { return &___U3CU3Ef__switchU24mapF_5; }
	inline void set_U3CU3Ef__switchU24mapF_5(Dictionary_2_t3251534394 * value)
	{
		___U3CU3Ef__switchU24mapF_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T3819592221_H
#ifndef X509SUBJECTKEYIDENTIFIEREXTENSION_T4116637434_H
#define X509SUBJECTKEYIDENTIFIEREXTENSION_T4116637434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct  X509SubjectKeyIdentifierExtension_t4116637434  : public X509Extension_t1300854538
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_subjectKeyIdentifier
	ByteU5BU5D_t3665519352* ____subjectKeyIdentifier_6;
	// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_ski
	String_t* ____ski_7;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_status
	int32_t ____status_8;

public:
	inline static int32_t get_offset_of__subjectKeyIdentifier_6() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t4116637434, ____subjectKeyIdentifier_6)); }
	inline ByteU5BU5D_t3665519352* get__subjectKeyIdentifier_6() const { return ____subjectKeyIdentifier_6; }
	inline ByteU5BU5D_t3665519352** get_address_of__subjectKeyIdentifier_6() { return &____subjectKeyIdentifier_6; }
	inline void set__subjectKeyIdentifier_6(ByteU5BU5D_t3665519352* value)
	{
		____subjectKeyIdentifier_6 = value;
		Il2CppCodeGenWriteBarrier((&____subjectKeyIdentifier_6), value);
	}

	inline static int32_t get_offset_of__ski_7() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t4116637434, ____ski_7)); }
	inline String_t* get__ski_7() const { return ____ski_7; }
	inline String_t** get_address_of__ski_7() { return &____ski_7; }
	inline void set__ski_7(String_t* value)
	{
		____ski_7 = value;
		Il2CppCodeGenWriteBarrier((&____ski_7), value);
	}

	inline static int32_t get_offset_of__status_8() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t4116637434, ____status_8)); }
	inline int32_t get__status_8() const { return ____status_8; }
	inline int32_t* get_address_of__status_8() { return &____status_8; }
	inline void set__status_8(int32_t value)
	{
		____status_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509SUBJECTKEYIDENTIFIEREXTENSION_T4116637434_H
#ifndef CAPTUREASSERTION_T1577352837_H
#define CAPTUREASSERTION_T1577352837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t1577352837  : public Assertion_t2286234479
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t281980317 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t1723503486 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t3783658429 * ___literal_3;

public:
	inline static int32_t get_offset_of_alternate_1() { return static_cast<int32_t>(offsetof(CaptureAssertion_t1577352837, ___alternate_1)); }
	inline ExpressionAssertion_t281980317 * get_alternate_1() const { return ___alternate_1; }
	inline ExpressionAssertion_t281980317 ** get_address_of_alternate_1() { return &___alternate_1; }
	inline void set_alternate_1(ExpressionAssertion_t281980317 * value)
	{
		___alternate_1 = value;
		Il2CppCodeGenWriteBarrier((&___alternate_1), value);
	}

	inline static int32_t get_offset_of_group_2() { return static_cast<int32_t>(offsetof(CaptureAssertion_t1577352837, ___group_2)); }
	inline CapturingGroup_t1723503486 * get_group_2() const { return ___group_2; }
	inline CapturingGroup_t1723503486 ** get_address_of_group_2() { return &___group_2; }
	inline void set_group_2(CapturingGroup_t1723503486 * value)
	{
		___group_2 = value;
		Il2CppCodeGenWriteBarrier((&___group_2), value);
	}

	inline static int32_t get_offset_of_literal_3() { return static_cast<int32_t>(offsetof(CaptureAssertion_t1577352837, ___literal_3)); }
	inline Literal_t3783658429 * get_literal_3() const { return ___literal_3; }
	inline Literal_t3783658429 ** get_address_of_literal_3() { return &___literal_3; }
	inline void set_literal_3(Literal_t3783658429 * value)
	{
		___literal_3 = value;
		Il2CppCodeGenWriteBarrier((&___literal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTUREASSERTION_T1577352837_H
#ifndef ANCHORINFO_T1182207663_H
#define ANCHORINFO_T1182207663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.AnchorInfo
struct  AnchorInfo_t1182207663  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.AnchorInfo::expr
	Expression_t3908348667 * ___expr_0;
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::pos
	uint16_t ___pos_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::offset
	int32_t ___offset_2;
	// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::str
	String_t* ___str_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::width
	int32_t ___width_4;
	// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::ignore
	bool ___ignore_5;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(AnchorInfo_t1182207663, ___expr_0)); }
	inline Expression_t3908348667 * get_expr_0() const { return ___expr_0; }
	inline Expression_t3908348667 ** get_address_of_expr_0() { return &___expr_0; }
	inline void set_expr_0(Expression_t3908348667 * value)
	{
		___expr_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr_0), value);
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(AnchorInfo_t1182207663, ___pos_1)); }
	inline uint16_t get_pos_1() const { return ___pos_1; }
	inline uint16_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(uint16_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(AnchorInfo_t1182207663, ___offset_2)); }
	inline int32_t get_offset_2() const { return ___offset_2; }
	inline int32_t* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(int32_t value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_str_3() { return static_cast<int32_t>(offsetof(AnchorInfo_t1182207663, ___str_3)); }
	inline String_t* get_str_3() const { return ___str_3; }
	inline String_t** get_address_of_str_3() { return &___str_3; }
	inline void set_str_3(String_t* value)
	{
		___str_3 = value;
		Il2CppCodeGenWriteBarrier((&___str_3), value);
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(AnchorInfo_t1182207663, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_ignore_5() { return static_cast<int32_t>(offsetof(AnchorInfo_t1182207663, ___ignore_5)); }
	inline bool get_ignore_5() const { return ___ignore_5; }
	inline bool* get_address_of_ignore_5() { return &___ignore_5; }
	inline void set_ignore_5(bool value)
	{
		___ignore_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORINFO_T1182207663_H
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
#ifndef URIFORMATEXCEPTION_T1422223300_H
#define URIFORMATEXCEPTION_T1422223300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriFormatException
struct  UriFormatException_t1422223300  : public FormatException_t2589493545
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIFORMATEXCEPTION_T1422223300_H
#ifndef NONBACKTRACKINGGROUP_T3561778244_H
#define NONBACKTRACKINGGROUP_T3561778244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
struct  NonBacktrackingGroup_t3561778244  : public Group_t3601601316
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONBACKTRACKINGGROUP_T3561778244_H
#ifndef REGEX_T1901338271_H
#define REGEX_T1901338271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t1901338271  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	RuntimeObject* ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	RuntimeObject* ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_5;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t1443727135* ___group_names_6;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t29945824* ___group_numbers_7;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_8;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Text.RegularExpressions.Regex::capnames
	Dictionary_2_t3251534394 * ___capnames_10;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> System.Text.RegularExpressions.Regex::caps
	Dictionary_2_t1837753083 * ___caps_11;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_12;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t1443727135* ___capslist_13;

public:
	inline static int32_t get_offset_of_machineFactory_1() { return static_cast<int32_t>(offsetof(Regex_t1901338271, ___machineFactory_1)); }
	inline RuntimeObject* get_machineFactory_1() const { return ___machineFactory_1; }
	inline RuntimeObject** get_address_of_machineFactory_1() { return &___machineFactory_1; }
	inline void set_machineFactory_1(RuntimeObject* value)
	{
		___machineFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&___machineFactory_1), value);
	}

	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(Regex_t1901338271, ___mapping_2)); }
	inline RuntimeObject* get_mapping_2() const { return ___mapping_2; }
	inline RuntimeObject** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(RuntimeObject* value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_group_count_3() { return static_cast<int32_t>(offsetof(Regex_t1901338271, ___group_count_3)); }
	inline int32_t get_group_count_3() const { return ___group_count_3; }
	inline int32_t* get_address_of_group_count_3() { return &___group_count_3; }
	inline void set_group_count_3(int32_t value)
	{
		___group_count_3 = value;
	}

	inline static int32_t get_offset_of_gap_4() { return static_cast<int32_t>(offsetof(Regex_t1901338271, ___gap_4)); }
	inline int32_t get_gap_4() const { return ___gap_4; }
	inline int32_t* get_address_of_gap_4() { return &___gap_4; }
	inline void set_gap_4(int32_t value)
	{
		___gap_4 = value;
	}

	inline static int32_t get_offset_of_refsInitialized_5() { return static_cast<int32_t>(offsetof(Regex_t1901338271, ___refsInitialized_5)); }
	inline bool get_refsInitialized_5() const { return ___refsInitialized_5; }
	inline bool* get_address_of_refsInitialized_5() { return &___refsInitialized_5; }
	inline void set_refsInitialized_5(bool value)
	{
		___refsInitialized_5 = value;
	}

	inline static int32_t get_offset_of_group_names_6() { return static_cast<int32_t>(offsetof(Regex_t1901338271, ___group_names_6)); }
	inline StringU5BU5D_t1443727135* get_group_names_6() const { return ___group_names_6; }
	inline StringU5BU5D_t1443727135** get_address_of_group_names_6() { return &___group_names_6; }
	inline void set_group_names_6(StringU5BU5D_t1443727135* value)
	{
		___group_names_6 = value;
		Il2CppCodeGenWriteBarrier((&___group_names_6), value);
	}

	inline static int32_t get_offset_of_group_numbers_7() { return static_cast<int32_t>(offsetof(Regex_t1901338271, ___group_numbers_7)); }
	inline Int32U5BU5D_t29945824* get_group_numbers_7() const { return ___group_numbers_7; }
	inline Int32U5BU5D_t29945824** get_address_of_group_numbers_7() { return &___group_numbers_7; }
	inline void set_group_numbers_7(Int32U5BU5D_t29945824* value)
	{
		___group_numbers_7 = value;
		Il2CppCodeGenWriteBarrier((&___group_numbers_7), value);
	}

	inline static int32_t get_offset_of_pattern_8() { return static_cast<int32_t>(offsetof(Regex_t1901338271, ___pattern_8)); }
	inline String_t* get_pattern_8() const { return ___pattern_8; }
	inline String_t** get_address_of_pattern_8() { return &___pattern_8; }
	inline void set_pattern_8(String_t* value)
	{
		___pattern_8 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_8), value);
	}

	inline static int32_t get_offset_of_roptions_9() { return static_cast<int32_t>(offsetof(Regex_t1901338271, ___roptions_9)); }
	inline int32_t get_roptions_9() const { return ___roptions_9; }
	inline int32_t* get_address_of_roptions_9() { return &___roptions_9; }
	inline void set_roptions_9(int32_t value)
	{
		___roptions_9 = value;
	}

	inline static int32_t get_offset_of_capnames_10() { return static_cast<int32_t>(offsetof(Regex_t1901338271, ___capnames_10)); }
	inline Dictionary_2_t3251534394 * get_capnames_10() const { return ___capnames_10; }
	inline Dictionary_2_t3251534394 ** get_address_of_capnames_10() { return &___capnames_10; }
	inline void set_capnames_10(Dictionary_2_t3251534394 * value)
	{
		___capnames_10 = value;
		Il2CppCodeGenWriteBarrier((&___capnames_10), value);
	}

	inline static int32_t get_offset_of_caps_11() { return static_cast<int32_t>(offsetof(Regex_t1901338271, ___caps_11)); }
	inline Dictionary_2_t1837753083 * get_caps_11() const { return ___caps_11; }
	inline Dictionary_2_t1837753083 ** get_address_of_caps_11() { return &___caps_11; }
	inline void set_caps_11(Dictionary_2_t1837753083 * value)
	{
		___caps_11 = value;
		Il2CppCodeGenWriteBarrier((&___caps_11), value);
	}

	inline static int32_t get_offset_of_capsize_12() { return static_cast<int32_t>(offsetof(Regex_t1901338271, ___capsize_12)); }
	inline int32_t get_capsize_12() const { return ___capsize_12; }
	inline int32_t* get_address_of_capsize_12() { return &___capsize_12; }
	inline void set_capsize_12(int32_t value)
	{
		___capsize_12 = value;
	}

	inline static int32_t get_offset_of_capslist_13() { return static_cast<int32_t>(offsetof(Regex_t1901338271, ___capslist_13)); }
	inline StringU5BU5D_t1443727135* get_capslist_13() const { return ___capslist_13; }
	inline StringU5BU5D_t1443727135** get_address_of_capslist_13() { return &___capslist_13; }
	inline void set_capslist_13(StringU5BU5D_t1443727135* value)
	{
		___capslist_13 = value;
		Il2CppCodeGenWriteBarrier((&___capslist_13), value);
	}
};

struct Regex_t1901338271_StaticFields
{
public:
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t848794873 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(Regex_t1901338271_StaticFields, ___cache_0)); }
	inline FactoryCache_t848794873 * get_cache_0() const { return ___cache_0; }
	inline FactoryCache_t848794873 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(FactoryCache_t848794873 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T1901338271_H
#ifndef CAPTURINGGROUP_T1723503486_H
#define CAPTURINGGROUP_T1723503486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CapturingGroup
struct  CapturingGroup_t1723503486  : public Group_t3601601316
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::gid
	int32_t ___gid_1;
	// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_gid_1() { return static_cast<int32_t>(offsetof(CapturingGroup_t1723503486, ___gid_1)); }
	inline int32_t get_gid_1() const { return ___gid_1; }
	inline int32_t* get_address_of_gid_1() { return &___gid_1; }
	inline void set_gid_1(int32_t value)
	{
		___gid_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(CapturingGroup_t1723503486, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURINGGROUP_T1723503486_H
#ifndef REGULAREXPRESSION_T3538172292_H
#define REGULAREXPRESSION_T3538172292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.RegularExpression
struct  RegularExpression_t3538172292  : public Group_t3601601316
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.RegularExpression::group_count
	int32_t ___group_count_1;

public:
	inline static int32_t get_offset_of_group_count_1() { return static_cast<int32_t>(offsetof(RegularExpression_t3538172292, ___group_count_1)); }
	inline int32_t get_group_count_1() const { return ___group_count_1; }
	inline int32_t* get_address_of_group_count_1() { return &___group_count_1; }
	inline void set_group_count_1(int32_t value)
	{
		___group_count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGULAREXPRESSION_T3538172292_H
#ifndef BALANCINGGROUP_T86367847_H
#define BALANCINGGROUP_T86367847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.BalancingGroup
struct  BalancingGroup_t86367847  : public CapturingGroup_t1723503486
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.BalancingGroup::balance
	CapturingGroup_t1723503486 * ___balance_3;

public:
	inline static int32_t get_offset_of_balance_3() { return static_cast<int32_t>(offsetof(BalancingGroup_t86367847, ___balance_3)); }
	inline CapturingGroup_t1723503486 * get_balance_3() const { return ___balance_3; }
	inline CapturingGroup_t1723503486 ** get_address_of_balance_3() { return &___balance_3; }
	inline void set_balance_3(CapturingGroup_t1723503486 * value)
	{
		___balance_3 = value;
		Il2CppCodeGenWriteBarrier((&___balance_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALANCINGGROUP_T86367847_H
#ifndef DOWORKEVENTHANDLER_T3588577156_H
#define DOWORKEVENTHANDLER_T3588577156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoWorkEventHandler
struct  DoWorkEventHandler_t3588577156  : public MulticastDelegate_t3875463140
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOWORKEVENTHANDLER_T3588577156_H
#ifndef COSTDELEGATE_T1624679038_H
#define COSTDELEGATE_T1624679038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct  CostDelegate_t1624679038  : public MulticastDelegate_t3875463140
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COSTDELEGATE_T1624679038_H
#ifndef COLLECTIONCHANGEEVENTHANDLER_T1001824869_H
#define COLLECTIONCHANGEEVENTHANDLER_T1001824869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventHandler
struct  CollectionChangeEventHandler_t1001824869  : public MulticastDelegate_t3875463140
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTHANDLER_T1001824869_H
#ifndef ASYNCCOMPLETEDEVENTHANDLER_T680005472_H
#define ASYNCCOMPLETEDEVENTHANDLER_T680005472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AsyncCompletedEventHandler
struct  AsyncCompletedEventHandler_t680005472  : public MulticastDelegate_t3875463140
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCOMPLETEDEVENTHANDLER_T680005472_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (X509IncludeOption_t3359666772)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1800[5] = 
{
	X509IncludeOption_t3359666772::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (X509KeyUsageExtension_t1586506968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1801[5] = 
{
	0,
	0,
	0,
	X509KeyUsageExtension_t1586506968::get_offset_of__keyUsages_7(),
	X509KeyUsageExtension_t1586506968::get_offset_of__status_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (X509KeyUsageFlags_t983569114)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1802[11] = 
{
	X509KeyUsageFlags_t983569114::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (X509NameType_t3167384597)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1803[7] = 
{
	X509NameType_t3167384597::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (X509RevocationFlag_t1272748884)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1804[4] = 
{
	X509RevocationFlag_t1272748884::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (X509RevocationMode_t2184710984)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1805[4] = 
{
	X509RevocationMode_t2184710984::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (X509Store_t3819592221), -1, sizeof(X509Store_t3819592221_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1806[6] = 
{
	X509Store_t3819592221::get_offset_of__name_0(),
	X509Store_t3819592221::get_offset_of__location_1(),
	X509Store_t3819592221::get_offset_of_list_2(),
	X509Store_t3819592221::get_offset_of__flags_3(),
	X509Store_t3819592221::get_offset_of_store_4(),
	X509Store_t3819592221_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (X509SubjectKeyIdentifierExtension_t4116637434), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1807[5] = 
{
	0,
	0,
	X509SubjectKeyIdentifierExtension_t4116637434::get_offset_of__subjectKeyIdentifier_6(),
	X509SubjectKeyIdentifierExtension_t4116637434::get_offset_of__ski_7(),
	X509SubjectKeyIdentifierExtension_t4116637434::get_offset_of__status_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (X509SubjectKeyIdentifierHashAlgorithm_t2673208641)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1808[4] = 
{
	X509SubjectKeyIdentifierHashAlgorithm_t2673208641::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (X509VerificationFlags_t1726482264)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1809[15] = 
{
	X509VerificationFlags_t1726482264::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (AsnDecodeStatus_t2259783958)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1810[7] = 
{
	AsnDecodeStatus_t2259783958::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (AsnEncodedData_t2396594692), -1, sizeof(AsnEncodedData_t2396594692_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1811[3] = 
{
	AsnEncodedData_t2396594692::get_offset_of__oid_0(),
	AsnEncodedData_t2396594692::get_offset_of__raw_1(),
	AsnEncodedData_t2396594692_StaticFields::get_offset_of_U3CU3Ef__switchU24mapA_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (AsnEncodedDataCollection_t3808329583), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1812[1] = 
{
	AsnEncodedDataCollection_t3808329583::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (AsnEncodedDataEnumerator_t477190200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1813[2] = 
{
	AsnEncodedDataEnumerator_t477190200::get_offset_of__collection_0(),
	AsnEncodedDataEnumerator_t477190200::get_offset_of__position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (Oid_t479295258), -1, sizeof(Oid_t479295258_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1814[24] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Oid_t479295258::get_offset_of__value_20(),
	Oid_t479295258::get_offset_of__name_21(),
	Oid_t479295258_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_22(),
	Oid_t479295258_StaticFields::get_offset_of_U3CU3Ef__switchU24map11_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (OidCollection_t3324998466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1815[2] = 
{
	OidCollection_t3324998466::get_offset_of__list_0(),
	OidCollection_t3324998466::get_offset_of__readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (OidEnumerator_t501510191), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1816[2] = 
{
	OidEnumerator_t501510191::get_offset_of__collection_0(),
	OidEnumerator_t501510191::get_offset_of__position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (BaseMachine_t150577323), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1817[1] = 
{
	BaseMachine_t150577323::get_offset_of_needs_groups_or_captures_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (Capture_t3751675586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1818[3] = 
{
	Capture_t3751675586::get_offset_of_index_0(),
	Capture_t3751675586::get_offset_of_length_1(),
	Capture_t3751675586::get_offset_of_text_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (CaptureCollection_t4176122178), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1819[1] = 
{
	CaptureCollection_t4176122178::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (Group_t1001396390), -1, sizeof(Group_t1001396390_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1820[3] = 
{
	Group_t1001396390_StaticFields::get_offset_of_Fail_3(),
	Group_t1001396390::get_offset_of_success_4(),
	Group_t1001396390::get_offset_of_captures_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (GroupCollection_t2622309834), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1821[2] = 
{
	GroupCollection_t2622309834::get_offset_of_list_0(),
	GroupCollection_t2622309834::get_offset_of_gap_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (Match_t782501982), -1, sizeof(Match_t782501982_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1822[5] = 
{
	Match_t782501982::get_offset_of_regex_6(),
	Match_t782501982::get_offset_of_machine_7(),
	Match_t782501982::get_offset_of_text_length_8(),
	Match_t782501982::get_offset_of_groups_9(),
	Match_t782501982_StaticFields::get_offset_of_empty_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (MatchCollection_t1868406169), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1823[2] = 
{
	MatchCollection_t1868406169::get_offset_of_current_0(),
	MatchCollection_t1868406169::get_offset_of_list_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (Enumerator_t1668849238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1824[2] = 
{
	Enumerator_t1668849238::get_offset_of_index_0(),
	Enumerator_t1668849238::get_offset_of_coll_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (Regex_t1901338271), -1, sizeof(Regex_t1901338271_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1825[14] = 
{
	Regex_t1901338271_StaticFields::get_offset_of_cache_0(),
	Regex_t1901338271::get_offset_of_machineFactory_1(),
	Regex_t1901338271::get_offset_of_mapping_2(),
	Regex_t1901338271::get_offset_of_group_count_3(),
	Regex_t1901338271::get_offset_of_gap_4(),
	Regex_t1901338271::get_offset_of_refsInitialized_5(),
	Regex_t1901338271::get_offset_of_group_names_6(),
	Regex_t1901338271::get_offset_of_group_numbers_7(),
	Regex_t1901338271::get_offset_of_pattern_8(),
	Regex_t1901338271::get_offset_of_roptions_9(),
	Regex_t1901338271::get_offset_of_capnames_10(),
	Regex_t1901338271::get_offset_of_caps_11(),
	Regex_t1901338271::get_offset_of_capsize_12(),
	Regex_t1901338271::get_offset_of_capslist_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (RegexOptions_t108697606)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1826[10] = 
{
	RegexOptions_t108697606::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (OpCode_t4277725355)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1827[26] = 
{
	OpCode_t4277725355::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (OpFlags_t1742297921)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1828[6] = 
{
	OpFlags_t1742297921::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (Position_t1440314515)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1829[11] = 
{
	Position_t1440314515::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { sizeof (FactoryCache_t848794873), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1832[3] = 
{
	FactoryCache_t848794873::get_offset_of_capacity_0(),
	FactoryCache_t848794873::get_offset_of_factories_1(),
	FactoryCache_t848794873::get_offset_of_mru_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { sizeof (Key_t1212329407), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1833[2] = 
{
	Key_t1212329407::get_offset_of_pattern_0(),
	Key_t1212329407::get_offset_of_options_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { sizeof (MRUList_t723177117), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1834[2] = 
{
	MRUList_t723177117::get_offset_of_head_0(),
	MRUList_t723177117::get_offset_of_tail_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { sizeof (Node_t1034484664), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1835[3] = 
{
	Node_t1034484664::get_offset_of_value_0(),
	Node_t1034484664::get_offset_of_previous_1(),
	Node_t1034484664::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (Category_t3744121494)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1836[146] = 
{
	Category_t3744121494::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (CategoryUtils_t1881244697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { sizeof (LinkRef_t3195455246), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (InterpreterFactory_t1476489002), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1840[4] = 
{
	InterpreterFactory_t1476489002::get_offset_of_mapping_0(),
	InterpreterFactory_t1476489002::get_offset_of_pattern_1(),
	InterpreterFactory_t1476489002::get_offset_of_namesMapping_2(),
	InterpreterFactory_t1476489002::get_offset_of_gap_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1841 = { sizeof (PatternCompiler_t2474916417), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1841[1] = 
{
	PatternCompiler_t2474916417::get_offset_of_pgm_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1842 = { sizeof (PatternLinkStack_t2694049077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1842[1] = 
{
	PatternLinkStack_t2694049077::get_offset_of_link_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1843 = { sizeof (Link_t2863025501)+ sizeof (RuntimeObject), sizeof(Link_t2863025501 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1843[2] = 
{
	Link_t2863025501::get_offset_of_base_addr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Link_t2863025501::get_offset_of_offset_addr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1844 = { sizeof (LinkStack_t1900882115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1844[1] = 
{
	LinkStack_t1900882115::get_offset_of_stack_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1845 = { sizeof (Mark_t814963683)+ sizeof (RuntimeObject), sizeof(Mark_t814963683 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1845[3] = 
{
	Mark_t814963683::get_offset_of_Start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Mark_t814963683::get_offset_of_End_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Mark_t814963683::get_offset_of_Previous_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1846 = { sizeof (Interpreter_t3316892724), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1846[16] = 
{
	Interpreter_t3316892724::get_offset_of_program_1(),
	Interpreter_t3316892724::get_offset_of_program_start_2(),
	Interpreter_t3316892724::get_offset_of_text_3(),
	Interpreter_t3316892724::get_offset_of_text_end_4(),
	Interpreter_t3316892724::get_offset_of_group_count_5(),
	Interpreter_t3316892724::get_offset_of_match_min_6(),
	Interpreter_t3316892724::get_offset_of_qs_7(),
	Interpreter_t3316892724::get_offset_of_scan_ptr_8(),
	Interpreter_t3316892724::get_offset_of_repeat_9(),
	Interpreter_t3316892724::get_offset_of_fast_10(),
	Interpreter_t3316892724::get_offset_of_stack_11(),
	Interpreter_t3316892724::get_offset_of_deep_12(),
	Interpreter_t3316892724::get_offset_of_marks_13(),
	Interpreter_t3316892724::get_offset_of_mark_start_14(),
	Interpreter_t3316892724::get_offset_of_mark_end_15(),
	Interpreter_t3316892724::get_offset_of_groups_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1847 = { sizeof (IntStack_t2702565151)+ sizeof (RuntimeObject), sizeof(IntStack_t2702565151_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1847[2] = 
{
	IntStack_t2702565151::get_offset_of_values_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntStack_t2702565151::get_offset_of_count_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1848 = { sizeof (RepeatContext_t1820156589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1848[7] = 
{
	RepeatContext_t1820156589::get_offset_of_start_0(),
	RepeatContext_t1820156589::get_offset_of_min_1(),
	RepeatContext_t1820156589::get_offset_of_max_2(),
	RepeatContext_t1820156589::get_offset_of_lazy_3(),
	RepeatContext_t1820156589::get_offset_of_expr_pc_4(),
	RepeatContext_t1820156589::get_offset_of_previous_5(),
	RepeatContext_t1820156589::get_offset_of_count_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1849 = { sizeof (Mode_t3763988252)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1849[4] = 
{
	Mode_t3763988252::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1850 = { sizeof (Interval_t1976461779)+ sizeof (RuntimeObject), sizeof(Interval_t1976461779_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1850[3] = 
{
	Interval_t1976461779::get_offset_of_low_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Interval_t1976461779::get_offset_of_high_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Interval_t1976461779::get_offset_of_contiguous_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1851 = { sizeof (IntervalCollection_t3089282293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1851[1] = 
{
	IntervalCollection_t3089282293::get_offset_of_intervals_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1852 = { sizeof (Enumerator_t3743425539), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1852[2] = 
{
	Enumerator_t3743425539::get_offset_of_list_0(),
	Enumerator_t3743425539::get_offset_of_ptr_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1853 = { sizeof (CostDelegate_t1624679038), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1854 = { sizeof (Parser_t955552346), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1854[6] = 
{
	Parser_t955552346::get_offset_of_pattern_0(),
	Parser_t955552346::get_offset_of_ptr_1(),
	Parser_t955552346::get_offset_of_caps_2(),
	Parser_t955552346::get_offset_of_refs_3(),
	Parser_t955552346::get_offset_of_num_groups_4(),
	Parser_t955552346::get_offset_of_gap_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1855 = { sizeof (QuickSearch_t2951143959), -1, sizeof(QuickSearch_t2951143959_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1855[7] = 
{
	QuickSearch_t2951143959::get_offset_of_str_0(),
	QuickSearch_t2951143959::get_offset_of_len_1(),
	QuickSearch_t2951143959::get_offset_of_ignore_2(),
	QuickSearch_t2951143959::get_offset_of_reverse_3(),
	QuickSearch_t2951143959::get_offset_of_shift_4(),
	QuickSearch_t2951143959::get_offset_of_shiftExtended_5(),
	QuickSearch_t2951143959_StaticFields::get_offset_of_THRESHOLD_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1856 = { sizeof (ExpressionCollection_t4279657396), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1857 = { sizeof (Expression_t3908348667), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1858 = { sizeof (CompositeExpression_t982136421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1858[1] = 
{
	CompositeExpression_t982136421::get_offset_of_expressions_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1859 = { sizeof (Group_t3601601316), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1860 = { sizeof (RegularExpression_t3538172292), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1860[1] = 
{
	RegularExpression_t3538172292::get_offset_of_group_count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1861 = { sizeof (CapturingGroup_t1723503486), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1861[2] = 
{
	CapturingGroup_t1723503486::get_offset_of_gid_1(),
	CapturingGroup_t1723503486::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1862 = { sizeof (BalancingGroup_t86367847), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1862[1] = 
{
	BalancingGroup_t86367847::get_offset_of_balance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1863 = { sizeof (NonBacktrackingGroup_t3561778244), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1864 = { sizeof (Repetition_t2150109515), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1864[3] = 
{
	Repetition_t2150109515::get_offset_of_min_1(),
	Repetition_t2150109515::get_offset_of_max_2(),
	Repetition_t2150109515::get_offset_of_lazy_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1865 = { sizeof (Assertion_t2286234479), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1866 = { sizeof (CaptureAssertion_t1577352837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1866[3] = 
{
	CaptureAssertion_t1577352837::get_offset_of_alternate_1(),
	CaptureAssertion_t1577352837::get_offset_of_group_2(),
	CaptureAssertion_t1577352837::get_offset_of_literal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1867 = { sizeof (ExpressionAssertion_t281980317), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1867[2] = 
{
	ExpressionAssertion_t281980317::get_offset_of_reverse_1(),
	ExpressionAssertion_t281980317::get_offset_of_negate_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1868 = { sizeof (Alternation_t3054367936), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1869 = { sizeof (Literal_t3783658429), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1869[2] = 
{
	Literal_t3783658429::get_offset_of_str_0(),
	Literal_t3783658429::get_offset_of_ignore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1870 = { sizeof (PositionAssertion_t3928715742), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1870[1] = 
{
	PositionAssertion_t3928715742::get_offset_of_pos_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1871 = { sizeof (Reference_t1729983868), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1871[2] = 
{
	Reference_t1729983868::get_offset_of_group_0(),
	Reference_t1729983868::get_offset_of_ignore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1872 = { sizeof (BackslashNumber_t3179526083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1872[2] = 
{
	BackslashNumber_t3179526083::get_offset_of_literal_2(),
	BackslashNumber_t3179526083::get_offset_of_ecma_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1873 = { sizeof (CharacterClass_t3604374701), -1, sizeof(CharacterClass_t3604374701_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1873[6] = 
{
	CharacterClass_t3604374701_StaticFields::get_offset_of_upper_case_characters_0(),
	CharacterClass_t3604374701::get_offset_of_negate_1(),
	CharacterClass_t3604374701::get_offset_of_ignore_2(),
	CharacterClass_t3604374701::get_offset_of_pos_cats_3(),
	CharacterClass_t3604374701::get_offset_of_neg_cats_4(),
	CharacterClass_t3604374701::get_offset_of_intervals_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1874 = { sizeof (AnchorInfo_t1182207663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1874[6] = 
{
	AnchorInfo_t1182207663::get_offset_of_expr_0(),
	AnchorInfo_t1182207663::get_offset_of_pos_1(),
	AnchorInfo_t1182207663::get_offset_of_offset_2(),
	AnchorInfo_t1182207663::get_offset_of_str_3(),
	AnchorInfo_t1182207663::get_offset_of_width_4(),
	AnchorInfo_t1182207663::get_offset_of_ignore_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1875 = { sizeof (DefaultUriParser_t4092887240), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1876 = { sizeof (FileStyleUriParser_t1379020187), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1877 = { sizeof (FtpStyleUriParser_t2569753245), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1878 = { sizeof (GenericUriParser_t3649137674), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1879 = { sizeof (GenericUriParserOptions_t919417354)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1879[13] = 
{
	GenericUriParserOptions_t919417354::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1880 = { sizeof (HttpStyleUriParser_t2592170872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1881 = { sizeof (NetPipeStyleUriParser_t2396196172), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1882 = { sizeof (NetTcpStyleUriParser_t1317871050), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1883 = { sizeof (NewsStyleUriParser_t3656819554), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1884 = { sizeof (SRDescriptionAttribute_t88939702), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1884[1] = 
{
	SRDescriptionAttribute_t88939702::get_offset_of_isReplaced_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1885 = { sizeof (Uri_t3180489251), -1, sizeof(Uri_t3180489251_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1885[38] = 
{
	0,
	Uri_t3180489251::get_offset_of_isUnixFilePath_1(),
	Uri_t3180489251::get_offset_of_source_2(),
	Uri_t3180489251::get_offset_of_scheme_3(),
	Uri_t3180489251::get_offset_of_host_4(),
	Uri_t3180489251::get_offset_of_port_5(),
	Uri_t3180489251::get_offset_of_path_6(),
	Uri_t3180489251::get_offset_of_query_7(),
	Uri_t3180489251::get_offset_of_fragment_8(),
	Uri_t3180489251::get_offset_of_userinfo_9(),
	Uri_t3180489251::get_offset_of_isUnc_10(),
	Uri_t3180489251::get_offset_of_isOpaquePart_11(),
	Uri_t3180489251::get_offset_of_isAbsoluteUri_12(),
	Uri_t3180489251::get_offset_of_segments_13(),
	Uri_t3180489251::get_offset_of_userEscaped_14(),
	Uri_t3180489251::get_offset_of_cachedAbsoluteUri_15(),
	Uri_t3180489251::get_offset_of_cachedToString_16(),
	Uri_t3180489251::get_offset_of_cachedLocalPath_17(),
	Uri_t3180489251::get_offset_of_cachedHashCode_18(),
	Uri_t3180489251_StaticFields::get_offset_of_hexUpperChars_19(),
	Uri_t3180489251_StaticFields::get_offset_of_SchemeDelimiter_20(),
	Uri_t3180489251_StaticFields::get_offset_of_UriSchemeFile_21(),
	Uri_t3180489251_StaticFields::get_offset_of_UriSchemeFtp_22(),
	Uri_t3180489251_StaticFields::get_offset_of_UriSchemeGopher_23(),
	Uri_t3180489251_StaticFields::get_offset_of_UriSchemeHttp_24(),
	Uri_t3180489251_StaticFields::get_offset_of_UriSchemeHttps_25(),
	Uri_t3180489251_StaticFields::get_offset_of_UriSchemeMailto_26(),
	Uri_t3180489251_StaticFields::get_offset_of_UriSchemeNews_27(),
	Uri_t3180489251_StaticFields::get_offset_of_UriSchemeNntp_28(),
	Uri_t3180489251_StaticFields::get_offset_of_UriSchemeNetPipe_29(),
	Uri_t3180489251_StaticFields::get_offset_of_UriSchemeNetTcp_30(),
	Uri_t3180489251_StaticFields::get_offset_of_schemes_31(),
	Uri_t3180489251::get_offset_of_parser_32(),
	Uri_t3180489251_StaticFields::get_offset_of_U3CU3Ef__switchU24map12_33(),
	Uri_t3180489251_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_34(),
	Uri_t3180489251_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_35(),
	Uri_t3180489251_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_36(),
	Uri_t3180489251_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_37(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1886 = { sizeof (UriScheme_t4218144382)+ sizeof (RuntimeObject), sizeof(UriScheme_t4218144382_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1886[3] = 
{
	UriScheme_t4218144382::get_offset_of_scheme_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t4218144382::get_offset_of_delimiter_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t4218144382::get_offset_of_defaultPort_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1887 = { sizeof (UriBuilder_t3988738817), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1887[10] = 
{
	UriBuilder_t3988738817::get_offset_of_scheme_0(),
	UriBuilder_t3988738817::get_offset_of_host_1(),
	UriBuilder_t3988738817::get_offset_of_port_2(),
	UriBuilder_t3988738817::get_offset_of_path_3(),
	UriBuilder_t3988738817::get_offset_of_query_4(),
	UriBuilder_t3988738817::get_offset_of_fragment_5(),
	UriBuilder_t3988738817::get_offset_of_username_6(),
	UriBuilder_t3988738817::get_offset_of_password_7(),
	UriBuilder_t3988738817::get_offset_of_uri_8(),
	UriBuilder_t3988738817::get_offset_of_modified_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1888 = { sizeof (UriComponents_t2442473460)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1888[17] = 
{
	UriComponents_t2442473460::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1889 = { sizeof (UriFormat_t1043553239)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1889[4] = 
{
	UriFormat_t1043553239::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1890 = { sizeof (UriFormatException_t1422223300), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1891 = { sizeof (UriHostNameType_t1560487489)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1891[6] = 
{
	UriHostNameType_t1560487489::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1892 = { sizeof (UriIdnScope_t3844882438)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1892[4] = 
{
	UriIdnScope_t3844882438::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1893 = { sizeof (UriKind_t2659104991)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1893[4] = 
{
	UriKind_t2659104991::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1894 = { sizeof (UriParser_t3111855441), -1, sizeof(UriParser_t3111855441_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1894[6] = 
{
	UriParser_t3111855441_StaticFields::get_offset_of_lock_object_0(),
	UriParser_t3111855441_StaticFields::get_offset_of_table_1(),
	UriParser_t3111855441::get_offset_of_scheme_name_2(),
	UriParser_t3111855441::get_offset_of_default_port_3(),
	UriParser_t3111855441_StaticFields::get_offset_of_uri_regex_4(),
	UriParser_t3111855441_StaticFields::get_offset_of_auth_regex_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1895 = { sizeof (UriPartial_t109406523)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1895[5] = 
{
	UriPartial_t109406523::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1896 = { sizeof (UriTypeConverter_t527541348), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1897 = { sizeof (AsyncCompletedEventHandler_t680005472), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1898 = { sizeof (CollectionChangeEventHandler_t1001824869), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1899 = { sizeof (DoWorkEventHandler_t3588577156), sizeof(Il2CppMethodPointer), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
