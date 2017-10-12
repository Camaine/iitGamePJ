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

// System.Byte[]
struct ByteU5BU5D_t3665519352;
// System.Collections.Hashtable
struct Hashtable_t1289739904;
// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
struct InstanceComparer_t751685324;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t3283404462;
// System.Security.Cryptography.CspParameters
struct CspParameters_t906534246;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t4142489098;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t2776148640;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2763954240;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t182833838;
// System.Collections.IEnumerator
struct IEnumerator_t3745581530;
// System.Runtime.Serialization.SerializationCallbacks
struct SerializationCallbacks_t149790674;
// System.Type[]
struct TypeU5BU5D_t3894805094;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t1730811349;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t2807122887;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t262170411;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t4226997744;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1469683107;
// System.IntPtr[]
struct IntPtrU5BU5D_t3973137824;
// System.Collections.IDictionary
struct IDictionary_t1096780766;
// System.String[]
struct StringU5BU5D_t1443727135;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t503668026;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t96761379;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3281859074;
// System.MarshalByRefObject
struct MarshalByRefObject_t3101711328;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1345383506;
// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t2457821850;
// System.UInt32[]
struct UInt32U5BU5D_t1905288051;
// System.Security.Cryptography.DSA
struct DSA_t1766017524;
// System.Char[]
struct CharU5BU5D_t3282938201;
// System.Void
struct Void_t3348323986;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Int32[]
struct Int32U5BU5D_t29945824;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2083211132;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t149572272;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t663758033;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t3124274384;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t3801964476;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3327250702;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t228273666;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1342214584;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t4059959167;
// System.IO.Stream
struct Stream_t1852591913;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t3281870570;
// System.Security.SecureString
struct SecureString_t2290931091;
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t2784069324;
// System.IAsyncResult
struct IAsyncResult_t2988228258;
// System.AsyncCallback
struct AsyncCallback_t2694001226;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3692103884;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t4268970529;
// System.Byte[,]
struct ByteU5BU2CU5D_t3665519353;
// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t462709064;
// System.Collections.Queue
struct Queue_t3290476453;
// System.Reflection.Assembly
struct Assembly_t1299114196;
// System.Runtime.Serialization.SerializationObjectManager
struct SerializationObjectManager_t3404539104;




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
#ifndef HASHALGORITHM_T2083211132_H
#define HASHALGORITHM_T2083211132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t2083211132  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t3665519352* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2083211132, ___HashValue_0)); }
	inline ByteU5BU5D_t3665519352* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t3665519352** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t3665519352* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2083211132, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2083211132, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2083211132, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T2083211132_H
#ifndef OBJECTSECURITY_T1984121323_H
#define OBJECTSECURITY_T1984121323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AccessControl.ObjectSecurity
struct  ObjectSecurity_t1984121323  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTSECURITY_T1984121323_H
#ifndef FORMATTERCONVERTER_T2694330061_H
#define FORMATTERCONVERTER_T2694330061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterConverter
struct  FormatterConverter_t2694330061  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERCONVERTER_T2694330061_H
#ifndef FORMATTERSERVICES_T179573829_H
#define FORMATTERSERVICES_T179573829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterServices
struct  FormatterServices_t179573829  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERSERVICES_T179573829_H
#ifndef OBJECTIDGENERATOR_T462709064_H
#define OBJECTIDGENERATOR_T462709064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectIDGenerator
struct  ObjectIDGenerator_t462709064  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectIDGenerator::table
	Hashtable_t1289739904 * ___table_0;
	// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::current
	int64_t ___current_1;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t462709064, ___table_0)); }
	inline Hashtable_t1289739904 * get_table_0() const { return ___table_0; }
	inline Hashtable_t1289739904 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Hashtable_t1289739904 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t462709064, ___current_1)); }
	inline int64_t get_current_1() const { return ___current_1; }
	inline int64_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int64_t value)
	{
		___current_1 = value;
	}
};

struct ObjectIDGenerator_t462709064_StaticFields
{
public:
	// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer System.Runtime.Serialization.ObjectIDGenerator::comparer
	InstanceComparer_t751685324 * ___comparer_2;

public:
	inline static int32_t get_offset_of_comparer_2() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t462709064_StaticFields, ___comparer_2)); }
	inline InstanceComparer_t751685324 * get_comparer_2() const { return ___comparer_2; }
	inline InstanceComparer_t751685324 ** get_address_of_comparer_2() { return &___comparer_2; }
	inline void set_comparer_2(InstanceComparer_t751685324 * value)
	{
		___comparer_2 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTIDGENERATOR_T462709064_H
#ifndef INSTANCECOMPARER_T751685324_H
#define INSTANCECOMPARER_T751685324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
struct  InstanceComparer_t751685324  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCECOMPARER_T751685324_H
#ifndef BASEFIXUPRECORD_T4059959167_H
#define BASEFIXUPRECORD_T4059959167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.BaseFixupRecord
struct  BaseFixupRecord_t4059959167  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectToBeFixed
	ObjectRecord_t3283404462 * ___ObjectToBeFixed_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectRequired
	ObjectRecord_t3283404462 * ___ObjectRequired_1;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameContainer
	BaseFixupRecord_t4059959167 * ___NextSameContainer_2;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameRequired
	BaseFixupRecord_t4059959167 * ___NextSameRequired_3;

public:
	inline static int32_t get_offset_of_ObjectToBeFixed_0() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t4059959167, ___ObjectToBeFixed_0)); }
	inline ObjectRecord_t3283404462 * get_ObjectToBeFixed_0() const { return ___ObjectToBeFixed_0; }
	inline ObjectRecord_t3283404462 ** get_address_of_ObjectToBeFixed_0() { return &___ObjectToBeFixed_0; }
	inline void set_ObjectToBeFixed_0(ObjectRecord_t3283404462 * value)
	{
		___ObjectToBeFixed_0 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectToBeFixed_0), value);
	}

	inline static int32_t get_offset_of_ObjectRequired_1() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t4059959167, ___ObjectRequired_1)); }
	inline ObjectRecord_t3283404462 * get_ObjectRequired_1() const { return ___ObjectRequired_1; }
	inline ObjectRecord_t3283404462 ** get_address_of_ObjectRequired_1() { return &___ObjectRequired_1; }
	inline void set_ObjectRequired_1(ObjectRecord_t3283404462 * value)
	{
		___ObjectRequired_1 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectRequired_1), value);
	}

	inline static int32_t get_offset_of_NextSameContainer_2() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t4059959167, ___NextSameContainer_2)); }
	inline BaseFixupRecord_t4059959167 * get_NextSameContainer_2() const { return ___NextSameContainer_2; }
	inline BaseFixupRecord_t4059959167 ** get_address_of_NextSameContainer_2() { return &___NextSameContainer_2; }
	inline void set_NextSameContainer_2(BaseFixupRecord_t4059959167 * value)
	{
		___NextSameContainer_2 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameContainer_2), value);
	}

	inline static int32_t get_offset_of_NextSameRequired_3() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t4059959167, ___NextSameRequired_3)); }
	inline BaseFixupRecord_t4059959167 * get_NextSameRequired_3() const { return ___NextSameRequired_3; }
	inline BaseFixupRecord_t4059959167 ** get_address_of_NextSameRequired_3() { return &___NextSameRequired_3; }
	inline void set_NextSameRequired_3(BaseFixupRecord_t4059959167 * value)
	{
		___NextSameRequired_3 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameRequired_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEFIXUPRECORD_T4059959167_H
#ifndef CSPKEYCONTAINERINFO_T2788651082_H
#define CSPKEYCONTAINERINFO_T2788651082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspKeyContainerInfo
struct  CspKeyContainerInfo_t2788651082  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspParameters System.Security.Cryptography.CspKeyContainerInfo::_params
	CspParameters_t906534246 * ____params_0;
	// System.Boolean System.Security.Cryptography.CspKeyContainerInfo::_random
	bool ____random_1;

public:
	inline static int32_t get_offset_of__params_0() { return static_cast<int32_t>(offsetof(CspKeyContainerInfo_t2788651082, ____params_0)); }
	inline CspParameters_t906534246 * get__params_0() const { return ____params_0; }
	inline CspParameters_t906534246 ** get_address_of__params_0() { return &____params_0; }
	inline void set__params_0(CspParameters_t906534246 * value)
	{
		____params_0 = value;
		Il2CppCodeGenWriteBarrier((&____params_0), value);
	}

	inline static int32_t get_offset_of__random_1() { return static_cast<int32_t>(offsetof(CspKeyContainerInfo_t2788651082, ____random_1)); }
	inline bool get__random_1() const { return ____random_1; }
	inline bool* get_address_of__random_1() { return &____random_1; }
	inline void set__random_1(bool value)
	{
		____random_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPKEYCONTAINERINFO_T2788651082_H
#ifndef CRYPTOHANDLER_T4041403744_H
#define CRYPTOHANDLER_T4041403744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig/CryptoHandler
struct  CryptoHandler_t4041403744  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig/CryptoHandler::algorithms
	Hashtable_t1289739904 * ___algorithms_0;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig/CryptoHandler::oid
	Hashtable_t1289739904 * ___oid_1;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig/CryptoHandler::names
	Hashtable_t1289739904 * ___names_2;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig/CryptoHandler::classnames
	Hashtable_t1289739904 * ___classnames_3;
	// System.Int32 System.Security.Cryptography.CryptoConfig/CryptoHandler::level
	int32_t ___level_4;

public:
	inline static int32_t get_offset_of_algorithms_0() { return static_cast<int32_t>(offsetof(CryptoHandler_t4041403744, ___algorithms_0)); }
	inline Hashtable_t1289739904 * get_algorithms_0() const { return ___algorithms_0; }
	inline Hashtable_t1289739904 ** get_address_of_algorithms_0() { return &___algorithms_0; }
	inline void set_algorithms_0(Hashtable_t1289739904 * value)
	{
		___algorithms_0 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_0), value);
	}

	inline static int32_t get_offset_of_oid_1() { return static_cast<int32_t>(offsetof(CryptoHandler_t4041403744, ___oid_1)); }
	inline Hashtable_t1289739904 * get_oid_1() const { return ___oid_1; }
	inline Hashtable_t1289739904 ** get_address_of_oid_1() { return &___oid_1; }
	inline void set_oid_1(Hashtable_t1289739904 * value)
	{
		___oid_1 = value;
		Il2CppCodeGenWriteBarrier((&___oid_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(CryptoHandler_t4041403744, ___names_2)); }
	inline Hashtable_t1289739904 * get_names_2() const { return ___names_2; }
	inline Hashtable_t1289739904 ** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(Hashtable_t1289739904 * value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_classnames_3() { return static_cast<int32_t>(offsetof(CryptoHandler_t4041403744, ___classnames_3)); }
	inline Hashtable_t1289739904 * get_classnames_3() const { return ___classnames_3; }
	inline Hashtable_t1289739904 ** get_address_of_classnames_3() { return &___classnames_3; }
	inline void set_classnames_3(Hashtable_t1289739904 * value)
	{
		___classnames_3 = value;
		Il2CppCodeGenWriteBarrier((&___classnames_3), value);
	}

	inline static int32_t get_offset_of_level_4() { return static_cast<int32_t>(offsetof(CryptoHandler_t4041403744, ___level_4)); }
	inline int32_t get_level_4() const { return ___level_4; }
	inline int32_t* get_address_of_level_4() { return &___level_4; }
	inline void set_level_4(int32_t value)
	{
		___level_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOHANDLER_T4041403744_H
#ifndef CRYPTOCONFIG_T826182105_H
#define CRYPTOCONFIG_T826182105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t826182105  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t826182105_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_136;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t1289739904 * ___algorithms_137;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t1289739904 * ___oid_138;

public:
	inline static int32_t get_offset_of_lockObject_136() { return static_cast<int32_t>(offsetof(CryptoConfig_t826182105_StaticFields, ___lockObject_136)); }
	inline RuntimeObject * get_lockObject_136() const { return ___lockObject_136; }
	inline RuntimeObject ** get_address_of_lockObject_136() { return &___lockObject_136; }
	inline void set_lockObject_136(RuntimeObject * value)
	{
		___lockObject_136 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_136), value);
	}

	inline static int32_t get_offset_of_algorithms_137() { return static_cast<int32_t>(offsetof(CryptoConfig_t826182105_StaticFields, ___algorithms_137)); }
	inline Hashtable_t1289739904 * get_algorithms_137() const { return ___algorithms_137; }
	inline Hashtable_t1289739904 ** get_address_of_algorithms_137() { return &___algorithms_137; }
	inline void set_algorithms_137(Hashtable_t1289739904 * value)
	{
		___algorithms_137 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_137), value);
	}

	inline static int32_t get_offset_of_oid_138() { return static_cast<int32_t>(offsetof(CryptoConfig_t826182105_StaticFields, ___oid_138)); }
	inline Hashtable_t1289739904 * get_oid_138() const { return ___oid_138; }
	inline Hashtable_t1289739904 ** get_address_of_oid_138() { return &___oid_138; }
	inline void set_oid_138(Hashtable_t1289739904 * value)
	{
		___oid_138 = value;
		Il2CppCodeGenWriteBarrier((&___oid_138), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T826182105_H
#ifndef CRYPTOAPITRANSFORM_T3991408786_H
#define CRYPTOAPITRANSFORM_T3991408786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoAPITransform
struct  CryptoAPITransform_t3991408786  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.CryptoAPITransform::m_disposed
	bool ___m_disposed_0;

public:
	inline static int32_t get_offset_of_m_disposed_0() { return static_cast<int32_t>(offsetof(CryptoAPITransform_t3991408786, ___m_disposed_0)); }
	inline bool get_m_disposed_0() const { return ___m_disposed_0; }
	inline bool* get_address_of_m_disposed_0() { return &___m_disposed_0; }
	inline void set_m_disposed_0(bool value)
	{
		___m_disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOAPITRANSFORM_T3991408786_H
#ifndef BASE64CONSTANTS_T1545395411_H
#define BASE64CONSTANTS_T1545395411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Base64Constants
struct  Base64Constants_t1545395411  : public RuntimeObject
{
public:

public:
};

struct Base64Constants_t1545395411_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.Base64Constants::EncodeTable
	ByteU5BU5D_t3665519352* ___EncodeTable_0;
	// System.Byte[] System.Security.Cryptography.Base64Constants::DecodeTable
	ByteU5BU5D_t3665519352* ___DecodeTable_1;

public:
	inline static int32_t get_offset_of_EncodeTable_0() { return static_cast<int32_t>(offsetof(Base64Constants_t1545395411_StaticFields, ___EncodeTable_0)); }
	inline ByteU5BU5D_t3665519352* get_EncodeTable_0() const { return ___EncodeTable_0; }
	inline ByteU5BU5D_t3665519352** get_address_of_EncodeTable_0() { return &___EncodeTable_0; }
	inline void set_EncodeTable_0(ByteU5BU5D_t3665519352* value)
	{
		___EncodeTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___EncodeTable_0), value);
	}

	inline static int32_t get_offset_of_DecodeTable_1() { return static_cast<int32_t>(offsetof(Base64Constants_t1545395411_StaticFields, ___DecodeTable_1)); }
	inline ByteU5BU5D_t3665519352* get_DecodeTable_1() const { return ___DecodeTable_1; }
	inline ByteU5BU5D_t3665519352** get_address_of_DecodeTable_1() { return &___DecodeTable_1; }
	inline void set_DecodeTable_1(ByteU5BU5D_t3665519352* value)
	{
		___DecodeTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___DecodeTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE64CONSTANTS_T1545395411_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T3219285991_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T3219285991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t3219285991  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T3219285991_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T2384847186_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T2384847186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t2384847186  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T2384847186_H
#ifndef SERIALIZATIONBINDER_T3692103884_H
#define SERIALIZATIONBINDER_T3692103884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationBinder
struct  SerializationBinder_t3692103884  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONBINDER_T3692103884_H
#ifndef SERIALIZATIONCALLBACKS_T149790674_H
#define SERIALIZATIONCALLBACKS_T149790674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks
struct  SerializationCallbacks_t149790674  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializingList
	ArrayList_t4142489098 * ___onSerializingList_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializedList
	ArrayList_t4142489098 * ___onSerializedList_1;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializingList
	ArrayList_t4142489098 * ___onDeserializingList_2;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializedList
	ArrayList_t4142489098 * ___onDeserializedList_3;

public:
	inline static int32_t get_offset_of_onSerializingList_0() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t149790674, ___onSerializingList_0)); }
	inline ArrayList_t4142489098 * get_onSerializingList_0() const { return ___onSerializingList_0; }
	inline ArrayList_t4142489098 ** get_address_of_onSerializingList_0() { return &___onSerializingList_0; }
	inline void set_onSerializingList_0(ArrayList_t4142489098 * value)
	{
		___onSerializingList_0 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializingList_0), value);
	}

	inline static int32_t get_offset_of_onSerializedList_1() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t149790674, ___onSerializedList_1)); }
	inline ArrayList_t4142489098 * get_onSerializedList_1() const { return ___onSerializedList_1; }
	inline ArrayList_t4142489098 ** get_address_of_onSerializedList_1() { return &___onSerializedList_1; }
	inline void set_onSerializedList_1(ArrayList_t4142489098 * value)
	{
		___onSerializedList_1 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializedList_1), value);
	}

	inline static int32_t get_offset_of_onDeserializingList_2() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t149790674, ___onDeserializingList_2)); }
	inline ArrayList_t4142489098 * get_onDeserializingList_2() const { return ___onDeserializingList_2; }
	inline ArrayList_t4142489098 ** get_address_of_onDeserializingList_2() { return &___onDeserializingList_2; }
	inline void set_onDeserializingList_2(ArrayList_t4142489098 * value)
	{
		___onDeserializingList_2 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializingList_2), value);
	}

	inline static int32_t get_offset_of_onDeserializedList_3() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t149790674, ___onDeserializedList_3)); }
	inline ArrayList_t4142489098 * get_onDeserializedList_3() const { return ___onDeserializedList_3; }
	inline ArrayList_t4142489098 ** get_address_of_onDeserializedList_3() { return &___onDeserializedList_3; }
	inline void set_onDeserializedList_3(ArrayList_t4142489098 * value)
	{
		___onDeserializedList_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializedList_3), value);
	}
};

struct SerializationCallbacks_t149790674_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationCallbacks::cache
	Hashtable_t1289739904 * ___cache_4;
	// System.Object System.Runtime.Serialization.SerializationCallbacks::cache_lock
	RuntimeObject * ___cache_lock_5;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t149790674_StaticFields, ___cache_4)); }
	inline Hashtable_t1289739904 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t1289739904 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t1289739904 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}

	inline static int32_t get_offset_of_cache_lock_5() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t149790674_StaticFields, ___cache_lock_5)); }
	inline RuntimeObject * get_cache_lock_5() const { return ___cache_lock_5; }
	inline RuntimeObject ** get_address_of_cache_lock_5() { return &___cache_lock_5; }
	inline void set_cache_lock_5(RuntimeObject * value)
	{
		___cache_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONCALLBACKS_T149790674_H
#ifndef ASYMMETRICKEYEXCHANGEDEFORMATTER_T2862424192_H
#define ASYMMETRICKEYEXCHANGEDEFORMATTER_T2862424192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
struct  AsymmetricKeyExchangeDeformatter_t2862424192  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEDEFORMATTER_T2862424192_H
#ifndef ASYMMETRICALGORITHM_T3859290826_H
#define ASYMMETRICALGORITHM_T3859290826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t3859290826  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2776148640* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3859290826, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3859290826, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t2776148640* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t2776148640** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t2776148640* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T3859290826_H
#ifndef X509CERTIFICATE_T2146845066_H
#define X509CERTIFICATE_T2146845066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t2146845066  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t2763954240 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t3665519352* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t2146845066, ___x509_0)); }
	inline X509Certificate_t2763954240 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t2763954240 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t2763954240 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t2146845066, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t2146845066, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t3665519352* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t3665519352** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t3665519352* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t2146845066, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t2146845066, ___subject_name_4)); }
	inline String_t* get_subject_name_4() const { return ___subject_name_4; }
	inline String_t** get_address_of_subject_name_4() { return &___subject_name_4; }
	inline void set_subject_name_4(String_t* value)
	{
		___subject_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T2146845066_H
#ifndef SERIALIZATIONINFO_T3327250702_H
#define SERIALIZATIONINFO_T3327250702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t3327250702  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t1289739904 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t4142489098 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t3327250702, ___serialized_0)); }
	inline Hashtable_t1289739904 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t1289739904 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t1289739904 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t3327250702, ___values_1)); }
	inline ArrayList_t4142489098 * get_values_1() const { return ___values_1; }
	inline ArrayList_t4142489098 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t4142489098 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t3327250702, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t3327250702, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t3327250702, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T3327250702_H
