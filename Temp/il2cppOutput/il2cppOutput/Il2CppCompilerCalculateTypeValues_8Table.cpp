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

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1227701145;
// System.Object[]
struct ObjectU5BU5D_t3608485148;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t753274912;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t881097753;
// System.Text.EncoderFallback
struct EncoderFallback_t1189921197;
// System.Reflection.Assembly
struct Assembly_t1299114196;
// System.Text.Encoding
struct Encoding_t1570699682;
// System.Collections.ArrayList
struct ArrayList_t4142489098;
// System.Char[]
struct CharU5BU5D_t3282938201;
// System.Security.IPermission
struct IPermission_t1507400067;
// System.Collections.Hashtable
struct Hashtable_t1289739904;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t3316331013;
// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t34136383;
// System.IntPtr[]
struct IntPtrU5BU5D_t3973137824;
// System.Collections.IDictionary
struct IDictionary_t1096780766;
// System.Byte[]
struct ByteU5BU5D_t3665519352;
// System.Security.PermissionSet
struct PermissionSet_t1667738006;
// System.Security.Principal.IIdentity
struct IIdentity_t3234861492;
// System.String[]
struct StringU5BU5D_t1443727135;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2978290765;
// System.Version
struct Version_t83718188;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t4065045496;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t4229364798;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t2388587022;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3251534394;
// System.Void
struct Void_t3348323986;
// System.SByte[]
struct SByteU5BU5D_t1409549544;
// System.AppDomain
struct AppDomain_t342225323;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Threading.CompressedStack
struct CompressedStack_t3384077530;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t730476552;
// System.Security.Policy.CodeGroup
struct CodeGroup_t3190015079;
// System.Security.SecurityElement
struct SecurityElement_t686020834;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3327250702;
// System.Type
struct Type_t;
// System.Security.Policy.Evidence
struct Evidence_t2159026158;
// System.Reflection.AssemblyName
struct AssemblyName_t200190181;
// System.Threading.Thread
struct Thread_t2506991146;




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
#ifndef CODEACCESSPERMISSION_T4223177149_H
#define CODEACCESSPERMISSION_T4223177149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t4223177149  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T4223177149_H
#ifndef PERMISSIONBUILDER_T2578775153_H
#define PERMISSIONBUILDER_T2578775153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionBuilder
struct  PermissionBuilder_t2578775153  : public RuntimeObject
{
public:

public:
};

struct PermissionBuilder_t2578775153_StaticFields
{
public:
	// System.Object[] System.Security.PermissionBuilder::psNone
	ObjectU5BU5D_t3608485148* ___psNone_0;

public:
	inline static int32_t get_offset_of_psNone_0() { return static_cast<int32_t>(offsetof(PermissionBuilder_t2578775153_StaticFields, ___psNone_0)); }
	inline ObjectU5BU5D_t3608485148* get_psNone_0() const { return ___psNone_0; }
	inline ObjectU5BU5D_t3608485148** get_address_of_psNone_0() { return &___psNone_0; }
	inline void set_psNone_0(ObjectU5BU5D_t3608485148* value)
	{
		___psNone_0 = value;
		Il2CppCodeGenWriteBarrier((&___psNone_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONBUILDER_T2578775153_H
#ifndef PERMISSIONSET_T1667738006_H
#define PERMISSIONSET_T1667738006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet
struct  PermissionSet_t1667738006  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyLevel System.Security.PermissionSet::<Resolver>k__BackingField
	PolicyLevel_t753274912 * ___U3CResolverU3Ek__BackingField_0;
	// System.Boolean System.Security.PermissionSet::<DeclarativeSecurity>k__BackingField
	bool ___U3CDeclarativeSecurityU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CResolverU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PermissionSet_t1667738006, ___U3CResolverU3Ek__BackingField_0)); }
	inline PolicyLevel_t753274912 * get_U3CResolverU3Ek__BackingField_0() const { return ___U3CResolverU3Ek__BackingField_0; }
	inline PolicyLevel_t753274912 ** get_address_of_U3CResolverU3Ek__BackingField_0() { return &___U3CResolverU3Ek__BackingField_0; }
	inline void set_U3CResolverU3Ek__BackingField_0(PolicyLevel_t753274912 * value)
	{
		___U3CResolverU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResolverU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PermissionSet_t1667738006, ___U3CDeclarativeSecurityU3Ek__BackingField_1)); }
	inline bool get_U3CDeclarativeSecurityU3Ek__BackingField_1() const { return ___U3CDeclarativeSecurityU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CDeclarativeSecurityU3Ek__BackingField_1() { return &___U3CDeclarativeSecurityU3Ek__BackingField_1; }
	inline void set_U3CDeclarativeSecurityU3Ek__BackingField_1(bool value)
	{
		___U3CDeclarativeSecurityU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSET_T1667738006_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR1_T715109130_H
#define U3CGETENUMERATORU3EC__ITERATOR1_T715109130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet/<GetEnumerator>c__Iterator1
struct  U3CGetEnumeratorU3Ec__Iterator1_t715109130  : public RuntimeObject
{
public:
	// System.Int32 System.Security.PermissionSet/<GetEnumerator>c__Iterator1::$PC
	int32_t ___U24PC_0;
	// System.Object System.Security.PermissionSet/<GetEnumerator>c__Iterator1::$current
	RuntimeObject * ___U24current_1;

public:
	inline static int32_t get_offset_of_U24PC_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t715109130, ___U24PC_0)); }
	inline int32_t get_U24PC_0() const { return ___U24PC_0; }
	inline int32_t* get_address_of_U24PC_0() { return &___U24PC_0; }
	inline void set_U24PC_0(int32_t value)
	{
		___U24PC_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator1_t715109130, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR1_T715109130_H
#ifndef STRINGBUILDER_T2201891914_H
#define STRINGBUILDER_T2201891914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t2201891914  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t2201891914, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t2201891914, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t2201891914, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t2201891914, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T2201891914_H
#ifndef ENCODING_T1570699682_H
#define ENCODING_T1570699682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1570699682  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t881097753 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1189921197 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1570699682, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1570699682, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1570699682, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1570699682, ___decoder_fallback_3)); }
	inline DecoderFallback_t881097753 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t881097753 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t881097753 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1570699682, ___encoder_fallback_4)); }
	inline EncoderFallback_t1189921197 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1189921197 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1189921197 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1570699682, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1570699682, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1570699682, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1570699682, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1570699682, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1570699682, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1570699682, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1570699682, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1570699682_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t1299114196 * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t3608485148* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1570699682 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1570699682 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1570699682 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1570699682 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1570699682 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1570699682 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1570699682 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1570699682 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1570699682 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1570699682 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1570699682 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t1299114196 * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t1299114196 ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t1299114196 * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t3608485148* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t3608485148** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t3608485148* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1570699682 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1570699682 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1570699682 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1570699682 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1570699682 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1570699682 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1570699682 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1570699682 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1570699682 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1570699682 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1570699682 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1570699682 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1570699682 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1570699682 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1570699682 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1570699682 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1570699682 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1570699682 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1570699682 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1570699682 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1570699682 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1570699682 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1570699682 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1570699682 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1570699682 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1570699682 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1570699682 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1570699682 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1570699682 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1570699682 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1570699682 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1570699682 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1570699682 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1570699682_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1570699682_H
#ifndef SECURITYELEMENT_T686020834_H
#define SECURITYELEMENT_T686020834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement
struct  SecurityElement_t686020834  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t4142489098 * ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t4142489098 * ___children_3;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(SecurityElement_t686020834, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(SecurityElement_t686020834, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((&___tag_1), value);
	}

	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(SecurityElement_t686020834, ___attributes_2)); }
	inline ArrayList_t4142489098 * get_attributes_2() const { return ___attributes_2; }
	inline ArrayList_t4142489098 ** get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(ArrayList_t4142489098 * value)
	{
		___attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_2), value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(SecurityElement_t686020834, ___children_3)); }
	inline ArrayList_t4142489098 * get_children_3() const { return ___children_3; }
	inline ArrayList_t4142489098 ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(ArrayList_t4142489098 * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((&___children_3), value);
	}
};