#ifndef SERIALIZATIONINFOENUMERATOR_T641498216_H
#define SERIALIZATIONINFOENUMERATOR_T641498216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfoEnumerator
struct  SerializationInfoEnumerator_t641498216  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Runtime.Serialization.SerializationInfoEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t641498216, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFOENUMERATOR_T641498216_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T2391191991_H
#define ASYMMETRICSIGNATUREFORMATTER_T2391191991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t2391191991  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T2391191991_H
#ifndef DERIVEBYTES_T3247558017_H
#define DERIVEBYTES_T3247558017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DeriveBytes
struct  DeriveBytes_t3247558017  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T3247558017_H
#ifndef U3CREGISTEROBJECTU3EC__ANONSTOREY3_T2293998896_H
#define U3CREGISTEROBJECTU3EC__ANONSTOREY3_T2293998896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3
struct  U3CRegisterObjectU3Ec__AnonStorey3_t2293998896  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3::sc
	SerializationCallbacks_t149790674 * ___sc_0;
	// System.Object System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3::obj
	RuntimeObject * ___obj_1;

public:
	inline static int32_t get_offset_of_sc_0() { return static_cast<int32_t>(offsetof(U3CRegisterObjectU3Ec__AnonStorey3_t2293998896, ___sc_0)); }
	inline SerializationCallbacks_t149790674 * get_sc_0() const { return ___sc_0; }
	inline SerializationCallbacks_t149790674 ** get_address_of_sc_0() { return &___sc_0; }
	inline void set_sc_0(SerializationCallbacks_t149790674 * value)
	{
		___sc_0 = value;
		Il2CppCodeGenWriteBarrier((&___sc_0), value);
	}

	inline static int32_t get_offset_of_obj_1() { return static_cast<int32_t>(offsetof(U3CRegisterObjectU3Ec__AnonStorey3_t2293998896, ___obj_1)); }
	inline RuntimeObject * get_obj_1() const { return ___obj_1; }
	inline RuntimeObject ** get_address_of_obj_1() { return &___obj_1; }
	inline void set_obj_1(RuntimeObject * value)
	{
		___obj_1 = value;
		Il2CppCodeGenWriteBarrier((&___obj_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREGISTEROBJECTU3EC__ANONSTOREY3_T2293998896_H
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
#ifndef BINARYCOMMON_T2625320136_H
#define BINARYCOMMON_T2625320136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct  BinaryCommon_t2625320136  : public RuntimeObject
{
public:

public:
};

struct BinaryCommon_t2625320136_StaticFields
{
public:
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::BinaryHeader
	ByteU5BU5D_t3665519352* ___BinaryHeader_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodesToType
	TypeU5BU5D_t3894805094* ____typeCodesToType_1;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodeMap
	ByteU5BU5D_t3665519352* ____typeCodeMap_2;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::UseReflectionSerialization
	bool ___UseReflectionSerialization_3;

public:
	inline static int32_t get_offset_of_BinaryHeader_0() { return static_cast<int32_t>(offsetof(BinaryCommon_t2625320136_StaticFields, ___BinaryHeader_0)); }
	inline ByteU5BU5D_t3665519352* get_BinaryHeader_0() const { return ___BinaryHeader_0; }
	inline ByteU5BU5D_t3665519352** get_address_of_BinaryHeader_0() { return &___BinaryHeader_0; }
	inline void set_BinaryHeader_0(ByteU5BU5D_t3665519352* value)
	{
		___BinaryHeader_0 = value;
		Il2CppCodeGenWriteBarrier((&___BinaryHeader_0), value);
	}

	inline static int32_t get_offset_of__typeCodesToType_1() { return static_cast<int32_t>(offsetof(BinaryCommon_t2625320136_StaticFields, ____typeCodesToType_1)); }
	inline TypeU5BU5D_t3894805094* get__typeCodesToType_1() const { return ____typeCodesToType_1; }
	inline TypeU5BU5D_t3894805094** get_address_of__typeCodesToType_1() { return &____typeCodesToType_1; }
	inline void set__typeCodesToType_1(TypeU5BU5D_t3894805094* value)
	{
		____typeCodesToType_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodesToType_1), value);
	}

	inline static int32_t get_offset_of__typeCodeMap_2() { return static_cast<int32_t>(offsetof(BinaryCommon_t2625320136_StaticFields, ____typeCodeMap_2)); }
	inline ByteU5BU5D_t3665519352* get__typeCodeMap_2() const { return ____typeCodeMap_2; }
	inline ByteU5BU5D_t3665519352** get_address_of__typeCodeMap_2() { return &____typeCodeMap_2; }
	inline void set__typeCodeMap_2(ByteU5BU5D_t3665519352* value)
	{
		____typeCodeMap_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodeMap_2), value);
	}

	inline static int32_t get_offset_of_UseReflectionSerialization_3() { return static_cast<int32_t>(offsetof(BinaryCommon_t2625320136_StaticFields, ___UseReflectionSerialization_3)); }
	inline bool get_UseReflectionSerialization_3() const { return ___UseReflectionSerialization_3; }
	inline bool* get_address_of_UseReflectionSerialization_3() { return &___UseReflectionSerialization_3; }
	inline void set_UseReflectionSerialization_3(bool value)
	{
		___UseReflectionSerialization_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYCOMMON_T2625320136_H
#ifndef METADATAREFERENCE_T1719965873_H
#define METADATAREFERENCE_T1719965873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference
struct  MetadataReference_t1719965873  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.Binary.TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference::Metadata
	TypeMetadata_t1730811349 * ___Metadata_0;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference::ObjectID
	int64_t ___ObjectID_1;

public:
	inline static int32_t get_offset_of_Metadata_0() { return static_cast<int32_t>(offsetof(MetadataReference_t1719965873, ___Metadata_0)); }
	inline TypeMetadata_t1730811349 * get_Metadata_0() const { return ___Metadata_0; }
	inline TypeMetadata_t1730811349 ** get_address_of_Metadata_0() { return &___Metadata_0; }
	inline void set_Metadata_0(TypeMetadata_t1730811349 * value)
	{
		___Metadata_0 = value;
		Il2CppCodeGenWriteBarrier((&___Metadata_0), value);
	}

	inline static int32_t get_offset_of_ObjectID_1() { return static_cast<int32_t>(offsetof(MetadataReference_t1719965873, ___ObjectID_1)); }
	inline int64_t get_ObjectID_1() const { return ___ObjectID_1; }
	inline int64_t* get_address_of_ObjectID_1() { return &___ObjectID_1; }
	inline void set_ObjectID_1(int64_t value)
	{
		___ObjectID_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METADATAREFERENCE_T1719965873_H
#ifndef CODEGENERATOR_T1456266155_H
#define CODEGENERATOR_T1456266155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.CodeGenerator
struct  CodeGenerator_t1456266155  : public RuntimeObject
{
public:

public:
};

struct CodeGenerator_t1456266155_StaticFields
{
public:
	// System.Object System.Runtime.Serialization.Formatters.Binary.CodeGenerator::monitor
	RuntimeObject * ___monitor_0;
	// System.Reflection.Emit.ModuleBuilder System.Runtime.Serialization.Formatters.Binary.CodeGenerator::_module
	ModuleBuilder_t2807122887 * ____module_1;

public:
	inline static int32_t get_offset_of_monitor_0() { return static_cast<int32_t>(offsetof(CodeGenerator_t1456266155_StaticFields, ___monitor_0)); }
	inline RuntimeObject * get_monitor_0() const { return ___monitor_0; }
	inline RuntimeObject ** get_address_of_monitor_0() { return &___monitor_0; }
	inline void set_monitor_0(RuntimeObject * value)
	{
		___monitor_0 = value;
		Il2CppCodeGenWriteBarrier((&___monitor_0), value);
	}

	inline static int32_t get_offset_of__module_1() { return static_cast<int32_t>(offsetof(CodeGenerator_t1456266155_StaticFields, ____module_1)); }
	inline ModuleBuilder_t2807122887 * get__module_1() const { return ____module_1; }
	inline ModuleBuilder_t2807122887 ** get_address_of__module_1() { return &____module_1; }
	inline void set__module_1(ModuleBuilder_t2807122887 * value)
	{
		____module_1 = value;
		Il2CppCodeGenWriteBarrier((&____module_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGENERATOR_T1456266155_H
#ifndef MESSAGEFORMATTER_T337188578_H
#define MESSAGEFORMATTER_T337188578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct  MessageFormatter_t337188578  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEFORMATTER_T337188578_H
#ifndef IDENTITY_T371763287_H
#define IDENTITY_T371763287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Identity
struct  Identity_t371763287  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Identity::_objectUri
	String_t* ____objectUri_0;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_channelSink
	RuntimeObject* ____channelSink_1;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_envoySink
	RuntimeObject* ____envoySink_2;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_clientDynamicProperties
	DynamicPropertyCollection_t4226997744 * ____clientDynamicProperties_3;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_serverDynamicProperties
	DynamicPropertyCollection_t4226997744 * ____serverDynamicProperties_4;
	// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::_objRef
	ObjRef_t1469683107 * ____objRef_5;
	// System.Boolean System.Runtime.Remoting.Identity::_disposed
	bool ____disposed_6;

public:
	inline static int32_t get_offset_of__objectUri_0() { return static_cast<int32_t>(offsetof(Identity_t371763287, ____objectUri_0)); }
	inline String_t* get__objectUri_0() const { return ____objectUri_0; }
	inline String_t** get_address_of__objectUri_0() { return &____objectUri_0; }
	inline void set__objectUri_0(String_t* value)
	{
		____objectUri_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectUri_0), value);
	}

	inline static int32_t get_offset_of__channelSink_1() { return static_cast<int32_t>(offsetof(Identity_t371763287, ____channelSink_1)); }
	inline RuntimeObject* get__channelSink_1() const { return ____channelSink_1; }
	inline RuntimeObject** get_address_of__channelSink_1() { return &____channelSink_1; }
	inline void set__channelSink_1(RuntimeObject* value)
	{
		____channelSink_1 = value;
		Il2CppCodeGenWriteBarrier((&____channelSink_1), value);
	}

	inline static int32_t get_offset_of__envoySink_2() { return static_cast<int32_t>(offsetof(Identity_t371763287, ____envoySink_2)); }
	inline RuntimeObject* get__envoySink_2() const { return ____envoySink_2; }
	inline RuntimeObject** get_address_of__envoySink_2() { return &____envoySink_2; }
	inline void set__envoySink_2(RuntimeObject* value)
	{
		____envoySink_2 = value;
		Il2CppCodeGenWriteBarrier((&____envoySink_2), value);
	}

	inline static int32_t get_offset_of__clientDynamicProperties_3() { return static_cast<int32_t>(offsetof(Identity_t371763287, ____clientDynamicProperties_3)); }
	inline DynamicPropertyCollection_t4226997744 * get__clientDynamicProperties_3() const { return ____clientDynamicProperties_3; }
	inline DynamicPropertyCollection_t4226997744 ** get_address_of__clientDynamicProperties_3() { return &____clientDynamicProperties_3; }
	inline void set__clientDynamicProperties_3(DynamicPropertyCollection_t4226997744 * value)
	{
		____clientDynamicProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&____clientDynamicProperties_3), value);
	}

	inline static int32_t get_offset_of__serverDynamicProperties_4() { return static_cast<int32_t>(offsetof(Identity_t371763287, ____serverDynamicProperties_4)); }
	inline DynamicPropertyCollection_t4226997744 * get__serverDynamicProperties_4() const { return ____serverDynamicProperties_4; }
	inline DynamicPropertyCollection_t4226997744 ** get_address_of__serverDynamicProperties_4() { return &____serverDynamicProperties_4; }
	inline void set__serverDynamicProperties_4(DynamicPropertyCollection_t4226997744 * value)
	{
		____serverDynamicProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&____serverDynamicProperties_4), value);
	}

	inline static int32_t get_offset_of__objRef_5() { return static_cast<int32_t>(offsetof(Identity_t371763287, ____objRef_5)); }
	inline ObjRef_t1469683107 * get__objRef_5() const { return ____objRef_5; }
	inline ObjRef_t1469683107 ** get_address_of__objRef_5() { return &____objRef_5; }
	inline void set__objRef_5(ObjRef_t1469683107 * value)
	{
		____objRef_5 = value;
		Il2CppCodeGenWriteBarrier((&____objRef_5), value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(Identity_t371763287, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDENTITY_T371763287_H
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
#ifndef STREAM_T1852591913_H
#define STREAM_T1852591913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1852591913  : public RuntimeObject
{
public:

public:
};

struct Stream_t1852591913_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1852591913 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1852591913_StaticFields, ___Null_0)); }
	inline Stream_t1852591913 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1852591913 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1852591913 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1852591913_H
#ifndef TYPEINFO_T2921182686_H
#define TYPEINFO_T2921182686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeInfo
struct  TypeInfo_t2921182686  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeInfo::serverType
	String_t* ___serverType_0;
	// System.String[] System.Runtime.Remoting.TypeInfo::serverHierarchy
	StringU5BU5D_t1443727135* ___serverHierarchy_1;
	// System.String[] System.Runtime.Remoting.TypeInfo::interfacesImplemented
	StringU5BU5D_t1443727135* ___interfacesImplemented_2;