struct SecurityElement_t686020834_StaticFields
{
public:
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t3282938201* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t3282938201* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t3282938201* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t3282938201* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t3282938201* ___invalid_chars_8;

public:
	inline static int32_t get_offset_of_invalid_tag_chars_4() { return static_cast<int32_t>(offsetof(SecurityElement_t686020834_StaticFields, ___invalid_tag_chars_4)); }
	inline CharU5BU5D_t3282938201* get_invalid_tag_chars_4() const { return ___invalid_tag_chars_4; }
	inline CharU5BU5D_t3282938201** get_address_of_invalid_tag_chars_4() { return &___invalid_tag_chars_4; }
	inline void set_invalid_tag_chars_4(CharU5BU5D_t3282938201* value)
	{
		___invalid_tag_chars_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_tag_chars_4), value);
	}

	inline static int32_t get_offset_of_invalid_text_chars_5() { return static_cast<int32_t>(offsetof(SecurityElement_t686020834_StaticFields, ___invalid_text_chars_5)); }
	inline CharU5BU5D_t3282938201* get_invalid_text_chars_5() const { return ___invalid_text_chars_5; }
	inline CharU5BU5D_t3282938201** get_address_of_invalid_text_chars_5() { return &___invalid_text_chars_5; }
	inline void set_invalid_text_chars_5(CharU5BU5D_t3282938201* value)
	{
		___invalid_text_chars_5 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_text_chars_5), value);
	}

	inline static int32_t get_offset_of_invalid_attr_name_chars_6() { return static_cast<int32_t>(offsetof(SecurityElement_t686020834_StaticFields, ___invalid_attr_name_chars_6)); }
	inline CharU5BU5D_t3282938201* get_invalid_attr_name_chars_6() const { return ___invalid_attr_name_chars_6; }
	inline CharU5BU5D_t3282938201** get_address_of_invalid_attr_name_chars_6() { return &___invalid_attr_name_chars_6; }
	inline void set_invalid_attr_name_chars_6(CharU5BU5D_t3282938201* value)
	{
		___invalid_attr_name_chars_6 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_name_chars_6), value);
	}

	inline static int32_t get_offset_of_invalid_attr_value_chars_7() { return static_cast<int32_t>(offsetof(SecurityElement_t686020834_StaticFields, ___invalid_attr_value_chars_7)); }
	inline CharU5BU5D_t3282938201* get_invalid_attr_value_chars_7() const { return ___invalid_attr_value_chars_7; }
	inline CharU5BU5D_t3282938201** get_address_of_invalid_attr_value_chars_7() { return &___invalid_attr_value_chars_7; }
	inline void set_invalid_attr_value_chars_7(CharU5BU5D_t3282938201* value)
	{
		___invalid_attr_value_chars_7 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_value_chars_7), value);
	}

	inline static int32_t get_offset_of_invalid_chars_8() { return static_cast<int32_t>(offsetof(SecurityElement_t686020834_StaticFields, ___invalid_chars_8)); }
	inline CharU5BU5D_t3282938201* get_invalid_chars_8() const { return ___invalid_chars_8; }
	inline CharU5BU5D_t3282938201** get_address_of_invalid_chars_8() { return &___invalid_chars_8; }
	inline void set_invalid_chars_8(CharU5BU5D_t3282938201* value)
	{
		___invalid_chars_8 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_chars_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYELEMENT_T686020834_H
#ifndef SECURITYATTRIBUTE_T2866340432_H
#define SECURITYATTRIBUTE_T2866340432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement/SecurityAttribute
struct  SecurityAttribute_t2866340432  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement/SecurityAttribute::_name
	String_t* ____name_0;
	// System.String System.Security.SecurityElement/SecurityAttribute::_value
	String_t* ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t2866340432, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t2866340432, ____value_1)); }
	inline String_t* get__value_1() const { return ____value_1; }
	inline String_t** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(String_t* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T2866340432_H
#ifndef ENCODERFALLBACKBUFFER_T395947868_H
#define ENCODERFALLBACKBUFFER_T395947868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t395947868  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T395947868_H
#ifndef ENCODERFALLBACK_T1189921197_H
#define ENCODERFALLBACK_T1189921197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t1189921197  : public RuntimeObject
{
public:

public:
};

struct EncoderFallback_t1189921197_StaticFields
{
public:
	// System.Text.EncoderFallback System.Text.EncoderFallback::exception_fallback
	EncoderFallback_t1189921197 * ___exception_fallback_0;
	// System.Text.EncoderFallback System.Text.EncoderFallback::replacement_fallback
	EncoderFallback_t1189921197 * ___replacement_fallback_1;
	// System.Text.EncoderFallback System.Text.EncoderFallback::standard_safe_fallback
	EncoderFallback_t1189921197 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t1189921197_StaticFields, ___exception_fallback_0)); }
	inline EncoderFallback_t1189921197 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline EncoderFallback_t1189921197 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(EncoderFallback_t1189921197 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t1189921197_StaticFields, ___replacement_fallback_1)); }
	inline EncoderFallback_t1189921197 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline EncoderFallback_t1189921197 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(EncoderFallback_t1189921197 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t1189921197_StaticFields, ___standard_safe_fallback_2)); }
	inline EncoderFallback_t1189921197 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline EncoderFallback_t1189921197 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(EncoderFallback_t1189921197 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T1189921197_H
#ifndef SECURITYMANAGER_T1632238996_H
#define SECURITYMANAGER_T1632238996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityManager
struct  SecurityManager_t1632238996  : public RuntimeObject
{
public:

public:
};

struct SecurityManager_t1632238996_StaticFields
{
public:
	// System.Object System.Security.SecurityManager::_lockObject
	RuntimeObject * ____lockObject_0;
	// System.Collections.ArrayList System.Security.SecurityManager::_hierarchy
	ArrayList_t4142489098 * ____hierarchy_1;
	// System.Security.IPermission System.Security.SecurityManager::_unmanagedCode
	RuntimeObject* ____unmanagedCode_2;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t1289739904 * ____declsecCache_3;
	// System.Security.Policy.PolicyLevel System.Security.SecurityManager::_level
	PolicyLevel_t753274912 * ____level_4;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t3316331013 * ____execution_5;

public:
	inline static int32_t get_offset_of__lockObject_0() { return static_cast<int32_t>(offsetof(SecurityManager_t1632238996_StaticFields, ____lockObject_0)); }
	inline RuntimeObject * get__lockObject_0() const { return ____lockObject_0; }
	inline RuntimeObject ** get_address_of__lockObject_0() { return &____lockObject_0; }
	inline void set__lockObject_0(RuntimeObject * value)
	{
		____lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&____lockObject_0), value);
	}

	inline static int32_t get_offset_of__hierarchy_1() { return static_cast<int32_t>(offsetof(SecurityManager_t1632238996_StaticFields, ____hierarchy_1)); }
	inline ArrayList_t4142489098 * get__hierarchy_1() const { return ____hierarchy_1; }
	inline ArrayList_t4142489098 ** get_address_of__hierarchy_1() { return &____hierarchy_1; }
	inline void set__hierarchy_1(ArrayList_t4142489098 * value)
	{
		____hierarchy_1 = value;
		Il2CppCodeGenWriteBarrier((&____hierarchy_1), value);
	}

	inline static int32_t get_offset_of__unmanagedCode_2() { return static_cast<int32_t>(offsetof(SecurityManager_t1632238996_StaticFields, ____unmanagedCode_2)); }
	inline RuntimeObject* get__unmanagedCode_2() const { return ____unmanagedCode_2; }
	inline RuntimeObject** get_address_of__unmanagedCode_2() { return &____unmanagedCode_2; }
	inline void set__unmanagedCode_2(RuntimeObject* value)
	{
		____unmanagedCode_2 = value;
		Il2CppCodeGenWriteBarrier((&____unmanagedCode_2), value);
	}

	inline static int32_t get_offset_of__declsecCache_3() { return static_cast<int32_t>(offsetof(SecurityManager_t1632238996_StaticFields, ____declsecCache_3)); }
	inline Hashtable_t1289739904 * get__declsecCache_3() const { return ____declsecCache_3; }
	inline Hashtable_t1289739904 ** get_address_of__declsecCache_3() { return &____declsecCache_3; }
	inline void set__declsecCache_3(Hashtable_t1289739904 * value)
	{
		____declsecCache_3 = value;
		Il2CppCodeGenWriteBarrier((&____declsecCache_3), value);
	}

	inline static int32_t get_offset_of__level_4() { return static_cast<int32_t>(offsetof(SecurityManager_t1632238996_StaticFields, ____level_4)); }
	inline PolicyLevel_t753274912 * get__level_4() const { return ____level_4; }
	inline PolicyLevel_t753274912 ** get_address_of__level_4() { return &____level_4; }
	inline void set__level_4(PolicyLevel_t753274912 * value)
	{
		____level_4 = value;
		Il2CppCodeGenWriteBarrier((&____level_4), value);
	}

	inline static int32_t get_offset_of__execution_5() { return static_cast<int32_t>(offsetof(SecurityManager_t1632238996_StaticFields, ____execution_5)); }
	inline SecurityPermission_t3316331013 * get__execution_5() const { return ____execution_5; }
	inline SecurityPermission_t3316331013 ** get_address_of__execution_5() { return &____execution_5; }
	inline void set__execution_5(SecurityPermission_t3316331013 * value)
	{
		____execution_5 = value;
		Il2CppCodeGenWriteBarrier((&____execution_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYMANAGER_T1632238996_H
#ifndef SECURITYSTATE_T1580921086_H
#define SECURITYSTATE_T1580921086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityState
struct  SecurityState_t1580921086  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYSTATE_T1580921086_H
#ifndef DECODERFALLBACKBUFFER_T4065045496_H
#define DECODERFALLBACKBUFFER_T4065045496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t4065045496  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKBUFFER_T4065045496_H
#ifndef DECODERFALLBACK_T881097753_H
#define DECODERFALLBACK_T881097753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t881097753  : public RuntimeObject
{
public:

public:
};

struct DecoderFallback_t881097753_StaticFields
{
public:
	// System.Text.DecoderFallback System.Text.DecoderFallback::exception_fallback
	DecoderFallback_t881097753 * ___exception_fallback_0;
	// System.Text.DecoderFallback System.Text.DecoderFallback::replacement_fallback
	DecoderFallback_t881097753 * ___replacement_fallback_1;
	// System.Text.DecoderFallback System.Text.DecoderFallback::standard_safe_fallback
	DecoderFallback_t881097753 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t881097753_StaticFields, ___exception_fallback_0)); }
	inline DecoderFallback_t881097753 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline DecoderFallback_t881097753 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(DecoderFallback_t881097753 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t881097753_StaticFields, ___replacement_fallback_1)); }
	inline DecoderFallback_t881097753 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline DecoderFallback_t881097753 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(DecoderFallback_t881097753 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t881097753_StaticFields, ___standard_safe_fallback_2)); }
	inline DecoderFallback_t881097753 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline DecoderFallback_t881097753 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(DecoderFallback_t881097753 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T881097753_H
#ifndef WINDOWSPRINCIPAL_T3559458690_H
#define WINDOWSPRINCIPAL_T3559458690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsPrincipal
struct  WindowsPrincipal_t3559458690  : public RuntimeObject
{
public:
	// System.Security.Principal.WindowsIdentity System.Security.Principal.WindowsPrincipal::_identity
	WindowsIdentity_t34136383 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(WindowsPrincipal_t3559458690, ____identity_0)); }
	inline WindowsIdentity_t34136383 * get__identity_0() const { return ____identity_0; }
	inline WindowsIdentity_t34136383 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(WindowsIdentity_t34136383 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSPRINCIPAL_T3559458690_H
#ifndef COMPRESSEDSTACK_T3384077530_H
#define COMPRESSEDSTACK_T3384077530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CompressedStack
struct  CompressedStack_t3384077530  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Threading.CompressedStack::_list
	ArrayList_t4142489098 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(CompressedStack_t3384077530, ____list_0)); }
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
#endif // COMPRESSEDSTACK_T3384077530_H
#ifndef HOSTSECURITYMANAGER_T3783517114_H
#define HOSTSECURITYMANAGER_T3783517114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.HostSecurityManager
struct  HostSecurityManager_t3783517114  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTSECURITYMANAGER_T3783517114_H
#ifndef GENERICIDENTITY_T2111777886_H
#define GENERICIDENTITY_T2111777886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.GenericIdentity
struct  GenericIdentity_t2111777886  : public RuntimeObject
{
public:
	// System.String System.Security.Principal.GenericIdentity::m_name
	String_t* ___m_name_0;
	// System.String System.Security.Principal.GenericIdentity::m_type
	String_t* ___m_type_1;

public:
	inline static int32_t get_offset_of_m_name_0() { return static_cast<int32_t>(offsetof(GenericIdentity_t2111777886, ___m_name_0)); }
	inline String_t* get_m_name_0() const { return ___m_name_0; }
	inline String_t** get_address_of_m_name_0() { return &___m_name_0; }
	inline void set_m_name_0(String_t* value)
	{
		___m_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_0), value);
	}

	inline static int32_t get_offset_of_m_type_1() { return static_cast<int32_t>(offsetof(GenericIdentity_t2111777886, ___m_type_1)); }
	inline String_t* get_m_type_1() const { return ___m_type_1; }
	inline String_t** get_address_of_m_type_1() { return &___m_type_1; }
	inline void set_m_type_1(String_t* value)
	{
		___m_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICIDENTITY_T2111777886_H
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
#ifndef HASH_T325955160_H
#define HASH_T325955160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t325955160  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t1299114196 * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t3665519352* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t325955160, ___assembly_0)); }
	inline Assembly_t1299114196 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t1299114196 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t1299114196 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t325955160, ___data_1)); }
	inline ByteU5BU5D_t3665519352* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3665519352** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3665519352* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T325955160_H
#ifndef MEMBERSHIPCONDITIONHELPER_T576873845_H
#define MEMBERSHIPCONDITIONHELPER_T576873845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.MembershipConditionHelper
struct  MembershipConditionHelper_t576873845  : public RuntimeObject
{
public:

public:
};

struct MembershipConditionHelper_t576873845_StaticFields
{
public:
	// System.String System.Security.Policy.MembershipConditionHelper::XmlTag
	String_t* ___XmlTag_0;

public:
	inline static int32_t get_offset_of_XmlTag_0() { return static_cast<int32_t>(offsetof(MembershipConditionHelper_t576873845_StaticFields, ___XmlTag_0)); }
	inline String_t* get_XmlTag_0() const { return ___XmlTag_0; }
	inline String_t** get_address_of_XmlTag_0() { return &___XmlTag_0; }
	inline void set_XmlTag_0(String_t* value)
	{
		___XmlTag_0 = value;
		Il2CppCodeGenWriteBarrier((&___XmlTag_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERSHIPCONDITIONHELPER_T576873845_H
#ifndef MONOTRUSTMANAGER_T1494400577_H
#define MONOTRUSTMANAGER_T1494400577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.MonoTrustManager
struct  MonoTrustManager_t1494400577  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTRUSTMANAGER_T1494400577_H
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
#ifndef PERMISSIONREQUESTEVIDENCE_T2079697541_H
#define PERMISSIONREQUESTEVIDENCE_T2079697541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PermissionRequestEvidence
struct  PermissionRequestEvidence_t2079697541  : public RuntimeObject
{
public:
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::requested
	PermissionSet_t1667738006 * ___requested_0;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::optional
	PermissionSet_t1667738006 * ___optional_1;
	// System.Security.PermissionSet System.Security.Policy.PermissionRequestEvidence::denied
	PermissionSet_t1667738006 * ___denied_2;

public:
	inline static int32_t get_offset_of_requested_0() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t2079697541, ___requested_0)); }
	inline PermissionSet_t1667738006 * get_requested_0() const { return ___requested_0; }
	inline PermissionSet_t1667738006 ** get_address_of_requested_0() { return &___requested_0; }
	inline void set_requested_0(PermissionSet_t1667738006 * value)
	{
		___requested_0 = value;
		Il2CppCodeGenWriteBarrier((&___requested_0), value);
	}

	inline static int32_t get_offset_of_optional_1() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t2079697541, ___optional_1)); }
	inline PermissionSet_t1667738006 * get_optional_1() const { return ___optional_1; }
	inline PermissionSet_t1667738006 ** get_address_of_optional_1() { return &___optional_1; }
	inline void set_optional_1(PermissionSet_t1667738006 * value)
	{
		___optional_1 = value;
		Il2CppCodeGenWriteBarrier((&___optional_1), value);
	}

	inline static int32_t get_offset_of_denied_2() { return static_cast<int32_t>(offsetof(PermissionRequestEvidence_t2079697541, ___denied_2)); }
	inline PermissionSet_t1667738006 * get_denied_2() const { return ___denied_2; }
	inline PermissionSet_t1667738006 ** get_address_of_denied_2() { return &___denied_2; }
	inline void set_denied_2(PermissionSet_t1667738006 * value)
	{
		___denied_2 = value;
		Il2CppCodeGenWriteBarrier((&___denied_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONREQUESTEVIDENCE_T2079697541_H
#ifndef CRITICALFINALIZEROBJECT_T2923758751_H
#define CRITICALFINALIZEROBJECT_T2923758751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t2923758751  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T2923758751_H
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
#ifndef GENERICPRINCIPAL_T4183431319_H
#define GENERICPRINCIPAL_T4183431319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.GenericPrincipal
struct  GenericPrincipal_t4183431319  : public RuntimeObject
{
public:
	// System.Security.Principal.IIdentity System.Security.Principal.GenericPrincipal::m_identity
	RuntimeObject* ___m_identity_0;
	// System.String[] System.Security.Principal.GenericPrincipal::m_roles
	StringU5BU5D_t1443727135* ___m_roles_1;

public:
	inline static int32_t get_offset_of_m_identity_0() { return static_cast<int32_t>(offsetof(GenericPrincipal_t4183431319, ___m_identity_0)); }
	inline RuntimeObject* get_m_identity_0() const { return ___m_identity_0; }
	inline RuntimeObject** get_address_of_m_identity_0() { return &___m_identity_0; }
	inline void set_m_identity_0(RuntimeObject* value)
	{
		___m_identity_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_identity_0), value);
	}

	inline static int32_t get_offset_of_m_roles_1() { return static_cast<int32_t>(offsetof(GenericPrincipal_t4183431319, ___m_roles_1)); }
	inline StringU5BU5D_t1443727135* get_m_roles_1() const { return ___m_roles_1; }
	inline StringU5BU5D_t1443727135** get_address_of_m_roles_1() { return &___m_roles_1; }
	inline void set_m_roles_1(StringU5BU5D_t1443727135* value)
	{
		___m_roles_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_roles_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICPRINCIPAL_T4183431319_H
#ifndef STRONGNAME_T914311843_H
#define STRONGNAME_T914311843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t914311843  : public RuntimeObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t2978290765 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t83718188 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t914311843, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t2978290765 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t2978290765 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t2978290765 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t914311843, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t914311843, ___version_2)); }
	inline Version_t83718188 * get_version_2() const { return ___version_2; }
	inline Version_t83718188 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t83718188 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T914311843_H
#ifndef STRONGNAMEMEMBERSHIPCONDITION_T3151095433_H
#define STRONGNAMEMEMBERSHIPCONDITION_T3151095433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongNameMembershipCondition
struct  StrongNameMembershipCondition_t3151095433  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.StrongNameMembershipCondition::version
	int32_t ___version_0;
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongNameMembershipCondition::blob
	StrongNamePublicKeyBlob_t2978290765 * ___blob_1;
	// System.String System.Security.Policy.StrongNameMembershipCondition::name
	String_t* ___name_2;
	// System.Version System.Security.Policy.StrongNameMembershipCondition::assemblyVersion
	Version_t83718188 * ___assemblyVersion_3;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t3151095433, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_blob_1() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t3151095433, ___blob_1)); }
	inline StrongNamePublicKeyBlob_t2978290765 * get_blob_1() const { return ___blob_1; }
	inline StrongNamePublicKeyBlob_t2978290765 ** get_address_of_blob_1() { return &___blob_1; }
	inline void set_blob_1(StrongNamePublicKeyBlob_t2978290765 * value)
	{
		___blob_1 = value;
		Il2CppCodeGenWriteBarrier((&___blob_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t3151095433, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_assemblyVersion_3() { return static_cast<int32_t>(offsetof(StrongNameMembershipCondition_t3151095433, ___assemblyVersion_3)); }
	inline Version_t83718188 * get_assemblyVersion_3() const { return ___assemblyVersion_3; }
	inline Version_t83718188 ** get_address_of_assemblyVersion_3() { return &___assemblyVersion_3; }
	inline void set_assemblyVersion_3(Version_t83718188 * value)
	{
		___assemblyVersion_3 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyVersion_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEMEMBERSHIPCONDITION_T3151095433_H
#ifndef DECODER_T1641853965_H
#define DECODER_T1641853965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t1641853965  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t881097753 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t4065045496 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t1641853965, ___fallback_0)); }
	inline DecoderFallback_t881097753 * get_fallback_0() const { return ___fallback_0; }
	inline DecoderFallback_t881097753 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(DecoderFallback_t881097753 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_0), value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Decoder_t1641853965, ___fallback_buffer_1)); }
	inline DecoderFallbackBuffer_t4065045496 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline DecoderFallbackBuffer_t4065045496 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(DecoderFallbackBuffer_t4065045496 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_buffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T1641853965_H
#ifndef CODEGROUP_T3190015079_H
#define CODEGROUP_T3190015079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeGroup
struct  CodeGroup_t3190015079  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::m_policy
	PolicyStatement_t4229364798 * ___m_policy_0;
	// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::m_membershipCondition
	RuntimeObject* ___m_membershipCondition_1;
	// System.String System.Security.Policy.CodeGroup::m_description
	String_t* ___m_description_2;
	// System.String System.Security.Policy.CodeGroup::m_name
	String_t* ___m_name_3;
	// System.Collections.ArrayList System.Security.Policy.CodeGroup::m_children
	ArrayList_t4142489098 * ___m_children_4;

public:
	inline static int32_t get_offset_of_m_policy_0() { return static_cast<int32_t>(offsetof(CodeGroup_t3190015079, ___m_policy_0)); }
	inline PolicyStatement_t4229364798 * get_m_policy_0() const { return ___m_policy_0; }
	inline PolicyStatement_t4229364798 ** get_address_of_m_policy_0() { return &___m_policy_0; }
	inline void set_m_policy_0(PolicyStatement_t4229364798 * value)
	{
		___m_policy_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_policy_0), value);
	}

	inline static int32_t get_offset_of_m_membershipCondition_1() { return static_cast<int32_t>(offsetof(CodeGroup_t3190015079, ___m_membershipCondition_1)); }
	inline RuntimeObject* get_m_membershipCondition_1() const { return ___m_membershipCondition_1; }
	inline RuntimeObject** get_address_of_m_membershipCondition_1() { return &___m_membershipCondition_1; }
	inline void set_m_membershipCondition_1(RuntimeObject* value)
	{
		___m_membershipCondition_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_membershipCondition_1), value);
	}

	inline static int32_t get_offset_of_m_description_2() { return static_cast<int32_t>(offsetof(CodeGroup_t3190015079, ___m_description_2)); }
	inline String_t* get_m_description_2() const { return ___m_description_2; }
	inline String_t** get_address_of_m_description_2() { return &___m_description_2; }
	inline void set_m_description_2(String_t* value)
	{
		___m_description_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_description_2), value);
	}

	inline static int32_t get_offset_of_m_name_3() { return static_cast<int32_t>(offsetof(CodeGroup_t3190015079, ___m_name_3)); }
	inline String_t* get_m_name_3() const { return ___m_name_3; }
	inline String_t** get_address_of_m_name_3() { return &___m_name_3; }
	inline void set_m_name_3(String_t* value)
	{
		___m_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_3), value);
	}

	inline static int32_t get_offset_of_m_children_4() { return static_cast<int32_t>(offsetof(CodeGroup_t3190015079, ___m_children_4)); }
	inline ArrayList_t4142489098 * get_m_children_4() const { return ___m_children_4; }
	inline ArrayList_t4142489098 ** get_address_of_m_children_4() { return &___m_children_4; }
	inline void set_m_children_4(ArrayList_t4142489098 * value)
	{
		___m_children_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_children_4), value);
	}
};