public:
	inline static int32_t get_offset_of_serverType_0() { return static_cast<int32_t>(offsetof(TypeInfo_t2921182686, ___serverType_0)); }
	inline String_t* get_serverType_0() const { return ___serverType_0; }
	inline String_t** get_address_of_serverType_0() { return &___serverType_0; }
	inline void set_serverType_0(String_t* value)
	{
		___serverType_0 = value;
		Il2CppCodeGenWriteBarrier((&___serverType_0), value);
	}

	inline static int32_t get_offset_of_serverHierarchy_1() { return static_cast<int32_t>(offsetof(TypeInfo_t2921182686, ___serverHierarchy_1)); }
	inline StringU5BU5D_t1443727135* get_serverHierarchy_1() const { return ___serverHierarchy_1; }
	inline StringU5BU5D_t1443727135** get_address_of_serverHierarchy_1() { return &___serverHierarchy_1; }
	inline void set_serverHierarchy_1(StringU5BU5D_t1443727135* value)
	{
		___serverHierarchy_1 = value;
		Il2CppCodeGenWriteBarrier((&___serverHierarchy_1), value);
	}

	inline static int32_t get_offset_of_interfacesImplemented_2() { return static_cast<int32_t>(offsetof(TypeInfo_t2921182686, ___interfacesImplemented_2)); }
	inline StringU5BU5D_t1443727135* get_interfacesImplemented_2() const { return ___interfacesImplemented_2; }
	inline StringU5BU5D_t1443727135** get_address_of_interfacesImplemented_2() { return &___interfacesImplemented_2; }
	inline void set_interfacesImplemented_2(StringU5BU5D_t1443727135* value)
	{
		___interfacesImplemented_2 = value;
		Il2CppCodeGenWriteBarrier((&___interfacesImplemented_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T2921182686_H
#ifndef TYPEMETADATA_T2855572239_H
#define TYPEMETADATA_T2855572239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct  TypeMetadata_t2855572239  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::Type
	Type_t * ___Type_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberTypes
	TypeU5BU5D_t3894805094* ___MemberTypes_1;
	// System.String[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberNames
	StringU5BU5D_t1443727135* ___MemberNames_2;
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberInfos
	MemberInfoU5BU5D_t503668026* ___MemberInfos_3;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::FieldCount
	int32_t ___FieldCount_4;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::NeedsSerializationInfo
	bool ___NeedsSerializationInfo_5;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(TypeMetadata_t2855572239, ___Type_0)); }
	inline Type_t * get_Type_0() const { return ___Type_0; }
	inline Type_t ** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(Type_t * value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((&___Type_0), value);
	}

	inline static int32_t get_offset_of_MemberTypes_1() { return static_cast<int32_t>(offsetof(TypeMetadata_t2855572239, ___MemberTypes_1)); }
	inline TypeU5BU5D_t3894805094* get_MemberTypes_1() const { return ___MemberTypes_1; }
	inline TypeU5BU5D_t3894805094** get_address_of_MemberTypes_1() { return &___MemberTypes_1; }
	inline void set_MemberTypes_1(TypeU5BU5D_t3894805094* value)
	{
		___MemberTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___MemberTypes_1), value);
	}

	inline static int32_t get_offset_of_MemberNames_2() { return static_cast<int32_t>(offsetof(TypeMetadata_t2855572239, ___MemberNames_2)); }
	inline StringU5BU5D_t1443727135* get_MemberNames_2() const { return ___MemberNames_2; }
	inline StringU5BU5D_t1443727135** get_address_of_MemberNames_2() { return &___MemberNames_2; }
	inline void set_MemberNames_2(StringU5BU5D_t1443727135* value)
	{
		___MemberNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberNames_2), value);
	}

	inline static int32_t get_offset_of_MemberInfos_3() { return static_cast<int32_t>(offsetof(TypeMetadata_t2855572239, ___MemberInfos_3)); }
	inline MemberInfoU5BU5D_t503668026* get_MemberInfos_3() const { return ___MemberInfos_3; }
	inline MemberInfoU5BU5D_t503668026** get_address_of_MemberInfos_3() { return &___MemberInfos_3; }
	inline void set_MemberInfos_3(MemberInfoU5BU5D_t503668026* value)
	{
		___MemberInfos_3 = value;
		Il2CppCodeGenWriteBarrier((&___MemberInfos_3), value);
	}

	inline static int32_t get_offset_of_FieldCount_4() { return static_cast<int32_t>(offsetof(TypeMetadata_t2855572239, ___FieldCount_4)); }
	inline int32_t get_FieldCount_4() const { return ___FieldCount_4; }
	inline int32_t* get_address_of_FieldCount_4() { return &___FieldCount_4; }
	inline void set_FieldCount_4(int32_t value)
	{
		___FieldCount_4 = value;
	}

	inline static int32_t get_offset_of_NeedsSerializationInfo_5() { return static_cast<int32_t>(offsetof(TypeMetadata_t2855572239, ___NeedsSerializationInfo_5)); }
	inline bool get_NeedsSerializationInfo_5() const { return ___NeedsSerializationInfo_5; }
	inline bool* get_address_of_NeedsSerializationInfo_5() { return &___NeedsSerializationInfo_5; }
	inline void set_NeedsSerializationInfo_5(bool value)
	{
		___NeedsSerializationInfo_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEMETADATA_T2855572239_H
#ifndef ARRAYNULLFILLER_T2281921651_H
#define ARRAYNULLFILLER_T2281921651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
struct  ArrayNullFiller_t2281921651  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller::NullCount
	int32_t ___NullCount_0;

public:
	inline static int32_t get_offset_of_NullCount_0() { return static_cast<int32_t>(offsetof(ArrayNullFiller_t2281921651, ___NullCount_0)); }
	inline int32_t get_NullCount_0() const { return ___NullCount_0; }
	inline int32_t* get_address_of_NullCount_0() { return &___NullCount_0; }
	inline void set_NullCount_0(int32_t value)
	{
		___NullCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYNULLFILLER_T2281921651_H
#ifndef TYPEMETADATA_T1730811349_H
#define TYPEMETADATA_T1730811349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct  TypeMetadata_t1730811349  : public RuntimeObject
{
public:
	// System.String System.Runtime.Serialization.Formatters.Binary.TypeMetadata::TypeAssemblyName
	String_t* ___TypeAssemblyName_0;
	// System.String System.Runtime.Serialization.Formatters.Binary.TypeMetadata::InstanceTypeName
	String_t* ___InstanceTypeName_1;

public:
	inline static int32_t get_offset_of_TypeAssemblyName_0() { return static_cast<int32_t>(offsetof(TypeMetadata_t1730811349, ___TypeAssemblyName_0)); }
	inline String_t* get_TypeAssemblyName_0() const { return ___TypeAssemblyName_0; }
	inline String_t** get_address_of_TypeAssemblyName_0() { return &___TypeAssemblyName_0; }
	inline void set_TypeAssemblyName_0(String_t* value)
	{
		___TypeAssemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___TypeAssemblyName_0), value);
	}

	inline static int32_t get_offset_of_InstanceTypeName_1() { return static_cast<int32_t>(offsetof(TypeMetadata_t1730811349, ___InstanceTypeName_1)); }
	inline String_t* get_InstanceTypeName_1() const { return ___InstanceTypeName_1; }
	inline String_t** get_address_of_InstanceTypeName_1() { return &___InstanceTypeName_1; }
	inline void set_InstanceTypeName_1(String_t* value)
	{
		___InstanceTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceTypeName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEMETADATA_T1730811349_H
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
#ifndef TYPEINFO_T481279527_H
#define TYPEINFO_T481279527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SoapServices/TypeInfo
struct  TypeInfo_t481279527  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Attributes
	Hashtable_t1289739904 * ___Attributes_0;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Elements
	Hashtable_t1289739904 * ___Elements_1;

public:
	inline static int32_t get_offset_of_Attributes_0() { return static_cast<int32_t>(offsetof(TypeInfo_t481279527, ___Attributes_0)); }
	inline Hashtable_t1289739904 * get_Attributes_0() const { return ___Attributes_0; }
	inline Hashtable_t1289739904 ** get_address_of_Attributes_0() { return &___Attributes_0; }
	inline void set_Attributes_0(Hashtable_t1289739904 * value)
	{
		___Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Attributes_0), value);
	}

	inline static int32_t get_offset_of_Elements_1() { return static_cast<int32_t>(offsetof(TypeInfo_t481279527, ___Elements_1)); }
	inline Hashtable_t1289739904 * get_Elements_1() const { return ___Elements_1; }
	inline Hashtable_t1289739904 ** get_address_of_Elements_1() { return &___Elements_1; }
	inline void set_Elements_1(Hashtable_t1289739904 * value)
	{
		___Elements_1 = value;
		Il2CppCodeGenWriteBarrier((&___Elements_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T481279527_H
#ifndef SOAPSERVICES_T2030952849_H
#define SOAPSERVICES_T2030952849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SoapServices
struct  SoapServices_t2030952849  : public RuntimeObject
{
public:

public:
};

struct SoapServices_t2030952849_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_xmlTypes
	Hashtable_t1289739904 * ____xmlTypes_0;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_xmlElements
	Hashtable_t1289739904 * ____xmlElements_1;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_soapActions
	Hashtable_t1289739904 * ____soapActions_2;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_soapActionsMethods
	Hashtable_t1289739904 * ____soapActionsMethods_3;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_typeInfos
	Hashtable_t1289739904 * ____typeInfos_4;

public:
	inline static int32_t get_offset_of__xmlTypes_0() { return static_cast<int32_t>(offsetof(SoapServices_t2030952849_StaticFields, ____xmlTypes_0)); }
	inline Hashtable_t1289739904 * get__xmlTypes_0() const { return ____xmlTypes_0; }
	inline Hashtable_t1289739904 ** get_address_of__xmlTypes_0() { return &____xmlTypes_0; }
	inline void set__xmlTypes_0(Hashtable_t1289739904 * value)
	{
		____xmlTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypes_0), value);
	}

	inline static int32_t get_offset_of__xmlElements_1() { return static_cast<int32_t>(offsetof(SoapServices_t2030952849_StaticFields, ____xmlElements_1)); }
	inline Hashtable_t1289739904 * get__xmlElements_1() const { return ____xmlElements_1; }
	inline Hashtable_t1289739904 ** get_address_of__xmlElements_1() { return &____xmlElements_1; }
	inline void set__xmlElements_1(Hashtable_t1289739904 * value)
	{
		____xmlElements_1 = value;
		Il2CppCodeGenWriteBarrier((&____xmlElements_1), value);
	}

	inline static int32_t get_offset_of__soapActions_2() { return static_cast<int32_t>(offsetof(SoapServices_t2030952849_StaticFields, ____soapActions_2)); }
	inline Hashtable_t1289739904 * get__soapActions_2() const { return ____soapActions_2; }
	inline Hashtable_t1289739904 ** get_address_of__soapActions_2() { return &____soapActions_2; }
	inline void set__soapActions_2(Hashtable_t1289739904 * value)
	{
		____soapActions_2 = value;
		Il2CppCodeGenWriteBarrier((&____soapActions_2), value);
	}

	inline static int32_t get_offset_of__soapActionsMethods_3() { return static_cast<int32_t>(offsetof(SoapServices_t2030952849_StaticFields, ____soapActionsMethods_3)); }
	inline Hashtable_t1289739904 * get__soapActionsMethods_3() const { return ____soapActionsMethods_3; }
	inline Hashtable_t1289739904 ** get_address_of__soapActionsMethods_3() { return &____soapActionsMethods_3; }
	inline void set__soapActionsMethods_3(Hashtable_t1289739904 * value)
	{
		____soapActionsMethods_3 = value;
		Il2CppCodeGenWriteBarrier((&____soapActionsMethods_3), value);
	}

	inline static int32_t get_offset_of__typeInfos_4() { return static_cast<int32_t>(offsetof(SoapServices_t2030952849_StaticFields, ____typeInfos_4)); }
	inline Hashtable_t1289739904 * get__typeInfos_4() const { return ____typeInfos_4; }
	inline Hashtable_t1289739904 ** get_address_of__typeInfos_4() { return &____typeInfos_4; }
	inline void set__typeInfos_4(Hashtable_t1289739904 * value)
	{
		____typeInfos_4 = value;
		Il2CppCodeGenWriteBarrier((&____typeInfos_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPSERVICES_T2030952849_H
#ifndef TYPEENTRY_T1996212644_H
#define TYPEENTRY_T1996212644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeEntry
struct  TypeEntry_t1996212644  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeEntry::assembly_name
	String_t* ___assembly_name_0;
	// System.String System.Runtime.Remoting.TypeEntry::type_name
	String_t* ___type_name_1;

public:
	inline static int32_t get_offset_of_assembly_name_0() { return static_cast<int32_t>(offsetof(TypeEntry_t1996212644, ___assembly_name_0)); }
	inline String_t* get_assembly_name_0() const { return ___assembly_name_0; }
	inline String_t** get_address_of_assembly_name_0() { return &___assembly_name_0; }
	inline void set_assembly_name_0(String_t* value)
	{
		___assembly_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_name_0), value);
	}

	inline static int32_t get_offset_of_type_name_1() { return static_cast<int32_t>(offsetof(TypeEntry_t1996212644, ___type_name_1)); }
	inline String_t* get_type_name_1() const { return ___type_name_1; }
	inline String_t** get_address_of_type_name_1() { return &___type_name_1; }
	inline void set_type_name_1(String_t* value)
	{
		___type_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEENTRY_T1996212644_H
#ifndef SYMMETRICTRANSFORM_T3248341534_H
#define SYMMETRICTRANSFORM_T3248341534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3248341534  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t96761379 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t3665519352* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t3665519352* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t3665519352* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t3665519352* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t3281859074 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3248341534, ___algo_0)); }
	inline SymmetricAlgorithm_t96761379 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t96761379 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t96761379 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3248341534, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3248341534, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3248341534, ___temp_3)); }
	inline ByteU5BU5D_t3665519352* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t3665519352** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t3665519352* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3248341534, ___temp2_4)); }
	inline ByteU5BU5D_t3665519352* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t3665519352** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t3665519352* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3248341534, ___workBuff_5)); }
	inline ByteU5BU5D_t3665519352* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t3665519352** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t3665519352* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3248341534, ___workout_6)); }
	inline ByteU5BU5D_t3665519352* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t3665519352** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t3665519352* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3248341534, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3248341534, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3248341534, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3248341534, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3248341534, ____rng_11)); }
	inline RandomNumberGenerator_t3281859074 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t3281859074 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t3281859074 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3248341534_H
#ifndef KEYEDHASHALGORITHM_T1534753416_H
#define KEYEDHASHALGORITHM_T1534753416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t1534753416  : public HashAlgorithm_t2083211132
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t3665519352* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t1534753416, ___KeyValue_4)); }
	inline ByteU5BU5D_t3665519352* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t3665519352** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t3665519352* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T1534753416_H
#ifndef SERVERIDENTITY_T1227701145_H
#define SERVERIDENTITY_T1227701145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t1227701145  : public Identity_t371763287
{
public:
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t3101711328 * ____serverObject_8;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.ServerIdentity::_serverSink
	RuntimeObject* ____serverSink_9;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t1345383506 * ____context_10;
	// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::_lease
	Lease_t2457821850 * ____lease_11;

public:
	inline static int32_t get_offset_of__objectType_7() { return static_cast<int32_t>(offsetof(ServerIdentity_t1227701145, ____objectType_7)); }
	inline Type_t * get__objectType_7() const { return ____objectType_7; }
	inline Type_t ** get_address_of__objectType_7() { return &____objectType_7; }
	inline void set__objectType_7(Type_t * value)
	{
		____objectType_7 = value;
		Il2CppCodeGenWriteBarrier((&____objectType_7), value);
	}

	inline static int32_t get_offset_of__serverObject_8() { return static_cast<int32_t>(offsetof(ServerIdentity_t1227701145, ____serverObject_8)); }
	inline MarshalByRefObject_t3101711328 * get__serverObject_8() const { return ____serverObject_8; }
	inline MarshalByRefObject_t3101711328 ** get_address_of__serverObject_8() { return &____serverObject_8; }
	inline void set__serverObject_8(MarshalByRefObject_t3101711328 * value)
	{
		____serverObject_8 = value;
		Il2CppCodeGenWriteBarrier((&____serverObject_8), value);
	}

	inline static int32_t get_offset_of__serverSink_9() { return static_cast<int32_t>(offsetof(ServerIdentity_t1227701145, ____serverSink_9)); }
	inline RuntimeObject* get__serverSink_9() const { return ____serverSink_9; }
	inline RuntimeObject** get_address_of__serverSink_9() { return &____serverSink_9; }
	inline void set__serverSink_9(RuntimeObject* value)
	{
		____serverSink_9 = value;
		Il2CppCodeGenWriteBarrier((&____serverSink_9), value);
	}

	inline static int32_t get_offset_of__context_10() { return static_cast<int32_t>(offsetof(ServerIdentity_t1227701145, ____context_10)); }
	inline Context_t1345383506 * get__context_10() const { return ____context_10; }
	inline Context_t1345383506 ** get_address_of__context_10() { return &____context_10; }
	inline void set__context_10(Context_t1345383506 * value)
	{
		____context_10 = value;
		Il2CppCodeGenWriteBarrier((&____context_10), value);
	}

	inline static int32_t get_offset_of__lease_11() { return static_cast<int32_t>(offsetof(ServerIdentity_t1227701145, ____lease_11)); }
	inline Lease_t2457821850 * get__lease_11() const { return ____lease_11; }
	inline Lease_t2457821850 ** get_address_of__lease_11() { return &____lease_11; }
	inline void set__lease_11(Lease_t2457821850 * value)
	{
		____lease_11 = value;
		Il2CppCodeGenWriteBarrier((&____lease_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERIDENTITY_T1227701145_H
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
#ifndef DESTRANSFORM_T2153940516_H
#define DESTRANSFORM_T2153940516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t2153940516  : public SymmetricTransform_t3248341534
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t3665519352* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t3665519352* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t1905288051* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t2153940516, ___keySchedule_16)); }
	inline ByteU5BU5D_t3665519352* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t3665519352** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t3665519352* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier((&___keySchedule_16), value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t2153940516, ___byteBuff_17)); }
	inline ByteU5BU5D_t3665519352* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t3665519352** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t3665519352* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuff_17), value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t2153940516, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t1905288051* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t1905288051** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t1905288051* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier((&___dwordBuff_18), value);
	}
};

struct DESTransform_t2153940516_StaticFields
{
public:
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BIT_SIZE
	int32_t ___KEY_BIT_SIZE_12;
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BYTE_SIZE
	int32_t ___KEY_BYTE_SIZE_13;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BIT_SIZE
	int32_t ___BLOCK_BIT_SIZE_14;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BYTE_SIZE
	int32_t ___BLOCK_BYTE_SIZE_15;
	// System.UInt32[] System.Security.Cryptography.DESTransform::spBoxes
	UInt32U5BU5D_t1905288051* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t3665519352* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t3665519352* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t3665519352* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t1905288051* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t1905288051* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t2153940516_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t2153940516_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t2153940516_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t2153940516_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t2153940516_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t1905288051* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t1905288051** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t1905288051* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier((&___spBoxes_19), value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t2153940516_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t3665519352* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t3665519352** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t3665519352* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier((&___PC1_20), value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t2153940516_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t3665519352* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t3665519352** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t3665519352* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier((&___leftRotTotal_21), value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t2153940516_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t3665519352* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t3665519352** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t3665519352* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier((&___PC2_22), value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t2153940516_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t1905288051* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t1905288051** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t1905288051* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier((&___ipTab_23), value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t2153940516_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t1905288051* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t1905288051** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t1905288051* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier((&___fpTab_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTRANSFORM_T2153940516_H
#ifndef DSA_T1766017524_H
#define DSA_T1766017524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t1766017524  : public AsymmetricAlgorithm_t3859290826
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T1766017524_H
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
#ifndef DSAPARAMETERS_T2436233022_H
#define DSAPARAMETERS_T2436233022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t2436233022 
{
public:
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t3665519352* ___G_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t3665519352* ___J_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t3665519352* ___P_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t3665519352* ___Q_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t3665519352* ___Seed_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t3665519352* ___X_6;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t3665519352* ___Y_7;

public:
	inline static int32_t get_offset_of_Counter_0() { return static_cast<int32_t>(offsetof(DSAParameters_t2436233022, ___Counter_0)); }
	inline int32_t get_Counter_0() const { return ___Counter_0; }
	inline int32_t* get_address_of_Counter_0() { return &___Counter_0; }
	inline void set_Counter_0(int32_t value)
	{
		___Counter_0 = value;
	}

	inline static int32_t get_offset_of_G_1() { return static_cast<int32_t>(offsetof(DSAParameters_t2436233022, ___G_1)); }
	inline ByteU5BU5D_t3665519352* get_G_1() const { return ___G_1; }
	inline ByteU5BU5D_t3665519352** get_address_of_G_1() { return &___G_1; }
	inline void set_G_1(ByteU5BU5D_t3665519352* value)
	{
		___G_1 = value;
		Il2CppCodeGenWriteBarrier((&___G_1), value);
	}

	inline static int32_t get_offset_of_J_2() { return static_cast<int32_t>(offsetof(DSAParameters_t2436233022, ___J_2)); }
	inline ByteU5BU5D_t3665519352* get_J_2() const { return ___J_2; }
	inline ByteU5BU5D_t3665519352** get_address_of_J_2() { return &___J_2; }
	inline void set_J_2(ByteU5BU5D_t3665519352* value)
	{
		___J_2 = value;
		Il2CppCodeGenWriteBarrier((&___J_2), value);
	}

	inline static int32_t get_offset_of_P_3() { return static_cast<int32_t>(offsetof(DSAParameters_t2436233022, ___P_3)); }
	inline ByteU5BU5D_t3665519352* get_P_3() const { return ___P_3; }
	inline ByteU5BU5D_t3665519352** get_address_of_P_3() { return &___P_3; }
	inline void set_P_3(ByteU5BU5D_t3665519352* value)
	{
		___P_3 = value;
		Il2CppCodeGenWriteBarrier((&___P_3), value);
	}

	inline static int32_t get_offset_of_Q_4() { return static_cast<int32_t>(offsetof(DSAParameters_t2436233022, ___Q_4)); }
	inline ByteU5BU5D_t3665519352* get_Q_4() const { return ___Q_4; }
	inline ByteU5BU5D_t3665519352** get_address_of_Q_4() { return &___Q_4; }
	inline void set_Q_4(ByteU5BU5D_t3665519352* value)
	{
		___Q_4 = value;
		Il2CppCodeGenWriteBarrier((&___Q_4), value);
	}

	inline static int32_t get_offset_of_Seed_5() { return static_cast<int32_t>(offsetof(DSAParameters_t2436233022, ___Seed_5)); }
	inline ByteU5BU5D_t3665519352* get_Seed_5() const { return ___Seed_5; }
	inline ByteU5BU5D_t3665519352** get_address_of_Seed_5() { return &___Seed_5; }
	inline void set_Seed_5(ByteU5BU5D_t3665519352* value)
	{
		___Seed_5 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_5), value);
	}

	inline static int32_t get_offset_of_X_6() { return static_cast<int32_t>(offsetof(DSAParameters_t2436233022, ___X_6)); }
	inline ByteU5BU5D_t3665519352* get_X_6() const { return ___X_6; }
	inline ByteU5BU5D_t3665519352** get_address_of_X_6() { return &___X_6; }
	inline void set_X_6(ByteU5BU5D_t3665519352* value)
	{
		___X_6 = value;
		Il2CppCodeGenWriteBarrier((&___X_6), value);
	}

	inline static int32_t get_offset_of_Y_7() { return static_cast<int32_t>(offsetof(DSAParameters_t2436233022, ___Y_7)); }
	inline ByteU5BU5D_t3665519352* get_Y_7() const { return ___Y_7; }
	inline ByteU5BU5D_t3665519352** get_address_of_Y_7() { return &___Y_7; }
	inline void set_Y_7(ByteU5BU5D_t3665519352* value)
	{
		___Y_7 = value;
		Il2CppCodeGenWriteBarrier((&___Y_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2436233022_marshaled_pinvoke
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2436233022_marshaled_com
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
#endif // DSAPARAMETERS_T2436233022_H
#ifndef DSASIGNATUREDEFORMATTER_T785673881_H
#define DSASIGNATUREDEFORMATTER_T785673881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t785673881  : public AsymmetricSignatureDeformatter_t3219285991
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t1766017524 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t785673881, ___dsa_0)); }
	inline DSA_t1766017524 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t1766017524 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t1766017524 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDEFORMATTER_T785673881_H
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
#ifndef DSASIGNATUREFORMATTER_T3315967217_H
#define DSASIGNATUREFORMATTER_T3315967217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureFormatter
struct  DSASignatureFormatter_t3315967217  : public AsymmetricSignatureFormatter_t2391191991
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureFormatter::dsa
	DSA_t1766017524 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t3315967217, ___dsa_0)); }
	inline DSA_t1766017524 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t1766017524 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t1766017524 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREFORMATTER_T3315967217_H
#ifndef COMMONOBJECTSECURITY_T1204283697_H
#define COMMONOBJECTSECURITY_T1204283697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AccessControl.CommonObjectSecurity
struct  CommonObjectSecurity_t1204283697  : public ObjectSecurity_t1984121323
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONOBJECTSECURITY_T1204283697_H
#ifndef ONSERIALIZEDATTRIBUTE_T2744071723_H
#define ONSERIALIZEDATTRIBUTE_T2744071723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializedAttribute
struct  OnSerializedAttribute_t2744071723  : public Attribute_t2192553355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZEDATTRIBUTE_T2744071723_H
#ifndef FIXUPRECORD_T4219079372_H
#define FIXUPRECORD_T4219079372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FixupRecord
struct  FixupRecord_t4219079372  : public BaseFixupRecord_t4059959167
{
public:
	// System.Reflection.MemberInfo System.Runtime.Serialization.FixupRecord::_member
	MemberInfo_t * ____member_4;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(FixupRecord_t4219079372, ____member_4)); }
	inline MemberInfo_t * get__member_4() const { return ____member_4; }
	inline MemberInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(MemberInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXUPRECORD_T4219079372_H
#ifndef DELAYEDFIXUPRECORD_T4131535802_H
#define DELAYEDFIXUPRECORD_T4131535802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DelayedFixupRecord
struct  DelayedFixupRecord_t4131535802  : public BaseFixupRecord_t4059959167
{
public:
	// System.String System.Runtime.Serialization.DelayedFixupRecord::_memberName
	String_t* ____memberName_4;

public:
	inline static int32_t get_offset_of__memberName_4() { return static_cast<int32_t>(offsetof(DelayedFixupRecord_t4131535802, ____memberName_4)); }
	inline String_t* get__memberName_4() const { return ____memberName_4; }
	inline String_t** get_address_of__memberName_4() { return &____memberName_4; }
	inline void set__memberName_4(String_t* value)
	{
		____memberName_4 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELAYEDFIXUPRECORD_T4131535802_H
#ifndef ONDESERIALIZEDATTRIBUTE_T1753592802_H
#define ONDESERIALIZEDATTRIBUTE_T1753592802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializedAttribute
struct  OnDeserializedAttribute_t1753592802  : public Attribute_t2192553355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZEDATTRIBUTE_T1753592802_H
#ifndef ONDESERIALIZINGATTRIBUTE_T4280951491_H
#define ONDESERIALIZINGATTRIBUTE_T4280951491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializingAttribute
struct  OnDeserializingAttribute_t4280951491  : public Attribute_t2192553355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZINGATTRIBUTE_T4280951491_H
#ifndef ARRAYFIXUPRECORD_T1543027764_H
#define ARRAYFIXUPRECORD_T1543027764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ArrayFixupRecord
struct  ArrayFixupRecord_t1543027764  : public BaseFixupRecord_t4059959167
{
public:
	// System.Int32 System.Runtime.Serialization.ArrayFixupRecord::_index
	int32_t ____index_4;

public:
	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(ArrayFixupRecord_t1543027764, ____index_4)); }
	inline int32_t get__index_4() const { return ____index_4; }
	inline int32_t* get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(int32_t value)
	{
		____index_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYFIXUPRECORD_T1543027764_H
#ifndef ONSERIALIZINGATTRIBUTE_T1079949470_H
#define ONSERIALIZINGATTRIBUTE_T1079949470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializingAttribute
struct  OnSerializingAttribute_t1079949470  : public Attribute_t2192553355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZINGATTRIBUTE_T1079949470_H
#ifndef SERIALIZABLETYPEMETADATA_T2624628685_H
#define SERIALIZABLETYPEMETADATA_T2624628685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct  SerializableTypeMetadata_t2624628685  : public TypeMetadata_t1730811349
{
public:
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::types
	TypeU5BU5D_t3894805094* ___types_2;
	// System.String[] System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::names
	StringU5BU5D_t1443727135* ___names_3;

public:
	inline static int32_t get_offset_of_types_2() { return static_cast<int32_t>(offsetof(SerializableTypeMetadata_t2624628685, ___types_2)); }
	inline TypeU5BU5D_t3894805094* get_types_2() const { return ___types_2; }
	inline TypeU5BU5D_t3894805094** get_address_of_types_2() { return &___types_2; }
	inline void set_types_2(TypeU5BU5D_t3894805094* value)
	{
		___types_2 = value;
		Il2CppCodeGenWriteBarrier((&___types_2), value);
	}

	inline static int32_t get_offset_of_names_3() { return static_cast<int32_t>(offsetof(SerializableTypeMetadata_t2624628685, ___names_3)); }
	inline StringU5BU5D_t1443727135* get_names_3() const { return ___names_3; }
	inline StringU5BU5D_t1443727135** get_address_of_names_3() { return &___names_3; }
	inline void set_names_3(StringU5BU5D_t1443727135* value)
	{
		___names_3 = value;
		Il2CppCodeGenWriteBarrier((&___names_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLETYPEMETADATA_T2624628685_H
#ifndef SERIALIZATIONENTRY_T1470328600_H
#define SERIALIZATIONENTRY_T1470328600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationEntry
struct  SerializationEntry_t1470328600 
{
public:
	// System.String System.Runtime.Serialization.SerializationEntry::name
	String_t* ___name_0;
	// System.Type System.Runtime.Serialization.SerializationEntry::objectType
	Type_t * ___objectType_1;
	// System.Object System.Runtime.Serialization.SerializationEntry::value
	RuntimeObject * ___value_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SerializationEntry_t1470328600, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_objectType_1() { return static_cast<int32_t>(offsetof(SerializationEntry_t1470328600, ___objectType_1)); }
	inline Type_t * get_objectType_1() const { return ___objectType_1; }
	inline Type_t ** get_address_of_objectType_1() { return &___objectType_1; }
	inline void set_objectType_1(Type_t * value)
	{
		___objectType_1 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SerializationEntry_t1470328600, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t1470328600_marshaled_pinvoke
{
	char* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
// Native definition for COM marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t1470328600_marshaled_com
{
	Il2CppChar* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
#endif // SERIALIZATIONENTRY_T1470328600_H
#ifndef MULTIARRAYFIXUPRECORD_T217190321_H
#define MULTIARRAYFIXUPRECORD_T217190321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.MultiArrayFixupRecord
struct  MultiArrayFixupRecord_t217190321  : public BaseFixupRecord_t4059959167
{
public:
	// System.Int32[] System.Runtime.Serialization.MultiArrayFixupRecord::_indices
	Int32U5BU5D_t29945824* ____indices_4;

public:
	inline static int32_t get_offset_of__indices_4() { return static_cast<int32_t>(offsetof(MultiArrayFixupRecord_t217190321, ____indices_4)); }
	inline Int32U5BU5D_t29945824* get__indices_4() const { return ____indices_4; }
	inline Int32U5BU5D_t29945824** get_address_of__indices_4() { return &____indices_4; }
	inline void set__indices_4(Int32U5BU5D_t29945824* value)
	{
		____indices_4 = value;
		Il2CppCodeGenWriteBarrier((&____indices_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIARRAYFIXUPRECORD_T217190321_H
#ifndef WELLKNOWNCLIENTTYPEENTRY_T1258127316_H
#define WELLKNOWNCLIENTTYPEENTRY_T1258127316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownClientTypeEntry
struct  WellKnownClientTypeEntry_t1258127316  : public TypeEntry_t1996212644
{
public:
	// System.Type System.Runtime.Remoting.WellKnownClientTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::obj_url
	String_t* ___obj_url_3;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::app_url
	String_t* ___app_url_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t1258127316, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_url_3() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t1258127316, ___obj_url_3)); }
	inline String_t* get_obj_url_3() const { return ___obj_url_3; }
	inline String_t** get_address_of_obj_url_3() { return &___obj_url_3; }
	inline void set_obj_url_3(String_t* value)
	{
		___obj_url_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_url_3), value);
	}

	inline static int32_t get_offset_of_app_url_4() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t1258127316, ___app_url_4)); }
	inline String_t* get_app_url_4() const { return ___app_url_4; }
	inline String_t** get_address_of_app_url_4() { return &___app_url_4; }
	inline void set_app_url_4(String_t* value)
	{
		___app_url_4 = value;
		Il2CppCodeGenWriteBarrier((&___app_url_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNCLIENTTYPEENTRY_T1258127316_H
#ifndef CLRTYPEMETADATA_T930687302_H
#define CLRTYPEMETADATA_T930687302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ClrTypeMetadata
struct  ClrTypeMetadata_t930687302  : public TypeMetadata_t1730811349
{
public:
	// System.Type System.Runtime.Serialization.Formatters.Binary.ClrTypeMetadata::InstanceType
	Type_t * ___InstanceType_2;

public:
	inline static int32_t get_offset_of_InstanceType_2() { return static_cast<int32_t>(offsetof(ClrTypeMetadata_t930687302, ___InstanceType_2)); }
	inline Type_t * get_InstanceType_2() const { return ___InstanceType_2; }
	inline Type_t ** get_address_of_InstanceType_2() { return &___InstanceType_2; }
	inline void set_InstanceType_2(Type_t * value)
	{
		___InstanceType_2 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceType_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLRTYPEMETADATA_T930687302_H
#ifndef RETURNTYPETAG_T1519039310_H
#define RETURNTYPETAG_T1519039310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
struct  ReturnTypeTag_t1519039310 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReturnTypeTag_t1519039310, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNTYPETAG_T1519039310_H
#ifndef METHODFLAGS_T2150709283_H
#define METHODFLAGS_T2150709283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MethodFlags
struct  MethodFlags_t2150709283 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.MethodFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodFlags_t2150709283, ___value___1)); }
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
#endif // METHODFLAGS_T2150709283_H
#ifndef TYPETAG_T1650461356_H
#define TYPETAG_T1650461356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeTag
struct  TypeTag_t1650461356 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.TypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeTag_t1650461356, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPETAG_T1650461356_H
#ifndef BINARYELEMENT_T2285121910_H
#define BINARYELEMENT_T2285121910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryElement
struct  BinaryElement_t2285121910 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.BinaryElement::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BinaryElement_t2285121910, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYELEMENT_T2285121910_H
#ifndef WELLKNOWNOBJECTMODE_T224505361_H
#define WELLKNOWNOBJECTMODE_T224505361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownObjectMode
struct  WellKnownObjectMode_t224505361 
{
public:
	// System.Int32 System.Runtime.Remoting.WellKnownObjectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WellKnownObjectMode_t224505361, ___value___1)); }
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
#endif // WELLKNOWNOBJECTMODE_T224505361_H
#ifndef MEMBERTYPEMETADATA_T3262803999_H
#define MEMBERTYPEMETADATA_T3262803999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct  MemberTypeMetadata_t3262803999  : public ClrTypeMetadata_t930687302
{
public:
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::members
	MemberInfoU5BU5D_t503668026* ___members_3;

public:
	inline static int32_t get_offset_of_members_3() { return static_cast<int32_t>(offsetof(MemberTypeMetadata_t3262803999, ___members_3)); }
	inline MemberInfoU5BU5D_t503668026* get_members_3() const { return ___members_3; }
	inline MemberInfoU5BU5D_t503668026** get_address_of_members_3() { return &___members_3; }
	inline void set_members_3(MemberInfoU5BU5D_t503668026* value)
	{
		___members_3 = value;
		Il2CppCodeGenWriteBarrier((&___members_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERTYPEMETADATA_T3262803999_H
#ifndef HMAC_T1036685288_H
#define HMAC_T1036685288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMAC
struct  HMAC_t1036685288  : public KeyedHashAlgorithm_t1534753416
{
public:
	// System.Boolean System.Security.Cryptography.HMAC::_disposed
	bool ____disposed_5;
	// System.String System.Security.Cryptography.HMAC::_hashName
	String_t* ____hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::_algo
	HashAlgorithm_t2083211132 * ____algo_7;
	// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::_block
	BlockProcessor_t149572272 * ____block_8;
	// System.Int32 System.Security.Cryptography.HMAC::_blockSizeValue
	int32_t ____blockSizeValue_9;

public:
	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(HMAC_t1036685288, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__hashName_6() { return static_cast<int32_t>(offsetof(HMAC_t1036685288, ____hashName_6)); }
	inline String_t* get__hashName_6() const { return ____hashName_6; }
	inline String_t** get_address_of__hashName_6() { return &____hashName_6; }
	inline void set__hashName_6(String_t* value)
	{
		____hashName_6 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_6), value);
	}

	inline static int32_t get_offset_of__algo_7() { return static_cast<int32_t>(offsetof(HMAC_t1036685288, ____algo_7)); }
	inline HashAlgorithm_t2083211132 * get__algo_7() const { return ____algo_7; }
	inline HashAlgorithm_t2083211132 ** get_address_of__algo_7() { return &____algo_7; }
	inline void set__algo_7(HashAlgorithm_t2083211132 * value)
	{
		____algo_7 = value;
		Il2CppCodeGenWriteBarrier((&____algo_7), value);
	}

	inline static int32_t get_offset_of__block_8() { return static_cast<int32_t>(offsetof(HMAC_t1036685288, ____block_8)); }
	inline BlockProcessor_t149572272 * get__block_8() const { return ____block_8; }
	inline BlockProcessor_t149572272 ** get_address_of__block_8() { return &____block_8; }
	inline void set__block_8(BlockProcessor_t149572272 * value)
	{
		____block_8 = value;
		Il2CppCodeGenWriteBarrier((&____block_8), value);
	}

	inline static int32_t get_offset_of__blockSizeValue_9() { return static_cast<int32_t>(offsetof(HMAC_t1036685288, ____blockSizeValue_9)); }
	inline int32_t get__blockSizeValue_9() const { return ____blockSizeValue_9; }
	inline int32_t* get_address_of__blockSizeValue_9() { return &____blockSizeValue_9; }
	inline void set__blockSizeValue_9(int32_t value)
	{
		____blockSizeValue_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T1036685288_H
#ifndef FROMBASE64TRANSFORMMODE_T4165314459_H
#define FROMBASE64TRANSFORMMODE_T4165314459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64TransformMode
struct  FromBase64TransformMode_t4165314459 
{
public:
	// System.Int32 System.Security.Cryptography.FromBase64TransformMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FromBase64TransformMode_t4165314459, ___value___1)); }
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
#endif // FROMBASE64TRANSFORMMODE_T4165314459_H
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
#ifndef FORMATTERASSEMBLYSTYLE_T2846881124_H
#define FORMATTERASSEMBLYSTYLE_T2846881124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t2846881124 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t2846881124, ___value___1)); }
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
#endif // FORMATTERASSEMBLYSTYLE_T2846881124_H
#ifndef FORMATTERTYPESTYLE_T2867509982_H
#define FORMATTERTYPESTYLE_T2867509982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t2867509982 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t2867509982, ___value___1)); }
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
#endif // FORMATTERTYPESTYLE_T2867509982_H
#ifndef TYPEFILTERLEVEL_T3052082381_H
#define TYPEFILTERLEVEL_T3052082381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t3052082381 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t3052082381, ___value___1)); }
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
#endif // TYPEFILTERLEVEL_T3052082381_H
#ifndef DSACRYPTOSERVICEPROVIDER_T4144624798_H
#define DSACRYPTOSERVICEPROVIDER_T4144624798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t4144624798  : public DSA_t1766017524
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t3124274384 * ___store_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t3801964476 * ___dsa_8;

public:
	inline static int32_t get_offset_of_store_3() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4144624798, ___store_3)); }
	inline KeyPairPersistence_t3124274384 * get_store_3() const { return ___store_3; }
	inline KeyPairPersistence_t3124274384 ** get_address_of_store_3() { return &___store_3; }
	inline void set_store_3(KeyPairPersistence_t3124274384 * value)
	{
		___store_3 = value;
		Il2CppCodeGenWriteBarrier((&___store_3), value);
	}

	inline static int32_t get_offset_of_persistKey_4() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4144624798, ___persistKey_4)); }
	inline bool get_persistKey_4() const { return ___persistKey_4; }
	inline bool* get_address_of_persistKey_4() { return &___persistKey_4; }
	inline void set_persistKey_4(bool value)
	{
		___persistKey_4 = value;
	}

	inline static int32_t get_offset_of_persisted_5() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4144624798, ___persisted_5)); }
	inline bool get_persisted_5() const { return ___persisted_5; }
	inline bool* get_address_of_persisted_5() { return &___persisted_5; }
	inline void set_persisted_5(bool value)
	{
		___persisted_5 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_6() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4144624798, ___privateKeyExportable_6)); }
	inline bool get_privateKeyExportable_6() const { return ___privateKeyExportable_6; }
	inline bool* get_address_of_privateKeyExportable_6() { return &___privateKeyExportable_6; }
	inline void set_privateKeyExportable_6(bool value)
	{
		___privateKeyExportable_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4144624798, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_dsa_8() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4144624798, ___dsa_8)); }
	inline DSAManaged_t3801964476 * get_dsa_8() const { return ___dsa_8; }
	inline DSAManaged_t3801964476 ** get_address_of_dsa_8() { return &___dsa_8; }
	inline void set_dsa_8(DSAManaged_t3801964476 * value)
	{
		___dsa_8 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_8), value);
	}
};

struct DSACryptoServiceProvider_t4144624798_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_9;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_9() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4144624798_StaticFields, ___useMachineKeyStore_9)); }
	inline bool get_useMachineKeyStore_9() const { return ___useMachineKeyStore_9; }
	inline bool* get_address_of_useMachineKeyStore_9() { return &___useMachineKeyStore_9; }
	inline void set_useMachineKeyStore_9(bool value)
	{
		___useMachineKeyStore_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSACRYPTOSERVICEPROVIDER_T4144624798_H
#ifndef STREAMINGCONTEXTSTATES_T1666619882_H
#define STREAMINGCONTEXTSTATES_T1666619882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t1666619882 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t1666619882, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T1666619882_H
#ifndef SINGLECALLIDENTITY_T696546438_H
#define SINGLECALLIDENTITY_T696546438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SingleCallIdentity
struct  SingleCallIdentity_t696546438  : public ServerIdentity_t1227701145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECALLIDENTITY_T696546438_H
#ifndef CSPPROVIDERFLAGS_T4203337241_H
#define CSPPROVIDERFLAGS_T4203337241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t4203337241 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CspProviderFlags_t4203337241, ___value___1)); }
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
#endif // CSPPROVIDERFLAGS_T4203337241_H
#ifndef CERTIFICATECONTEXT_T1621332850_H
#define CERTIFICATECONTEXT_T1621332850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate/CertificateContext
struct  CertificateContext_t1621332850 
{
public:
	// System.UInt32 System.Security.Cryptography.X509Certificates.X509Certificate/CertificateContext::dwCertEncodingType
	uint32_t ___dwCertEncodingType_0;
	// System.IntPtr System.Security.Cryptography.X509Certificates.X509Certificate/CertificateContext::pbCertEncoded
	IntPtr_t ___pbCertEncoded_1;
	// System.UInt32 System.Security.Cryptography.X509Certificates.X509Certificate/CertificateContext::cbCertEncoded
	uint32_t ___cbCertEncoded_2;
	// System.IntPtr System.Security.Cryptography.X509Certificates.X509Certificate/CertificateContext::pCertInfo
	IntPtr_t ___pCertInfo_3;
	// System.IntPtr System.Security.Cryptography.X509Certificates.X509Certificate/CertificateContext::hCertStore
	IntPtr_t ___hCertStore_4;

public:
	inline static int32_t get_offset_of_dwCertEncodingType_0() { return static_cast<int32_t>(offsetof(CertificateContext_t1621332850, ___dwCertEncodingType_0)); }
	inline uint32_t get_dwCertEncodingType_0() const { return ___dwCertEncodingType_0; }
	inline uint32_t* get_address_of_dwCertEncodingType_0() { return &___dwCertEncodingType_0; }
	inline void set_dwCertEncodingType_0(uint32_t value)
	{
		___dwCertEncodingType_0 = value;
	}

	inline static int32_t get_offset_of_pbCertEncoded_1() { return static_cast<int32_t>(offsetof(CertificateContext_t1621332850, ___pbCertEncoded_1)); }
	inline IntPtr_t get_pbCertEncoded_1() const { return ___pbCertEncoded_1; }
	inline IntPtr_t* get_address_of_pbCertEncoded_1() { return &___pbCertEncoded_1; }
	inline void set_pbCertEncoded_1(IntPtr_t value)
	{
		___pbCertEncoded_1 = value;
	}

	inline static int32_t get_offset_of_cbCertEncoded_2() { return static_cast<int32_t>(offsetof(CertificateContext_t1621332850, ___cbCertEncoded_2)); }
	inline uint32_t get_cbCertEncoded_2() const { return ___cbCertEncoded_2; }
	inline uint32_t* get_address_of_cbCertEncoded_2() { return &___cbCertEncoded_2; }
	inline void set_cbCertEncoded_2(uint32_t value)
	{
		___cbCertEncoded_2 = value;
	}

	inline static int32_t get_offset_of_pCertInfo_3() { return static_cast<int32_t>(offsetof(CertificateContext_t1621332850, ___pCertInfo_3)); }
	inline IntPtr_t get_pCertInfo_3() const { return ___pCertInfo_3; }
	inline IntPtr_t* get_address_of_pCertInfo_3() { return &___pCertInfo_3; }
	inline void set_pCertInfo_3(IntPtr_t value)
	{
		___pCertInfo_3 = value;
	}

	inline static int32_t get_offset_of_hCertStore_4() { return static_cast<int32_t>(offsetof(CertificateContext_t1621332850, ___hCertStore_4)); }
	inline IntPtr_t get_hCertStore_4() const { return ___hCertStore_4; }
	inline IntPtr_t* get_address_of_hCertStore_4() { return &___hCertStore_4; }
	inline void set_hCertStore_4(IntPtr_t value)
	{
		___hCertStore_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATECONTEXT_T1621332850_H
#ifndef X509CONTENTTYPE_T3620918085_H
#define X509CONTENTTYPE_T3620918085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ContentType
struct  X509ContentType_t3620918085 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ContentType_t3620918085, ___value___1)); }
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
#endif // X509CONTENTTYPE_T3620918085_H
#ifndef PADDINGMODE_T1645444914_H
#define PADDINGMODE_T1645444914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t1645444914 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t1645444914, ___value___1)); }
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
#endif // PADDINGMODE_T1645444914_H
#ifndef CRYPTOGRAPHICEXCEPTION_T2012648158_H
#define CRYPTOGRAPHICEXCEPTION_T2012648158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t2012648158  : public SystemException_t637859339
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T2012648158_H
#ifndef CRYPTOSTREAMMODE_T1417782404_H
#define CRYPTOSTREAMMODE_T1417782404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStreamMode
struct  CryptoStreamMode_t1417782404 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStreamMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CryptoStreamMode_t1417782404, ___value___1)); }
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
#endif // CRYPTOSTREAMMODE_T1417782404_H
#ifndef OBJECTRECORDSTATUS_T3297932842_H
#define OBJECTRECORDSTATUS_T3297932842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecordStatus
struct  ObjectRecordStatus_t3297932842 
{
public:
	// System.Byte System.Runtime.Serialization.ObjectRecordStatus::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ObjectRecordStatus_t3297932842, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECORDSTATUS_T3297932842_H
#ifndef X509KEYSTORAGEFLAGS_T3407979483_H
#define X509KEYSTORAGEFLAGS_T3407979483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
struct  X509KeyStorageFlags_t3407979483 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyStorageFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509KeyStorageFlags_t3407979483, ___value___1)); }
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
#endif // X509KEYSTORAGEFLAGS_T3407979483_H
#ifndef NATIVEOBJECTSECURITY_T2987970055_H
#define NATIVEOBJECTSECURITY_T2987970055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AccessControl.NativeObjectSecurity
struct  NativeObjectSecurity_t2987970055  : public CommonObjectSecurity_t1204283697
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEOBJECTSECURITY_T2987970055_H
#ifndef SERIALIZATIONEXCEPTION_T76123896_H
#define SERIALIZATIONEXCEPTION_T76123896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationException
struct  SerializationException_t76123896  : public SystemException_t637859339
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEXCEPTION_T76123896_H
#ifndef CIPHERMODE_T514722133_H
#define CIPHERMODE_T514722133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t514722133 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t514722133, ___value___1)); }
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
#endif // CIPHERMODE_T514722133_H
#ifndef WELLKNOWNSERVICETYPEENTRY_T3807734783_H
#define WELLKNOWNSERVICETYPEENTRY_T3807734783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct  WellKnownServiceTypeEntry_t3807734783  : public TypeEntry_t1996212644
{
public:
	// System.Type System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_uri
	String_t* ___obj_uri_3;
	// System.Runtime.Remoting.WellKnownObjectMode System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_mode
	int32_t ___obj_mode_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t3807734783, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_uri_3() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t3807734783, ___obj_uri_3)); }
	inline String_t* get_obj_uri_3() const { return ___obj_uri_3; }
	inline String_t** get_address_of_obj_uri_3() { return &___obj_uri_3; }
	inline void set_obj_uri_3(String_t* value)
	{
		___obj_uri_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_uri_3), value);
	}

	inline static int32_t get_offset_of_obj_mode_4() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t3807734783, ___obj_mode_4)); }
	inline int32_t get_obj_mode_4() const { return ___obj_mode_4; }
	inline int32_t* get_address_of_obj_mode_4() { return &___obj_mode_4; }
	inline void set_obj_mode_4(int32_t value)
	{
		___obj_mode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNSERVICETYPEENTRY_T3807734783_H
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
#ifndef HMACMD5_T1663578877_H
#define HMACMD5_T1663578877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACMD5
struct  HMACMD5_t1663578877  : public HMAC_t1036685288
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACMD5_T1663578877_H
#ifndef HMACRIPEMD160_T1669972200_H
#define HMACRIPEMD160_T1669972200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACRIPEMD160
struct  HMACRIPEMD160_t1669972200  : public HMAC_t1036685288
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACRIPEMD160_T1669972200_H
#ifndef OBJECTRECORD_T3283404462_H
#define OBJECTRECORD_T3283404462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecord
struct  ObjectRecord_t3283404462  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecordStatus System.Runtime.Serialization.ObjectRecord::Status
	uint8_t ___Status_0;
	// System.Object System.Runtime.Serialization.ObjectRecord::OriginalObject
	RuntimeObject * ___OriginalObject_1;
	// System.Object System.Runtime.Serialization.ObjectRecord::ObjectInstance
	RuntimeObject * ___ObjectInstance_2;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::ObjectID
	int64_t ___ObjectID_3;
	// System.Runtime.Serialization.SerializationInfo System.Runtime.Serialization.ObjectRecord::Info
	SerializationInfo_t3327250702 * ___Info_4;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::IdOfContainingObj
	int64_t ___IdOfContainingObj_5;
	// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ObjectRecord::Surrogate
	RuntimeObject* ___Surrogate_6;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectRecord::SurrogateSelector
	RuntimeObject* ___SurrogateSelector_7;
	// System.Reflection.MemberInfo System.Runtime.Serialization.ObjectRecord::Member
	MemberInfo_t * ___Member_8;
	// System.Int32[] System.Runtime.Serialization.ObjectRecord::ArrayIndex
	Int32U5BU5D_t29945824* ___ArrayIndex_9;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsContainer
	BaseFixupRecord_t4059959167 * ___FixupChainAsContainer_10;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsRequired
	BaseFixupRecord_t4059959167 * ___FixupChainAsRequired_11;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectRecord::Next
	ObjectRecord_t3283404462 * ___Next_12;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(ObjectRecord_t3283404462, ___Status_0)); }
	inline uint8_t get_Status_0() const { return ___Status_0; }
	inline uint8_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(uint8_t value)
	{
		___Status_0 = value;
	}

	inline static int32_t get_offset_of_OriginalObject_1() { return static_cast<int32_t>(offsetof(ObjectRecord_t3283404462, ___OriginalObject_1)); }
	inline RuntimeObject * get_OriginalObject_1() const { return ___OriginalObject_1; }
	inline RuntimeObject ** get_address_of_OriginalObject_1() { return &___OriginalObject_1; }
	inline void set_OriginalObject_1(RuntimeObject * value)
	{
		___OriginalObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalObject_1), value);
	}

	inline static int32_t get_offset_of_ObjectInstance_2() { return static_cast<int32_t>(offsetof(ObjectRecord_t3283404462, ___ObjectInstance_2)); }
	inline RuntimeObject * get_ObjectInstance_2() const { return ___ObjectInstance_2; }
	inline RuntimeObject ** get_address_of_ObjectInstance_2() { return &___ObjectInstance_2; }
	inline void set_ObjectInstance_2(RuntimeObject * value)
	{
		___ObjectInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectInstance_2), value);
	}

	inline static int32_t get_offset_of_ObjectID_3() { return static_cast<int32_t>(offsetof(ObjectRecord_t3283404462, ___ObjectID_3)); }
	inline int64_t get_ObjectID_3() const { return ___ObjectID_3; }
	inline int64_t* get_address_of_ObjectID_3() { return &___ObjectID_3; }
	inline void set_ObjectID_3(int64_t value)
	{
		___ObjectID_3 = value;
	}

	inline static int32_t get_offset_of_Info_4() { return static_cast<int32_t>(offsetof(ObjectRecord_t3283404462, ___Info_4)); }
	inline SerializationInfo_t3327250702 * get_Info_4() const { return ___Info_4; }
	inline SerializationInfo_t3327250702 ** get_address_of_Info_4() { return &___Info_4; }
	inline void set_Info_4(SerializationInfo_t3327250702 * value)
	{
		___Info_4 = value;
		Il2CppCodeGenWriteBarrier((&___Info_4), value);
	}

	inline static int32_t get_offset_of_IdOfContainingObj_5() { return static_cast<int32_t>(offsetof(ObjectRecord_t3283404462, ___IdOfContainingObj_5)); }
	inline int64_t get_IdOfContainingObj_5() const { return ___IdOfContainingObj_5; }
	inline int64_t* get_address_of_IdOfContainingObj_5() { return &___IdOfContainingObj_5; }
	inline void set_IdOfContainingObj_5(int64_t value)
	{
		___IdOfContainingObj_5 = value;
	}

	inline static int32_t get_offset_of_Surrogate_6() { return static_cast<int32_t>(offsetof(ObjectRecord_t3283404462, ___Surrogate_6)); }
	inline RuntimeObject* get_Surrogate_6() const { return ___Surrogate_6; }
	inline RuntimeObject** get_address_of_Surrogate_6() { return &___Surrogate_6; }
	inline void set_Surrogate_6(RuntimeObject* value)
	{
		___Surrogate_6 = value;
		Il2CppCodeGenWriteBarrier((&___Surrogate_6), value);
	}

	inline static int32_t get_offset_of_SurrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectRecord_t3283404462, ___SurrogateSelector_7)); }
	inline RuntimeObject* get_SurrogateSelector_7() const { return ___SurrogateSelector_7; }
	inline RuntimeObject** get_address_of_SurrogateSelector_7() { return &___SurrogateSelector_7; }
	inline void set_SurrogateSelector_7(RuntimeObject* value)
	{
		___SurrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier((&___SurrogateSelector_7), value);
	}

	inline static int32_t get_offset_of_Member_8() { return static_cast<int32_t>(offsetof(ObjectRecord_t3283404462, ___Member_8)); }
	inline MemberInfo_t * get_Member_8() const { return ___Member_8; }
	inline MemberInfo_t ** get_address_of_Member_8() { return &___Member_8; }
	inline void set_Member_8(MemberInfo_t * value)
	{
		___Member_8 = value;
		Il2CppCodeGenWriteBarrier((&___Member_8), value);
	}

	inline static int32_t get_offset_of_ArrayIndex_9() { return static_cast<int32_t>(offsetof(ObjectRecord_t3283404462, ___ArrayIndex_9)); }
	inline Int32U5BU5D_t29945824* get_ArrayIndex_9() const { return ___ArrayIndex_9; }
	inline Int32U5BU5D_t29945824** get_address_of_ArrayIndex_9() { return &___ArrayIndex_9; }
	inline void set_ArrayIndex_9(Int32U5BU5D_t29945824* value)
	{
		___ArrayIndex_9 = value;
		Il2CppCodeGenWriteBarrier((&___ArrayIndex_9), value);
	}

	inline static int32_t get_offset_of_FixupChainAsContainer_10() { return static_cast<int32_t>(offsetof(ObjectRecord_t3283404462, ___FixupChainAsContainer_10)); }
	inline BaseFixupRecord_t4059959167 * get_FixupChainAsContainer_10() const { return ___FixupChainAsContainer_10; }
	inline BaseFixupRecord_t4059959167 ** get_address_of_FixupChainAsContainer_10() { return &___FixupChainAsContainer_10; }
	inline void set_FixupChainAsContainer_10(BaseFixupRecord_t4059959167 * value)
	{
		___FixupChainAsContainer_10 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsContainer_10), value);
	}

	inline static int32_t get_offset_of_FixupChainAsRequired_11() { return static_cast<int32_t>(offsetof(ObjectRecord_t3283404462, ___FixupChainAsRequired_11)); }
	inline BaseFixupRecord_t4059959167 * get_FixupChainAsRequired_11() const { return ___FixupChainAsRequired_11; }
	inline BaseFixupRecord_t4059959167 ** get_address_of_FixupChainAsRequired_11() { return &___FixupChainAsRequired_11; }
	inline void set_FixupChainAsRequired_11(BaseFixupRecord_t4059959167 * value)
	{
		___FixupChainAsRequired_11 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsRequired_11), value);
	}

	inline static int32_t get_offset_of_Next_12() { return static_cast<int32_t>(offsetof(ObjectRecord_t3283404462, ___Next_12)); }
	inline ObjectRecord_t3283404462 * get_Next_12() const { return ___Next_12; }
	inline ObjectRecord_t3283404462 ** get_address_of_Next_12() { return &___Next_12; }
	inline void set_Next_12(ObjectRecord_t3283404462 * value)
	{
		___Next_12 = value;
		Il2CppCodeGenWriteBarrier((&___Next_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECORD_T3283404462_H
#ifndef FROMBASE64TRANSFORM_T3209730855_H
#define FROMBASE64TRANSFORM_T3209730855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64Transform
struct  FromBase64Transform_t3209730855  : public RuntimeObject
{
public:
	// System.Security.Cryptography.FromBase64TransformMode System.Security.Cryptography.FromBase64Transform::mode
	int32_t ___mode_1;
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::accumulator
	ByteU5BU5D_t3665519352* ___accumulator_2;
	// System.Int32 System.Security.Cryptography.FromBase64Transform::accPtr
	int32_t ___accPtr_3;
	// System.Boolean System.Security.Cryptography.FromBase64Transform::m_disposed
	bool ___m_disposed_4;
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::lookupTable
	ByteU5BU5D_t3665519352* ___lookupTable_5;

public:
	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(FromBase64Transform_t3209730855, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_accumulator_2() { return static_cast<int32_t>(offsetof(FromBase64Transform_t3209730855, ___accumulator_2)); }
	inline ByteU5BU5D_t3665519352* get_accumulator_2() const { return ___accumulator_2; }
	inline ByteU5BU5D_t3665519352** get_address_of_accumulator_2() { return &___accumulator_2; }
	inline void set_accumulator_2(ByteU5BU5D_t3665519352* value)
	{
		___accumulator_2 = value;
		Il2CppCodeGenWriteBarrier((&___accumulator_2), value);
	}

	inline static int32_t get_offset_of_accPtr_3() { return static_cast<int32_t>(offsetof(FromBase64Transform_t3209730855, ___accPtr_3)); }
	inline int32_t get_accPtr_3() const { return ___accPtr_3; }
	inline int32_t* get_address_of_accPtr_3() { return &___accPtr_3; }
	inline void set_accPtr_3(int32_t value)
	{
		___accPtr_3 = value;
	}

	inline static int32_t get_offset_of_m_disposed_4() { return static_cast<int32_t>(offsetof(FromBase64Transform_t3209730855, ___m_disposed_4)); }
	inline bool get_m_disposed_4() const { return ___m_disposed_4; }
	inline bool* get_address_of_m_disposed_4() { return &___m_disposed_4; }
	inline void set_m_disposed_4(bool value)
	{
		___m_disposed_4 = value;
	}

	inline static int32_t get_offset_of_lookupTable_5() { return static_cast<int32_t>(offsetof(FromBase64Transform_t3209730855, ___lookupTable_5)); }
	inline ByteU5BU5D_t3665519352* get_lookupTable_5() const { return ___lookupTable_5; }
	inline ByteU5BU5D_t3665519352** get_address_of_lookupTable_5() { return &___lookupTable_5; }
	inline void set_lookupTable_5(ByteU5BU5D_t3665519352* value)
	{
		___lookupTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___lookupTable_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FROMBASE64TRANSFORM_T3209730855_H
#ifndef CRYPTOSTREAM_T3347776394_H
#define CRYPTOSTREAM_T3347776394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream
struct  CryptoStream_t3347776394  : public Stream_t1852591913
{
public:
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_t1852591913 * ____stream_1;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	RuntimeObject* ____transform_2;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_mode
	int32_t ____mode_3;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_currentBlock
	ByteU5BU5D_t3665519352* ____currentBlock_4;
	// System.Boolean System.Security.Cryptography.CryptoStream::_disposed
	bool ____disposed_5;
	// System.Boolean System.Security.Cryptography.CryptoStream::_flushedFinalBlock
	bool ____flushedFinalBlock_6;
	// System.Int32 System.Security.Cryptography.CryptoStream::_partialCount
	int32_t ____partialCount_7;
	// System.Boolean System.Security.Cryptography.CryptoStream::_endOfStream
	bool ____endOfStream_8;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_waitingBlock
	ByteU5BU5D_t3665519352* ____waitingBlock_9;
	// System.Int32 System.Security.Cryptography.CryptoStream::_waitingCount
	int32_t ____waitingCount_10;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_transformedBlock
	ByteU5BU5D_t3665519352* ____transformedBlock_11;
	// System.Int32 System.Security.Cryptography.CryptoStream::_transformedPos
	int32_t ____transformedPos_12;
	// System.Int32 System.Security.Cryptography.CryptoStream::_transformedCount
	int32_t ____transformedCount_13;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_workingBlock
	ByteU5BU5D_t3665519352* ____workingBlock_14;
	// System.Int32 System.Security.Cryptography.CryptoStream::_workingCount
	int32_t ____workingCount_15;

public:
	inline static int32_t get_offset_of__stream_1() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____stream_1)); }
	inline Stream_t1852591913 * get__stream_1() const { return ____stream_1; }
	inline Stream_t1852591913 ** get_address_of__stream_1() { return &____stream_1; }
	inline void set__stream_1(Stream_t1852591913 * value)
	{
		____stream_1 = value;
		Il2CppCodeGenWriteBarrier((&____stream_1), value);
	}

	inline static int32_t get_offset_of__transform_2() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____transform_2)); }
	inline RuntimeObject* get__transform_2() const { return ____transform_2; }
	inline RuntimeObject** get_address_of__transform_2() { return &____transform_2; }
	inline void set__transform_2(RuntimeObject* value)
	{
		____transform_2 = value;
		Il2CppCodeGenWriteBarrier((&____transform_2), value);
	}

	inline static int32_t get_offset_of__mode_3() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____mode_3)); }
	inline int32_t get__mode_3() const { return ____mode_3; }
	inline int32_t* get_address_of__mode_3() { return &____mode_3; }
	inline void set__mode_3(int32_t value)
	{
		____mode_3 = value;
	}

	inline static int32_t get_offset_of__currentBlock_4() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____currentBlock_4)); }
	inline ByteU5BU5D_t3665519352* get__currentBlock_4() const { return ____currentBlock_4; }
	inline ByteU5BU5D_t3665519352** get_address_of__currentBlock_4() { return &____currentBlock_4; }
	inline void set__currentBlock_4(ByteU5BU5D_t3665519352* value)
	{
		____currentBlock_4 = value;
		Il2CppCodeGenWriteBarrier((&____currentBlock_4), value);
	}

	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__flushedFinalBlock_6() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____flushedFinalBlock_6)); }
	inline bool get__flushedFinalBlock_6() const { return ____flushedFinalBlock_6; }
	inline bool* get_address_of__flushedFinalBlock_6() { return &____flushedFinalBlock_6; }
	inline void set__flushedFinalBlock_6(bool value)
	{
		____flushedFinalBlock_6 = value;
	}

	inline static int32_t get_offset_of__partialCount_7() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____partialCount_7)); }
	inline int32_t get__partialCount_7() const { return ____partialCount_7; }
	inline int32_t* get_address_of__partialCount_7() { return &____partialCount_7; }
	inline void set__partialCount_7(int32_t value)
	{
		____partialCount_7 = value;
	}

	inline static int32_t get_offset_of__endOfStream_8() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____endOfStream_8)); }
	inline bool get__endOfStream_8() const { return ____endOfStream_8; }
	inline bool* get_address_of__endOfStream_8() { return &____endOfStream_8; }
	inline void set__endOfStream_8(bool value)
	{
		____endOfStream_8 = value;
	}

	inline static int32_t get_offset_of__waitingBlock_9() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____waitingBlock_9)); }
	inline ByteU5BU5D_t3665519352* get__waitingBlock_9() const { return ____waitingBlock_9; }
	inline ByteU5BU5D_t3665519352** get_address_of__waitingBlock_9() { return &____waitingBlock_9; }
	inline void set__waitingBlock_9(ByteU5BU5D_t3665519352* value)
	{
		____waitingBlock_9 = value;
		Il2CppCodeGenWriteBarrier((&____waitingBlock_9), value);
	}

	inline static int32_t get_offset_of__waitingCount_10() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____waitingCount_10)); }
	inline int32_t get__waitingCount_10() const { return ____waitingCount_10; }
	inline int32_t* get_address_of__waitingCount_10() { return &____waitingCount_10; }
	inline void set__waitingCount_10(int32_t value)
	{
		____waitingCount_10 = value;
	}

	inline static int32_t get_offset_of__transformedBlock_11() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____transformedBlock_11)); }
	inline ByteU5BU5D_t3665519352* get__transformedBlock_11() const { return ____transformedBlock_11; }
	inline ByteU5BU5D_t3665519352** get_address_of__transformedBlock_11() { return &____transformedBlock_11; }
	inline void set__transformedBlock_11(ByteU5BU5D_t3665519352* value)
	{
		____transformedBlock_11 = value;
		Il2CppCodeGenWriteBarrier((&____transformedBlock_11), value);
	}

	inline static int32_t get_offset_of__transformedPos_12() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____transformedPos_12)); }
	inline int32_t get__transformedPos_12() const { return ____transformedPos_12; }
	inline int32_t* get_address_of__transformedPos_12() { return &____transformedPos_12; }
	inline void set__transformedPos_12(int32_t value)
	{
		____transformedPos_12 = value;
	}

	inline static int32_t get_offset_of__transformedCount_13() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____transformedCount_13)); }
	inline int32_t get__transformedCount_13() const { return ____transformedCount_13; }
	inline int32_t* get_address_of__transformedCount_13() { return &____transformedCount_13; }
	inline void set__transformedCount_13(int32_t value)
	{
		____transformedCount_13 = value;
	}

	inline static int32_t get_offset_of__workingBlock_14() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____workingBlock_14)); }
	inline ByteU5BU5D_t3665519352* get__workingBlock_14() const { return ____workingBlock_14; }
	inline ByteU5BU5D_t3665519352** get_address_of__workingBlock_14() { return &____workingBlock_14; }
	inline void set__workingBlock_14(ByteU5BU5D_t3665519352* value)
	{
		____workingBlock_14 = value;
		Il2CppCodeGenWriteBarrier((&____workingBlock_14), value);
	}

	inline static int32_t get_offset_of__workingCount_15() { return static_cast<int32_t>(offsetof(CryptoStream_t3347776394, ____workingCount_15)); }
	inline int32_t get__workingCount_15() const { return ____workingCount_15; }
	inline int32_t* get_address_of__workingCount_15() { return &____workingCount_15; }
	inline void set__workingCount_15(int32_t value)
	{
		____workingCount_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOSTREAM_T3347776394_H
#ifndef CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3339070021_H
#define CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3339070021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct  CryptographicUnexpectedOperationException_t3339070021  : public CryptographicException_t2012648158
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3339070021_H
#ifndef CSPPARAMETERS_T906534246_H
#define CSPPARAMETERS_T906534246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspParameters
struct  CspParameters_t906534246  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::_Flags
	int32_t ____Flags_0;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_1;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_2;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_3;
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_4;
	// System.Security.SecureString System.Security.Cryptography.CspParameters::_password
	SecureString_t2290931091 * ____password_5;
	// System.IntPtr System.Security.Cryptography.CspParameters::_windowHandle
	IntPtr_t ____windowHandle_6;

public:
	inline static int32_t get_offset_of__Flags_0() { return static_cast<int32_t>(offsetof(CspParameters_t906534246, ____Flags_0)); }
	inline int32_t get__Flags_0() const { return ____Flags_0; }
	inline int32_t* get_address_of__Flags_0() { return &____Flags_0; }
	inline void set__Flags_0(int32_t value)
	{
		____Flags_0 = value;
	}

	inline static int32_t get_offset_of_KeyContainerName_1() { return static_cast<int32_t>(offsetof(CspParameters_t906534246, ___KeyContainerName_1)); }
	inline String_t* get_KeyContainerName_1() const { return ___KeyContainerName_1; }
	inline String_t** get_address_of_KeyContainerName_1() { return &___KeyContainerName_1; }
	inline void set_KeyContainerName_1(String_t* value)
	{
		___KeyContainerName_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeyContainerName_1), value);
	}

	inline static int32_t get_offset_of_KeyNumber_2() { return static_cast<int32_t>(offsetof(CspParameters_t906534246, ___KeyNumber_2)); }
	inline int32_t get_KeyNumber_2() const { return ___KeyNumber_2; }
	inline int32_t* get_address_of_KeyNumber_2() { return &___KeyNumber_2; }
	inline void set_KeyNumber_2(int32_t value)
	{
		___KeyNumber_2 = value;
	}

	inline static int32_t get_offset_of_ProviderName_3() { return static_cast<int32_t>(offsetof(CspParameters_t906534246, ___ProviderName_3)); }
	inline String_t* get_ProviderName_3() const { return ___ProviderName_3; }
	inline String_t** get_address_of_ProviderName_3() { return &___ProviderName_3; }
	inline void set_ProviderName_3(String_t* value)
	{
		___ProviderName_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_3), value);
	}

	inline static int32_t get_offset_of_ProviderType_4() { return static_cast<int32_t>(offsetof(CspParameters_t906534246, ___ProviderType_4)); }
	inline int32_t get_ProviderType_4() const { return ___ProviderType_4; }
	inline int32_t* get_address_of_ProviderType_4() { return &___ProviderType_4; }
	inline void set_ProviderType_4(int32_t value)
	{
		___ProviderType_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(CspParameters_t906534246, ____password_5)); }
	inline SecureString_t2290931091 * get__password_5() const { return ____password_5; }
	inline SecureString_t2290931091 ** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(SecureString_t2290931091 * value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__windowHandle_6() { return static_cast<int32_t>(offsetof(CspParameters_t906534246, ____windowHandle_6)); }
	inline IntPtr_t get__windowHandle_6() const { return ____windowHandle_6; }
	inline IntPtr_t* get_address_of__windowHandle_6() { return &____windowHandle_6; }
	inline void set__windowHandle_6(IntPtr_t value)
	{
		____windowHandle_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPARAMETERS_T906534246_H
#ifndef STREAMINGCONTEXT_T3663188928_H
#define STREAMINGCONTEXT_T3663188928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3663188928 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3663188928, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3663188928, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3663188928_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3663188928_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3663188928_H
#ifndef CRYPTOKEYSECURITY_T3995316160_H
#define CRYPTOKEYSECURITY_T3995316160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AccessControl.CryptoKeySecurity
struct  CryptoKeySecurity_t3995316160  : public NativeObjectSecurity_t2987970055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOKEYSECURITY_T3995316160_H
#ifndef SYMMETRICALGORITHM_T96761379_H
#define SYMMETRICALGORITHM_T96761379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t96761379  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t3665519352* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t3665519352* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t2776148640* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2776148640* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t96761379, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t96761379, ___IVValue_1)); }
	inline ByteU5BU5D_t3665519352* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t3665519352** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t3665519352* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t96761379, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t96761379, ___KeyValue_3)); }
	inline ByteU5BU5D_t3665519352* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t3665519352** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t3665519352* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t96761379, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t2776148640* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t2776148640** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t2776148640* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t96761379, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t2776148640* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t2776148640** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t2776148640* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t96761379, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t96761379, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t96761379, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t96761379, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T96761379_H