struct CodeGroup_t3190015079_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Policy.CodeGroup::<>f__switch$map2A
	Dictionary_2_t3251534394 * ___U3CU3Ef__switchU24map2A_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2A_5() { return static_cast<int32_t>(offsetof(CodeGroup_t3190015079_StaticFields, ___U3CU3Ef__switchU24map2A_5)); }
	inline Dictionary_2_t3251534394 * get_U3CU3Ef__switchU24map2A_5() const { return ___U3CU3Ef__switchU24map2A_5; }
	inline Dictionary_2_t3251534394 ** get_address_of_U3CU3Ef__switchU24map2A_5() { return &___U3CU3Ef__switchU24map2A_5; }
	inline void set_U3CU3Ef__switchU24map2A_5(Dictionary_2_t3251534394 * value)
	{
		___U3CU3Ef__switchU24map2A_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2A_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGROUP_T3190015079_H
#ifndef TRUSTMANAGERCONTEXT_T2875593279_H
#define TRUSTMANAGERCONTEXT_T2875593279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.TrustManagerContext
struct  TrustManagerContext_t2875593279  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRUSTMANAGERCONTEXT_T2875593279_H
#ifndef UTF32DECODER_T3013296710_H
#define UTF32DECODER_T3013296710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding/UTF32Decoder
struct  UTF32Decoder_t3013296710  : public Decoder_t1641853965
{
public:
	// System.Boolean System.Text.UTF32Encoding/UTF32Decoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverByte
	int32_t ___leftOverByte_3;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverLength
	int32_t ___leftOverLength_4;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UTF32Decoder_t3013296710, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UTF32Decoder_t3013296710, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}

	inline static int32_t get_offset_of_leftOverLength_4() { return static_cast<int32_t>(offsetof(UTF32Decoder_t3013296710, ___leftOverLength_4)); }
	inline int32_t get_leftOverLength_4() const { return ___leftOverLength_4; }
	inline int32_t* get_address_of_leftOverLength_4() { return &___leftOverLength_4; }
	inline void set_leftOverLength_4(int32_t value)
	{
		___leftOverLength_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32DECODER_T3013296710_H
#ifndef DECODEREXCEPTIONFALLBACKBUFFER_T2544055275_H
#define DECODEREXCEPTIONFALLBACKBUFFER_T2544055275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallbackBuffer
struct  DecoderExceptionFallbackBuffer_t2544055275  : public DecoderFallbackBuffer_t4065045496
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACKBUFFER_T2544055275_H
#ifndef UNICODEDECODER_T3041472583_H
#define UNICODEDECODER_T3041472583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding/UnicodeDecoder
struct  UnicodeDecoder_t3041472583  : public Decoder_t1641853965
{
public:
	// System.Boolean System.Text.UnicodeEncoding/UnicodeDecoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::leftOverByte
	int32_t ___leftOverByte_3;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t3041472583, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t3041472583, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEDECODER_T3041472583_H
#ifndef UNICODEENCODING_T3356499625_H
#define UNICODEENCODING_T3356499625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding
struct  UnicodeEncoding_t3356499625  : public Encoding_t1570699682
{
public:
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_28;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_29;

public:
	inline static int32_t get_offset_of_bigEndian_28() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t3356499625, ___bigEndian_28)); }
	inline bool get_bigEndian_28() const { return ___bigEndian_28; }
	inline bool* get_address_of_bigEndian_28() { return &___bigEndian_28; }
	inline void set_bigEndian_28(bool value)
	{
		___bigEndian_28 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_29() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t3356499625, ___byteOrderMark_29)); }
	inline bool get_byteOrderMark_29() const { return ___byteOrderMark_29; }
	inline bool* get_address_of_byteOrderMark_29() { return &___byteOrderMark_29; }
	inline void set_byteOrderMark_29(bool value)
	{
		___byteOrderMark_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEENCODING_T3356499625_H
#ifndef DECODERREPLACEMENTFALLBACK_T955420061_H
#define DECODERREPLACEMENTFALLBACK_T955420061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t955420061  : public DecoderFallback_t881097753
{
public:
	// System.String System.Text.DecoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t955420061, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACK_T955420061_H
#ifndef DECODERREPLACEMENTFALLBACKBUFFER_T2667415350_H
#define DECODERREPLACEMENTFALLBACKBUFFER_T2667415350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallbackBuffer
struct  DecoderReplacementFallbackBuffer_t2667415350  : public DecoderFallbackBuffer_t4065045496
{
public:
	// System.Boolean System.Text.DecoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_0;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.String System.Text.DecoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_2;

public:
	inline static int32_t get_offset_of_fallback_assigned_0() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t2667415350, ___fallback_assigned_0)); }
	inline bool get_fallback_assigned_0() const { return ___fallback_assigned_0; }
	inline bool* get_address_of_fallback_assigned_0() { return &___fallback_assigned_0; }
	inline void set_fallback_assigned_0(bool value)
	{
		___fallback_assigned_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t2667415350, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_replacement_2() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t2667415350, ___replacement_2)); }
	inline String_t* get_replacement_2() const { return ___replacement_2; }
	inline String_t** get_address_of_replacement_2() { return &___replacement_2; }
	inline void set_replacement_2(String_t* value)
	{
		___replacement_2 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACKBUFFER_T2667415350_H
#ifndef UTF8DECODER_T3996261434_H
#define UTF8DECODER_T3996261434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Decoder
struct  UTF8Decoder_t3996261434  : public Decoder_t1641853965
{
public:
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverBits
	uint32_t ___leftOverBits_2;
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverCount
	uint32_t ___leftOverCount_3;

public:
	inline static int32_t get_offset_of_leftOverBits_2() { return static_cast<int32_t>(offsetof(UTF8Decoder_t3996261434, ___leftOverBits_2)); }
	inline uint32_t get_leftOverBits_2() const { return ___leftOverBits_2; }
	inline uint32_t* get_address_of_leftOverBits_2() { return &___leftOverBits_2; }
	inline void set_leftOverBits_2(uint32_t value)
	{
		___leftOverBits_2 = value;
	}

	inline static int32_t get_offset_of_leftOverCount_3() { return static_cast<int32_t>(offsetof(UTF8Decoder_t3996261434, ___leftOverCount_3)); }
	inline uint32_t get_leftOverCount_3() const { return ___leftOverCount_3; }
	inline uint32_t* get_address_of_leftOverCount_3() { return &___leftOverCount_3; }
	inline void set_leftOverCount_3(uint32_t value)
	{
		___leftOverCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8DECODER_T3996261434_H
#ifndef ENCODEREXCEPTIONFALLBACK_T2895230481_H
#define ENCODEREXCEPTIONFALLBACK_T2895230481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallback
struct  EncoderExceptionFallback_t2895230481  : public EncoderFallback_t1189921197
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACK_T2895230481_H
#ifndef ENCODEREXCEPTIONFALLBACKBUFFER_T3173606805_H
#define ENCODEREXCEPTIONFALLBACKBUFFER_T3173606805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallbackBuffer
struct  EncoderExceptionFallbackBuffer_t3173606805  : public EncoderFallbackBuffer_t395947868
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACKBUFFER_T3173606805_H
#ifndef UTF8ENCODING_T1298259286_H
#define UTF8ENCODING_T1298259286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t1298259286  : public Encoding_t1570699682
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitIdentifier
	bool ___emitIdentifier_28;

public:
	inline static int32_t get_offset_of_emitIdentifier_28() { return static_cast<int32_t>(offsetof(UTF8Encoding_t1298259286, ___emitIdentifier_28)); }
	inline bool get_emitIdentifier_28() const { return ___emitIdentifier_28; }
	inline bool* get_address_of_emitIdentifier_28() { return &___emitIdentifier_28; }
	inline void set_emitIdentifier_28(bool value)
	{
		___emitIdentifier_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T1298259286_H
#ifndef ENCODERREPLACEMENTFALLBACK_T1765987626_H
#define ENCODERREPLACEMENTFALLBACK_T1765987626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t1765987626  : public EncoderFallback_t1189921197
{
public:
	// System.String System.Text.EncoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t1765987626, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACK_T1765987626_H
#ifndef ENCODERREPLACEMENTFALLBACKBUFFER_T3140460878_H
#define ENCODERREPLACEMENTFALLBACKBUFFER_T3140460878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallbackBuffer
struct  EncoderReplacementFallbackBuffer_t3140460878  : public EncoderFallbackBuffer_t395947868
{
public:
	// System.String System.Text.EncoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_0;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.Boolean System.Text.EncoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_2;

public:
	inline static int32_t get_offset_of_replacement_0() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t3140460878, ___replacement_0)); }
	inline String_t* get_replacement_0() const { return ___replacement_0; }
	inline String_t** get_address_of_replacement_0() { return &___replacement_0; }
	inline void set_replacement_0(String_t* value)
	{
		___replacement_0 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t3140460878, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_fallback_assigned_2() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t3140460878, ___fallback_assigned_2)); }
	inline bool get_fallback_assigned_2() const { return ___fallback_assigned_2; }
	inline bool* get_address_of_fallback_assigned_2() { return &___fallback_assigned_2; }
	inline void set_fallback_assigned_2(bool value)
	{
		___fallback_assigned_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACKBUFFER_T3140460878_H
#ifndef UTF7DECODER_T1532637544_H
#define UTF7DECODER_T1532637544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/UTF7Decoder
struct  UTF7Decoder_t1532637544  : public Decoder_t1641853965
{
public:
	// System.Int32 System.Text.UTF7Encoding/UTF7Decoder::leftOver
	int32_t ___leftOver_2;

public:
	inline static int32_t get_offset_of_leftOver_2() { return static_cast<int32_t>(offsetof(UTF7Decoder_t1532637544, ___leftOver_2)); }
	inline int32_t get_leftOver_2() const { return ___leftOver_2; }
	inline int32_t* get_address_of_leftOver_2() { return &___leftOver_2; }
	inline void set_leftOver_2(int32_t value)
	{
		___leftOver_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7DECODER_T1532637544_H
#ifndef DECODEREXCEPTIONFALLBACK_T499587601_H
#define DECODEREXCEPTIONFALLBACK_T499587601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallback
struct  DecoderExceptionFallback_t499587601  : public DecoderFallback_t881097753
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACK_T499587601_H
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
#ifndef UTF7ENCODING_T2683217713_H
#define UTF7ENCODING_T2683217713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding
struct  UTF7Encoding_t2683217713  : public Encoding_t1570699682
{
public:
	// System.Boolean System.Text.UTF7Encoding::allowOptionals
	bool ___allowOptionals_28;

public:
	inline static int32_t get_offset_of_allowOptionals_28() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2683217713, ___allowOptionals_28)); }
	inline bool get_allowOptionals_28() const { return ___allowOptionals_28; }
	inline bool* get_address_of_allowOptionals_28() { return &___allowOptionals_28; }
	inline void set_allowOptionals_28(bool value)
	{
		___allowOptionals_28 = value;
	}
};

struct UTF7Encoding_t2683217713_StaticFields
{
public:
	// System.Byte[] System.Text.UTF7Encoding::encodingRules
	ByteU5BU5D_t3665519352* ___encodingRules_29;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t1409549544* ___base64Values_30;

public:
	inline static int32_t get_offset_of_encodingRules_29() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2683217713_StaticFields, ___encodingRules_29)); }
	inline ByteU5BU5D_t3665519352* get_encodingRules_29() const { return ___encodingRules_29; }
	inline ByteU5BU5D_t3665519352** get_address_of_encodingRules_29() { return &___encodingRules_29; }
	inline void set_encodingRules_29(ByteU5BU5D_t3665519352* value)
	{
		___encodingRules_29 = value;
		Il2CppCodeGenWriteBarrier((&___encodingRules_29), value);
	}

	inline static int32_t get_offset_of_base64Values_30() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2683217713_StaticFields, ___base64Values_30)); }
	inline SByteU5BU5D_t1409549544* get_base64Values_30() const { return ___base64Values_30; }
	inline SByteU5BU5D_t1409549544** get_address_of_base64Values_30() { return &___base64Values_30; }
	inline void set_base64Values_30(SByteU5BU5D_t1409549544* value)
	{
		___base64Values_30 = value;
		Il2CppCodeGenWriteBarrier((&___base64Values_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7ENCODING_T2683217713_H
#ifndef LATIN1ENCODING_T2386631888_H
#define LATIN1ENCODING_T2386631888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Latin1Encoding
struct  Latin1Encoding_t2386631888  : public Encoding_t1570699682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATIN1ENCODING_T2386631888_H
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
#ifndef UTF32ENCODING_T3350374052_H
#define UTF32ENCODING_T3350374052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding
struct  UTF32Encoding_t3350374052  : public Encoding_t1570699682
{
public:
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_28;
	// System.Boolean System.Text.UTF32Encoding::byteOrderMark
	bool ___byteOrderMark_29;

public:
	inline static int32_t get_offset_of_bigEndian_28() { return static_cast<int32_t>(offsetof(UTF32Encoding_t3350374052, ___bigEndian_28)); }
	inline bool get_bigEndian_28() const { return ___bigEndian_28; }
	inline bool* get_address_of_bigEndian_28() { return &___bigEndian_28; }
	inline void set_bigEndian_28(bool value)
	{
		___bigEndian_28 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_29() { return static_cast<int32_t>(offsetof(UTF32Encoding_t3350374052, ___byteOrderMark_29)); }
	inline bool get_byteOrderMark_29() const { return ___byteOrderMark_29; }
	inline bool* get_address_of_byteOrderMark_29() { return &___byteOrderMark_29; }
	inline void set_byteOrderMark_29(bool value)
	{
		___byteOrderMark_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32ENCODING_T3350374052_H
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
#ifndef FORWARDINGDECODER_T2878009345_H
#define FORWARDINGDECODER_T2878009345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/ForwardingDecoder
struct  ForwardingDecoder_t2878009345  : public Decoder_t1641853965
{
public:
	// System.Text.Encoding System.Text.Encoding/ForwardingDecoder::encoding
	Encoding_t1570699682 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(ForwardingDecoder_t2878009345, ___encoding_2)); }
	inline Encoding_t1570699682 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t1570699682 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t1570699682 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORWARDINGDECODER_T2878009345_H
#ifndef SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T2116331348_H
#define SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T2116331348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SuppressUnmanagedCodeSecurityAttribute
struct  SuppressUnmanagedCodeSecurityAttribute_t2116331348  : public Attribute_t2192553355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T2116331348_H
#ifndef ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3795476366_H
#define ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3795476366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AllowPartiallyTrustedCallersAttribute
struct  AllowPartiallyTrustedCallersAttribute_t3795476366  : public Attribute_t2192553355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3795476366_H
#ifndef NAMEDPERMISSIONSET_T3338289148_H
#define NAMEDPERMISSIONSET_T3338289148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.NamedPermissionSet
struct  NamedPermissionSet_t3338289148  : public PermissionSet_t1667738006
{
public:
	// System.String System.Security.NamedPermissionSet::name
	String_t* ___name_2;
	// System.String System.Security.NamedPermissionSet::description
	String_t* ___description_3;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t3338289148, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_description_3() { return static_cast<int32_t>(offsetof(NamedPermissionSet_t3338289148, ___description_3)); }
	inline String_t* get_description_3() const { return ___description_3; }
	inline String_t** get_address_of_description_3() { return &___description_3; }
	inline void set_description_3(String_t* value)
	{
		___description_3 = value;
		Il2CppCodeGenWriteBarrier((&___description_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEDPERMISSIONSET_T3338289148_H
#ifndef SECURESTRING_T2290931091_H
#define SECURESTRING_T2290931091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecureString
struct  SecureString_t2290931091  : public CriticalFinalizerObject_t2923758751
{
public:
	// System.Int32 System.Security.SecureString::length
	int32_t ___length_2;
	// System.Boolean System.Security.SecureString::disposed
	bool ___disposed_3;
	// System.Boolean System.Security.SecureString::read_only
	bool ___read_only_4;
	// System.Byte[] System.Security.SecureString::data
	ByteU5BU5D_t3665519352* ___data_5;

public:
	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(SecureString_t2290931091, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(SecureString_t2290931091, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}

	inline static int32_t get_offset_of_read_only_4() { return static_cast<int32_t>(offsetof(SecureString_t2290931091, ___read_only_4)); }
	inline bool get_read_only_4() const { return ___read_only_4; }
	inline bool* get_address_of_read_only_4() { return &___read_only_4; }
	inline void set_read_only_4(bool value)
	{
		___read_only_4 = value;
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(SecureString_t2290931091, ___data_5)); }
	inline ByteU5BU5D_t3665519352* get_data_5() const { return ___data_5; }
	inline ByteU5BU5D_t3665519352** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(ByteU5BU5D_t3665519352* value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier((&___data_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURESTRING_T2290931091_H
#ifndef UNIONCODEGROUP_T3473443698_H
#define UNIONCODEGROUP_T3473443698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.UnionCodeGroup
struct  UnionCodeGroup_t3473443698  : public CodeGroup_t3190015079
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIONCODEGROUP_T3473443698_H
#ifndef SECURITYFRAME_T4082283920_H
#define SECURITYFRAME_T4082283920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityFrame
struct  SecurityFrame_t4082283920 
{
public:
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t342225323 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t1667738006 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t1667738006 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t1667738006 * ____permitonly_4;

public:
	inline static int32_t get_offset_of__domain_0() { return static_cast<int32_t>(offsetof(SecurityFrame_t4082283920, ____domain_0)); }
	inline AppDomain_t342225323 * get__domain_0() const { return ____domain_0; }
	inline AppDomain_t342225323 ** get_address_of__domain_0() { return &____domain_0; }
	inline void set__domain_0(AppDomain_t342225323 * value)
	{
		____domain_0 = value;
		Il2CppCodeGenWriteBarrier((&____domain_0), value);
	}

	inline static int32_t get_offset_of__method_1() { return static_cast<int32_t>(offsetof(SecurityFrame_t4082283920, ____method_1)); }
	inline MethodInfo_t * get__method_1() const { return ____method_1; }
	inline MethodInfo_t ** get_address_of__method_1() { return &____method_1; }
	inline void set__method_1(MethodInfo_t * value)
	{
		____method_1 = value;
		Il2CppCodeGenWriteBarrier((&____method_1), value);
	}

	inline static int32_t get_offset_of__assert_2() { return static_cast<int32_t>(offsetof(SecurityFrame_t4082283920, ____assert_2)); }
	inline PermissionSet_t1667738006 * get__assert_2() const { return ____assert_2; }
	inline PermissionSet_t1667738006 ** get_address_of__assert_2() { return &____assert_2; }
	inline void set__assert_2(PermissionSet_t1667738006 * value)
	{
		____assert_2 = value;
		Il2CppCodeGenWriteBarrier((&____assert_2), value);
	}

	inline static int32_t get_offset_of__deny_3() { return static_cast<int32_t>(offsetof(SecurityFrame_t4082283920, ____deny_3)); }
	inline PermissionSet_t1667738006 * get__deny_3() const { return ____deny_3; }
	inline PermissionSet_t1667738006 ** get_address_of__deny_3() { return &____deny_3; }
	inline void set__deny_3(PermissionSet_t1667738006 * value)
	{
		____deny_3 = value;
		Il2CppCodeGenWriteBarrier((&____deny_3), value);
	}

	inline static int32_t get_offset_of__permitonly_4() { return static_cast<int32_t>(offsetof(SecurityFrame_t4082283920, ____permitonly_4)); }
	inline PermissionSet_t1667738006 * get__permitonly_4() const { return ____permitonly_4; }
	inline PermissionSet_t1667738006 ** get_address_of__permitonly_4() { return &____permitonly_4; }
	inline void set__permitonly_4(PermissionSet_t1667738006 * value)
	{
		____permitonly_4 = value;
		Il2CppCodeGenWriteBarrier((&____permitonly_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.SecurityFrame
struct SecurityFrame_t4082283920_marshaled_pinvoke
{
	AppDomain_t342225323 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t1667738006 * ____assert_2;
	PermissionSet_t1667738006 * ____deny_3;
	PermissionSet_t1667738006 * ____permitonly_4;
};
// Native definition for COM marshalling of System.Security.SecurityFrame
struct SecurityFrame_t4082283920_marshaled_com
{
	AppDomain_t342225323 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t1667738006 * ____assert_2;
	PermissionSet_t1667738006 * ____deny_3;
	PermissionSet_t1667738006 * ____permitonly_4;
};
#endif // SECURITYFRAME_T4082283920_H
#ifndef SECURITYSAFECRITICALATTRIBUTE_T411557696_H
#define SECURITYSAFECRITICALATTRIBUTE_T411557696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecuritySafeCriticalAttribute
struct  SecuritySafeCriticalAttribute_t411557696  : public Attribute_t2192553355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYSAFECRITICALATTRIBUTE_T411557696_H
#ifndef SECURITYTRANSPARENTATTRIBUTE_T2876315701_H
#define SECURITYTRANSPARENTATTRIBUTE_T2876315701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityTransparentAttribute
struct  SecurityTransparentAttribute_t2876315701  : public Attribute_t2192553355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYTRANSPARENTATTRIBUTE_T2876315701_H
#ifndef ASCIIENCODING_T3477137373_H
#define ASCIIENCODING_T3477137373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.ASCIIEncoding
struct  ASCIIEncoding_t3477137373  : public Encoding_t1570699682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASCIIENCODING_T3477137373_H
#ifndef NETCODEGROUP_T796859807_H
#define NETCODEGROUP_T796859807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.NetCodeGroup
struct  NetCodeGroup_t796859807  : public CodeGroup_t3190015079
{
public:
	// System.Collections.Hashtable System.Security.Policy.NetCodeGroup::_rules
	Hashtable_t1289739904 * ____rules_8;
	// System.Int32 System.Security.Policy.NetCodeGroup::_hashcode
	int32_t ____hashcode_9;

public:
	inline static int32_t get_offset_of__rules_8() { return static_cast<int32_t>(offsetof(NetCodeGroup_t796859807, ____rules_8)); }
	inline Hashtable_t1289739904 * get__rules_8() const { return ____rules_8; }
	inline Hashtable_t1289739904 ** get_address_of__rules_8() { return &____rules_8; }
	inline void set__rules_8(Hashtable_t1289739904 * value)
	{
		____rules_8 = value;
		Il2CppCodeGenWriteBarrier((&____rules_8), value);
	}

	inline static int32_t get_offset_of__hashcode_9() { return static_cast<int32_t>(offsetof(NetCodeGroup_t796859807, ____hashcode_9)); }
	inline int32_t get__hashcode_9() const { return ____hashcode_9; }
	inline int32_t* get_address_of__hashcode_9() { return &____hashcode_9; }
	inline void set__hashcode_9(int32_t value)
	{
		____hashcode_9 = value;
	}
};

struct NetCodeGroup_t796859807_StaticFields
{
public:
	// System.String System.Security.Policy.NetCodeGroup::AbsentOriginScheme
	String_t* ___AbsentOriginScheme_6;
	// System.String System.Security.Policy.NetCodeGroup::AnyOtherOriginScheme
	String_t* ___AnyOtherOriginScheme_7;

public:
	inline static int32_t get_offset_of_AbsentOriginScheme_6() { return static_cast<int32_t>(offsetof(NetCodeGroup_t796859807_StaticFields, ___AbsentOriginScheme_6)); }
	inline String_t* get_AbsentOriginScheme_6() const { return ___AbsentOriginScheme_6; }
	inline String_t** get_address_of_AbsentOriginScheme_6() { return &___AbsentOriginScheme_6; }
	inline void set_AbsentOriginScheme_6(String_t* value)
	{
		___AbsentOriginScheme_6 = value;
		Il2CppCodeGenWriteBarrier((&___AbsentOriginScheme_6), value);
	}

	inline static int32_t get_offset_of_AnyOtherOriginScheme_7() { return static_cast<int32_t>(offsetof(NetCodeGroup_t796859807_StaticFields, ___AnyOtherOriginScheme_7)); }
	inline String_t* get_AnyOtherOriginScheme_7() const { return ___AnyOtherOriginScheme_7; }
	inline String_t** get_address_of_AnyOtherOriginScheme_7() { return &___AnyOtherOriginScheme_7; }
	inline void set_AnyOtherOriginScheme_7(String_t* value)
	{
		___AnyOtherOriginScheme_7 = value;
		Il2CppCodeGenWriteBarrier((&___AnyOtherOriginScheme_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETCODEGROUP_T796859807_H
#ifndef UNVERIFIABLECODEATTRIBUTE_T719174462_H
#define UNVERIFIABLECODEATTRIBUTE_T719174462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.UnverifiableCodeAttribute
struct  UnverifiableCodeAttribute_t719174462  : public Attribute_t2192553355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNVERIFIABLECODEATTRIBUTE_T719174462_H
#ifndef FIRSTMATCHCODEGROUP_T1009896578_H
#define FIRSTMATCHCODEGROUP_T1009896578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FirstMatchCodeGroup
struct  FirstMatchCodeGroup_t1009896578  : public CodeGroup_t3190015079
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIRSTMATCHCODEGROUP_T1009896578_H
#ifndef SECURITYTREATASSAFEATTRIBUTE_T1451612868_H
#define SECURITYTREATASSAFEATTRIBUTE_T1451612868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityTreatAsSafeAttribute
struct  SecurityTreatAsSafeAttribute_t1451612868  : public Attribute_t2192553355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYTREATASSAFEATTRIBUTE_T1451612868_H
#ifndef SECURITYACTION_T2819903634_H
#define SECURITYACTION_T2819903634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t2819903634 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t2819903634, ___value___1)); }
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
#endif // SECURITYACTION_T2819903634_H
#ifndef POLICYEXCEPTION_T1883771093_H
#define POLICYEXCEPTION_T1883771093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyException
struct  PolicyException_t1883771093  : public SystemException_t637859339
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYEXCEPTION_T1883771093_H
#ifndef WINDOWSACCOUNTTYPE_T2031748488_H
#define WINDOWSACCOUNTTYPE_T2031748488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsAccountType
struct  WindowsAccountType_t2031748488 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindowsAccountType_t2031748488, ___value___1)); }
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
#endif // WINDOWSACCOUNTTYPE_T2031748488_H
#ifndef POLICYSTATEMENTATTRIBUTE_T1318696756_H
#define POLICYSTATEMENTATTRIBUTE_T1318696756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatementAttribute
struct  PolicyStatementAttribute_t1318696756 
{
public:
	// System.Int32 System.Security.Policy.PolicyStatementAttribute::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyStatementAttribute_t1318696756, ___value___1)); }
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
#endif // POLICYSTATEMENTATTRIBUTE_T1318696756_H
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
#ifndef FILEIOPERMISSIONACCESS_T1581388740_H
#define FILEIOPERMISSIONACCESS_T1581388740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermissionAccess
struct  FileIOPermissionAccess_t1581388740 
{
public:
	// System.Int32 System.Security.Permissions.FileIOPermissionAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileIOPermissionAccess_t1581388740, ___value___1)); }
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
#endif // FILEIOPERMISSIONACCESS_T1581388740_H
#ifndef EVENTRESETMODE_T3892749786_H
#define EVENTRESETMODE_T3892749786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventResetMode
struct  EventResetMode_t3892749786 
{
public:
	// System.Int32 System.Threading.EventResetMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventResetMode_t3892749786, ___value___1)); }
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
#endif // EVENTRESETMODE_T3892749786_H
#ifndef PRINCIPALPOLICY_T1526359361_H
#define PRINCIPALPOLICY_T1526359361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t1526359361 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t1526359361, ___value___1)); }
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
#endif // PRINCIPALPOLICY_T1526359361_H
#ifndef ASYNCFLOWCONTROLTYPE_T2088324014_H
#define ASYNCFLOWCONTROLTYPE_T2088324014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AsyncFlowControlType
struct  AsyncFlowControlType_t2088324014 
{
public:
	// System.Int32 System.Threading.AsyncFlowControlType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AsyncFlowControlType_t2088324014, ___value___1)); }
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
#endif // ASYNCFLOWCONTROLTYPE_T2088324014_H
#ifndef TOKENIMPERSONATIONLEVEL_T3922651618_H
#define TOKENIMPERSONATIONLEVEL_T3922651618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.TokenImpersonationLevel
struct  TokenImpersonationLevel_t3922651618 
{
public:
	// System.Int32 System.Security.Principal.TokenImpersonationLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TokenImpersonationLevel_t3922651618, ___value___1)); }
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
#endif // TOKENIMPERSONATIONLEVEL_T3922651618_H
#ifndef HOSTPROTECTIONRESOURCE_T1031964499_H
#define HOSTPROTECTIONRESOURCE_T1031964499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.HostProtectionResource
struct  HostProtectionResource_t1031964499 
{
public:
	// System.Int32 System.Security.Permissions.HostProtectionResource::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HostProtectionResource_t1031964499, ___value___1)); }
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
#endif // HOSTPROTECTIONRESOURCE_T1031964499_H
#ifndef XMLSYNTAXEXCEPTION_T3280700030_H
#define XMLSYNTAXEXCEPTION_T3280700030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.XmlSyntaxException
struct  XmlSyntaxException_t3280700030  : public SystemException_t637859339
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSYNTAXEXCEPTION_T3280700030_H
#ifndef RUNTIMEDECLSECURITYENTRY_T447155956_H
#define RUNTIMEDECLSECURITYENTRY_T447155956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityEntry
struct  RuntimeDeclSecurityEntry_t447155956 
{
public:
	// System.IntPtr System.Security.RuntimeDeclSecurityEntry::blob
	IntPtr_t ___blob_0;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::size
	int32_t ___size_1;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::index
	int32_t ___index_2;

public:
	inline static int32_t get_offset_of_blob_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t447155956, ___blob_0)); }
	inline IntPtr_t get_blob_0() const { return ___blob_0; }
	inline IntPtr_t* get_address_of_blob_0() { return &___blob_0; }
	inline void set_blob_0(IntPtr_t value)
	{
		___blob_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t447155956, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t447155956, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYENTRY_T447155956_H
#ifndef HOSTSECURITYMANAGEROPTIONS_T2872910676_H
#define HOSTSECURITYMANAGEROPTIONS_T2872910676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.HostSecurityManagerOptions
struct  HostSecurityManagerOptions_t2872910676 
{
public:
	// System.Int32 System.Security.HostSecurityManagerOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HostSecurityManagerOptions_t2872910676, ___value___1)); }
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
#endif // HOSTSECURITYMANAGEROPTIONS_T2872910676_H
#ifndef POLICYLEVELTYPE_T485203490_H
#define POLICYLEVELTYPE_T485203490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PolicyLevelType
struct  PolicyLevelType_t485203490 
{
public:
	// System.Int32 System.Security.PolicyLevelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyLevelType_t485203490, ___value___1)); }
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
#endif // POLICYLEVELTYPE_T485203490_H
#ifndef SECURITYCONTEXT_T3315241318_H
#define SECURITYCONTEXT_T3315241318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityContext
struct  SecurityContext_t3315241318  : public RuntimeObject
{
public:
	// System.Boolean System.Security.SecurityContext::_capture
	bool ____capture_0;
	// System.IntPtr System.Security.SecurityContext::_winid
	IntPtr_t ____winid_1;
	// System.Threading.CompressedStack System.Security.SecurityContext::_stack
	CompressedStack_t3384077530 * ____stack_2;
	// System.Boolean System.Security.SecurityContext::_suppressFlowWindowsIdentity
	bool ____suppressFlowWindowsIdentity_3;
	// System.Boolean System.Security.SecurityContext::_suppressFlow
	bool ____suppressFlow_4;

public:
	inline static int32_t get_offset_of__capture_0() { return static_cast<int32_t>(offsetof(SecurityContext_t3315241318, ____capture_0)); }
	inline bool get__capture_0() const { return ____capture_0; }
	inline bool* get_address_of__capture_0() { return &____capture_0; }
	inline void set__capture_0(bool value)
	{
		____capture_0 = value;
	}

	inline static int32_t get_offset_of__winid_1() { return static_cast<int32_t>(offsetof(SecurityContext_t3315241318, ____winid_1)); }
	inline IntPtr_t get__winid_1() const { return ____winid_1; }
	inline IntPtr_t* get_address_of__winid_1() { return &____winid_1; }
	inline void set__winid_1(IntPtr_t value)
	{
		____winid_1 = value;
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(SecurityContext_t3315241318, ____stack_2)); }
	inline CompressedStack_t3384077530 * get__stack_2() const { return ____stack_2; }
	inline CompressedStack_t3384077530 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(CompressedStack_t3384077530 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((&____stack_2), value);
	}

	inline static int32_t get_offset_of__suppressFlowWindowsIdentity_3() { return static_cast<int32_t>(offsetof(SecurityContext_t3315241318, ____suppressFlowWindowsIdentity_3)); }
	inline bool get__suppressFlowWindowsIdentity_3() const { return ____suppressFlowWindowsIdentity_3; }
	inline bool* get_address_of__suppressFlowWindowsIdentity_3() { return &____suppressFlowWindowsIdentity_3; }
	inline void set__suppressFlowWindowsIdentity_3(bool value)
	{
		____suppressFlowWindowsIdentity_3 = value;
	}

	inline static int32_t get_offset_of__suppressFlow_4() { return static_cast<int32_t>(offsetof(SecurityContext_t3315241318, ____suppressFlow_4)); }
	inline bool get__suppressFlow_4() const { return ____suppressFlow_4; }
	inline bool* get_address_of__suppressFlow_4() { return &____suppressFlow_4; }
	inline void set__suppressFlow_4(bool value)
	{
		____suppressFlow_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCONTEXT_T3315241318_H
#ifndef VERIFICATIONEXCEPTION_T1160124802_H
#define VERIFICATIONEXCEPTION_T1160124802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.VerificationException
struct  VerificationException_t1160124802  : public SystemException_t637859339
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERIFICATIONEXCEPTION_T1160124802_H
#ifndef WAITHANDLE_T2433601368_H
#define WAITHANDLE_T2433601368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t2433601368  : public MarshalByRefObject_t3101711328
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t730476552 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t2433601368, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t730476552 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t730476552 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t730476552 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t2433601368, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t2433601368_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	IntPtr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t2433601368_StaticFields, ___InvalidHandle_3)); }
	inline IntPtr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline IntPtr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(IntPtr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T2433601368_H
#ifndef SECURITYCRITICALSCOPE_T2669680886_H
#define SECURITYCRITICALSCOPE_T2669680886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalScope
struct  SecurityCriticalScope_t2669680886 
{
public:
	// System.Int32 System.Security.SecurityCriticalScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCriticalScope_t2669680886, ___value___1)); }
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
#endif // SECURITYCRITICALSCOPE_T2669680886_H
#ifndef SECURITYZONE_T52397144_H
#define SECURITYZONE_T52397144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityZone
struct  SecurityZone_t52397144 
{
public:
	// System.Int32 System.Security.SecurityZone::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityZone_t52397144, ___value___1)); }
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
#endif // SECURITYZONE_T52397144_H
#ifndef EVENTWAITHANDLE_T564488783_H
#define EVENTWAITHANDLE_T564488783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t564488783  : public WaitHandle_t2433601368
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T564488783_H
#ifndef DECODERFALLBACKEXCEPTION_T473522399_H
#define DECODERFALLBACKEXCEPTION_T473522399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackException
struct  DecoderFallbackException_t473522399  : public ArgumentException_t2715501635
{
public:
	// System.Byte[] System.Text.DecoderFallbackException::bytes_unknown
	ByteU5BU5D_t3665519352* ___bytes_unknown_13;
	// System.Int32 System.Text.DecoderFallbackException::index
	int32_t ___index_14;

public:
	inline static int32_t get_offset_of_bytes_unknown_13() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t473522399, ___bytes_unknown_13)); }
	inline ByteU5BU5D_t3665519352* get_bytes_unknown_13() const { return ___bytes_unknown_13; }
	inline ByteU5BU5D_t3665519352** get_address_of_bytes_unknown_13() { return &___bytes_unknown_13; }
	inline void set_bytes_unknown_13(ByteU5BU5D_t3665519352* value)
	{
		___bytes_unknown_13 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_unknown_13), value);
	}

	inline static int32_t get_offset_of_index_14() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t473522399, ___index_14)); }
	inline int32_t get_index_14() const { return ___index_14; }
	inline int32_t* get_address_of_index_14() { return &___index_14; }
	inline void set_index_14(int32_t value)
	{
		___index_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKEXCEPTION_T473522399_H
#ifndef RUNTIMEDECLSECURITYACTIONS_T4255339130_H
#define RUNTIMEDECLSECURITYACTIONS_T4255339130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityActions
struct  RuntimeDeclSecurityActions_t4255339130 
{
public:
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::cas
	RuntimeDeclSecurityEntry_t447155956  ___cas_0;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::noncas
	RuntimeDeclSecurityEntry_t447155956  ___noncas_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeDeclSecurityActions::choice
	RuntimeDeclSecurityEntry_t447155956  ___choice_2;

public:
	inline static int32_t get_offset_of_cas_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t4255339130, ___cas_0)); }
	inline RuntimeDeclSecurityEntry_t447155956  get_cas_0() const { return ___cas_0; }
	inline RuntimeDeclSecurityEntry_t447155956 * get_address_of_cas_0() { return &___cas_0; }
	inline void set_cas_0(RuntimeDeclSecurityEntry_t447155956  value)
	{
		___cas_0 = value;
	}

	inline static int32_t get_offset_of_noncas_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t4255339130, ___noncas_1)); }
	inline RuntimeDeclSecurityEntry_t447155956  get_noncas_1() const { return ___noncas_1; }
	inline RuntimeDeclSecurityEntry_t447155956 * get_address_of_noncas_1() { return &___noncas_1; }
	inline void set_noncas_1(RuntimeDeclSecurityEntry_t447155956  value)
	{
		___noncas_1 = value;
	}

	inline static int32_t get_offset_of_choice_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityActions_t4255339130, ___choice_2)); }
	inline RuntimeDeclSecurityEntry_t447155956  get_choice_2() const { return ___choice_2; }
	inline RuntimeDeclSecurityEntry_t447155956 * get_address_of_choice_2() { return &___choice_2; }
	inline void set_choice_2(RuntimeDeclSecurityEntry_t447155956  value)
	{
		___choice_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYACTIONS_T4255339130_H
#ifndef RUNTIMESECURITYFRAME_T944559683_H
#define RUNTIMESECURITYFRAME_T944559683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t944559683  : public RuntimeObject
{
public:
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t342225323 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t447155956  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t447155956  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t447155956  ___permitonly_4;

public:
	inline static int32_t get_offset_of_domain_0() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t944559683, ___domain_0)); }
	inline AppDomain_t342225323 * get_domain_0() const { return ___domain_0; }
	inline AppDomain_t342225323 ** get_address_of_domain_0() { return &___domain_0; }
	inline void set_domain_0(AppDomain_t342225323 * value)
	{
		___domain_0 = value;
		Il2CppCodeGenWriteBarrier((&___domain_0), value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t944559683, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_1), value);
	}

	inline static int32_t get_offset_of_assert_2() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t944559683, ___assert_2)); }
	inline RuntimeDeclSecurityEntry_t447155956  get_assert_2() const { return ___assert_2; }
	inline RuntimeDeclSecurityEntry_t447155956 * get_address_of_assert_2() { return &___assert_2; }
	inline void set_assert_2(RuntimeDeclSecurityEntry_t447155956  value)
	{
		___assert_2 = value;
	}

	inline static int32_t get_offset_of_deny_3() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t944559683, ___deny_3)); }
	inline RuntimeDeclSecurityEntry_t447155956  get_deny_3() const { return ___deny_3; }
	inline RuntimeDeclSecurityEntry_t447155956 * get_address_of_deny_3() { return &___deny_3; }
	inline void set_deny_3(RuntimeDeclSecurityEntry_t447155956  value)
	{
		___deny_3 = value;
	}

	inline static int32_t get_offset_of_permitonly_4() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t944559683, ___permitonly_4)); }
	inline RuntimeDeclSecurityEntry_t447155956  get_permitonly_4() const { return ___permitonly_4; }
	inline RuntimeDeclSecurityEntry_t447155956 * get_address_of_permitonly_4() { return &___permitonly_4; }
	inline void set_permitonly_4(RuntimeDeclSecurityEntry_t447155956  value)
	{
		___permitonly_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESECURITYFRAME_T944559683_H
#ifndef POLICYLEVEL_T753274912_H
#define POLICYLEVEL_T753274912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyLevel
struct  PolicyLevel_t753274912  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.PolicyLevel::label
	String_t* ___label_0;
	// System.Security.Policy.CodeGroup System.Security.Policy.PolicyLevel::root_code_group
	CodeGroup_t3190015079 * ___root_code_group_1;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::full_trust_assemblies
	ArrayList_t4142489098 * ___full_trust_assemblies_2;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::named_permission_sets
	ArrayList_t4142489098 * ___named_permission_sets_3;
	// System.String System.Security.Policy.PolicyLevel::_location
	String_t* ____location_4;
	// System.Security.PolicyLevelType System.Security.Policy.PolicyLevel::_type
	int32_t ____type_5;
	// System.Collections.Hashtable System.Security.Policy.PolicyLevel::fullNames
	Hashtable_t1289739904 * ___fullNames_6;
	// System.Security.SecurityElement System.Security.Policy.PolicyLevel::xml
	SecurityElement_t686020834 * ___xml_7;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(PolicyLevel_t753274912, ___label_0)); }
	inline String_t* get_label_0() const { return ___label_0; }
	inline String_t** get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(String_t* value)
	{
		___label_0 = value;
		Il2CppCodeGenWriteBarrier((&___label_0), value);
	}

	inline static int32_t get_offset_of_root_code_group_1() { return static_cast<int32_t>(offsetof(PolicyLevel_t753274912, ___root_code_group_1)); }
	inline CodeGroup_t3190015079 * get_root_code_group_1() const { return ___root_code_group_1; }
	inline CodeGroup_t3190015079 ** get_address_of_root_code_group_1() { return &___root_code_group_1; }
	inline void set_root_code_group_1(CodeGroup_t3190015079 * value)
	{
		___root_code_group_1 = value;
		Il2CppCodeGenWriteBarrier((&___root_code_group_1), value);
	}

	inline static int32_t get_offset_of_full_trust_assemblies_2() { return static_cast<int32_t>(offsetof(PolicyLevel_t753274912, ___full_trust_assemblies_2)); }
	inline ArrayList_t4142489098 * get_full_trust_assemblies_2() const { return ___full_trust_assemblies_2; }
	inline ArrayList_t4142489098 ** get_address_of_full_trust_assemblies_2() { return &___full_trust_assemblies_2; }
	inline void set_full_trust_assemblies_2(ArrayList_t4142489098 * value)
	{
		___full_trust_assemblies_2 = value;
		Il2CppCodeGenWriteBarrier((&___full_trust_assemblies_2), value);
	}

	inline static int32_t get_offset_of_named_permission_sets_3() { return static_cast<int32_t>(offsetof(PolicyLevel_t753274912, ___named_permission_sets_3)); }
	inline ArrayList_t4142489098 * get_named_permission_sets_3() const { return ___named_permission_sets_3; }
	inline ArrayList_t4142489098 ** get_address_of_named_permission_sets_3() { return &___named_permission_sets_3; }
	inline void set_named_permission_sets_3(ArrayList_t4142489098 * value)
	{
		___named_permission_sets_3 = value;
		Il2CppCodeGenWriteBarrier((&___named_permission_sets_3), value);
	}

	inline static int32_t get_offset_of__location_4() { return static_cast<int32_t>(offsetof(PolicyLevel_t753274912, ____location_4)); }
	inline String_t* get__location_4() const { return ____location_4; }
	inline String_t** get_address_of__location_4() { return &____location_4; }
	inline void set__location_4(String_t* value)
	{
		____location_4 = value;
		Il2CppCodeGenWriteBarrier((&____location_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(PolicyLevel_t753274912, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}

	inline static int32_t get_offset_of_fullNames_6() { return static_cast<int32_t>(offsetof(PolicyLevel_t753274912, ___fullNames_6)); }
	inline Hashtable_t1289739904 * get_fullNames_6() const { return ___fullNames_6; }
	inline Hashtable_t1289739904 ** get_address_of_fullNames_6() { return &___fullNames_6; }
	inline void set_fullNames_6(Hashtable_t1289739904 * value)
	{
		___fullNames_6 = value;
		Il2CppCodeGenWriteBarrier((&___fullNames_6), value);
	}

	inline static int32_t get_offset_of_xml_7() { return static_cast<int32_t>(offsetof(PolicyLevel_t753274912, ___xml_7)); }
	inline SecurityElement_t686020834 * get_xml_7() const { return ___xml_7; }
	inline SecurityElement_t686020834 ** get_address_of_xml_7() { return &___xml_7; }
	inline void set_xml_7(SecurityElement_t686020834 * value)
	{
		___xml_7 = value;
		Il2CppCodeGenWriteBarrier((&___xml_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYLEVEL_T753274912_H
#ifndef WINDOWSIDENTITY_T34136383_H
#define WINDOWSIDENTITY_T34136383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsIdentity
struct  WindowsIdentity_t34136383  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	IntPtr_t ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t3327250702 * ____info_5;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsIdentity_t34136383, ____token_0)); }
	inline IntPtr_t get__token_0() const { return ____token_0; }
	inline IntPtr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(IntPtr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(WindowsIdentity_t34136383, ____type_1)); }
	inline String_t* get__type_1() const { return ____type_1; }
	inline String_t** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(String_t* value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__account_2() { return static_cast<int32_t>(offsetof(WindowsIdentity_t34136383, ____account_2)); }
	inline int32_t get__account_2() const { return ____account_2; }
	inline int32_t* get_address_of__account_2() { return &____account_2; }
	inline void set__account_2(int32_t value)
	{
		____account_2 = value;
	}

	inline static int32_t get_offset_of__authenticated_3() { return static_cast<int32_t>(offsetof(WindowsIdentity_t34136383, ____authenticated_3)); }
	inline bool get__authenticated_3() const { return ____authenticated_3; }
	inline bool* get_address_of__authenticated_3() { return &____authenticated_3; }
	inline void set__authenticated_3(bool value)
	{
		____authenticated_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(WindowsIdentity_t34136383, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}

	inline static int32_t get_offset_of__info_5() { return static_cast<int32_t>(offsetof(WindowsIdentity_t34136383, ____info_5)); }
	inline SerializationInfo_t3327250702 * get__info_5() const { return ____info_5; }
	inline SerializationInfo_t3327250702 ** get_address_of__info_5() { return &____info_5; }
	inline void set__info_5(SerializationInfo_t3327250702 * value)
	{
		____info_5 = value;
		Il2CppCodeGenWriteBarrier((&____info_5), value);
	}
};

struct WindowsIdentity_t34136383_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	IntPtr_t ___invalidWindows_6;

public:
	inline static int32_t get_offset_of_invalidWindows_6() { return static_cast<int32_t>(offsetof(WindowsIdentity_t34136383_StaticFields, ___invalidWindows_6)); }
	inline IntPtr_t get_invalidWindows_6() const { return ___invalidWindows_6; }
	inline IntPtr_t* get_address_of_invalidWindows_6() { return &___invalidWindows_6; }
	inline void set_invalidWindows_6(IntPtr_t value)
	{
		___invalidWindows_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSIDENTITY_T34136383_H
#ifndef ENCODERFALLBACKEXCEPTION_T757906067_H
#define ENCODERFALLBACKEXCEPTION_T757906067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t757906067  : public ArgumentException_t2715501635
{
public:
	// System.Char System.Text.EncoderFallbackException::char_unknown
	Il2CppChar ___char_unknown_13;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	Il2CppChar ___char_unknown_high_14;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	Il2CppChar ___char_unknown_low_15;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_16;

public:
	inline static int32_t get_offset_of_char_unknown_13() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t757906067, ___char_unknown_13)); }
	inline Il2CppChar get_char_unknown_13() const { return ___char_unknown_13; }
	inline Il2CppChar* get_address_of_char_unknown_13() { return &___char_unknown_13; }
	inline void set_char_unknown_13(Il2CppChar value)
	{
		___char_unknown_13 = value;
	}

	inline static int32_t get_offset_of_char_unknown_high_14() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t757906067, ___char_unknown_high_14)); }
	inline Il2CppChar get_char_unknown_high_14() const { return ___char_unknown_high_14; }
	inline Il2CppChar* get_address_of_char_unknown_high_14() { return &___char_unknown_high_14; }
	inline void set_char_unknown_high_14(Il2CppChar value)
	{
		___char_unknown_high_14 = value;
	}

	inline static int32_t get_offset_of_char_unknown_low_15() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t757906067, ___char_unknown_low_15)); }
	inline Il2CppChar get_char_unknown_low_15() const { return ___char_unknown_low_15; }
	inline Il2CppChar* get_address_of_char_unknown_low_15() { return &___char_unknown_low_15; }
	inline void set_char_unknown_low_15(Il2CppChar value)
	{
		___char_unknown_low_15 = value;
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t757906067, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKEXCEPTION_T757906067_H
#ifndef HOSTPROTECTIONEXCEPTION_T632595911_H
#define HOSTPROTECTIONEXCEPTION_T632595911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.HostProtectionException
struct  HostProtectionException_t632595911  : public SystemException_t637859339
{
public:
	// System.Security.Permissions.HostProtectionResource System.Security.HostProtectionException::_protected
	int32_t ____protected_11;
	// System.Security.Permissions.HostProtectionResource System.Security.HostProtectionException::_demanded
	int32_t ____demanded_12;

public:
	inline static int32_t get_offset_of__protected_11() { return static_cast<int32_t>(offsetof(HostProtectionException_t632595911, ____protected_11)); }
	inline int32_t get__protected_11() const { return ____protected_11; }
	inline int32_t* get_address_of__protected_11() { return &____protected_11; }
	inline void set__protected_11(int32_t value)
	{
		____protected_11 = value;
	}

	inline static int32_t get_offset_of__demanded_12() { return static_cast<int32_t>(offsetof(HostProtectionException_t632595911, ____demanded_12)); }
	inline int32_t get__demanded_12() const { return ____demanded_12; }
	inline int32_t* get_address_of__demanded_12() { return &____demanded_12; }
	inline void set__demanded_12(int32_t value)
	{
		____demanded_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTPROTECTIONEXCEPTION_T632595911_H
#ifndef ZONE_T3226808605_H
#define ZONE_T3226808605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Zone
struct  Zone_t3226808605  : public RuntimeObject
{
public:
	// System.Security.SecurityZone System.Security.Policy.Zone::zone
	int32_t ___zone_0;

public:
	inline static int32_t get_offset_of_zone_0() { return static_cast<int32_t>(offsetof(Zone_t3226808605, ___zone_0)); }
	inline int32_t get_zone_0() const { return ___zone_0; }
	inline int32_t* get_address_of_zone_0() { return &___zone_0; }
	inline void set_zone_0(int32_t value)
	{
		___zone_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONE_T3226808605_H
#ifndef SECURITYEXCEPTION_T4041446808_H
#define SECURITYEXCEPTION_T4041446808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t4041446808  : public SystemException_t637859339
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_11;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_12;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_13;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_14;
	// System.Object System.Security.SecurityException::_demanded
	RuntimeObject * ____demanded_15;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	RuntimeObject* ____firstperm_16;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_17;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t2159026158 * ____evidence_18;
	// System.Security.Permissions.SecurityAction System.Security.SecurityException::_action
	int32_t ____action_19;
	// System.Object System.Security.SecurityException::_denyset
	RuntimeObject * ____denyset_20;
	// System.Object System.Security.SecurityException::_permitset
	RuntimeObject * ____permitset_21;
	// System.Reflection.AssemblyName System.Security.SecurityException::_assembly
	AssemblyName_t200190181 * ____assembly_22;
	// System.String System.Security.SecurityException::_url
	String_t* ____url_23;
	// System.Security.SecurityZone System.Security.SecurityException::_zone
	int32_t ____zone_24;

public:
	inline static int32_t get_offset_of_permissionState_11() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ___permissionState_11)); }
	inline String_t* get_permissionState_11() const { return ___permissionState_11; }
	inline String_t** get_address_of_permissionState_11() { return &___permissionState_11; }
	inline void set_permissionState_11(String_t* value)
	{
		___permissionState_11 = value;
		Il2CppCodeGenWriteBarrier((&___permissionState_11), value);
	}

	inline static int32_t get_offset_of_permissionType_12() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ___permissionType_12)); }
	inline Type_t * get_permissionType_12() const { return ___permissionType_12; }
	inline Type_t ** get_address_of_permissionType_12() { return &___permissionType_12; }
	inline void set_permissionType_12(Type_t * value)
	{
		___permissionType_12 = value;
		Il2CppCodeGenWriteBarrier((&___permissionType_12), value);
	}

	inline static int32_t get_offset_of__granted_13() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ____granted_13)); }
	inline String_t* get__granted_13() const { return ____granted_13; }
	inline String_t** get_address_of__granted_13() { return &____granted_13; }
	inline void set__granted_13(String_t* value)
	{
		____granted_13 = value;
		Il2CppCodeGenWriteBarrier((&____granted_13), value);
	}

	inline static int32_t get_offset_of__refused_14() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ____refused_14)); }
	inline String_t* get__refused_14() const { return ____refused_14; }
	inline String_t** get_address_of__refused_14() { return &____refused_14; }
	inline void set__refused_14(String_t* value)
	{
		____refused_14 = value;
		Il2CppCodeGenWriteBarrier((&____refused_14), value);
	}

	inline static int32_t get_offset_of__demanded_15() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ____demanded_15)); }
	inline RuntimeObject * get__demanded_15() const { return ____demanded_15; }
	inline RuntimeObject ** get_address_of__demanded_15() { return &____demanded_15; }
	inline void set__demanded_15(RuntimeObject * value)
	{
		____demanded_15 = value;
		Il2CppCodeGenWriteBarrier((&____demanded_15), value);
	}

	inline static int32_t get_offset_of__firstperm_16() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ____firstperm_16)); }
	inline RuntimeObject* get__firstperm_16() const { return ____firstperm_16; }
	inline RuntimeObject** get_address_of__firstperm_16() { return &____firstperm_16; }
	inline void set__firstperm_16(RuntimeObject* value)
	{
		____firstperm_16 = value;
		Il2CppCodeGenWriteBarrier((&____firstperm_16), value);
	}

	inline static int32_t get_offset_of__method_17() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ____method_17)); }
	inline MethodInfo_t * get__method_17() const { return ____method_17; }
	inline MethodInfo_t ** get_address_of__method_17() { return &____method_17; }
	inline void set__method_17(MethodInfo_t * value)
	{
		____method_17 = value;
		Il2CppCodeGenWriteBarrier((&____method_17), value);
	}

	inline static int32_t get_offset_of__evidence_18() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ____evidence_18)); }
	inline Evidence_t2159026158 * get__evidence_18() const { return ____evidence_18; }
	inline Evidence_t2159026158 ** get_address_of__evidence_18() { return &____evidence_18; }
	inline void set__evidence_18(Evidence_t2159026158 * value)
	{
		____evidence_18 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_18), value);
	}

	inline static int32_t get_offset_of__action_19() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ____action_19)); }
	inline int32_t get__action_19() const { return ____action_19; }
	inline int32_t* get_address_of__action_19() { return &____action_19; }
	inline void set__action_19(int32_t value)
	{
		____action_19 = value;
	}

	inline static int32_t get_offset_of__denyset_20() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ____denyset_20)); }
	inline RuntimeObject * get__denyset_20() const { return ____denyset_20; }
	inline RuntimeObject ** get_address_of__denyset_20() { return &____denyset_20; }
	inline void set__denyset_20(RuntimeObject * value)
	{
		____denyset_20 = value;
		Il2CppCodeGenWriteBarrier((&____denyset_20), value);
	}

	inline static int32_t get_offset_of__permitset_21() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ____permitset_21)); }
	inline RuntimeObject * get__permitset_21() const { return ____permitset_21; }
	inline RuntimeObject ** get_address_of__permitset_21() { return &____permitset_21; }
	inline void set__permitset_21(RuntimeObject * value)
	{
		____permitset_21 = value;
		Il2CppCodeGenWriteBarrier((&____permitset_21), value);
	}

	inline static int32_t get_offset_of__assembly_22() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ____assembly_22)); }
	inline AssemblyName_t200190181 * get__assembly_22() const { return ____assembly_22; }
	inline AssemblyName_t200190181 ** get_address_of__assembly_22() { return &____assembly_22; }
	inline void set__assembly_22(AssemblyName_t200190181 * value)
	{
		____assembly_22 = value;
		Il2CppCodeGenWriteBarrier((&____assembly_22), value);
	}

	inline static int32_t get_offset_of__url_23() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ____url_23)); }
	inline String_t* get__url_23() const { return ____url_23; }
	inline String_t** get_address_of__url_23() { return &____url_23; }
	inline void set__url_23(String_t* value)
	{
		____url_23 = value;
		Il2CppCodeGenWriteBarrier((&____url_23), value);
	}

	inline static int32_t get_offset_of__zone_24() { return static_cast<int32_t>(offsetof(SecurityException_t4041446808, ____zone_24)); }
	inline int32_t get__zone_24() const { return ____zone_24; }
	inline int32_t* get_address_of__zone_24() { return &____zone_24; }
	inline void set__zone_24(int32_t value)
	{
		____zone_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYEXCEPTION_T4041446808_H
#ifndef ZONEMEMBERSHIPCONDITION_T3865647677_H
#define ZONEMEMBERSHIPCONDITION_T3865647677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ZoneMembershipCondition
struct  ZoneMembershipCondition_t3865647677  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.ZoneMembershipCondition::version
	int32_t ___version_0;
	// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::zone
	int32_t ___zone_1;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t3865647677, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_zone_1() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t3865647677, ___zone_1)); }
	inline int32_t get_zone_1() const { return ___zone_1; }
	inline int32_t* get_address_of_zone_1() { return &___zone_1; }
	inline void set_zone_1(int32_t value)
	{
		___zone_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEMEMBERSHIPCONDITION_T3865647677_H
#ifndef SECURITYCRITICALATTRIBUTE_T4267151785_H
#define SECURITYCRITICALATTRIBUTE_T4267151785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalAttribute
struct  SecurityCriticalAttribute_t4267151785  : public Attribute_t2192553355
{
public:
	// System.Security.SecurityCriticalScope System.Security.SecurityCriticalAttribute::_scope
	int32_t ____scope_0;

public:
	inline static int32_t get_offset_of__scope_0() { return static_cast<int32_t>(offsetof(SecurityCriticalAttribute_t4267151785, ____scope_0)); }
	inline int32_t get__scope_0() const { return ____scope_0; }
	inline int32_t* get_address_of__scope_0() { return &____scope_0; }
	inline void set__scope_0(int32_t value)
	{
		____scope_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCRITICALATTRIBUTE_T4267151785_H
#ifndef ASYNCFLOWCONTROL_T544559320_H
#define ASYNCFLOWCONTROL_T544559320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AsyncFlowControl
struct  AsyncFlowControl_t544559320 
{
public:
	// System.Threading.Thread System.Threading.AsyncFlowControl::_t
	Thread_t2506991146 * ____t_0;
	// System.Threading.AsyncFlowControlType System.Threading.AsyncFlowControl::_type
	int32_t ____type_1;

public:
	inline static int32_t get_offset_of__t_0() { return static_cast<int32_t>(offsetof(AsyncFlowControl_t544559320, ____t_0)); }
	inline Thread_t2506991146 * get__t_0() const { return ____t_0; }
	inline Thread_t2506991146 ** get_address_of__t_0() { return &____t_0; }
	inline void set__t_0(Thread_t2506991146 * value)
	{
		____t_0 = value;
		Il2CppCodeGenWriteBarrier((&____t_0), value);
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(AsyncFlowControl_t544559320, ____type_1)); }
	inline int32_t get__type_1() const { return ____type_1; }
	inline int32_t* get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(int32_t value)
	{
		____type_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.AsyncFlowControl
struct AsyncFlowControl_t544559320_marshaled_pinvoke
{
	Thread_t2506991146 * ____t_0;
	int32_t ____type_1;
};
// Native definition for COM marshalling of System.Threading.AsyncFlowControl
struct AsyncFlowControl_t544559320_marshaled_com
{
	Thread_t2506991146 * ____t_0;
	int32_t ____type_1;
};
#endif // ASYNCFLOWCONTROL_T544559320_H
#ifndef POLICYSTATEMENT_T4229364798_H
#define POLICYSTATEMENT_T4229364798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatement
struct  PolicyStatement_t4229364798  : public RuntimeObject
{
public:
	// System.Security.PermissionSet System.Security.Policy.PolicyStatement::perms
	PermissionSet_t1667738006 * ___perms_0;
	// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::attrs
	int32_t ___attrs_1;

public:
	inline static int32_t get_offset_of_perms_0() { return static_cast<int32_t>(offsetof(PolicyStatement_t4229364798, ___perms_0)); }
	inline PermissionSet_t1667738006 * get_perms_0() const { return ___perms_0; }
	inline PermissionSet_t1667738006 ** get_address_of_perms_0() { return &___perms_0; }
	inline void set_perms_0(PermissionSet_t1667738006 * value)
	{
		___perms_0 = value;
		Il2CppCodeGenWriteBarrier((&___perms_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(PolicyStatement_t4229364798, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYSTATEMENT_T4229364798_H
#ifndef FILECODEGROUP_T3983209014_H
#define FILECODEGROUP_T3983209014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.FileCodeGroup
struct  FileCodeGroup_t3983209014  : public CodeGroup_t3190015079
{
public:
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Policy.FileCodeGroup::m_access
	int32_t ___m_access_6;

public:
	inline static int32_t get_offset_of_m_access_6() { return static_cast<int32_t>(offsetof(FileCodeGroup_t3983209014, ___m_access_6)); }
	inline int32_t get_m_access_6() const { return ___m_access_6; }
	inline int32_t* get_address_of_m_access_6() { return &___m_access_6; }
	inline void set_m_access_6(int32_t value)
	{
		___m_access_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILECODEGROUP_T3983209014_H
#ifndef AUTORESETEVENT_T4239610211_H
#define AUTORESETEVENT_T4239610211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AutoResetEvent
struct  AutoResetEvent_t4239610211  : public EventWaitHandle_t564488783
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTORESETEVENT_T4239610211_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize800 = { sizeof (FileCodeGroup_t3983209014), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable800[1] = 
{
	FileCodeGroup_t3983209014::get_offset_of_m_access_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize801 = { sizeof (FirstMatchCodeGroup_t1009896578), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize802 = { sizeof (Hash_t325955160), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable802[2] = 
{
	Hash_t325955160::get_offset_of_assembly_0(),
	Hash_t325955160::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize803 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize804 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize805 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize806 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize807 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize808 = { sizeof (MembershipConditionHelper_t576873845), -1, sizeof(MembershipConditionHelper_t576873845_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable808[1] = 
{
	MembershipConditionHelper_t576873845_StaticFields::get_offset_of_XmlTag_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize809 = { sizeof (MonoTrustManager_t1494400577), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize810 = { sizeof (NetCodeGroup_t796859807), -1, sizeof(NetCodeGroup_t796859807_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable810[4] = 
{
	NetCodeGroup_t796859807_StaticFields::get_offset_of_AbsentOriginScheme_6(),
	NetCodeGroup_t796859807_StaticFields::get_offset_of_AnyOtherOriginScheme_7(),
	NetCodeGroup_t796859807::get_offset_of__rules_8(),
	NetCodeGroup_t796859807::get_offset_of__hashcode_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize811 = { sizeof (PermissionRequestEvidence_t2079697541), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable811[3] = 
{
	PermissionRequestEvidence_t2079697541::get_offset_of_requested_0(),
	PermissionRequestEvidence_t2079697541::get_offset_of_optional_1(),
	PermissionRequestEvidence_t2079697541::get_offset_of_denied_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize812 = { sizeof (PolicyException_t1883771093), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize813 = { sizeof (PolicyLevel_t753274912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable813[8] = 
{
	PolicyLevel_t753274912::get_offset_of_label_0(),
	PolicyLevel_t753274912::get_offset_of_root_code_group_1(),
	PolicyLevel_t753274912::get_offset_of_full_trust_assemblies_2(),
	PolicyLevel_t753274912::get_offset_of_named_permission_sets_3(),
	PolicyLevel_t753274912::get_offset_of__location_4(),
	PolicyLevel_t753274912::get_offset_of__type_5(),
	PolicyLevel_t753274912::get_offset_of_fullNames_6(),
	PolicyLevel_t753274912::get_offset_of_xml_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize814 = { sizeof (PolicyStatement_t4229364798), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable814[2] = 
{
	PolicyStatement_t4229364798::get_offset_of_perms_0(),
	PolicyStatement_t4229364798::get_offset_of_attrs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize815 = { sizeof (PolicyStatementAttribute_t1318696756)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable815[5] = 
{
	PolicyStatementAttribute_t1318696756::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize816 = { sizeof (StrongName_t914311843), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable816[3] = 
{
	StrongName_t914311843::get_offset_of_publickey_0(),
	StrongName_t914311843::get_offset_of_name_1(),
	StrongName_t914311843::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize817 = { sizeof (StrongNameMembershipCondition_t3151095433), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable817[4] = 
{
	StrongNameMembershipCondition_t3151095433::get_offset_of_version_0(),
	StrongNameMembershipCondition_t3151095433::get_offset_of_blob_1(),
	StrongNameMembershipCondition_t3151095433::get_offset_of_name_2(),
	StrongNameMembershipCondition_t3151095433::get_offset_of_assemblyVersion_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize818 = { sizeof (TrustManagerContext_t2875593279), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize819 = { sizeof (UnionCodeGroup_t3473443698), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize820 = { sizeof (Zone_t3226808605), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable820[1] = 
{
	Zone_t3226808605::get_offset_of_zone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize821 = { sizeof (ZoneMembershipCondition_t3865647677), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable821[2] = 
{
	ZoneMembershipCondition_t3865647677::get_offset_of_version_0(),
	ZoneMembershipCondition_t3865647677::get_offset_of_zone_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize822 = { sizeof (GenericIdentity_t2111777886), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable822[2] = 
{
	GenericIdentity_t2111777886::get_offset_of_m_name_0(),
	GenericIdentity_t2111777886::get_offset_of_m_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize823 = { sizeof (GenericPrincipal_t4183431319), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable823[2] = 
{
	GenericPrincipal_t4183431319::get_offset_of_m_identity_0(),
	GenericPrincipal_t4183431319::get_offset_of_m_roles_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize824 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize825 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize826 = { sizeof (PrincipalPolicy_t1526359361)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable826[4] = 
{
	PrincipalPolicy_t1526359361::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize827 = { sizeof (TokenImpersonationLevel_t3922651618)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable827[6] = 
{
	TokenImpersonationLevel_t3922651618::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize828 = { sizeof (WindowsAccountType_t2031748488)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable828[5] = 
{
	WindowsAccountType_t2031748488::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize829 = { sizeof (WindowsIdentity_t34136383), -1, sizeof(WindowsIdentity_t34136383_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable829[7] = 
{
	WindowsIdentity_t34136383::get_offset_of__token_0(),
	WindowsIdentity_t34136383::get_offset_of__type_1(),
	WindowsIdentity_t34136383::get_offset_of__account_2(),
	WindowsIdentity_t34136383::get_offset_of__authenticated_3(),
	WindowsIdentity_t34136383::get_offset_of__name_4(),
	WindowsIdentity_t34136383::get_offset_of__info_5(),
	WindowsIdentity_t34136383_StaticFields::get_offset_of_invalidWindows_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize830 = { sizeof (WindowsPrincipal_t3559458690), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable830[1] = 
{
	WindowsPrincipal_t3559458690::get_offset_of__identity_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize831 = { sizeof (AllowPartiallyTrustedCallersAttribute_t3795476366), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize832 = { sizeof (CodeAccessPermission_t4223177149), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize833 = { sizeof (HostProtectionException_t632595911), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable833[2] = 
{
	HostProtectionException_t632595911::get_offset_of__protected_11(),
	HostProtectionException_t632595911::get_offset_of__demanded_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize834 = { sizeof (HostSecurityManager_t3783517114), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize835 = { sizeof (HostSecurityManagerOptions_t2872910676)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable835[8] = 
{
	HostSecurityManagerOptions_t2872910676::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize836 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize837 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize838 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize839 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize840 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize841 = { sizeof (NamedPermissionSet_t3338289148), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable841[2] = 
{
	NamedPermissionSet_t3338289148::get_offset_of_name_2(),
	NamedPermissionSet_t3338289148::get_offset_of_description_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize842 = { sizeof (PermissionBuilder_t2578775153), -1, sizeof(PermissionBuilder_t2578775153_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable842[1] = 
{
	PermissionBuilder_t2578775153_StaticFields::get_offset_of_psNone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize843 = { sizeof (PermissionSet_t1667738006), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable843[2] = 
{
	PermissionSet_t1667738006::get_offset_of_U3CResolverU3Ek__BackingField_0(),
	PermissionSet_t1667738006::get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize844 = { sizeof (U3CGetEnumeratorU3Ec__Iterator1_t715109130), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable844[2] = 
{
	U3CGetEnumeratorU3Ec__Iterator1_t715109130::get_offset_of_U24PC_0(),
	U3CGetEnumeratorU3Ec__Iterator1_t715109130::get_offset_of_U24current_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize845 = { sizeof (PolicyLevelType_t485203490)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable845[5] = 
{
	PolicyLevelType_t485203490::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize846 = { sizeof (SecureString_t2290931091), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable846[6] = 
{
	0,
	0,
	SecureString_t2290931091::get_offset_of_length_2(),
	SecureString_t2290931091::get_offset_of_disposed_3(),
	SecureString_t2290931091::get_offset_of_read_only_4(),
	SecureString_t2290931091::get_offset_of_data_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize847 = { sizeof (SecurityContext_t3315241318), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable847[5] = 
{
	SecurityContext_t3315241318::get_offset_of__capture_0(),
	SecurityContext_t3315241318::get_offset_of__winid_1(),
	SecurityContext_t3315241318::get_offset_of__stack_2(),
	SecurityContext_t3315241318::get_offset_of__suppressFlowWindowsIdentity_3(),
	SecurityContext_t3315241318::get_offset_of__suppressFlow_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize848 = { sizeof (SecurityCriticalAttribute_t4267151785), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable848[1] = 
{
	SecurityCriticalAttribute_t4267151785::get_offset_of__scope_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize849 = { sizeof (SecurityCriticalScope_t2669680886)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable849[3] = 
{
	SecurityCriticalScope_t2669680886::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize850 = { sizeof (SecurityElement_t686020834), -1, sizeof(SecurityElement_t686020834_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable850[9] = 
{
	SecurityElement_t686020834::get_offset_of_text_0(),
	SecurityElement_t686020834::get_offset_of_tag_1(),
	SecurityElement_t686020834::get_offset_of_attributes_2(),
	SecurityElement_t686020834::get_offset_of_children_3(),
	SecurityElement_t686020834_StaticFields::get_offset_of_invalid_tag_chars_4(),
	SecurityElement_t686020834_StaticFields::get_offset_of_invalid_text_chars_5(),
	SecurityElement_t686020834_StaticFields::get_offset_of_invalid_attr_name_chars_6(),
	SecurityElement_t686020834_StaticFields::get_offset_of_invalid_attr_value_chars_7(),
	SecurityElement_t686020834_StaticFields::get_offset_of_invalid_chars_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize851 = { sizeof (SecurityAttribute_t2866340432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable851[2] = 
{
	SecurityAttribute_t2866340432::get_offset_of__name_0(),
	SecurityAttribute_t2866340432::get_offset_of__value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize852 = { sizeof (SecurityException_t4041446808), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable852[14] = 
{
	SecurityException_t4041446808::get_offset_of_permissionState_11(),
	SecurityException_t4041446808::get_offset_of_permissionType_12(),
	SecurityException_t4041446808::get_offset_of__granted_13(),
	SecurityException_t4041446808::get_offset_of__refused_14(),
	SecurityException_t4041446808::get_offset_of__demanded_15(),
	SecurityException_t4041446808::get_offset_of__firstperm_16(),
	SecurityException_t4041446808::get_offset_of__method_17(),
	SecurityException_t4041446808::get_offset_of__evidence_18(),
	SecurityException_t4041446808::get_offset_of__action_19(),
	SecurityException_t4041446808::get_offset_of__denyset_20(),
	SecurityException_t4041446808::get_offset_of__permitset_21(),
	SecurityException_t4041446808::get_offset_of__assembly_22(),
	SecurityException_t4041446808::get_offset_of__url_23(),
	SecurityException_t4041446808::get_offset_of__zone_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize853 = { sizeof (RuntimeDeclSecurityEntry_t447155956)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityEntry_t447155956 ), 0, 0 };
extern const int32_t g_FieldOffsetTable853[3] = 
{
	RuntimeDeclSecurityEntry_t447155956::get_offset_of_blob_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t447155956::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t447155956::get_offset_of_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize854 = { sizeof (RuntimeSecurityFrame_t944559683), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable854[5] = 
{
	RuntimeSecurityFrame_t944559683::get_offset_of_domain_0(),
	RuntimeSecurityFrame_t944559683::get_offset_of_method_1(),
	RuntimeSecurityFrame_t944559683::get_offset_of_assert_2(),
	RuntimeSecurityFrame_t944559683::get_offset_of_deny_3(),
	RuntimeSecurityFrame_t944559683::get_offset_of_permitonly_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize855 = { sizeof (SecurityFrame_t4082283920)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable855[5] = 
{
	SecurityFrame_t4082283920::get_offset_of__domain_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t4082283920::get_offset_of__method_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t4082283920::get_offset_of__assert_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t4082283920::get_offset_of__deny_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t4082283920::get_offset_of__permitonly_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize856 = { sizeof (RuntimeDeclSecurityActions_t4255339130)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityActions_t4255339130 ), 0, 0 };
extern const int32_t g_FieldOffsetTable856[3] = 
{
	RuntimeDeclSecurityActions_t4255339130::get_offset_of_cas_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityActions_t4255339130::get_offset_of_noncas_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityActions_t4255339130::get_offset_of_choice_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize857 = { sizeof (SecurityManager_t1632238996), -1, sizeof(SecurityManager_t1632238996_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable857[6] = 
{
	SecurityManager_t1632238996_StaticFields::get_offset_of__lockObject_0(),
	SecurityManager_t1632238996_StaticFields::get_offset_of__hierarchy_1(),
	SecurityManager_t1632238996_StaticFields::get_offset_of__unmanagedCode_2(),
	SecurityManager_t1632238996_StaticFields::get_offset_of__declsecCache_3(),
	SecurityManager_t1632238996_StaticFields::get_offset_of__level_4(),
	SecurityManager_t1632238996_StaticFields::get_offset_of__execution_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize858 = { sizeof (SecuritySafeCriticalAttribute_t411557696), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize859 = { sizeof (SecurityState_t1580921086), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize860 = { sizeof (SecurityTransparentAttribute_t2876315701), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize861 = { sizeof (SecurityTreatAsSafeAttribute_t1451612868), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize862 = { sizeof (SecurityZone_t52397144)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable862[7] = 
{
	SecurityZone_t52397144::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize863 = { sizeof (SuppressUnmanagedCodeSecurityAttribute_t2116331348), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize864 = { sizeof (UnverifiableCodeAttribute_t719174462), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize865 = { sizeof (VerificationException_t1160124802), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize866 = { sizeof (XmlSyntaxException_t3280700030), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize867 = { sizeof (ASCIIEncoding_t3477137373), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize868 = { sizeof (Decoder_t1641853965), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable868[2] = 
{
	Decoder_t1641853965::get_offset_of_fallback_0(),
	Decoder_t1641853965::get_offset_of_fallback_buffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize869 = { sizeof (DecoderExceptionFallback_t499587601), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize870 = { sizeof (DecoderExceptionFallbackBuffer_t2544055275), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize871 = { sizeof (DecoderFallback_t881097753), -1, sizeof(DecoderFallback_t881097753_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable871[3] = 
{
	DecoderFallback_t881097753_StaticFields::get_offset_of_exception_fallback_0(),
	DecoderFallback_t881097753_StaticFields::get_offset_of_replacement_fallback_1(),
	DecoderFallback_t881097753_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize872 = { sizeof (DecoderFallbackBuffer_t4065045496), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize873 = { sizeof (DecoderFallbackException_t473522399), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable873[2] = 
{
	DecoderFallbackException_t473522399::get_offset_of_bytes_unknown_13(),
	DecoderFallbackException_t473522399::get_offset_of_index_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize874 = { sizeof (DecoderReplacementFallback_t955420061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable874[1] = 
{
	DecoderReplacementFallback_t955420061::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize875 = { sizeof (DecoderReplacementFallbackBuffer_t2667415350), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable875[3] = 
{
	DecoderReplacementFallbackBuffer_t2667415350::get_offset_of_fallback_assigned_0(),
	DecoderReplacementFallbackBuffer_t2667415350::get_offset_of_current_1(),
	DecoderReplacementFallbackBuffer_t2667415350::get_offset_of_replacement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize876 = { sizeof (EncoderExceptionFallback_t2895230481), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize877 = { sizeof (EncoderExceptionFallbackBuffer_t3173606805), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize878 = { sizeof (EncoderFallback_t1189921197), -1, sizeof(EncoderFallback_t1189921197_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable878[3] = 
{
	EncoderFallback_t1189921197_StaticFields::get_offset_of_exception_fallback_0(),
	EncoderFallback_t1189921197_StaticFields::get_offset_of_replacement_fallback_1(),
	EncoderFallback_t1189921197_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize879 = { sizeof (EncoderFallbackBuffer_t395947868), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize880 = { sizeof (EncoderFallbackException_t757906067), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable880[4] = 
{
	EncoderFallbackException_t757906067::get_offset_of_char_unknown_13(),
	EncoderFallbackException_t757906067::get_offset_of_char_unknown_high_14(),
	EncoderFallbackException_t757906067::get_offset_of_char_unknown_low_15(),
	EncoderFallbackException_t757906067::get_offset_of_index_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize881 = { sizeof (EncoderReplacementFallback_t1765987626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable881[1] = 
{
	EncoderReplacementFallback_t1765987626::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize882 = { sizeof (EncoderReplacementFallbackBuffer_t3140460878), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable882[3] = 
{
	EncoderReplacementFallbackBuffer_t3140460878::get_offset_of_replacement_0(),
	EncoderReplacementFallbackBuffer_t3140460878::get_offset_of_current_1(),
	EncoderReplacementFallbackBuffer_t3140460878::get_offset_of_fallback_assigned_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize883 = { sizeof (Encoding_t1570699682), -1, sizeof(Encoding_t1570699682_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable883[28] = 
{
	Encoding_t1570699682::get_offset_of_codePage_0(),
	Encoding_t1570699682::get_offset_of_windows_code_page_1(),
	Encoding_t1570699682::get_offset_of_is_readonly_2(),
	Encoding_t1570699682::get_offset_of_decoder_fallback_3(),
	Encoding_t1570699682::get_offset_of_encoder_fallback_4(),
	Encoding_t1570699682_StaticFields::get_offset_of_i18nAssembly_5(),
	Encoding_t1570699682_StaticFields::get_offset_of_i18nDisabled_6(),
	Encoding_t1570699682_StaticFields::get_offset_of_encodings_7(),
	Encoding_t1570699682::get_offset_of_body_name_8(),
	Encoding_t1570699682::get_offset_of_encoding_name_9(),
	Encoding_t1570699682::get_offset_of_header_name_10(),
	Encoding_t1570699682::get_offset_of_is_mail_news_display_11(),
	Encoding_t1570699682::get_offset_of_is_mail_news_save_12(),
	Encoding_t1570699682::get_offset_of_is_browser_save_13(),
	Encoding_t1570699682::get_offset_of_is_browser_display_14(),
	Encoding_t1570699682::get_offset_of_web_name_15(),
	Encoding_t1570699682_StaticFields::get_offset_of_asciiEncoding_16(),
	Encoding_t1570699682_StaticFields::get_offset_of_bigEndianEncoding_17(),
	Encoding_t1570699682_StaticFields::get_offset_of_defaultEncoding_18(),
	Encoding_t1570699682_StaticFields::get_offset_of_utf7Encoding_19(),
	Encoding_t1570699682_StaticFields::get_offset_of_utf8EncodingWithMarkers_20(),
	Encoding_t1570699682_StaticFields::get_offset_of_utf8EncodingWithoutMarkers_21(),
	Encoding_t1570699682_StaticFields::get_offset_of_unicodeEncoding_22(),
	Encoding_t1570699682_StaticFields::get_offset_of_isoLatin1Encoding_23(),
	Encoding_t1570699682_StaticFields::get_offset_of_utf8EncodingUnsafe_24(),
	Encoding_t1570699682_StaticFields::get_offset_of_utf32Encoding_25(),
	Encoding_t1570699682_StaticFields::get_offset_of_bigEndianUTF32Encoding_26(),
	Encoding_t1570699682_StaticFields::get_offset_of_lockobj_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize884 = { sizeof (ForwardingDecoder_t2878009345), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable884[1] = 
{
	ForwardingDecoder_t2878009345::get_offset_of_encoding_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize885 = { sizeof (Latin1Encoding_t2386631888), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize886 = { sizeof (StringBuilder_t2201891914), sizeof(char*), 0, 0 };
extern const int32_t g_FieldOffsetTable886[5] = 
{
	0,
	StringBuilder_t2201891914::get_offset_of__length_1(),
	StringBuilder_t2201891914::get_offset_of__str_2(),
	StringBuilder_t2201891914::get_offset_of__cached_str_3(),
	StringBuilder_t2201891914::get_offset_of__maxCapacity_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize887 = { sizeof (UTF32Encoding_t3350374052), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable887[2] = 
{
	UTF32Encoding_t3350374052::get_offset_of_bigEndian_28(),
	UTF32Encoding_t3350374052::get_offset_of_byteOrderMark_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize888 = { sizeof (UTF32Decoder_t3013296710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable888[3] = 
{
	UTF32Decoder_t3013296710::get_offset_of_bigEndian_2(),
	UTF32Decoder_t3013296710::get_offset_of_leftOverByte_3(),
	UTF32Decoder_t3013296710::get_offset_of_leftOverLength_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize889 = { sizeof (UTF7Encoding_t2683217713), -1, sizeof(UTF7Encoding_t2683217713_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable889[3] = 
{
	UTF7Encoding_t2683217713::get_offset_of_allowOptionals_28(),
	UTF7Encoding_t2683217713_StaticFields::get_offset_of_encodingRules_29(),
	UTF7Encoding_t2683217713_StaticFields::get_offset_of_base64Values_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize890 = { sizeof (UTF7Decoder_t1532637544), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable890[1] = 
{
	UTF7Decoder_t1532637544::get_offset_of_leftOver_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize891 = { sizeof (UTF8Encoding_t1298259286), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable891[1] = 
{
	UTF8Encoding_t1298259286::get_offset_of_emitIdentifier_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize892 = { sizeof (UTF8Decoder_t3996261434), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable892[2] = 
{
	UTF8Decoder_t3996261434::get_offset_of_leftOverBits_2(),
	UTF8Decoder_t3996261434::get_offset_of_leftOverCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize893 = { sizeof (UnicodeEncoding_t3356499625), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable893[2] = 
{
	UnicodeEncoding_t3356499625::get_offset_of_bigEndian_28(),
	UnicodeEncoding_t3356499625::get_offset_of_byteOrderMark_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize894 = { sizeof (UnicodeDecoder_t3041472583), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable894[2] = 
{
	UnicodeDecoder_t3041472583::get_offset_of_bigEndian_2(),
	UnicodeDecoder_t3041472583::get_offset_of_leftOverByte_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize895 = { sizeof (AsyncFlowControlType_t2088324014)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable895[4] = 
{
	AsyncFlowControlType_t2088324014::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize896 = { sizeof (AsyncFlowControl_t544559320)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable896[2] = 
{
	AsyncFlowControl_t544559320::get_offset_of__t_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AsyncFlowControl_t544559320::get_offset_of__type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize897 = { sizeof (AutoResetEvent_t4239610211), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize898 = { sizeof (CompressedStack_t3384077530), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable898[1] = 
{
	CompressedStack_t3384077530::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize899 = { sizeof (EventResetMode_t3892749786)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable899[3] = 
{
	EventResetMode_t3892749786::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