#ifndef SERIALIZATIONOBJECTMANAGER_T3404539104_H
#define SERIALIZATIONOBJECTMANAGER_T3404539104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationObjectManager
struct  SerializationObjectManager_t3404539104  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.SerializationObjectManager::context
	StreamingContext_t3663188928  ___context_0;
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationObjectManager::seen
	Hashtable_t1289739904 * ___seen_1;
	// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler System.Runtime.Serialization.SerializationObjectManager::callbacks
	CallbackHandler_t2784069324 * ___callbacks_2;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t3404539104, ___context_0)); }
	inline StreamingContext_t3663188928  get_context_0() const { return ___context_0; }
	inline StreamingContext_t3663188928 * get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(StreamingContext_t3663188928  value)
	{
		___context_0 = value;
	}

	inline static int32_t get_offset_of_seen_1() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t3404539104, ___seen_1)); }
	inline Hashtable_t1289739904 * get_seen_1() const { return ___seen_1; }
	inline Hashtable_t1289739904 ** get_address_of_seen_1() { return &___seen_1; }
	inline void set_seen_1(Hashtable_t1289739904 * value)
	{
		___seen_1 = value;
		Il2CppCodeGenWriteBarrier((&___seen_1), value);
	}

	inline static int32_t get_offset_of_callbacks_2() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t3404539104, ___callbacks_2)); }
	inline CallbackHandler_t2784069324 * get_callbacks_2() const { return ___callbacks_2; }
	inline CallbackHandler_t2784069324 ** get_address_of_callbacks_2() { return &___callbacks_2; }
	inline void set_callbacks_2(CallbackHandler_t2784069324 * value)
	{
		___callbacks_2 = value;
		Il2CppCodeGenWriteBarrier((&___callbacks_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONOBJECTMANAGER_T3404539104_H
#ifndef CALLBACKHANDLER_T2784069324_H
#define CALLBACKHANDLER_T2784069324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct  CallbackHandler_t2784069324  : public MulticastDelegate_t3875463140
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKHANDLER_T2784069324_H
#ifndef OBJECTREADER_T1174560263_H
#define OBJECTREADER_T1174560263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct  ObjectReader_t1174560263  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectReader::_surrogateSelector
	RuntimeObject* ____surrogateSelector_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectReader::_context
	StreamingContext_t3663188928  ____context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.ObjectReader::_binder
	SerializationBinder_t3692103884 * ____binder_2;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.ObjectReader::_filterLevel
	int32_t ____filterLevel_3;
	// System.Runtime.Serialization.ObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectReader::_manager
	ObjectManager_t4268970529 * ____manager_4;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_registeredAssemblies
	Hashtable_t1289739904 * ____registeredAssemblies_5;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_typeMetadataCache
	Hashtable_t1289739904 * ____typeMetadataCache_6;
	// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObject
	RuntimeObject * ____lastObject_7;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObjectID
	int64_t ____lastObjectID_8;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_rootObjectID
	int64_t ____rootObjectID_9;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectReader::arrayBuffer
	ByteU5BU5D_t3665519352* ___arrayBuffer_10;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader::ArrayBufferLength
	int32_t ___ArrayBufferLength_11;

public:
	inline static int32_t get_offset_of__surrogateSelector_0() { return static_cast<int32_t>(offsetof(ObjectReader_t1174560263, ____surrogateSelector_0)); }
	inline RuntimeObject* get__surrogateSelector_0() const { return ____surrogateSelector_0; }
	inline RuntimeObject** get_address_of__surrogateSelector_0() { return &____surrogateSelector_0; }
	inline void set__surrogateSelector_0(RuntimeObject* value)
	{
		____surrogateSelector_0 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateSelector_0), value);
	}

	inline static int32_t get_offset_of__context_1() { return static_cast<int32_t>(offsetof(ObjectReader_t1174560263, ____context_1)); }
	inline StreamingContext_t3663188928  get__context_1() const { return ____context_1; }
	inline StreamingContext_t3663188928 * get_address_of__context_1() { return &____context_1; }
	inline void set__context_1(StreamingContext_t3663188928  value)
	{
		____context_1 = value;
	}

	inline static int32_t get_offset_of__binder_2() { return static_cast<int32_t>(offsetof(ObjectReader_t1174560263, ____binder_2)); }
	inline SerializationBinder_t3692103884 * get__binder_2() const { return ____binder_2; }
	inline SerializationBinder_t3692103884 ** get_address_of__binder_2() { return &____binder_2; }
	inline void set__binder_2(SerializationBinder_t3692103884 * value)
	{
		____binder_2 = value;
		Il2CppCodeGenWriteBarrier((&____binder_2), value);
	}

	inline static int32_t get_offset_of__filterLevel_3() { return static_cast<int32_t>(offsetof(ObjectReader_t1174560263, ____filterLevel_3)); }
	inline int32_t get__filterLevel_3() const { return ____filterLevel_3; }
	inline int32_t* get_address_of__filterLevel_3() { return &____filterLevel_3; }
	inline void set__filterLevel_3(int32_t value)
	{
		____filterLevel_3 = value;
	}

	inline static int32_t get_offset_of__manager_4() { return static_cast<int32_t>(offsetof(ObjectReader_t1174560263, ____manager_4)); }
	inline ObjectManager_t4268970529 * get__manager_4() const { return ____manager_4; }
	inline ObjectManager_t4268970529 ** get_address_of__manager_4() { return &____manager_4; }
	inline void set__manager_4(ObjectManager_t4268970529 * value)
	{
		____manager_4 = value;
		Il2CppCodeGenWriteBarrier((&____manager_4), value);
	}

	inline static int32_t get_offset_of__registeredAssemblies_5() { return static_cast<int32_t>(offsetof(ObjectReader_t1174560263, ____registeredAssemblies_5)); }
	inline Hashtable_t1289739904 * get__registeredAssemblies_5() const { return ____registeredAssemblies_5; }
	inline Hashtable_t1289739904 ** get_address_of__registeredAssemblies_5() { return &____registeredAssemblies_5; }
	inline void set__registeredAssemblies_5(Hashtable_t1289739904 * value)
	{
		____registeredAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&____registeredAssemblies_5), value);
	}

	inline static int32_t get_offset_of__typeMetadataCache_6() { return static_cast<int32_t>(offsetof(ObjectReader_t1174560263, ____typeMetadataCache_6)); }
	inline Hashtable_t1289739904 * get__typeMetadataCache_6() const { return ____typeMetadataCache_6; }
	inline Hashtable_t1289739904 ** get_address_of__typeMetadataCache_6() { return &____typeMetadataCache_6; }
	inline void set__typeMetadataCache_6(Hashtable_t1289739904 * value)
	{
		____typeMetadataCache_6 = value;
		Il2CppCodeGenWriteBarrier((&____typeMetadataCache_6), value);
	}

	inline static int32_t get_offset_of__lastObject_7() { return static_cast<int32_t>(offsetof(ObjectReader_t1174560263, ____lastObject_7)); }
	inline RuntimeObject * get__lastObject_7() const { return ____lastObject_7; }
	inline RuntimeObject ** get_address_of__lastObject_7() { return &____lastObject_7; }
	inline void set__lastObject_7(RuntimeObject * value)
	{
		____lastObject_7 = value;
		Il2CppCodeGenWriteBarrier((&____lastObject_7), value);
	}

	inline static int32_t get_offset_of__lastObjectID_8() { return static_cast<int32_t>(offsetof(ObjectReader_t1174560263, ____lastObjectID_8)); }
	inline int64_t get__lastObjectID_8() const { return ____lastObjectID_8; }
	inline int64_t* get_address_of__lastObjectID_8() { return &____lastObjectID_8; }
	inline void set__lastObjectID_8(int64_t value)
	{
		____lastObjectID_8 = value;
	}

	inline static int32_t get_offset_of__rootObjectID_9() { return static_cast<int32_t>(offsetof(ObjectReader_t1174560263, ____rootObjectID_9)); }
	inline int64_t get__rootObjectID_9() const { return ____rootObjectID_9; }
	inline int64_t* get_address_of__rootObjectID_9() { return &____rootObjectID_9; }
	inline void set__rootObjectID_9(int64_t value)
	{
		____rootObjectID_9 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_10() { return static_cast<int32_t>(offsetof(ObjectReader_t1174560263, ___arrayBuffer_10)); }
	inline ByteU5BU5D_t3665519352* get_arrayBuffer_10() const { return ___arrayBuffer_10; }
	inline ByteU5BU5D_t3665519352** get_address_of_arrayBuffer_10() { return &___arrayBuffer_10; }
	inline void set_arrayBuffer_10(ByteU5BU5D_t3665519352* value)
	{
		___arrayBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBuffer_10), value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_11() { return static_cast<int32_t>(offsetof(ObjectReader_t1174560263, ___ArrayBufferLength_11)); }
	inline int32_t get_ArrayBufferLength_11() const { return ___ArrayBufferLength_11; }
	inline int32_t* get_address_of_ArrayBufferLength_11() { return &___ArrayBufferLength_11; }
	inline void set_ArrayBufferLength_11(int32_t value)
	{
		___ArrayBufferLength_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREADER_T1174560263_H
#ifndef DES_T1761787176_H
#define DES_T1761787176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t1761787176  : public SymmetricAlgorithm_t96761379
{
public:

public:
};

struct DES_t1761787176_StaticFields
{
public:
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t3665519353* ___weakKeys_11;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t3665519353* ___semiWeakKeys_12;

public:
	inline static int32_t get_offset_of_weakKeys_11() { return static_cast<int32_t>(offsetof(DES_t1761787176_StaticFields, ___weakKeys_11)); }
	inline ByteU5BU2CU5D_t3665519353* get_weakKeys_11() const { return ___weakKeys_11; }
	inline ByteU5BU2CU5D_t3665519353** get_address_of_weakKeys_11() { return &___weakKeys_11; }
	inline void set_weakKeys_11(ByteU5BU2CU5D_t3665519353* value)
	{
		___weakKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&___weakKeys_11), value);
	}

	inline static int32_t get_offset_of_semiWeakKeys_12() { return static_cast<int32_t>(offsetof(DES_t1761787176_StaticFields, ___semiWeakKeys_12)); }
	inline ByteU5BU2CU5D_t3665519353* get_semiWeakKeys_12() const { return ___semiWeakKeys_12; }
	inline ByteU5BU2CU5D_t3665519353** get_address_of_semiWeakKeys_12() { return &___semiWeakKeys_12; }
	inline void set_semiWeakKeys_12(ByteU5BU2CU5D_t3665519353* value)
	{
		___semiWeakKeys_12 = value;
		Il2CppCodeGenWriteBarrier((&___semiWeakKeys_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T1761787176_H
#ifndef OBJECTWRITER_T3377471858_H
#define OBJECTWRITER_T3377471858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct  ObjectWriter_t3377471858  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectIDGenerator System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_idGenerator
	ObjectIDGenerator_t462709064 * ____idGenerator_0;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedMetadata
	Hashtable_t1289739904 * ____cachedMetadata_1;
	// System.Collections.Queue System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_pendingObjects
	Queue_t3290476453 * ____pendingObjects_2;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyCache
	Hashtable_t1289739904 * ____assemblyCache_3;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_surrogateSelector
	RuntimeObject* ____surrogateSelector_7;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_context
	StreamingContext_t3663188928  ____context_8;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyFormat
	int32_t ____assemblyFormat_9;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_typeFormat
	int32_t ____typeFormat_10;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectWriter::arrayBuffer
	ByteU5BU5D_t3665519352* ___arrayBuffer_11;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::ArrayBufferLength
	int32_t ___ArrayBufferLength_12;
	// System.Runtime.Serialization.SerializationObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_manager
	SerializationObjectManager_t3404539104 * ____manager_13;

public:
	inline static int32_t get_offset_of__idGenerator_0() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858, ____idGenerator_0)); }
	inline ObjectIDGenerator_t462709064 * get__idGenerator_0() const { return ____idGenerator_0; }
	inline ObjectIDGenerator_t462709064 ** get_address_of__idGenerator_0() { return &____idGenerator_0; }
	inline void set__idGenerator_0(ObjectIDGenerator_t462709064 * value)
	{
		____idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier((&____idGenerator_0), value);
	}

	inline static int32_t get_offset_of__cachedMetadata_1() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858, ____cachedMetadata_1)); }
	inline Hashtable_t1289739904 * get__cachedMetadata_1() const { return ____cachedMetadata_1; }
	inline Hashtable_t1289739904 ** get_address_of__cachedMetadata_1() { return &____cachedMetadata_1; }
	inline void set__cachedMetadata_1(Hashtable_t1289739904 * value)
	{
		____cachedMetadata_1 = value;
		Il2CppCodeGenWriteBarrier((&____cachedMetadata_1), value);
	}

	inline static int32_t get_offset_of__pendingObjects_2() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858, ____pendingObjects_2)); }
	inline Queue_t3290476453 * get__pendingObjects_2() const { return ____pendingObjects_2; }
	inline Queue_t3290476453 ** get_address_of__pendingObjects_2() { return &____pendingObjects_2; }
	inline void set__pendingObjects_2(Queue_t3290476453 * value)
	{
		____pendingObjects_2 = value;
		Il2CppCodeGenWriteBarrier((&____pendingObjects_2), value);
	}

	inline static int32_t get_offset_of__assemblyCache_3() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858, ____assemblyCache_3)); }
	inline Hashtable_t1289739904 * get__assemblyCache_3() const { return ____assemblyCache_3; }
	inline Hashtable_t1289739904 ** get_address_of__assemblyCache_3() { return &____assemblyCache_3; }
	inline void set__assemblyCache_3(Hashtable_t1289739904 * value)
	{
		____assemblyCache_3 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyCache_3), value);
	}

	inline static int32_t get_offset_of__surrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858, ____surrogateSelector_7)); }
	inline RuntimeObject* get__surrogateSelector_7() const { return ____surrogateSelector_7; }
	inline RuntimeObject** get_address_of__surrogateSelector_7() { return &____surrogateSelector_7; }
	inline void set__surrogateSelector_7(RuntimeObject* value)
	{
		____surrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateSelector_7), value);
	}

	inline static int32_t get_offset_of__context_8() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858, ____context_8)); }
	inline StreamingContext_t3663188928  get__context_8() const { return ____context_8; }
	inline StreamingContext_t3663188928 * get_address_of__context_8() { return &____context_8; }
	inline void set__context_8(StreamingContext_t3663188928  value)
	{
		____context_8 = value;
	}

	inline static int32_t get_offset_of__assemblyFormat_9() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858, ____assemblyFormat_9)); }
	inline int32_t get__assemblyFormat_9() const { return ____assemblyFormat_9; }
	inline int32_t* get_address_of__assemblyFormat_9() { return &____assemblyFormat_9; }
	inline void set__assemblyFormat_9(int32_t value)
	{
		____assemblyFormat_9 = value;
	}

	inline static int32_t get_offset_of__typeFormat_10() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858, ____typeFormat_10)); }
	inline int32_t get__typeFormat_10() const { return ____typeFormat_10; }
	inline int32_t* get_address_of__typeFormat_10() { return &____typeFormat_10; }
	inline void set__typeFormat_10(int32_t value)
	{
		____typeFormat_10 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_11() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858, ___arrayBuffer_11)); }
	inline ByteU5BU5D_t3665519352* get_arrayBuffer_11() const { return ___arrayBuffer_11; }
	inline ByteU5BU5D_t3665519352** get_address_of_arrayBuffer_11() { return &___arrayBuffer_11; }
	inline void set_arrayBuffer_11(ByteU5BU5D_t3665519352* value)
	{
		___arrayBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBuffer_11), value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_12() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858, ___ArrayBufferLength_12)); }
	inline int32_t get_ArrayBufferLength_12() const { return ___ArrayBufferLength_12; }
	inline int32_t* get_address_of_ArrayBufferLength_12() { return &___ArrayBufferLength_12; }
	inline void set_ArrayBufferLength_12(int32_t value)
	{
		___ArrayBufferLength_12 = value;
	}

	inline static int32_t get_offset_of__manager_13() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858, ____manager_13)); }
	inline SerializationObjectManager_t3404539104 * get__manager_13() const { return ____manager_13; }
	inline SerializationObjectManager_t3404539104 ** get_address_of__manager_13() { return &____manager_13; }
	inline void set__manager_13(SerializationObjectManager_t3404539104 * value)
	{
		____manager_13 = value;
		Il2CppCodeGenWriteBarrier((&____manager_13), value);
	}
};

struct ObjectWriter_t3377471858_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedTypes
	Hashtable_t1289739904 * ____cachedTypes_4;
	// System.Reflection.Assembly System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssembly
	Assembly_t1299114196 * ___CorlibAssembly_5;
	// System.String System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssemblyName
	String_t* ___CorlibAssemblyName_6;

public:
	inline static int32_t get_offset_of__cachedTypes_4() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858_StaticFields, ____cachedTypes_4)); }
	inline Hashtable_t1289739904 * get__cachedTypes_4() const { return ____cachedTypes_4; }
	inline Hashtable_t1289739904 ** get_address_of__cachedTypes_4() { return &____cachedTypes_4; }
	inline void set__cachedTypes_4(Hashtable_t1289739904 * value)
	{
		____cachedTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&____cachedTypes_4), value);
	}

	inline static int32_t get_offset_of_CorlibAssembly_5() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858_StaticFields, ___CorlibAssembly_5)); }
	inline Assembly_t1299114196 * get_CorlibAssembly_5() const { return ___CorlibAssembly_5; }
	inline Assembly_t1299114196 ** get_address_of_CorlibAssembly_5() { return &___CorlibAssembly_5; }
	inline void set_CorlibAssembly_5(Assembly_t1299114196 * value)
	{
		___CorlibAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___CorlibAssembly_5), value);
	}

	inline static int32_t get_offset_of_CorlibAssemblyName_6() { return static_cast<int32_t>(offsetof(ObjectWriter_t3377471858_StaticFields, ___CorlibAssemblyName_6)); }
	inline String_t* get_CorlibAssemblyName_6() const { return ___CorlibAssemblyName_6; }
	inline String_t** get_address_of_CorlibAssemblyName_6() { return &___CorlibAssemblyName_6; }
	inline void set_CorlibAssemblyName_6(String_t* value)
	{
		___CorlibAssemblyName_6 = value;
		Il2CppCodeGenWriteBarrier((&___CorlibAssemblyName_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTWRITER_T3377471858_H
#ifndef OBJECTMANAGER_T4268970529_H
#define OBJECTMANAGER_T4268970529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectManager
struct  ObjectManager_t4268970529  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_objectRecordChain
	ObjectRecord_t3283404462 * ____objectRecordChain_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_lastObjectRecord
	ObjectRecord_t3283404462 * ____lastObjectRecord_1;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_deserializedRecords
	ArrayList_t4142489098 * ____deserializedRecords_2;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_onDeserializedCallbackRecords
	ArrayList_t4142489098 * ____onDeserializedCallbackRecords_3;
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectManager::_objectRecords
	Hashtable_t1289739904 * ____objectRecords_4;
	// System.Boolean System.Runtime.Serialization.ObjectManager::_finalFixup
	bool ____finalFixup_5;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectManager::_selector
	RuntimeObject* ____selector_6;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.ObjectManager::_context
	StreamingContext_t3663188928  ____context_7;
	// System.Int32 System.Runtime.Serialization.ObjectManager::_registeredObjectsCount
	int32_t ____registeredObjectsCount_8;

public:
	inline static int32_t get_offset_of__objectRecordChain_0() { return static_cast<int32_t>(offsetof(ObjectManager_t4268970529, ____objectRecordChain_0)); }
	inline ObjectRecord_t3283404462 * get__objectRecordChain_0() const { return ____objectRecordChain_0; }
	inline ObjectRecord_t3283404462 ** get_address_of__objectRecordChain_0() { return &____objectRecordChain_0; }
	inline void set__objectRecordChain_0(ObjectRecord_t3283404462 * value)
	{
		____objectRecordChain_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecordChain_0), value);
	}

	inline static int32_t get_offset_of__lastObjectRecord_1() { return static_cast<int32_t>(offsetof(ObjectManager_t4268970529, ____lastObjectRecord_1)); }
	inline ObjectRecord_t3283404462 * get__lastObjectRecord_1() const { return ____lastObjectRecord_1; }
	inline ObjectRecord_t3283404462 ** get_address_of__lastObjectRecord_1() { return &____lastObjectRecord_1; }
	inline void set__lastObjectRecord_1(ObjectRecord_t3283404462 * value)
	{
		____lastObjectRecord_1 = value;
		Il2CppCodeGenWriteBarrier((&____lastObjectRecord_1), value);
	}

	inline static int32_t get_offset_of__deserializedRecords_2() { return static_cast<int32_t>(offsetof(ObjectManager_t4268970529, ____deserializedRecords_2)); }
	inline ArrayList_t4142489098 * get__deserializedRecords_2() const { return ____deserializedRecords_2; }
	inline ArrayList_t4142489098 ** get_address_of__deserializedRecords_2() { return &____deserializedRecords_2; }
	inline void set__deserializedRecords_2(ArrayList_t4142489098 * value)
	{
		____deserializedRecords_2 = value;
		Il2CppCodeGenWriteBarrier((&____deserializedRecords_2), value);
	}

	inline static int32_t get_offset_of__onDeserializedCallbackRecords_3() { return static_cast<int32_t>(offsetof(ObjectManager_t4268970529, ____onDeserializedCallbackRecords_3)); }
	inline ArrayList_t4142489098 * get__onDeserializedCallbackRecords_3() const { return ____onDeserializedCallbackRecords_3; }
	inline ArrayList_t4142489098 ** get_address_of__onDeserializedCallbackRecords_3() { return &____onDeserializedCallbackRecords_3; }
	inline void set__onDeserializedCallbackRecords_3(ArrayList_t4142489098 * value)
	{
		____onDeserializedCallbackRecords_3 = value;
		Il2CppCodeGenWriteBarrier((&____onDeserializedCallbackRecords_3), value);
	}

	inline static int32_t get_offset_of__objectRecords_4() { return static_cast<int32_t>(offsetof(ObjectManager_t4268970529, ____objectRecords_4)); }
	inline Hashtable_t1289739904 * get__objectRecords_4() const { return ____objectRecords_4; }
	inline Hashtable_t1289739904 ** get_address_of__objectRecords_4() { return &____objectRecords_4; }
	inline void set__objectRecords_4(Hashtable_t1289739904 * value)
	{
		____objectRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecords_4), value);
	}

	inline static int32_t get_offset_of__finalFixup_5() { return static_cast<int32_t>(offsetof(ObjectManager_t4268970529, ____finalFixup_5)); }
	inline bool get__finalFixup_5() const { return ____finalFixup_5; }
	inline bool* get_address_of__finalFixup_5() { return &____finalFixup_5; }
	inline void set__finalFixup_5(bool value)
	{
		____finalFixup_5 = value;
	}

	inline static int32_t get_offset_of__selector_6() { return static_cast<int32_t>(offsetof(ObjectManager_t4268970529, ____selector_6)); }
	inline RuntimeObject* get__selector_6() const { return ____selector_6; }
	inline RuntimeObject** get_address_of__selector_6() { return &____selector_6; }
	inline void set__selector_6(RuntimeObject* value)
	{
		____selector_6 = value;
		Il2CppCodeGenWriteBarrier((&____selector_6), value);
	}

	inline static int32_t get_offset_of__context_7() { return static_cast<int32_t>(offsetof(ObjectManager_t4268970529, ____context_7)); }
	inline StreamingContext_t3663188928  get__context_7() const { return ____context_7; }
	inline StreamingContext_t3663188928 * get_address_of__context_7() { return &____context_7; }
	inline void set__context_7(StreamingContext_t3663188928  value)
	{
		____context_7 = value;
	}

	inline static int32_t get_offset_of__registeredObjectsCount_8() { return static_cast<int32_t>(offsetof(ObjectManager_t4268970529, ____registeredObjectsCount_8)); }
	inline int32_t get__registeredObjectsCount_8() const { return ____registeredObjectsCount_8; }
	inline int32_t* get_address_of__registeredObjectsCount_8() { return &____registeredObjectsCount_8; }
	inline void set__registeredObjectsCount_8(int32_t value)
	{
		____registeredObjectsCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTMANAGER_T4268970529_H
#ifndef BINARYFORMATTER_T9934886_H
#define BINARYFORMATTER_T9934886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t9934886  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::assembly_format
	int32_t ___assembly_format_0;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::binder
	SerializationBinder_t3692103884 * ___binder_1;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::context
	StreamingContext_t3663188928  ___context_2;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::surrogate_selector
	RuntimeObject* ___surrogate_selector_3;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::type_format
	int32_t ___type_format_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::filter_level
	int32_t ___filter_level_5;

public:
	inline static int32_t get_offset_of_assembly_format_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t9934886, ___assembly_format_0)); }
	inline int32_t get_assembly_format_0() const { return ___assembly_format_0; }
	inline int32_t* get_address_of_assembly_format_0() { return &___assembly_format_0; }
	inline void set_assembly_format_0(int32_t value)
	{
		___assembly_format_0 = value;
	}

	inline static int32_t get_offset_of_binder_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t9934886, ___binder_1)); }
	inline SerializationBinder_t3692103884 * get_binder_1() const { return ___binder_1; }
	inline SerializationBinder_t3692103884 ** get_address_of_binder_1() { return &___binder_1; }
	inline void set_binder_1(SerializationBinder_t3692103884 * value)
	{
		___binder_1 = value;
		Il2CppCodeGenWriteBarrier((&___binder_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t9934886, ___context_2)); }
	inline StreamingContext_t3663188928  get_context_2() const { return ___context_2; }
	inline StreamingContext_t3663188928 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(StreamingContext_t3663188928  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_surrogate_selector_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t9934886, ___surrogate_selector_3)); }
	inline RuntimeObject* get_surrogate_selector_3() const { return ___surrogate_selector_3; }
	inline RuntimeObject** get_address_of_surrogate_selector_3() { return &___surrogate_selector_3; }
	inline void set_surrogate_selector_3(RuntimeObject* value)
	{
		___surrogate_selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___surrogate_selector_3), value);
	}

	inline static int32_t get_offset_of_type_format_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t9934886, ___type_format_4)); }
	inline int32_t get_type_format_4() const { return ___type_format_4; }
	inline int32_t* get_address_of_type_format_4() { return &___type_format_4; }
	inline void set_type_format_4(int32_t value)
	{
		___type_format_4 = value;
	}

	inline static int32_t get_offset_of_filter_level_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t9934886, ___filter_level_5)); }
	inline int32_t get_filter_level_5() const { return ___filter_level_5; }
	inline int32_t* get_address_of_filter_level_5() { return &___filter_level_5; }
	inline void set_filter_level_5(int32_t value)
	{
		___filter_level_5 = value;
	}
};

struct BinaryFormatter_t9934886_StaticFields
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::<DefaultSurrogateSelector>k__BackingField
	RuntimeObject* ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t9934886_StaticFields, ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() const { return ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return &___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline void set_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CDefaultSurrogateSelectorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultSurrogateSelectorU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYFORMATTER_T9934886_H
#ifndef DESCRYPTOSERVICEPROVIDER_T925779919_H
#define DESCRYPTOSERVICEPROVIDER_T925779919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESCryptoServiceProvider
struct  DESCryptoServiceProvider_t925779919  : public DES_t1761787176
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRYPTOSERVICEPROVIDER_T925779919_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize600 = { sizeof (SingleCallIdentity_t696546438), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize601 = { sizeof (SoapServices_t2030952849), -1, sizeof(SoapServices_t2030952849_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable601[5] = 
{
	SoapServices_t2030952849_StaticFields::get_offset_of__xmlTypes_0(),
	SoapServices_t2030952849_StaticFields::get_offset_of__xmlElements_1(),
	SoapServices_t2030952849_StaticFields::get_offset_of__soapActions_2(),
	SoapServices_t2030952849_StaticFields::get_offset_of__soapActionsMethods_3(),
	SoapServices_t2030952849_StaticFields::get_offset_of__typeInfos_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize602 = { sizeof (TypeInfo_t481279527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable602[2] = 
{
	TypeInfo_t481279527::get_offset_of_Attributes_0(),
	TypeInfo_t481279527::get_offset_of_Elements_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize603 = { sizeof (TypeEntry_t1996212644), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable603[2] = 
{
	TypeEntry_t1996212644::get_offset_of_assembly_name_0(),
	TypeEntry_t1996212644::get_offset_of_type_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize604 = { sizeof (TypeInfo_t2921182686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable604[3] = 
{
	TypeInfo_t2921182686::get_offset_of_serverType_0(),
	TypeInfo_t2921182686::get_offset_of_serverHierarchy_1(),
	TypeInfo_t2921182686::get_offset_of_interfacesImplemented_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize605 = { sizeof (WellKnownClientTypeEntry_t1258127316), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable605[3] = 
{
	WellKnownClientTypeEntry_t1258127316::get_offset_of_obj_type_2(),
	WellKnownClientTypeEntry_t1258127316::get_offset_of_obj_url_3(),
	WellKnownClientTypeEntry_t1258127316::get_offset_of_app_url_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize606 = { sizeof (WellKnownObjectMode_t224505361)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable606[3] = 
{
	WellKnownObjectMode_t224505361::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize607 = { sizeof (WellKnownServiceTypeEntry_t3807734783), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable607[3] = 
{
	WellKnownServiceTypeEntry_t3807734783::get_offset_of_obj_type_2(),
	WellKnownServiceTypeEntry_t3807734783::get_offset_of_obj_uri_3(),
	WellKnownServiceTypeEntry_t3807734783::get_offset_of_obj_mode_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize608 = { sizeof (BinaryCommon_t2625320136), -1, sizeof(BinaryCommon_t2625320136_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable608[4] = 
{
	BinaryCommon_t2625320136_StaticFields::get_offset_of_BinaryHeader_0(),
	BinaryCommon_t2625320136_StaticFields::get_offset_of__typeCodesToType_1(),
	BinaryCommon_t2625320136_StaticFields::get_offset_of__typeCodeMap_2(),
	BinaryCommon_t2625320136_StaticFields::get_offset_of_UseReflectionSerialization_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize609 = { sizeof (BinaryElement_t2285121910)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable609[24] = 
{
	BinaryElement_t2285121910::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize610 = { sizeof (TypeTag_t1650461356)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable610[9] = 
{
	TypeTag_t1650461356::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize611 = { sizeof (MethodFlags_t2150709283)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable611[11] = 
{
	MethodFlags_t2150709283::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize612 = { sizeof (ReturnTypeTag_t1519039310)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable612[5] = 
{
	ReturnTypeTag_t1519039310::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize613 = { sizeof (BinaryFormatter_t9934886), -1, sizeof(BinaryFormatter_t9934886_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable613[7] = 
{
	BinaryFormatter_t9934886::get_offset_of_assembly_format_0(),
	BinaryFormatter_t9934886::get_offset_of_binder_1(),
	BinaryFormatter_t9934886::get_offset_of_context_2(),
	BinaryFormatter_t9934886::get_offset_of_surrogate_selector_3(),
	BinaryFormatter_t9934886::get_offset_of_type_format_4(),
	BinaryFormatter_t9934886::get_offset_of_filter_level_5(),
	BinaryFormatter_t9934886_StaticFields::get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize614 = { sizeof (CodeGenerator_t1456266155), -1, sizeof(CodeGenerator_t1456266155_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable614[2] = 
{
	CodeGenerator_t1456266155_StaticFields::get_offset_of_monitor_0(),
	CodeGenerator_t1456266155_StaticFields::get_offset_of__module_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize615 = { sizeof (MessageFormatter_t337188578), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize616 = { sizeof (ObjectReader_t1174560263), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable616[12] = 
{
	ObjectReader_t1174560263::get_offset_of__surrogateSelector_0(),
	ObjectReader_t1174560263::get_offset_of__context_1(),
	ObjectReader_t1174560263::get_offset_of__binder_2(),
	ObjectReader_t1174560263::get_offset_of__filterLevel_3(),
	ObjectReader_t1174560263::get_offset_of__manager_4(),
	ObjectReader_t1174560263::get_offset_of__registeredAssemblies_5(),
	ObjectReader_t1174560263::get_offset_of__typeMetadataCache_6(),
	ObjectReader_t1174560263::get_offset_of__lastObject_7(),
	ObjectReader_t1174560263::get_offset_of__lastObjectID_8(),
	ObjectReader_t1174560263::get_offset_of__rootObjectID_9(),
	ObjectReader_t1174560263::get_offset_of_arrayBuffer_10(),
	ObjectReader_t1174560263::get_offset_of_ArrayBufferLength_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize617 = { sizeof (TypeMetadata_t2855572239), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable617[6] = 
{
	TypeMetadata_t2855572239::get_offset_of_Type_0(),
	TypeMetadata_t2855572239::get_offset_of_MemberTypes_1(),
	TypeMetadata_t2855572239::get_offset_of_MemberNames_2(),
	TypeMetadata_t2855572239::get_offset_of_MemberInfos_3(),
	TypeMetadata_t2855572239::get_offset_of_FieldCount_4(),
	TypeMetadata_t2855572239::get_offset_of_NeedsSerializationInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize618 = { sizeof (ArrayNullFiller_t2281921651), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable618[1] = 
{
	ArrayNullFiller_t2281921651::get_offset_of_NullCount_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize619 = { sizeof (TypeMetadata_t1730811349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable619[2] = 
{
	TypeMetadata_t1730811349::get_offset_of_TypeAssemblyName_0(),
	TypeMetadata_t1730811349::get_offset_of_InstanceTypeName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize620 = { sizeof (ClrTypeMetadata_t930687302), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable620[1] = 
{
	ClrTypeMetadata_t930687302::get_offset_of_InstanceType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize621 = { sizeof (SerializableTypeMetadata_t2624628685), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable621[2] = 
{
	SerializableTypeMetadata_t2624628685::get_offset_of_types_2(),
	SerializableTypeMetadata_t2624628685::get_offset_of_names_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize622 = { sizeof (MemberTypeMetadata_t3262803999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable622[1] = 
{
	MemberTypeMetadata_t3262803999::get_offset_of_members_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize623 = { sizeof (ObjectWriter_t3377471858), -1, sizeof(ObjectWriter_t3377471858_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable623[14] = 
{
	ObjectWriter_t3377471858::get_offset_of__idGenerator_0(),
	ObjectWriter_t3377471858::get_offset_of__cachedMetadata_1(),
	ObjectWriter_t3377471858::get_offset_of__pendingObjects_2(),
	ObjectWriter_t3377471858::get_offset_of__assemblyCache_3(),
	ObjectWriter_t3377471858_StaticFields::get_offset_of__cachedTypes_4(),
	ObjectWriter_t3377471858_StaticFields::get_offset_of_CorlibAssembly_5(),
	ObjectWriter_t3377471858_StaticFields::get_offset_of_CorlibAssemblyName_6(),
	ObjectWriter_t3377471858::get_offset_of__surrogateSelector_7(),
	ObjectWriter_t3377471858::get_offset_of__context_8(),
	ObjectWriter_t3377471858::get_offset_of__assemblyFormat_9(),
	ObjectWriter_t3377471858::get_offset_of__typeFormat_10(),
	ObjectWriter_t3377471858::get_offset_of_arrayBuffer_11(),
	ObjectWriter_t3377471858::get_offset_of_ArrayBufferLength_12(),
	ObjectWriter_t3377471858::get_offset_of__manager_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize624 = { sizeof (MetadataReference_t1719965873), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable624[2] = 
{
	MetadataReference_t1719965873::get_offset_of_Metadata_0(),
	MetadataReference_t1719965873::get_offset_of_ObjectID_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize625 = { sizeof (FormatterAssemblyStyle_t2846881124)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable625[3] = 
{
	FormatterAssemblyStyle_t2846881124::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize626 = { sizeof (FormatterTypeStyle_t2867509982)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable626[4] = 
{
	FormatterTypeStyle_t2867509982::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize627 = { sizeof (TypeFilterLevel_t3052082381)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable627[3] = 
{
	TypeFilterLevel_t3052082381::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize628 = { sizeof (FormatterConverter_t2694330061), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize629 = { sizeof (FormatterServices_t179573829), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize630 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize631 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize632 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize633 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize634 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize635 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize636 = { sizeof (ObjectIDGenerator_t462709064), -1, sizeof(ObjectIDGenerator_t462709064_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable636[3] = 
{
	ObjectIDGenerator_t462709064::get_offset_of_table_0(),
	ObjectIDGenerator_t462709064::get_offset_of_current_1(),
	ObjectIDGenerator_t462709064_StaticFields::get_offset_of_comparer_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize637 = { sizeof (InstanceComparer_t751685324), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize638 = { sizeof (ObjectManager_t4268970529), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable638[9] = 
{
	ObjectManager_t4268970529::get_offset_of__objectRecordChain_0(),
	ObjectManager_t4268970529::get_offset_of__lastObjectRecord_1(),
	ObjectManager_t4268970529::get_offset_of__deserializedRecords_2(),
	ObjectManager_t4268970529::get_offset_of__onDeserializedCallbackRecords_3(),
	ObjectManager_t4268970529::get_offset_of__objectRecords_4(),
	ObjectManager_t4268970529::get_offset_of__finalFixup_5(),
	ObjectManager_t4268970529::get_offset_of__selector_6(),
	ObjectManager_t4268970529::get_offset_of__context_7(),
	ObjectManager_t4268970529::get_offset_of__registeredObjectsCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize639 = { sizeof (BaseFixupRecord_t4059959167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable639[4] = 
{
	BaseFixupRecord_t4059959167::get_offset_of_ObjectToBeFixed_0(),
	BaseFixupRecord_t4059959167::get_offset_of_ObjectRequired_1(),
	BaseFixupRecord_t4059959167::get_offset_of_NextSameContainer_2(),
	BaseFixupRecord_t4059959167::get_offset_of_NextSameRequired_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize640 = { sizeof (ArrayFixupRecord_t1543027764), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable640[1] = 
{
	ArrayFixupRecord_t1543027764::get_offset_of__index_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize641 = { sizeof (MultiArrayFixupRecord_t217190321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable641[1] = 
{
	MultiArrayFixupRecord_t217190321::get_offset_of__indices_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize642 = { sizeof (FixupRecord_t4219079372), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable642[1] = 
{
	FixupRecord_t4219079372::get_offset_of__member_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize643 = { sizeof (DelayedFixupRecord_t4131535802), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable643[1] = 
{
	DelayedFixupRecord_t4131535802::get_offset_of__memberName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize644 = { sizeof (ObjectRecordStatus_t3297932842)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable644[5] = 
{
	ObjectRecordStatus_t3297932842::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize645 = { sizeof (ObjectRecord_t3283404462), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable645[13] = 
{
	ObjectRecord_t3283404462::get_offset_of_Status_0(),
	ObjectRecord_t3283404462::get_offset_of_OriginalObject_1(),
	ObjectRecord_t3283404462::get_offset_of_ObjectInstance_2(),
	ObjectRecord_t3283404462::get_offset_of_ObjectID_3(),
	ObjectRecord_t3283404462::get_offset_of_Info_4(),
	ObjectRecord_t3283404462::get_offset_of_IdOfContainingObj_5(),
	ObjectRecord_t3283404462::get_offset_of_Surrogate_6(),
	ObjectRecord_t3283404462::get_offset_of_SurrogateSelector_7(),
	ObjectRecord_t3283404462::get_offset_of_Member_8(),
	ObjectRecord_t3283404462::get_offset_of_ArrayIndex_9(),
	ObjectRecord_t3283404462::get_offset_of_FixupChainAsContainer_10(),
	ObjectRecord_t3283404462::get_offset_of_FixupChainAsRequired_11(),
	ObjectRecord_t3283404462::get_offset_of_Next_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize646 = { sizeof (OnDeserializedAttribute_t1753592802), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize647 = { sizeof (OnDeserializingAttribute_t4280951491), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize648 = { sizeof (OnSerializedAttribute_t2744071723), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize649 = { sizeof (OnSerializingAttribute_t1079949470), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize650 = { sizeof (SerializationBinder_t3692103884), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize651 = { sizeof (SerializationCallbacks_t149790674), -1, sizeof(SerializationCallbacks_t149790674_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable651[6] = 
{
	SerializationCallbacks_t149790674::get_offset_of_onSerializingList_0(),
	SerializationCallbacks_t149790674::get_offset_of_onSerializedList_1(),
	SerializationCallbacks_t149790674::get_offset_of_onDeserializingList_2(),
	SerializationCallbacks_t149790674::get_offset_of_onDeserializedList_3(),
	SerializationCallbacks_t149790674_StaticFields::get_offset_of_cache_4(),
	SerializationCallbacks_t149790674_StaticFields::get_offset_of_cache_lock_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize652 = { sizeof (CallbackHandler_t2784069324), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize653 = { sizeof (SerializationEntry_t1470328600)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable653[3] = 
{
	SerializationEntry_t1470328600::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t1470328600::get_offset_of_objectType_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t1470328600::get_offset_of_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize654 = { sizeof (SerializationException_t76123896), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize655 = { sizeof (SerializationInfo_t3327250702), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable655[5] = 
{
	SerializationInfo_t3327250702::get_offset_of_serialized_0(),
	SerializationInfo_t3327250702::get_offset_of_values_1(),
	SerializationInfo_t3327250702::get_offset_of_assemblyName_2(),
	SerializationInfo_t3327250702::get_offset_of_fullTypeName_3(),
	SerializationInfo_t3327250702::get_offset_of_converter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize656 = { sizeof (SerializationInfoEnumerator_t641498216), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable656[1] = 
{
	SerializationInfoEnumerator_t641498216::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize657 = { sizeof (SerializationObjectManager_t3404539104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable657[3] = 
{
	SerializationObjectManager_t3404539104::get_offset_of_context_0(),
	SerializationObjectManager_t3404539104::get_offset_of_seen_1(),
	SerializationObjectManager_t3404539104::get_offset_of_callbacks_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize658 = { sizeof (U3CRegisterObjectU3Ec__AnonStorey3_t2293998896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable658[2] = 
{
	U3CRegisterObjectU3Ec__AnonStorey3_t2293998896::get_offset_of_sc_0(),
	U3CRegisterObjectU3Ec__AnonStorey3_t2293998896::get_offset_of_obj_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize659 = { sizeof (StreamingContext_t3663188928)+ sizeof (RuntimeObject), sizeof(StreamingContext_t3663188928_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable659[2] = 
{
	StreamingContext_t3663188928::get_offset_of_state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StreamingContext_t3663188928::get_offset_of_additional_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize660 = { sizeof (StreamingContextStates_t1666619882)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable660[10] = 
{
	StreamingContextStates_t1666619882::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize661 = { sizeof (CommonObjectSecurity_t1204283697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize662 = { sizeof (CryptoKeySecurity_t3995316160), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize663 = { sizeof (NativeObjectSecurity_t2987970055), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize664 = { sizeof (ObjectSecurity_t1984121323), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize665 = { sizeof (X509Certificate_t2146845066), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable665[5] = 
{
	X509Certificate_t2146845066::get_offset_of_x509_0(),
	X509Certificate_t2146845066::get_offset_of_hideDates_1(),
	X509Certificate_t2146845066::get_offset_of_cachedCertificateHash_2(),
	X509Certificate_t2146845066::get_offset_of_issuer_name_3(),
	X509Certificate_t2146845066::get_offset_of_subject_name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize666 = { sizeof (CertificateContext_t1621332850)+ sizeof (RuntimeObject), sizeof(CertificateContext_t1621332850 ), 0, 0 };
extern const int32_t g_FieldOffsetTable666[5] = 
{
	CertificateContext_t1621332850::get_offset_of_dwCertEncodingType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CertificateContext_t1621332850::get_offset_of_pbCertEncoded_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CertificateContext_t1621332850::get_offset_of_cbCertEncoded_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CertificateContext_t1621332850::get_offset_of_pCertInfo_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CertificateContext_t1621332850::get_offset_of_hCertStore_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize667 = { sizeof (X509ContentType_t3620918085)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable667[9] = 
{
	X509ContentType_t3620918085::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize668 = { sizeof (X509KeyStorageFlags_t3407979483)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable668[7] = 
{
	X509KeyStorageFlags_t3407979483::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize669 = { sizeof (AsymmetricAlgorithm_t3859290826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable669[2] = 
{
	AsymmetricAlgorithm_t3859290826::get_offset_of_KeySizeValue_0(),
	AsymmetricAlgorithm_t3859290826::get_offset_of_LegalKeySizesValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize670 = { sizeof (AsymmetricKeyExchangeDeformatter_t2862424192), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize671 = { sizeof (AsymmetricKeyExchangeFormatter_t2384847186), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize672 = { sizeof (AsymmetricSignatureDeformatter_t3219285991), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize673 = { sizeof (AsymmetricSignatureFormatter_t2391191991), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize674 = { sizeof (Base64Constants_t1545395411), -1, sizeof(Base64Constants_t1545395411_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable674[2] = 
{
	Base64Constants_t1545395411_StaticFields::get_offset_of_EncodeTable_0(),
	Base64Constants_t1545395411_StaticFields::get_offset_of_DecodeTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize675 = { sizeof (CipherMode_t514722133)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable675[6] = 
{
	CipherMode_t514722133::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize676 = { sizeof (CryptoAPITransform_t3991408786), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable676[1] = 
{
	CryptoAPITransform_t3991408786::get_offset_of_m_disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize677 = { sizeof (CryptoConfig_t826182105), -1, sizeof(CryptoConfig_t826182105_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable677[139] = 
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
	CryptoConfig_t826182105_StaticFields::get_offset_of_lockObject_136(),
	CryptoConfig_t826182105_StaticFields::get_offset_of_algorithms_137(),
	CryptoConfig_t826182105_StaticFields::get_offset_of_oid_138(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize678 = { sizeof (CryptoHandler_t4041403744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable678[5] = 
{
	CryptoHandler_t4041403744::get_offset_of_algorithms_0(),
	CryptoHandler_t4041403744::get_offset_of_oid_1(),
	CryptoHandler_t4041403744::get_offset_of_names_2(),
	CryptoHandler_t4041403744::get_offset_of_classnames_3(),
	CryptoHandler_t4041403744::get_offset_of_level_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize679 = { sizeof (CryptoStream_t3347776394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable679[15] = 
{
	CryptoStream_t3347776394::get_offset_of__stream_1(),
	CryptoStream_t3347776394::get_offset_of__transform_2(),
	CryptoStream_t3347776394::get_offset_of__mode_3(),
	CryptoStream_t3347776394::get_offset_of__currentBlock_4(),
	CryptoStream_t3347776394::get_offset_of__disposed_5(),
	CryptoStream_t3347776394::get_offset_of__flushedFinalBlock_6(),
	CryptoStream_t3347776394::get_offset_of__partialCount_7(),
	CryptoStream_t3347776394::get_offset_of__endOfStream_8(),
	CryptoStream_t3347776394::get_offset_of__waitingBlock_9(),
	CryptoStream_t3347776394::get_offset_of__waitingCount_10(),
	CryptoStream_t3347776394::get_offset_of__transformedBlock_11(),
	CryptoStream_t3347776394::get_offset_of__transformedPos_12(),
	CryptoStream_t3347776394::get_offset_of__transformedCount_13(),
	CryptoStream_t3347776394::get_offset_of__workingBlock_14(),
	CryptoStream_t3347776394::get_offset_of__workingCount_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize680 = { sizeof (CryptoStreamMode_t1417782404)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable680[3] = 
{
	CryptoStreamMode_t1417782404::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize681 = { sizeof (CryptographicException_t2012648158), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize682 = { sizeof (CryptographicUnexpectedOperationException_t3339070021), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize683 = { sizeof (CspKeyContainerInfo_t2788651082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable683[2] = 
{
	CspKeyContainerInfo_t2788651082::get_offset_of__params_0(),
	CspKeyContainerInfo_t2788651082::get_offset_of__random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize684 = { sizeof (CspParameters_t906534246), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable684[7] = 
{
	CspParameters_t906534246::get_offset_of__Flags_0(),
	CspParameters_t906534246::get_offset_of_KeyContainerName_1(),
	CspParameters_t906534246::get_offset_of_KeyNumber_2(),
	CspParameters_t906534246::get_offset_of_ProviderName_3(),
	CspParameters_t906534246::get_offset_of_ProviderType_4(),
	CspParameters_t906534246::get_offset_of__password_5(),
	CspParameters_t906534246::get_offset_of__windowHandle_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize685 = { sizeof (CspProviderFlags_t4203337241)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable685[9] = 
{
	CspProviderFlags_t4203337241::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize686 = { sizeof (DES_t1761787176), -1, sizeof(DES_t1761787176_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable686[3] = 
{
	0,
	DES_t1761787176_StaticFields::get_offset_of_weakKeys_11(),
	DES_t1761787176_StaticFields::get_offset_of_semiWeakKeys_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize687 = { sizeof (DESTransform_t2153940516), -1, sizeof(DESTransform_t2153940516_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable687[13] = 
{
	DESTransform_t2153940516_StaticFields::get_offset_of_KEY_BIT_SIZE_12(),
	DESTransform_t2153940516_StaticFields::get_offset_of_KEY_BYTE_SIZE_13(),
	DESTransform_t2153940516_StaticFields::get_offset_of_BLOCK_BIT_SIZE_14(),
	DESTransform_t2153940516_StaticFields::get_offset_of_BLOCK_BYTE_SIZE_15(),
	DESTransform_t2153940516::get_offset_of_keySchedule_16(),
	DESTransform_t2153940516::get_offset_of_byteBuff_17(),
	DESTransform_t2153940516::get_offset_of_dwordBuff_18(),
	DESTransform_t2153940516_StaticFields::get_offset_of_spBoxes_19(),
	DESTransform_t2153940516_StaticFields::get_offset_of_PC1_20(),
	DESTransform_t2153940516_StaticFields::get_offset_of_leftRotTotal_21(),
	DESTransform_t2153940516_StaticFields::get_offset_of_PC2_22(),
	DESTransform_t2153940516_StaticFields::get_offset_of_ipTab_23(),
	DESTransform_t2153940516_StaticFields::get_offset_of_fpTab_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize688 = { sizeof (DESCryptoServiceProvider_t925779919), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize689 = { sizeof (DSA_t1766017524), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize690 = { sizeof (DSACryptoServiceProvider_t4144624798), -1, sizeof(DSACryptoServiceProvider_t4144624798_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable690[8] = 
{
	0,
	DSACryptoServiceProvider_t4144624798::get_offset_of_store_3(),
	DSACryptoServiceProvider_t4144624798::get_offset_of_persistKey_4(),
	DSACryptoServiceProvider_t4144624798::get_offset_of_persisted_5(),
	DSACryptoServiceProvider_t4144624798::get_offset_of_privateKeyExportable_6(),
	DSACryptoServiceProvider_t4144624798::get_offset_of_m_disposed_7(),
	DSACryptoServiceProvider_t4144624798::get_offset_of_dsa_8(),
	DSACryptoServiceProvider_t4144624798_StaticFields::get_offset_of_useMachineKeyStore_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize691 = { sizeof (DSAParameters_t2436233022)+ sizeof (RuntimeObject), sizeof(DSAParameters_t2436233022_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable691[8] = 
{
	DSAParameters_t2436233022::get_offset_of_Counter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2436233022::get_offset_of_G_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2436233022::get_offset_of_J_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2436233022::get_offset_of_P_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2436233022::get_offset_of_Q_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2436233022::get_offset_of_Seed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2436233022::get_offset_of_X_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2436233022::get_offset_of_Y_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize692 = { sizeof (DSASignatureDeformatter_t785673881), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable692[1] = 
{
	DSASignatureDeformatter_t785673881::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize693 = { sizeof (DSASignatureFormatter_t3315967217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable693[1] = 
{
	DSASignatureFormatter_t3315967217::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize694 = { sizeof (DeriveBytes_t3247558017), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize695 = { sizeof (FromBase64TransformMode_t4165314459)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable695[3] = 
{
	FromBase64TransformMode_t4165314459::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize696 = { sizeof (FromBase64Transform_t3209730855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable696[6] = 
{
	0,
	FromBase64Transform_t3209730855::get_offset_of_mode_1(),
	FromBase64Transform_t3209730855::get_offset_of_accumulator_2(),
	FromBase64Transform_t3209730855::get_offset_of_accPtr_3(),
	FromBase64Transform_t3209730855::get_offset_of_m_disposed_4(),
	FromBase64Transform_t3209730855::get_offset_of_lookupTable_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize697 = { sizeof (HMAC_t1036685288), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable697[5] = 
{
	HMAC_t1036685288::get_offset_of__disposed_5(),
	HMAC_t1036685288::get_offset_of__hashName_6(),
	HMAC_t1036685288::get_offset_of__algo_7(),
	HMAC_t1036685288::get_offset_of__block_8(),
	HMAC_t1036685288::get_offset_of__blockSizeValue_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize698 = { sizeof (HMACMD5_t1663578877), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize699 = { sizeof (HMACRIPEMD160_t1669972200), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
