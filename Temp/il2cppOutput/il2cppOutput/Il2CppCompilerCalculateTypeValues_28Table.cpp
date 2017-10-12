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

// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t3047990253;
// MenuController
struct MenuController_t1834083939;
// TwitterKit.Unity.AuthToken
struct AuthToken_t1276949169;
// LoginModule
struct LoginModule_t1705691831;
// Firebase.Auth.FirebaseAuth
struct FirebaseAuth_t1201987452;
// System.IO.StringReader
struct StringReader_t479051405;
// System.Text.StringBuilder
struct StringBuilder_t2201891914;
// UnityEngine.Texture2D
struct Texture2D_t2610545289;
// System.Byte[]
struct ByteU5BU5D_t3665519352;
// UnityEngine.WWWForm
struct WWWForm_t1243100792;
// Facebook.Unity.Example.GraphRequest
struct GraphRequest_t2775374912;
// System.Char[]
struct CharU5BU5D_t3282938201;
// System.Void
struct Void_t3348323986;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t663758033;
// System.Collections.Generic.List`1<TwitterKit.Unity.Settings.TwitterSettings/OnChangeCallback>
struct List_1_t604455265;
// System.Action`1<TwitterKit.Unity.Settings.TwitterSettings/OnChangeCallback>
struct Action_1_t2858969809;
// System.IAsyncResult
struct IAsyncResult_t2988228258;
// System.AsyncCallback
struct AsyncCallback_t2694001226;
// TwitterKit.Internal.ITwitter
struct ITwitter_t2685625619;
// UnityEngine.GameObject
struct GameObject_t2982081763;
// Readme/Section[]
struct SectionU5BU5D_t2003762348;
// System.Action`1<TwitterKit.Unity.ApiError>
struct Action_1_t385074677;
// System.Action`1<System.String>
struct Action_1_t1399392283;
// System.Action
struct Action_t2540762590;
// LitJson.JsonData
struct JsonData_t2845009054;
// System.Uri
struct Uri_t3180489251;
// UnityEngine.UI.Text
struct Text_t224764520;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>>
struct Action_1_t3314882695;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1068021793;
// UnityEngine.UI.Image
struct Image_t3130528015;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t172845523;
// UnityEngine.GUIStyle
struct GUIStyle_t3496658479;
// Boundary
struct Boundary_t2747317414;
// UnityEngine.Transform
struct Transform_t3103581000;
// System.Action`1<TwitterKit.Unity.TwitterSession>
struct Action_1_t3655933502;
// System.String[]
struct StringU5BU5D_t1443727135;




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
#ifndef JSON_T457078173_H
#define JSON_T457078173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.ThirdParty.MiniJSON.Json
struct  Json_t457078173  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T457078173_H
#ifndef APIERROR_T641243796_H
#define APIERROR_T641243796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.Unity.ApiError
struct  ApiError_t641243796  : public RuntimeObject
{
public:
	// System.Int32 TwitterKit.Unity.ApiError::<code>k__BackingField
	int32_t ___U3CcodeU3Ek__BackingField_0;
	// System.String TwitterKit.Unity.ApiError::<message>k__BackingField
	String_t* ___U3CmessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CcodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ApiError_t641243796, ___U3CcodeU3Ek__BackingField_0)); }
	inline int32_t get_U3CcodeU3Ek__BackingField_0() const { return ___U3CcodeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CcodeU3Ek__BackingField_0() { return &___U3CcodeU3Ek__BackingField_0; }
	inline void set_U3CcodeU3Ek__BackingField_0(int32_t value)
	{
		___U3CcodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CmessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ApiError_t641243796, ___U3CmessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CmessageU3Ek__BackingField_1() const { return ___U3CmessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CmessageU3Ek__BackingField_1() { return &___U3CmessageU3Ek__BackingField_1; }
	inline void set_U3CmessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CmessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmessageU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APIERROR_T641243796_H
#ifndef BOUNDARY_T2747317414_H
#define BOUNDARY_T2747317414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boundary
struct  Boundary_t2747317414  : public RuntimeObject
{
public:
	// System.Single Boundary::xMin
	float ___xMin_0;
	// System.Single Boundary::xMax
	float ___xMax_1;
	// System.Single Boundary::zMin
	float ___zMin_2;
	// System.Single Boundary::zMax
	float ___zMax_3;

public:
	inline static int32_t get_offset_of_xMin_0() { return static_cast<int32_t>(offsetof(Boundary_t2747317414, ___xMin_0)); }
	inline float get_xMin_0() const { return ___xMin_0; }
	inline float* get_address_of_xMin_0() { return &___xMin_0; }
	inline void set_xMin_0(float value)
	{
		___xMin_0 = value;
	}

	inline static int32_t get_offset_of_xMax_1() { return static_cast<int32_t>(offsetof(Boundary_t2747317414, ___xMax_1)); }
	inline float get_xMax_1() const { return ___xMax_1; }
	inline float* get_address_of_xMax_1() { return &___xMax_1; }
	inline void set_xMax_1(float value)
	{
		___xMax_1 = value;
	}

	inline static int32_t get_offset_of_zMin_2() { return static_cast<int32_t>(offsetof(Boundary_t2747317414, ___zMin_2)); }
	inline float get_zMin_2() const { return ___zMin_2; }
	inline float* get_address_of_zMin_2() { return &___zMin_2; }
	inline void set_zMin_2(float value)
	{
		___zMin_2 = value;
	}

	inline static int32_t get_offset_of_zMax_3() { return static_cast<int32_t>(offsetof(Boundary_t2747317414, ___zMax_3)); }
	inline float get_zMax_3() const { return ___zMax_3; }
	inline float* get_address_of_zMax_3() { return &___zMax_3; }
	inline void set_zMax_3(float value)
	{
		___zMax_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARY_T2747317414_H
#ifndef AUTHTOKEN_T1276949169_H
#define AUTHTOKEN_T1276949169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.Unity.AuthToken
struct  AuthToken_t1276949169  : public RuntimeObject
{
public:
	// System.String TwitterKit.Unity.AuthToken::<token>k__BackingField
	String_t* ___U3CtokenU3Ek__BackingField_0;
	// System.String TwitterKit.Unity.AuthToken::<secret>k__BackingField
	String_t* ___U3CsecretU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CtokenU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AuthToken_t1276949169, ___U3CtokenU3Ek__BackingField_0)); }
	inline String_t* get_U3CtokenU3Ek__BackingField_0() const { return ___U3CtokenU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CtokenU3Ek__BackingField_0() { return &___U3CtokenU3Ek__BackingField_0; }
	inline void set_U3CtokenU3Ek__BackingField_0(String_t* value)
	{
		___U3CtokenU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtokenU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CsecretU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthToken_t1276949169, ___U3CsecretU3Ek__BackingField_1)); }
	inline String_t* get_U3CsecretU3Ek__BackingField_1() const { return ___U3CsecretU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CsecretU3Ek__BackingField_1() { return &___U3CsecretU3Ek__BackingField_1; }
	inline void set_U3CsecretU3Ek__BackingField_1(String_t* value)
	{
		___U3CsecretU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsecretU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHTOKEN_T1276949169_H
#ifndef U3C_GETIMAGEFROMURLU3EC__ITERATOR0_T295399921_H
#define U3C_GETIMAGEFROMURLU3EC__ITERATOR0_T295399921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuController/<_GetImageFromUrl>c__Iterator0
struct  U3C_GetImageFromUrlU3Ec__Iterator0_t295399921  : public RuntimeObject
{
public:
	// System.String MenuController/<_GetImageFromUrl>c__Iterator0::url
	String_t* ___url_0;
	// UnityEngine.WWW MenuController/<_GetImageFromUrl>c__Iterator0::<imagewww>__0
	WWW_t3047990253 * ___U3CimagewwwU3E__0_1;
	// MenuController MenuController/<_GetImageFromUrl>c__Iterator0::$this
	MenuController_t1834083939 * ___U24this_2;
	// System.Object MenuController/<_GetImageFromUrl>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean MenuController/<_GetImageFromUrl>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 MenuController/<_GetImageFromUrl>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3C_GetImageFromUrlU3Ec__Iterator0_t295399921, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}

	inline static int32_t get_offset_of_U3CimagewwwU3E__0_1() { return static_cast<int32_t>(offsetof(U3C_GetImageFromUrlU3Ec__Iterator0_t295399921, ___U3CimagewwwU3E__0_1)); }
	inline WWW_t3047990253 * get_U3CimagewwwU3E__0_1() const { return ___U3CimagewwwU3E__0_1; }
	inline WWW_t3047990253 ** get_address_of_U3CimagewwwU3E__0_1() { return &___U3CimagewwwU3E__0_1; }
	inline void set_U3CimagewwwU3E__0_1(WWW_t3047990253 * value)
	{
		___U3CimagewwwU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CimagewwwU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3C_GetImageFromUrlU3Ec__Iterator0_t295399921, ___U24this_2)); }
	inline MenuController_t1834083939 * get_U24this_2() const { return ___U24this_2; }
	inline MenuController_t1834083939 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(MenuController_t1834083939 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3C_GetImageFromUrlU3Ec__Iterator0_t295399921, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3C_GetImageFromUrlU3Ec__Iterator0_t295399921, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3C_GetImageFromUrlU3Ec__Iterator0_t295399921, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C_GETIMAGEFROMURLU3EC__ITERATOR0_T295399921_H
#ifndef TWITTERSESSION_T3912102621_H
#define TWITTERSESSION_T3912102621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.Unity.TwitterSession
struct  TwitterSession_t3912102621  : public RuntimeObject
{
public:
	// System.Int64 TwitterKit.Unity.TwitterSession::<id>k__BackingField
	int64_t ___U3CidU3Ek__BackingField_0;
	// System.String TwitterKit.Unity.TwitterSession::<userName>k__BackingField
	String_t* ___U3CuserNameU3Ek__BackingField_1;
	// TwitterKit.Unity.AuthToken TwitterKit.Unity.TwitterSession::<authToken>k__BackingField
	AuthToken_t1276949169 * ___U3CauthTokenU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TwitterSession_t3912102621, ___U3CidU3Ek__BackingField_0)); }
	inline int64_t get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(int64_t value)
	{
		___U3CidU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CuserNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TwitterSession_t3912102621, ___U3CuserNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CuserNameU3Ek__BackingField_1() const { return ___U3CuserNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CuserNameU3Ek__BackingField_1() { return &___U3CuserNameU3Ek__BackingField_1; }
	inline void set_U3CuserNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CuserNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CuserNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CauthTokenU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TwitterSession_t3912102621, ___U3CauthTokenU3Ek__BackingField_2)); }
	inline AuthToken_t1276949169 * get_U3CauthTokenU3Ek__BackingField_2() const { return ___U3CauthTokenU3Ek__BackingField_2; }
	inline AuthToken_t1276949169 ** get_address_of_U3CauthTokenU3Ek__BackingField_2() { return &___U3CauthTokenU3Ek__BackingField_2; }
	inline void set_U3CauthTokenU3Ek__BackingField_2(AuthToken_t1276949169 * value)
	{
		___U3CauthTokenU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CauthTokenU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWITTERSESSION_T3912102621_H
#ifndef U3C_GETINFOSFROMAPIU3EC__ITERATOR0_T1740305697_H
#define U3C_GETINFOSFROMAPIU3EC__ITERATOR0_T1740305697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginModule/<_GetInfosFromAPI>c__Iterator0
struct  U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697  : public RuntimeObject
{
public:
	// System.String LoginModule/<_GetInfosFromAPI>c__Iterator0::ScreeNname
	String_t* ___ScreeNname_0;
	// UnityEngine.WWW LoginModule/<_GetInfosFromAPI>c__Iterator0::<www>__0
	WWW_t3047990253 * ___U3CwwwU3E__0_1;
	// LoginModule LoginModule/<_GetInfosFromAPI>c__Iterator0::$this
	LoginModule_t1705691831 * ___U24this_2;
	// System.Object LoginModule/<_GetInfosFromAPI>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean LoginModule/<_GetInfosFromAPI>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 LoginModule/<_GetInfosFromAPI>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_ScreeNname_0() { return static_cast<int32_t>(offsetof(U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697, ___ScreeNname_0)); }
	inline String_t* get_ScreeNname_0() const { return ___ScreeNname_0; }
	inline String_t** get_address_of_ScreeNname_0() { return &___ScreeNname_0; }
	inline void set_ScreeNname_0(String_t* value)
	{
		___ScreeNname_0 = value;
		Il2CppCodeGenWriteBarrier((&___ScreeNname_0), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__0_1() { return static_cast<int32_t>(offsetof(U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697, ___U3CwwwU3E__0_1)); }
	inline WWW_t3047990253 * get_U3CwwwU3E__0_1() const { return ___U3CwwwU3E__0_1; }
	inline WWW_t3047990253 ** get_address_of_U3CwwwU3E__0_1() { return &___U3CwwwU3E__0_1; }
	inline void set_U3CwwwU3E__0_1(WWW_t3047990253 * value)
	{
		___U3CwwwU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697, ___U24this_2)); }
	inline LoginModule_t1705691831 * get_U24this_2() const { return ___U24this_2; }
	inline LoginModule_t1705691831 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(LoginModule_t1705691831 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C_GETINFOSFROMAPIU3EC__ITERATOR0_T1740305697_H
#ifndef U3CSTARTTWITTERLOGINU3EC__ANONSTOREY1_T698479547_H
#define U3CSTARTTWITTERLOGINU3EC__ANONSTOREY1_T698479547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginModule/<StartTwitterLogin>c__AnonStorey1
struct  U3CStartTwitterLoginU3Ec__AnonStorey1_t698479547  : public RuntimeObject
{
public:
	// Firebase.Auth.FirebaseAuth LoginModule/<StartTwitterLogin>c__AnonStorey1::auth
	FirebaseAuth_t1201987452 * ___auth_0;

public:
	inline static int32_t get_offset_of_auth_0() { return static_cast<int32_t>(offsetof(U3CStartTwitterLoginU3Ec__AnonStorey1_t698479547, ___auth_0)); }
	inline FirebaseAuth_t1201987452 * get_auth_0() const { return ___auth_0; }
	inline FirebaseAuth_t1201987452 ** get_address_of_auth_0() { return &___auth_0; }
	inline void set_auth_0(FirebaseAuth_t1201987452 * value)
	{
		___auth_0 = value;
		Il2CppCodeGenWriteBarrier((&___auth_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTTWITTERLOGINU3EC__ANONSTOREY1_T698479547_H
#ifndef PARSER_T3890547681_H
#define PARSER_T3890547681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.ThirdParty.MiniJSON.Json/Parser
struct  Parser_t3890547681  : public RuntimeObject
{
public:
	// System.IO.StringReader TwitterKit.ThirdParty.MiniJSON.Json/Parser::json
	StringReader_t479051405 * ___json_1;

public:
	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(Parser_t3890547681, ___json_1)); }
	inline StringReader_t479051405 * get_json_1() const { return ___json_1; }
	inline StringReader_t479051405 ** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(StringReader_t479051405 * value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((&___json_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T3890547681_H
#ifndef SERIALIZER_T3830363813_H
#define SERIALIZER_T3830363813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.ThirdParty.MiniJSON.Json/Serializer
struct  Serializer_t3830363813  : public RuntimeObject
{
public:
	// System.Text.StringBuilder TwitterKit.ThirdParty.MiniJSON.Json/Serializer::builder
	StringBuilder_t2201891914 * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t3830363813, ___builder_0)); }
	inline StringBuilder_t2201891914 * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t2201891914 ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t2201891914 * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZER_T3830363813_H
#ifndef UTILS_T3709855574_H
#define UTILS_T3709855574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.Internal.Utils
struct  Utils_t3709855574  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILS_T3709855574_H
#ifndef U3CTAKESCREENSHOTU3EC__ITERATOR0_T2900451216_H
#define U3CTAKESCREENSHOTU3EC__ITERATOR0_T2900451216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.GraphRequest/<TakeScreenshot>c__Iterator0
struct  U3CTakeScreenshotU3Ec__Iterator0_t2900451216  : public RuntimeObject
{
public:
	// System.Int32 Facebook.Unity.Example.GraphRequest/<TakeScreenshot>c__Iterator0::<width>__0
	int32_t ___U3CwidthU3E__0_0;
	// System.Int32 Facebook.Unity.Example.GraphRequest/<TakeScreenshot>c__Iterator0::<height>__0
	int32_t ___U3CheightU3E__0_1;
	// UnityEngine.Texture2D Facebook.Unity.Example.GraphRequest/<TakeScreenshot>c__Iterator0::<tex>__0
	Texture2D_t2610545289 * ___U3CtexU3E__0_2;
	// System.Byte[] Facebook.Unity.Example.GraphRequest/<TakeScreenshot>c__Iterator0::<screenshot>__0
	ByteU5BU5D_t3665519352* ___U3CscreenshotU3E__0_3;
	// UnityEngine.WWWForm Facebook.Unity.Example.GraphRequest/<TakeScreenshot>c__Iterator0::<wwwForm>__0
	WWWForm_t1243100792 * ___U3CwwwFormU3E__0_4;
	// Facebook.Unity.Example.GraphRequest Facebook.Unity.Example.GraphRequest/<TakeScreenshot>c__Iterator0::$this
	GraphRequest_t2775374912 * ___U24this_5;
	// System.Object Facebook.Unity.Example.GraphRequest/<TakeScreenshot>c__Iterator0::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean Facebook.Unity.Example.GraphRequest/<TakeScreenshot>c__Iterator0::$disposing
	bool ___U24disposing_7;
	// System.Int32 Facebook.Unity.Example.GraphRequest/<TakeScreenshot>c__Iterator0::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3CwidthU3E__0_0() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ec__Iterator0_t2900451216, ___U3CwidthU3E__0_0)); }
	inline int32_t get_U3CwidthU3E__0_0() const { return ___U3CwidthU3E__0_0; }
	inline int32_t* get_address_of_U3CwidthU3E__0_0() { return &___U3CwidthU3E__0_0; }
	inline void set_U3CwidthU3E__0_0(int32_t value)
	{
		___U3CwidthU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3E__0_1() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ec__Iterator0_t2900451216, ___U3CheightU3E__0_1)); }
	inline int32_t get_U3CheightU3E__0_1() const { return ___U3CheightU3E__0_1; }
	inline int32_t* get_address_of_U3CheightU3E__0_1() { return &___U3CheightU3E__0_1; }
	inline void set_U3CheightU3E__0_1(int32_t value)
	{
		___U3CheightU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CtexU3E__0_2() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ec__Iterator0_t2900451216, ___U3CtexU3E__0_2)); }
	inline Texture2D_t2610545289 * get_U3CtexU3E__0_2() const { return ___U3CtexU3E__0_2; }
	inline Texture2D_t2610545289 ** get_address_of_U3CtexU3E__0_2() { return &___U3CtexU3E__0_2; }
	inline void set_U3CtexU3E__0_2(Texture2D_t2610545289 * value)
	{
		___U3CtexU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtexU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U3CscreenshotU3E__0_3() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ec__Iterator0_t2900451216, ___U3CscreenshotU3E__0_3)); }
	inline ByteU5BU5D_t3665519352* get_U3CscreenshotU3E__0_3() const { return ___U3CscreenshotU3E__0_3; }
	inline ByteU5BU5D_t3665519352** get_address_of_U3CscreenshotU3E__0_3() { return &___U3CscreenshotU3E__0_3; }
	inline void set_U3CscreenshotU3E__0_3(ByteU5BU5D_t3665519352* value)
	{
		___U3CscreenshotU3E__0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CscreenshotU3E__0_3), value);
	}

	inline static int32_t get_offset_of_U3CwwwFormU3E__0_4() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ec__Iterator0_t2900451216, ___U3CwwwFormU3E__0_4)); }
	inline WWWForm_t1243100792 * get_U3CwwwFormU3E__0_4() const { return ___U3CwwwFormU3E__0_4; }
	inline WWWForm_t1243100792 ** get_address_of_U3CwwwFormU3E__0_4() { return &___U3CwwwFormU3E__0_4; }
	inline void set_U3CwwwFormU3E__0_4(WWWForm_t1243100792 * value)
	{
		___U3CwwwFormU3E__0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwFormU3E__0_4), value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ec__Iterator0_t2900451216, ___U24this_5)); }
	inline GraphRequest_t2775374912 * get_U24this_5() const { return ___U24this_5; }
	inline GraphRequest_t2775374912 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(GraphRequest_t2775374912 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ec__Iterator0_t2900451216, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ec__Iterator0_t2900451216, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CTakeScreenshotU3Ec__Iterator0_t2900451216, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTAKESCREENSHOTU3EC__ITERATOR0_T2900451216_H
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
#ifndef IOSTWITTERIMPL_T1106630612_H
#define IOSTWITTERIMPL_T1106630612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.Internal.IOSTwitterImpl
struct  IOSTwitterImpl_t1106630612  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOSTWITTERIMPL_T1106630612_H
#ifndef SECTION_T1030319729_H
#define SECTION_T1030319729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Readme/Section
struct  Section_t1030319729  : public RuntimeObject
{
public:
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t1030319729, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((&___heading_0), value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t1030319729, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((&___text_1), value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t1030319729, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((&___linkText_2), value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t1030319729, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((&___url_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECTION_T1030319729_H
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
#ifndef VECTOR2_T2830993234_H
#define VECTOR2_T2830993234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2830993234 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2830993234, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2830993234, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2830993234_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2830993234  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2830993234  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2830993234  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2830993234  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2830993234  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2830993234  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2830993234  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2830993234  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2830993234_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2830993234  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2830993234 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2830993234  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2830993234_StaticFields, ___oneVector_3)); }
	inline Vector2_t2830993234  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2830993234 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2830993234  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2830993234_StaticFields, ___upVector_4)); }
	inline Vector2_t2830993234  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2830993234 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2830993234  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2830993234_StaticFields, ___downVector_5)); }
	inline Vector2_t2830993234  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2830993234 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2830993234  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2830993234_StaticFields, ___leftVector_6)); }
	inline Vector2_t2830993234  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2830993234 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2830993234  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2830993234_StaticFields, ___rightVector_7)); }
	inline Vector2_t2830993234  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2830993234 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2830993234  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2830993234_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2830993234  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2830993234 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2830993234  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2830993234_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2830993234  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2830993234 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2830993234  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2830993234_H
#ifndef NULLABLE_1_T2875230819_H
#define NULLABLE_1_T2875230819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Single>
struct  Nullable_1_t2875230819 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2875230819, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2875230819, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T2875230819_H
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
#ifndef OBJECT_T505444730_H
#define OBJECT_T505444730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t505444730  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t505444730, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t505444730_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t505444730_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t505444730_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t505444730_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T505444730_H
#ifndef SHAREDIALOGMODE_T1726366046_H
#define SHAREDIALOGMODE_T1726366046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.ShareDialogMode
struct  ShareDialogMode_t1726366046 
{
public:
	// System.Int32 Facebook.Unity.ShareDialogMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShareDialogMode_t1726366046, ___value___1)); }
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
#endif // SHAREDIALOGMODE_T1726366046_H
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
#ifndef TOKEN_T2667056928_H
#define TOKEN_T2667056928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.ThirdParty.MiniJSON.Json/Parser/TOKEN
struct  TOKEN_t2667056928 
{
public:
	// System.Int32 TwitterKit.ThirdParty.MiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TOKEN_t2667056928, ___value___1)); }
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
#endif // TOKEN_T2667056928_H
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
#ifndef COMPONENT_T641691911_H
#define COMPONENT_T641691911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t641691911  : public Object_t505444730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T641691911_H
#ifndef SCRIPTABLEOBJECT_T171993853_H
#define SCRIPTABLEOBJECT_T171993853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t171993853  : public Object_t505444730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t171993853_marshaled_pinvoke : public Object_t505444730_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t171993853_marshaled_com : public Object_t505444730_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T171993853_H
#ifndef BEHAVIOUR_T2266500938_H
#define BEHAVIOUR_T2266500938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t2266500938  : public Component_t641691911
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T2266500938_H
#ifndef TWITTERSETTINGS_T3563184421_H
#define TWITTERSETTINGS_T3563184421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.Unity.Settings.TwitterSettings
struct  TwitterSettings_t3563184421  : public ScriptableObject_t171993853
{
public:
	// System.String TwitterKit.Unity.Settings.TwitterSettings::consumerKey
	String_t* ___consumerKey_9;
	// System.String TwitterKit.Unity.Settings.TwitterSettings::consumerSecret
	String_t* ___consumerSecret_10;

public:
	inline static int32_t get_offset_of_consumerKey_9() { return static_cast<int32_t>(offsetof(TwitterSettings_t3563184421, ___consumerKey_9)); }
	inline String_t* get_consumerKey_9() const { return ___consumerKey_9; }
	inline String_t** get_address_of_consumerKey_9() { return &___consumerKey_9; }
	inline void set_consumerKey_9(String_t* value)
	{
		___consumerKey_9 = value;
		Il2CppCodeGenWriteBarrier((&___consumerKey_9), value);
	}

	inline static int32_t get_offset_of_consumerSecret_10() { return static_cast<int32_t>(offsetof(TwitterSettings_t3563184421, ___consumerSecret_10)); }
	inline String_t* get_consumerSecret_10() const { return ___consumerSecret_10; }
	inline String_t** get_address_of_consumerSecret_10() { return &___consumerSecret_10; }
	inline void set_consumerSecret_10(String_t* value)
	{
		___consumerSecret_10 = value;
		Il2CppCodeGenWriteBarrier((&___consumerSecret_10), value);
	}
};

struct TwitterSettings_t3563184421_StaticFields
{
public:
	// TwitterKit.Unity.Settings.TwitterSettings TwitterKit.Unity.Settings.TwitterSettings::instance
	TwitterSettings_t3563184421 * ___instance_7;
	// System.Collections.Generic.List`1<TwitterKit.Unity.Settings.TwitterSettings/OnChangeCallback> TwitterKit.Unity.Settings.TwitterSettings::onChangeCallbacks
	List_1_t604455265 * ___onChangeCallbacks_8;
	// System.Action`1<TwitterKit.Unity.Settings.TwitterSettings/OnChangeCallback> TwitterKit.Unity.Settings.TwitterSettings::<>f__am$cache0
	Action_1_t2858969809 * ___U3CU3Ef__amU24cache0_11;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(TwitterSettings_t3563184421_StaticFields, ___instance_7)); }
	inline TwitterSettings_t3563184421 * get_instance_7() const { return ___instance_7; }
	inline TwitterSettings_t3563184421 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(TwitterSettings_t3563184421 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((&___instance_7), value);
	}

	inline static int32_t get_offset_of_onChangeCallbacks_8() { return static_cast<int32_t>(offsetof(TwitterSettings_t3563184421_StaticFields, ___onChangeCallbacks_8)); }
	inline List_1_t604455265 * get_onChangeCallbacks_8() const { return ___onChangeCallbacks_8; }
	inline List_1_t604455265 ** get_address_of_onChangeCallbacks_8() { return &___onChangeCallbacks_8; }
	inline void set_onChangeCallbacks_8(List_1_t604455265 * value)
	{
		___onChangeCallbacks_8 = value;
		Il2CppCodeGenWriteBarrier((&___onChangeCallbacks_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(TwitterSettings_t3563184421_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Action_1_t2858969809 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Action_1_t2858969809 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Action_1_t2858969809 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWITTERSETTINGS_T3563184421_H
#ifndef ONCHANGECALLBACK_T3115138928_H
#define ONCHANGECALLBACK_T3115138928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.Unity.Settings.TwitterSettings/OnChangeCallback
struct  OnChangeCallback_t3115138928  : public MulticastDelegate_t3875463140
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCHANGECALLBACK_T3115138928_H
#ifndef TWITTER_T2327286307_H
#define TWITTER_T2327286307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.Unity.Twitter
struct  Twitter_t2327286307  : public ScriptableObject_t171993853
{
public:

public:
};

struct Twitter_t2327286307_StaticFields
{
public:
	// TwitterKit.Internal.ITwitter TwitterKit.Unity.Twitter::twitter
	RuntimeObject* ___twitter_2;
	// UnityEngine.GameObject TwitterKit.Unity.Twitter::twitterGameObject
	GameObject_t2982081763 * ___twitterGameObject_3;

public:
	inline static int32_t get_offset_of_twitter_2() { return static_cast<int32_t>(offsetof(Twitter_t2327286307_StaticFields, ___twitter_2)); }
	inline RuntimeObject* get_twitter_2() const { return ___twitter_2; }
	inline RuntimeObject** get_address_of_twitter_2() { return &___twitter_2; }
	inline void set_twitter_2(RuntimeObject* value)
	{
		___twitter_2 = value;
		Il2CppCodeGenWriteBarrier((&___twitter_2), value);
	}

	inline static int32_t get_offset_of_twitterGameObject_3() { return static_cast<int32_t>(offsetof(Twitter_t2327286307_StaticFields, ___twitterGameObject_3)); }
	inline GameObject_t2982081763 * get_twitterGameObject_3() const { return ___twitterGameObject_3; }
	inline GameObject_t2982081763 ** get_address_of_twitterGameObject_3() { return &___twitterGameObject_3; }
	inline void set_twitterGameObject_3(GameObject_t2982081763 * value)
	{
		___twitterGameObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___twitterGameObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWITTER_T2327286307_H
#ifndef README_T848846345_H
#define README_T848846345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Readme
struct  Readme_t848846345  : public ScriptableObject_t171993853
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_t2610545289 * ___icon_2;
	// System.String Readme::title
	String_t* ___title_3;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t2003762348* ___sections_4;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_5;

public:
	inline static int32_t get_offset_of_icon_2() { return static_cast<int32_t>(offsetof(Readme_t848846345, ___icon_2)); }
	inline Texture2D_t2610545289 * get_icon_2() const { return ___icon_2; }
	inline Texture2D_t2610545289 ** get_address_of_icon_2() { return &___icon_2; }
	inline void set_icon_2(Texture2D_t2610545289 * value)
	{
		___icon_2 = value;
		Il2CppCodeGenWriteBarrier((&___icon_2), value);
	}

	inline static int32_t get_offset_of_title_3() { return static_cast<int32_t>(offsetof(Readme_t848846345, ___title_3)); }
	inline String_t* get_title_3() const { return ___title_3; }
	inline String_t** get_address_of_title_3() { return &___title_3; }
	inline void set_title_3(String_t* value)
	{
		___title_3 = value;
		Il2CppCodeGenWriteBarrier((&___title_3), value);
	}

	inline static int32_t get_offset_of_sections_4() { return static_cast<int32_t>(offsetof(Readme_t848846345, ___sections_4)); }
	inline SectionU5BU5D_t2003762348* get_sections_4() const { return ___sections_4; }
	inline SectionU5BU5D_t2003762348** get_address_of_sections_4() { return &___sections_4; }
	inline void set_sections_4(SectionU5BU5D_t2003762348* value)
	{
		___sections_4 = value;
		Il2CppCodeGenWriteBarrier((&___sections_4), value);
	}

	inline static int32_t get_offset_of_loadedLayout_5() { return static_cast<int32_t>(offsetof(Readme_t848846345, ___loadedLayout_5)); }
	inline bool get_loadedLayout_5() const { return ___loadedLayout_5; }
	inline bool* get_address_of_loadedLayout_5() { return &___loadedLayout_5; }
	inline void set_loadedLayout_5(bool value)
	{
		___loadedLayout_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // README_T848846345_H
#ifndef MONOBEHAVIOUR_T3444990707_H
#define MONOBEHAVIOUR_T3444990707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3444990707  : public Behaviour_t2266500938
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3444990707_H
#ifndef TWITTERINIT_T67145824_H
#define TWITTERINIT_T67145824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.Internal.TwitterInit
struct  TwitterInit_t67145824  : public MonoBehaviour_t3444990707
{
public:

public:
};

struct TwitterInit_t67145824_StaticFields
{
public:
	// TwitterKit.Internal.TwitterInit TwitterKit.Internal.TwitterInit::instance
	TwitterInit_t67145824 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(TwitterInit_t67145824_StaticFields, ___instance_2)); }
	inline TwitterInit_t67145824 * get_instance_2() const { return ___instance_2; }
	inline TwitterInit_t67145824 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(TwitterInit_t67145824 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWITTERINIT_T67145824_H
#ifndef JETPLANE_T3634862322_H
#define JETPLANE_T3634862322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// jetplane
struct  jetplane_t3634862322  : public MonoBehaviour_t3444990707
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JETPLANE_T3634862322_H
#ifndef TWITTERDEMO_T1484584867_H
#define TWITTERDEMO_T1484584867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterDemo
struct  TwitterDemo_t1484584867  : public MonoBehaviour_t3444990707
{
public:

public:
};

struct TwitterDemo_t1484584867_StaticFields
{
public:
	// System.Action`1<TwitterKit.Unity.ApiError> TwitterDemo::<>f__am$cache0
	Action_1_t385074677 * ___U3CU3Ef__amU24cache0_2;
	// System.Action`1<TwitterKit.Unity.ApiError> TwitterDemo::<>f__am$cache1
	Action_1_t385074677 * ___U3CU3Ef__amU24cache1_3;
	// System.Action`1<System.String> TwitterDemo::<>f__am$cache2
	Action_1_t1399392283 * ___U3CU3Ef__amU24cache2_4;
	// System.Action`1<TwitterKit.Unity.ApiError> TwitterDemo::<>f__am$cache3
	Action_1_t385074677 * ___U3CU3Ef__amU24cache3_5;
	// System.Action TwitterDemo::<>f__am$cache4
	Action_t2540762590 * ___U3CU3Ef__amU24cache4_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(TwitterDemo_t1484584867_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline Action_1_t385074677 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline Action_1_t385074677 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(Action_1_t385074677 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_3() { return static_cast<int32_t>(offsetof(TwitterDemo_t1484584867_StaticFields, ___U3CU3Ef__amU24cache1_3)); }
	inline Action_1_t385074677 * get_U3CU3Ef__amU24cache1_3() const { return ___U3CU3Ef__amU24cache1_3; }
	inline Action_1_t385074677 ** get_address_of_U3CU3Ef__amU24cache1_3() { return &___U3CU3Ef__amU24cache1_3; }
	inline void set_U3CU3Ef__amU24cache1_3(Action_1_t385074677 * value)
	{
		___U3CU3Ef__amU24cache1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_4() { return static_cast<int32_t>(offsetof(TwitterDemo_t1484584867_StaticFields, ___U3CU3Ef__amU24cache2_4)); }
	inline Action_1_t1399392283 * get_U3CU3Ef__amU24cache2_4() const { return ___U3CU3Ef__amU24cache2_4; }
	inline Action_1_t1399392283 ** get_address_of_U3CU3Ef__amU24cache2_4() { return &___U3CU3Ef__amU24cache2_4; }
	inline void set_U3CU3Ef__amU24cache2_4(Action_1_t1399392283 * value)
	{
		___U3CU3Ef__amU24cache2_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_5() { return static_cast<int32_t>(offsetof(TwitterDemo_t1484584867_StaticFields, ___U3CU3Ef__amU24cache3_5)); }
	inline Action_1_t385074677 * get_U3CU3Ef__amU24cache3_5() const { return ___U3CU3Ef__amU24cache3_5; }
	inline Action_1_t385074677 ** get_address_of_U3CU3Ef__amU24cache3_5() { return &___U3CU3Ef__amU24cache3_5; }
	inline void set_U3CU3Ef__amU24cache3_5(Action_1_t385074677 * value)
	{
		___U3CU3Ef__amU24cache3_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_6() { return static_cast<int32_t>(offsetof(TwitterDemo_t1484584867_StaticFields, ___U3CU3Ef__amU24cache4_6)); }
	inline Action_t2540762590 * get_U3CU3Ef__amU24cache4_6() const { return ___U3CU3Ef__amU24cache4_6; }
	inline Action_t2540762590 ** get_address_of_U3CU3Ef__amU24cache4_6() { return &___U3CU3Ef__amU24cache4_6; }
	inline void set_U3CU3Ef__amU24cache4_6(Action_t2540762590 * value)
	{
		___U3CU3Ef__amU24cache4_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWITTERDEMO_T1484584867_H
#ifndef LOGINMODULE_T1705691831_H
#define LOGINMODULE_T1705691831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginModule
struct  LoginModule_t1705691831  : public MonoBehaviour_t3444990707
{
public:
	// System.String LoginModule::TwtAuthToken
	String_t* ___TwtAuthToken_2;
	// System.String LoginModule::TwtAuthTokenSecret
	String_t* ___TwtAuthTokenSecret_3;
	// LitJson.JsonData LoginModule::RcvData
	JsonData_t2845009054 * ___RcvData_4;
	// System.String LoginModule::infourl
	String_t* ___infourl_5;
	// UnityEngine.GameObject LoginModule::LoginPanel
	GameObject_t2982081763 * ___LoginPanel_11;
	// UnityEngine.GameObject LoginModule::RegisterPanel
	GameObject_t2982081763 * ___RegisterPanel_12;
	// UnityEngine.GameObject LoginModule::PopupPanel
	GameObject_t2982081763 * ___PopupPanel_13;
	// UnityEngine.UI.Text LoginModule::LoginEmail
	Text_t224764520 * ___LoginEmail_14;
	// UnityEngine.UI.Text LoginModule::LoginPassword
	Text_t224764520 * ___LoginPassword_15;
	// UnityEngine.UI.Text LoginModule::RegistEmail
	Text_t224764520 * ___RegistEmail_16;
	// UnityEngine.UI.Text LoginModule::RegistPassword
	Text_t224764520 * ___RegistPassword_17;
	// UnityEngine.UI.Text LoginModule::RegistPasswordCheck
	Text_t224764520 * ___RegistPasswordCheck_18;
	// UnityEngine.UI.Text LoginModule::PopupMsg
	Text_t224764520 * ___PopupMsg_19;

public:
	inline static int32_t get_offset_of_TwtAuthToken_2() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831, ___TwtAuthToken_2)); }
	inline String_t* get_TwtAuthToken_2() const { return ___TwtAuthToken_2; }
	inline String_t** get_address_of_TwtAuthToken_2() { return &___TwtAuthToken_2; }
	inline void set_TwtAuthToken_2(String_t* value)
	{
		___TwtAuthToken_2 = value;
		Il2CppCodeGenWriteBarrier((&___TwtAuthToken_2), value);
	}

	inline static int32_t get_offset_of_TwtAuthTokenSecret_3() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831, ___TwtAuthTokenSecret_3)); }
	inline String_t* get_TwtAuthTokenSecret_3() const { return ___TwtAuthTokenSecret_3; }
	inline String_t** get_address_of_TwtAuthTokenSecret_3() { return &___TwtAuthTokenSecret_3; }
	inline void set_TwtAuthTokenSecret_3(String_t* value)
	{
		___TwtAuthTokenSecret_3 = value;
		Il2CppCodeGenWriteBarrier((&___TwtAuthTokenSecret_3), value);
	}

	inline static int32_t get_offset_of_RcvData_4() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831, ___RcvData_4)); }
	inline JsonData_t2845009054 * get_RcvData_4() const { return ___RcvData_4; }
	inline JsonData_t2845009054 ** get_address_of_RcvData_4() { return &___RcvData_4; }
	inline void set_RcvData_4(JsonData_t2845009054 * value)
	{
		___RcvData_4 = value;
		Il2CppCodeGenWriteBarrier((&___RcvData_4), value);
	}

	inline static int32_t get_offset_of_infourl_5() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831, ___infourl_5)); }
	inline String_t* get_infourl_5() const { return ___infourl_5; }
	inline String_t** get_address_of_infourl_5() { return &___infourl_5; }
	inline void set_infourl_5(String_t* value)
	{
		___infourl_5 = value;
		Il2CppCodeGenWriteBarrier((&___infourl_5), value);
	}

	inline static int32_t get_offset_of_LoginPanel_11() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831, ___LoginPanel_11)); }
	inline GameObject_t2982081763 * get_LoginPanel_11() const { return ___LoginPanel_11; }
	inline GameObject_t2982081763 ** get_address_of_LoginPanel_11() { return &___LoginPanel_11; }
	inline void set_LoginPanel_11(GameObject_t2982081763 * value)
	{
		___LoginPanel_11 = value;
		Il2CppCodeGenWriteBarrier((&___LoginPanel_11), value);
	}

	inline static int32_t get_offset_of_RegisterPanel_12() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831, ___RegisterPanel_12)); }
	inline GameObject_t2982081763 * get_RegisterPanel_12() const { return ___RegisterPanel_12; }
	inline GameObject_t2982081763 ** get_address_of_RegisterPanel_12() { return &___RegisterPanel_12; }
	inline void set_RegisterPanel_12(GameObject_t2982081763 * value)
	{
		___RegisterPanel_12 = value;
		Il2CppCodeGenWriteBarrier((&___RegisterPanel_12), value);
	}

	inline static int32_t get_offset_of_PopupPanel_13() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831, ___PopupPanel_13)); }
	inline GameObject_t2982081763 * get_PopupPanel_13() const { return ___PopupPanel_13; }
	inline GameObject_t2982081763 ** get_address_of_PopupPanel_13() { return &___PopupPanel_13; }
	inline void set_PopupPanel_13(GameObject_t2982081763 * value)
	{
		___PopupPanel_13 = value;
		Il2CppCodeGenWriteBarrier((&___PopupPanel_13), value);
	}

	inline static int32_t get_offset_of_LoginEmail_14() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831, ___LoginEmail_14)); }
	inline Text_t224764520 * get_LoginEmail_14() const { return ___LoginEmail_14; }
	inline Text_t224764520 ** get_address_of_LoginEmail_14() { return &___LoginEmail_14; }
	inline void set_LoginEmail_14(Text_t224764520 * value)
	{
		___LoginEmail_14 = value;
		Il2CppCodeGenWriteBarrier((&___LoginEmail_14), value);
	}

	inline static int32_t get_offset_of_LoginPassword_15() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831, ___LoginPassword_15)); }
	inline Text_t224764520 * get_LoginPassword_15() const { return ___LoginPassword_15; }
	inline Text_t224764520 ** get_address_of_LoginPassword_15() { return &___LoginPassword_15; }
	inline void set_LoginPassword_15(Text_t224764520 * value)
	{
		___LoginPassword_15 = value;
		Il2CppCodeGenWriteBarrier((&___LoginPassword_15), value);
	}

	inline static int32_t get_offset_of_RegistEmail_16() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831, ___RegistEmail_16)); }
	inline Text_t224764520 * get_RegistEmail_16() const { return ___RegistEmail_16; }
	inline Text_t224764520 ** get_address_of_RegistEmail_16() { return &___RegistEmail_16; }
	inline void set_RegistEmail_16(Text_t224764520 * value)
	{
		___RegistEmail_16 = value;
		Il2CppCodeGenWriteBarrier((&___RegistEmail_16), value);
	}

	inline static int32_t get_offset_of_RegistPassword_17() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831, ___RegistPassword_17)); }
	inline Text_t224764520 * get_RegistPassword_17() const { return ___RegistPassword_17; }
	inline Text_t224764520 ** get_address_of_RegistPassword_17() { return &___RegistPassword_17; }
	inline void set_RegistPassword_17(Text_t224764520 * value)
	{
		___RegistPassword_17 = value;
		Il2CppCodeGenWriteBarrier((&___RegistPassword_17), value);
	}

	inline static int32_t get_offset_of_RegistPasswordCheck_18() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831, ___RegistPasswordCheck_18)); }
	inline Text_t224764520 * get_RegistPasswordCheck_18() const { return ___RegistPasswordCheck_18; }
	inline Text_t224764520 ** get_address_of_RegistPasswordCheck_18() { return &___RegistPasswordCheck_18; }
	inline void set_RegistPasswordCheck_18(Text_t224764520 * value)
	{
		___RegistPasswordCheck_18 = value;
		Il2CppCodeGenWriteBarrier((&___RegistPasswordCheck_18), value);
	}

	inline static int32_t get_offset_of_PopupMsg_19() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831, ___PopupMsg_19)); }
	inline Text_t224764520 * get_PopupMsg_19() const { return ___PopupMsg_19; }
	inline Text_t224764520 ** get_address_of_PopupMsg_19() { return &___PopupMsg_19; }
	inline void set_PopupMsg_19(Text_t224764520 * value)
	{
		___PopupMsg_19 = value;
		Il2CppCodeGenWriteBarrier((&___PopupMsg_19), value);
	}
};

struct LoginModule_t1705691831_StaticFields
{
public:
	// System.String LoginModule::UserName
	String_t* ___UserName_6;
	// System.String LoginModule::UserEmail
	String_t* ___UserEmail_7;
	// System.Uri LoginModule::photo_url
	Uri_t3180489251 * ___photo_url_8;
	// System.String LoginModule::photourlstring
	String_t* ___photourlstring_9;
	// System.Int64 LoginModule::UserID
	int64_t ___UserID_10;
	// System.Action`1<TwitterKit.Unity.ApiError> LoginModule::<>f__am$cache0
	Action_1_t385074677 * ___U3CU3Ef__amU24cache0_20;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>> LoginModule::<>f__am$cache1
	Action_1_t3314882695 * ___U3CU3Ef__amU24cache1_21;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Auth.FirebaseUser>> LoginModule::<>f__am$cache2
	Action_1_t3314882695 * ___U3CU3Ef__amU24cache2_22;
	// System.Action`1<System.Threading.Tasks.Task> LoginModule::<>f__am$cache3
	Action_1_t1068021793 * ___U3CU3Ef__amU24cache3_23;

public:
	inline static int32_t get_offset_of_UserName_6() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831_StaticFields, ___UserName_6)); }
	inline String_t* get_UserName_6() const { return ___UserName_6; }
	inline String_t** get_address_of_UserName_6() { return &___UserName_6; }
	inline void set_UserName_6(String_t* value)
	{
		___UserName_6 = value;
		Il2CppCodeGenWriteBarrier((&___UserName_6), value);
	}

	inline static int32_t get_offset_of_UserEmail_7() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831_StaticFields, ___UserEmail_7)); }
	inline String_t* get_UserEmail_7() const { return ___UserEmail_7; }
	inline String_t** get_address_of_UserEmail_7() { return &___UserEmail_7; }
	inline void set_UserEmail_7(String_t* value)
	{
		___UserEmail_7 = value;
		Il2CppCodeGenWriteBarrier((&___UserEmail_7), value);
	}

	inline static int32_t get_offset_of_photo_url_8() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831_StaticFields, ___photo_url_8)); }
	inline Uri_t3180489251 * get_photo_url_8() const { return ___photo_url_8; }
	inline Uri_t3180489251 ** get_address_of_photo_url_8() { return &___photo_url_8; }
	inline void set_photo_url_8(Uri_t3180489251 * value)
	{
		___photo_url_8 = value;
		Il2CppCodeGenWriteBarrier((&___photo_url_8), value);
	}

	inline static int32_t get_offset_of_photourlstring_9() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831_StaticFields, ___photourlstring_9)); }
	inline String_t* get_photourlstring_9() const { return ___photourlstring_9; }
	inline String_t** get_address_of_photourlstring_9() { return &___photourlstring_9; }
	inline void set_photourlstring_9(String_t* value)
	{
		___photourlstring_9 = value;
		Il2CppCodeGenWriteBarrier((&___photourlstring_9), value);
	}

	inline static int32_t get_offset_of_UserID_10() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831_StaticFields, ___UserID_10)); }
	inline int64_t get_UserID_10() const { return ___UserID_10; }
	inline int64_t* get_address_of_UserID_10() { return &___UserID_10; }
	inline void set_UserID_10(int64_t value)
	{
		___UserID_10 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_20() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831_StaticFields, ___U3CU3Ef__amU24cache0_20)); }
	inline Action_1_t385074677 * get_U3CU3Ef__amU24cache0_20() const { return ___U3CU3Ef__amU24cache0_20; }
	inline Action_1_t385074677 ** get_address_of_U3CU3Ef__amU24cache0_20() { return &___U3CU3Ef__amU24cache0_20; }
	inline void set_U3CU3Ef__amU24cache0_20(Action_1_t385074677 * value)
	{
		___U3CU3Ef__amU24cache0_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_21() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831_StaticFields, ___U3CU3Ef__amU24cache1_21)); }
	inline Action_1_t3314882695 * get_U3CU3Ef__amU24cache1_21() const { return ___U3CU3Ef__amU24cache1_21; }
	inline Action_1_t3314882695 ** get_address_of_U3CU3Ef__amU24cache1_21() { return &___U3CU3Ef__amU24cache1_21; }
	inline void set_U3CU3Ef__amU24cache1_21(Action_1_t3314882695 * value)
	{
		___U3CU3Ef__amU24cache1_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_22() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831_StaticFields, ___U3CU3Ef__amU24cache2_22)); }
	inline Action_1_t3314882695 * get_U3CU3Ef__amU24cache2_22() const { return ___U3CU3Ef__amU24cache2_22; }
	inline Action_1_t3314882695 ** get_address_of_U3CU3Ef__amU24cache2_22() { return &___U3CU3Ef__amU24cache2_22; }
	inline void set_U3CU3Ef__amU24cache2_22(Action_1_t3314882695 * value)
	{
		___U3CU3Ef__amU24cache2_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_23() { return static_cast<int32_t>(offsetof(LoginModule_t1705691831_StaticFields, ___U3CU3Ef__amU24cache3_23)); }
	inline Action_1_t1068021793 * get_U3CU3Ef__amU24cache3_23() const { return ___U3CU3Ef__amU24cache3_23; }
	inline Action_1_t1068021793 ** get_address_of_U3CU3Ef__amU24cache3_23() { return &___U3CU3Ef__amU24cache3_23; }
	inline void set_U3CU3Ef__amU24cache3_23(Action_1_t1068021793 * value)
	{
		___U3CU3Ef__amU24cache3_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINMODULE_T1705691831_H
#ifndef MENUCONTROLLER_T1834083939_H
#define MENUCONTROLLER_T1834083939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuController
struct  MenuController_t1834083939  : public MonoBehaviour_t3444990707
{
public:
	// UnityEngine.UI.Text MenuController::UserName
	Text_t224764520 * ___UserName_2;
	// UnityEngine.UI.Image MenuController::ProfileImage
	Image_t3130528015 * ___ProfileImage_3;

public:
	inline static int32_t get_offset_of_UserName_2() { return static_cast<int32_t>(offsetof(MenuController_t1834083939, ___UserName_2)); }
	inline Text_t224764520 * get_UserName_2() const { return ___UserName_2; }
	inline Text_t224764520 ** get_address_of_UserName_2() { return &___UserName_2; }
	inline void set_UserName_2(Text_t224764520 * value)
	{
		___UserName_2 = value;
		Il2CppCodeGenWriteBarrier((&___UserName_2), value);
	}

	inline static int32_t get_offset_of_ProfileImage_3() { return static_cast<int32_t>(offsetof(MenuController_t1834083939, ___ProfileImage_3)); }
	inline Image_t3130528015 * get_ProfileImage_3() const { return ___ProfileImage_3; }
	inline Image_t3130528015 ** get_address_of_ProfileImage_3() { return &___ProfileImage_3; }
	inline void set_ProfileImage_3(Image_t3130528015 * value)
	{
		___ProfileImage_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProfileImage_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUCONTROLLER_T1834083939_H
#ifndef MOVER_T178000308_H
#define MOVER_T178000308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mover
struct  Mover_t178000308  : public MonoBehaviour_t3444990707
{
public:
	// System.Single Mover::speed
	float ___speed_2;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Mover_t178000308, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVER_T178000308_H
#ifndef CONSOLEBASE_T2920859802_H
#define CONSOLEBASE_T2920859802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.ConsoleBase
struct  ConsoleBase_t2920859802  : public MonoBehaviour_t3444990707
{
public:
	// System.String Facebook.Unity.Example.ConsoleBase::status
	String_t* ___status_4;
	// System.String Facebook.Unity.Example.ConsoleBase::lastResponse
	String_t* ___lastResponse_5;
	// UnityEngine.Vector2 Facebook.Unity.Example.ConsoleBase::scrollPosition
	Vector2_t2830993234  ___scrollPosition_6;
	// System.Nullable`1<System.Single> Facebook.Unity.Example.ConsoleBase::scaleFactor
	Nullable_1_t2875230819  ___scaleFactor_7;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::textStyle
	GUIStyle_t3496658479 * ___textStyle_8;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::buttonStyle
	GUIStyle_t3496658479 * ___buttonStyle_9;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::textInputStyle
	GUIStyle_t3496658479 * ___textInputStyle_10;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::labelStyle
	GUIStyle_t3496658479 * ___labelStyle_11;
	// UnityEngine.Texture2D Facebook.Unity.Example.ConsoleBase::<LastResponseTexture>k__BackingField
	Texture2D_t2610545289 * ___U3CLastResponseTextureU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(ConsoleBase_t2920859802, ___status_4)); }
	inline String_t* get_status_4() const { return ___status_4; }
	inline String_t** get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(String_t* value)
	{
		___status_4 = value;
		Il2CppCodeGenWriteBarrier((&___status_4), value);
	}

	inline static int32_t get_offset_of_lastResponse_5() { return static_cast<int32_t>(offsetof(ConsoleBase_t2920859802, ___lastResponse_5)); }
	inline String_t* get_lastResponse_5() const { return ___lastResponse_5; }
	inline String_t** get_address_of_lastResponse_5() { return &___lastResponse_5; }
	inline void set_lastResponse_5(String_t* value)
	{
		___lastResponse_5 = value;
		Il2CppCodeGenWriteBarrier((&___lastResponse_5), value);
	}

	inline static int32_t get_offset_of_scrollPosition_6() { return static_cast<int32_t>(offsetof(ConsoleBase_t2920859802, ___scrollPosition_6)); }
	inline Vector2_t2830993234  get_scrollPosition_6() const { return ___scrollPosition_6; }
	inline Vector2_t2830993234 * get_address_of_scrollPosition_6() { return &___scrollPosition_6; }
	inline void set_scrollPosition_6(Vector2_t2830993234  value)
	{
		___scrollPosition_6 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_7() { return static_cast<int32_t>(offsetof(ConsoleBase_t2920859802, ___scaleFactor_7)); }
	inline Nullable_1_t2875230819  get_scaleFactor_7() const { return ___scaleFactor_7; }
	inline Nullable_1_t2875230819 * get_address_of_scaleFactor_7() { return &___scaleFactor_7; }
	inline void set_scaleFactor_7(Nullable_1_t2875230819  value)
	{
		___scaleFactor_7 = value;
	}

	inline static int32_t get_offset_of_textStyle_8() { return static_cast<int32_t>(offsetof(ConsoleBase_t2920859802, ___textStyle_8)); }
	inline GUIStyle_t3496658479 * get_textStyle_8() const { return ___textStyle_8; }
	inline GUIStyle_t3496658479 ** get_address_of_textStyle_8() { return &___textStyle_8; }
	inline void set_textStyle_8(GUIStyle_t3496658479 * value)
	{
		___textStyle_8 = value;
		Il2CppCodeGenWriteBarrier((&___textStyle_8), value);
	}

	inline static int32_t get_offset_of_buttonStyle_9() { return static_cast<int32_t>(offsetof(ConsoleBase_t2920859802, ___buttonStyle_9)); }
	inline GUIStyle_t3496658479 * get_buttonStyle_9() const { return ___buttonStyle_9; }
	inline GUIStyle_t3496658479 ** get_address_of_buttonStyle_9() { return &___buttonStyle_9; }
	inline void set_buttonStyle_9(GUIStyle_t3496658479 * value)
	{
		___buttonStyle_9 = value;
		Il2CppCodeGenWriteBarrier((&___buttonStyle_9), value);
	}

	inline static int32_t get_offset_of_textInputStyle_10() { return static_cast<int32_t>(offsetof(ConsoleBase_t2920859802, ___textInputStyle_10)); }
	inline GUIStyle_t3496658479 * get_textInputStyle_10() const { return ___textInputStyle_10; }
	inline GUIStyle_t3496658479 ** get_address_of_textInputStyle_10() { return &___textInputStyle_10; }
	inline void set_textInputStyle_10(GUIStyle_t3496658479 * value)
	{
		___textInputStyle_10 = value;
		Il2CppCodeGenWriteBarrier((&___textInputStyle_10), value);
	}

	inline static int32_t get_offset_of_labelStyle_11() { return static_cast<int32_t>(offsetof(ConsoleBase_t2920859802, ___labelStyle_11)); }
	inline GUIStyle_t3496658479 * get_labelStyle_11() const { return ___labelStyle_11; }
	inline GUIStyle_t3496658479 ** get_address_of_labelStyle_11() { return &___labelStyle_11; }
	inline void set_labelStyle_11(GUIStyle_t3496658479 * value)
	{
		___labelStyle_11 = value;
		Il2CppCodeGenWriteBarrier((&___labelStyle_11), value);
	}

	inline static int32_t get_offset_of_U3CLastResponseTextureU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ConsoleBase_t2920859802, ___U3CLastResponseTextureU3Ek__BackingField_12)); }
	inline Texture2D_t2610545289 * get_U3CLastResponseTextureU3Ek__BackingField_12() const { return ___U3CLastResponseTextureU3Ek__BackingField_12; }
	inline Texture2D_t2610545289 ** get_address_of_U3CLastResponseTextureU3Ek__BackingField_12() { return &___U3CLastResponseTextureU3Ek__BackingField_12; }
	inline void set_U3CLastResponseTextureU3Ek__BackingField_12(Texture2D_t2610545289 * value)
	{
		___U3CLastResponseTextureU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLastResponseTextureU3Ek__BackingField_12), value);
	}
};

struct ConsoleBase_t2920859802_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<System.String> Facebook.Unity.Example.ConsoleBase::menuStack
	Stack_1_t172845523 * ___menuStack_3;

public:
	inline static int32_t get_offset_of_menuStack_3() { return static_cast<int32_t>(offsetof(ConsoleBase_t2920859802_StaticFields, ___menuStack_3)); }
	inline Stack_1_t172845523 * get_menuStack_3() const { return ___menuStack_3; }
	inline Stack_1_t172845523 ** get_address_of_menuStack_3() { return &___menuStack_3; }
	inline void set_menuStack_3(Stack_1_t172845523 * value)
	{
		___menuStack_3 = value;
		Il2CppCodeGenWriteBarrier((&___menuStack_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLEBASE_T2920859802_H
#ifndef PLAYERCONTROLLER_T3361431126_H
#define PLAYERCONTROLLER_T3361431126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t3361431126  : public MonoBehaviour_t3444990707
{
public:
	// System.Single PlayerController::speed
	float ___speed_2;
	// System.Single PlayerController::tilt
	float ___tilt_3;
	// System.Single PlayerController::firerate
	float ___firerate_4;
	// System.Single PlayerController::nextFire
	float ___nextFire_5;
	// Boundary PlayerController::boundary
	Boundary_t2747317414 * ___boundary_6;
	// UnityEngine.GameObject PlayerController::Shot
	GameObject_t2982081763 * ___Shot_7;
	// UnityEngine.Transform PlayerController::ShotSpawn
	Transform_t3103581000 * ___ShotSpawn_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerController_t3361431126, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_tilt_3() { return static_cast<int32_t>(offsetof(PlayerController_t3361431126, ___tilt_3)); }
	inline float get_tilt_3() const { return ___tilt_3; }
	inline float* get_address_of_tilt_3() { return &___tilt_3; }
	inline void set_tilt_3(float value)
	{
		___tilt_3 = value;
	}

	inline static int32_t get_offset_of_firerate_4() { return static_cast<int32_t>(offsetof(PlayerController_t3361431126, ___firerate_4)); }
	inline float get_firerate_4() const { return ___firerate_4; }
	inline float* get_address_of_firerate_4() { return &___firerate_4; }
	inline void set_firerate_4(float value)
	{
		___firerate_4 = value;
	}

	inline static int32_t get_offset_of_nextFire_5() { return static_cast<int32_t>(offsetof(PlayerController_t3361431126, ___nextFire_5)); }
	inline float get_nextFire_5() const { return ___nextFire_5; }
	inline float* get_address_of_nextFire_5() { return &___nextFire_5; }
	inline void set_nextFire_5(float value)
	{
		___nextFire_5 = value;
	}

	inline static int32_t get_offset_of_boundary_6() { return static_cast<int32_t>(offsetof(PlayerController_t3361431126, ___boundary_6)); }
	inline Boundary_t2747317414 * get_boundary_6() const { return ___boundary_6; }
	inline Boundary_t2747317414 ** get_address_of_boundary_6() { return &___boundary_6; }
	inline void set_boundary_6(Boundary_t2747317414 * value)
	{
		___boundary_6 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_6), value);
	}

	inline static int32_t get_offset_of_Shot_7() { return static_cast<int32_t>(offsetof(PlayerController_t3361431126, ___Shot_7)); }
	inline GameObject_t2982081763 * get_Shot_7() const { return ___Shot_7; }
	inline GameObject_t2982081763 ** get_address_of_Shot_7() { return &___Shot_7; }
	inline void set_Shot_7(GameObject_t2982081763 * value)
	{
		___Shot_7 = value;
		Il2CppCodeGenWriteBarrier((&___Shot_7), value);
	}

	inline static int32_t get_offset_of_ShotSpawn_8() { return static_cast<int32_t>(offsetof(PlayerController_t3361431126, ___ShotSpawn_8)); }
	inline Transform_t3103581000 * get_ShotSpawn_8() const { return ___ShotSpawn_8; }
	inline Transform_t3103581000 ** get_address_of_ShotSpawn_8() { return &___ShotSpawn_8; }
	inline void set_ShotSpawn_8(Transform_t3103581000 * value)
	{
		___ShotSpawn_8 = value;
		Il2CppCodeGenWriteBarrier((&___ShotSpawn_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T3361431126_H
#ifndef TWITTERCOMPONENT_T3631078805_H
#define TWITTERCOMPONENT_T3631078805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TwitterKit.Internal.TwitterComponent
struct  TwitterComponent_t3631078805  : public MonoBehaviour_t3444990707
{
public:
	// System.Action`1<TwitterKit.Unity.TwitterSession> TwitterKit.Internal.TwitterComponent::<loginSuccessAction>k__BackingField
	Action_1_t3655933502 * ___U3CloginSuccessActionU3Ek__BackingField_2;
	// System.Action`1<TwitterKit.Unity.ApiError> TwitterKit.Internal.TwitterComponent::<loginFailureAction>k__BackingField
	Action_1_t385074677 * ___U3CloginFailureActionU3Ek__BackingField_3;
	// System.Action`1<System.String> TwitterKit.Internal.TwitterComponent::<emailSuccessAction>k__BackingField
	Action_1_t1399392283 * ___U3CemailSuccessActionU3Ek__BackingField_4;
	// System.Action`1<TwitterKit.Unity.ApiError> TwitterKit.Internal.TwitterComponent::<emailFailureAction>k__BackingField
	Action_1_t385074677 * ___U3CemailFailureActionU3Ek__BackingField_5;
	// System.Action`1<System.String> TwitterKit.Internal.TwitterComponent::<tweetSuccessAction>k__BackingField
	Action_1_t1399392283 * ___U3CtweetSuccessActionU3Ek__BackingField_6;
	// System.Action`1<TwitterKit.Unity.ApiError> TwitterKit.Internal.TwitterComponent::<tweetFailureAction>k__BackingField
	Action_1_t385074677 * ___U3CtweetFailureActionU3Ek__BackingField_7;
	// System.Action TwitterKit.Internal.TwitterComponent::<tweetCancelAction>k__BackingField
	Action_t2540762590 * ___U3CtweetCancelActionU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CloginSuccessActionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TwitterComponent_t3631078805, ___U3CloginSuccessActionU3Ek__BackingField_2)); }
	inline Action_1_t3655933502 * get_U3CloginSuccessActionU3Ek__BackingField_2() const { return ___U3CloginSuccessActionU3Ek__BackingField_2; }
	inline Action_1_t3655933502 ** get_address_of_U3CloginSuccessActionU3Ek__BackingField_2() { return &___U3CloginSuccessActionU3Ek__BackingField_2; }
	inline void set_U3CloginSuccessActionU3Ek__BackingField_2(Action_1_t3655933502 * value)
	{
		___U3CloginSuccessActionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CloginSuccessActionU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CloginFailureActionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TwitterComponent_t3631078805, ___U3CloginFailureActionU3Ek__BackingField_3)); }
	inline Action_1_t385074677 * get_U3CloginFailureActionU3Ek__BackingField_3() const { return ___U3CloginFailureActionU3Ek__BackingField_3; }
	inline Action_1_t385074677 ** get_address_of_U3CloginFailureActionU3Ek__BackingField_3() { return &___U3CloginFailureActionU3Ek__BackingField_3; }
	inline void set_U3CloginFailureActionU3Ek__BackingField_3(Action_1_t385074677 * value)
	{
		___U3CloginFailureActionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CloginFailureActionU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CemailSuccessActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TwitterComponent_t3631078805, ___U3CemailSuccessActionU3Ek__BackingField_4)); }
	inline Action_1_t1399392283 * get_U3CemailSuccessActionU3Ek__BackingField_4() const { return ___U3CemailSuccessActionU3Ek__BackingField_4; }
	inline Action_1_t1399392283 ** get_address_of_U3CemailSuccessActionU3Ek__BackingField_4() { return &___U3CemailSuccessActionU3Ek__BackingField_4; }
	inline void set_U3CemailSuccessActionU3Ek__BackingField_4(Action_1_t1399392283 * value)
	{
		___U3CemailSuccessActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CemailSuccessActionU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CemailFailureActionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TwitterComponent_t3631078805, ___U3CemailFailureActionU3Ek__BackingField_5)); }
	inline Action_1_t385074677 * get_U3CemailFailureActionU3Ek__BackingField_5() const { return ___U3CemailFailureActionU3Ek__BackingField_5; }
	inline Action_1_t385074677 ** get_address_of_U3CemailFailureActionU3Ek__BackingField_5() { return &___U3CemailFailureActionU3Ek__BackingField_5; }
	inline void set_U3CemailFailureActionU3Ek__BackingField_5(Action_1_t385074677 * value)
	{
		___U3CemailFailureActionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CemailFailureActionU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CtweetSuccessActionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TwitterComponent_t3631078805, ___U3CtweetSuccessActionU3Ek__BackingField_6)); }
	inline Action_1_t1399392283 * get_U3CtweetSuccessActionU3Ek__BackingField_6() const { return ___U3CtweetSuccessActionU3Ek__BackingField_6; }
	inline Action_1_t1399392283 ** get_address_of_U3CtweetSuccessActionU3Ek__BackingField_6() { return &___U3CtweetSuccessActionU3Ek__BackingField_6; }
	inline void set_U3CtweetSuccessActionU3Ek__BackingField_6(Action_1_t1399392283 * value)
	{
		___U3CtweetSuccessActionU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtweetSuccessActionU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CtweetFailureActionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TwitterComponent_t3631078805, ___U3CtweetFailureActionU3Ek__BackingField_7)); }
	inline Action_1_t385074677 * get_U3CtweetFailureActionU3Ek__BackingField_7() const { return ___U3CtweetFailureActionU3Ek__BackingField_7; }
	inline Action_1_t385074677 ** get_address_of_U3CtweetFailureActionU3Ek__BackingField_7() { return &___U3CtweetFailureActionU3Ek__BackingField_7; }
	inline void set_U3CtweetFailureActionU3Ek__BackingField_7(Action_1_t385074677 * value)
	{
		___U3CtweetFailureActionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtweetFailureActionU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CtweetCancelActionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TwitterComponent_t3631078805, ___U3CtweetCancelActionU3Ek__BackingField_8)); }
	inline Action_t2540762590 * get_U3CtweetCancelActionU3Ek__BackingField_8() const { return ___U3CtweetCancelActionU3Ek__BackingField_8; }
	inline Action_t2540762590 ** get_address_of_U3CtweetCancelActionU3Ek__BackingField_8() { return &___U3CtweetCancelActionU3Ek__BackingField_8; }
	inline void set_U3CtweetCancelActionU3Ek__BackingField_8(Action_t2540762590 * value)
	{
		___U3CtweetCancelActionU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtweetCancelActionU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TWITTERCOMPONENT_T3631078805_H
#ifndef MENUBASE_T2236896407_H
#define MENUBASE_T2236896407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.MenuBase
struct  MenuBase_t2236896407  : public ConsoleBase_t2920859802
{
public:

public:
};

struct MenuBase_t2236896407_StaticFields
{
public:
	// Facebook.Unity.ShareDialogMode Facebook.Unity.Example.MenuBase::shareDialogMode
	int32_t ___shareDialogMode_13;

public:
	inline static int32_t get_offset_of_shareDialogMode_13() { return static_cast<int32_t>(offsetof(MenuBase_t2236896407_StaticFields, ___shareDialogMode_13)); }
	inline int32_t get_shareDialogMode_13() const { return ___shareDialogMode_13; }
	inline int32_t* get_address_of_shareDialogMode_13() { return &___shareDialogMode_13; }
	inline void set_shareDialogMode_13(int32_t value)
	{
		___shareDialogMode_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUBASE_T2236896407_H
#ifndef APPLINKS_T630454019_H
#define APPLINKS_T630454019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.AppLinks
struct  AppLinks_t630454019  : public MenuBase_t2236896407
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLINKS_T630454019_H
#ifndef APPREQUESTS_T840515047_H
#define APPREQUESTS_T840515047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.AppRequests
struct  AppRequests_t840515047  : public MenuBase_t2236896407
{
public:
	// System.String Facebook.Unity.Example.AppRequests::requestMessage
	String_t* ___requestMessage_14;
	// System.String Facebook.Unity.Example.AppRequests::requestTo
	String_t* ___requestTo_15;
	// System.String Facebook.Unity.Example.AppRequests::requestFilter
	String_t* ___requestFilter_16;
	// System.String Facebook.Unity.Example.AppRequests::requestExcludes
	String_t* ___requestExcludes_17;
	// System.String Facebook.Unity.Example.AppRequests::requestMax
	String_t* ___requestMax_18;
	// System.String Facebook.Unity.Example.AppRequests::requestData
	String_t* ___requestData_19;
	// System.String Facebook.Unity.Example.AppRequests::requestTitle
	String_t* ___requestTitle_20;
	// System.String Facebook.Unity.Example.AppRequests::requestObjectID
	String_t* ___requestObjectID_21;
	// System.Int32 Facebook.Unity.Example.AppRequests::selectedAction
	int32_t ___selectedAction_22;
	// System.String[] Facebook.Unity.Example.AppRequests::actionTypeStrings
	StringU5BU5D_t1443727135* ___actionTypeStrings_23;

public:
	inline static int32_t get_offset_of_requestMessage_14() { return static_cast<int32_t>(offsetof(AppRequests_t840515047, ___requestMessage_14)); }
	inline String_t* get_requestMessage_14() const { return ___requestMessage_14; }
	inline String_t** get_address_of_requestMessage_14() { return &___requestMessage_14; }
	inline void set_requestMessage_14(String_t* value)
	{
		___requestMessage_14 = value;
		Il2CppCodeGenWriteBarrier((&___requestMessage_14), value);
	}

	inline static int32_t get_offset_of_requestTo_15() { return static_cast<int32_t>(offsetof(AppRequests_t840515047, ___requestTo_15)); }
	inline String_t* get_requestTo_15() const { return ___requestTo_15; }
	inline String_t** get_address_of_requestTo_15() { return &___requestTo_15; }
	inline void set_requestTo_15(String_t* value)
	{
		___requestTo_15 = value;
		Il2CppCodeGenWriteBarrier((&___requestTo_15), value);
	}

	inline static int32_t get_offset_of_requestFilter_16() { return static_cast<int32_t>(offsetof(AppRequests_t840515047, ___requestFilter_16)); }
	inline String_t* get_requestFilter_16() const { return ___requestFilter_16; }
	inline String_t** get_address_of_requestFilter_16() { return &___requestFilter_16; }
	inline void set_requestFilter_16(String_t* value)
	{
		___requestFilter_16 = value;
		Il2CppCodeGenWriteBarrier((&___requestFilter_16), value);
	}

	inline static int32_t get_offset_of_requestExcludes_17() { return static_cast<int32_t>(offsetof(AppRequests_t840515047, ___requestExcludes_17)); }
	inline String_t* get_requestExcludes_17() const { return ___requestExcludes_17; }
	inline String_t** get_address_of_requestExcludes_17() { return &___requestExcludes_17; }
	inline void set_requestExcludes_17(String_t* value)
	{
		___requestExcludes_17 = value;
		Il2CppCodeGenWriteBarrier((&___requestExcludes_17), value);
	}

	inline static int32_t get_offset_of_requestMax_18() { return static_cast<int32_t>(offsetof(AppRequests_t840515047, ___requestMax_18)); }
	inline String_t* get_requestMax_18() const { return ___requestMax_18; }
	inline String_t** get_address_of_requestMax_18() { return &___requestMax_18; }
	inline void set_requestMax_18(String_t* value)
	{
		___requestMax_18 = value;
		Il2CppCodeGenWriteBarrier((&___requestMax_18), value);
	}

	inline static int32_t get_offset_of_requestData_19() { return static_cast<int32_t>(offsetof(AppRequests_t840515047, ___requestData_19)); }
	inline String_t* get_requestData_19() const { return ___requestData_19; }
	inline String_t** get_address_of_requestData_19() { return &___requestData_19; }
	inline void set_requestData_19(String_t* value)
	{
		___requestData_19 = value;
		Il2CppCodeGenWriteBarrier((&___requestData_19), value);
	}

	inline static int32_t get_offset_of_requestTitle_20() { return static_cast<int32_t>(offsetof(AppRequests_t840515047, ___requestTitle_20)); }
	inline String_t* get_requestTitle_20() const { return ___requestTitle_20; }
	inline String_t** get_address_of_requestTitle_20() { return &___requestTitle_20; }
	inline void set_requestTitle_20(String_t* value)
	{
		___requestTitle_20 = value;
		Il2CppCodeGenWriteBarrier((&___requestTitle_20), value);
	}

	inline static int32_t get_offset_of_requestObjectID_21() { return static_cast<int32_t>(offsetof(AppRequests_t840515047, ___requestObjectID_21)); }
	inline String_t* get_requestObjectID_21() const { return ___requestObjectID_21; }
	inline String_t** get_address_of_requestObjectID_21() { return &___requestObjectID_21; }
	inline void set_requestObjectID_21(String_t* value)
	{
		___requestObjectID_21 = value;
		Il2CppCodeGenWriteBarrier((&___requestObjectID_21), value);
	}

	inline static int32_t get_offset_of_selectedAction_22() { return static_cast<int32_t>(offsetof(AppRequests_t840515047, ___selectedAction_22)); }
	inline int32_t get_selectedAction_22() const { return ___selectedAction_22; }
	inline int32_t* get_address_of_selectedAction_22() { return &___selectedAction_22; }
	inline void set_selectedAction_22(int32_t value)
	{
		___selectedAction_22 = value;
	}

	inline static int32_t get_offset_of_actionTypeStrings_23() { return static_cast<int32_t>(offsetof(AppRequests_t840515047, ___actionTypeStrings_23)); }
	inline StringU5BU5D_t1443727135* get_actionTypeStrings_23() const { return ___actionTypeStrings_23; }
	inline StringU5BU5D_t1443727135** get_address_of_actionTypeStrings_23() { return &___actionTypeStrings_23; }
	inline void set_actionTypeStrings_23(StringU5BU5D_t1443727135* value)
	{
		___actionTypeStrings_23 = value;
		Il2CppCodeGenWriteBarrier((&___actionTypeStrings_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPREQUESTS_T840515047_H
#ifndef MAINMENU_T3848720420_H
#define MAINMENU_T3848720420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.MainMenu
struct  MainMenu_t3848720420  : public MenuBase_t2236896407
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINMENU_T3848720420_H
#ifndef GAMEGROUPS_T1652901023_H
#define GAMEGROUPS_T1652901023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.GameGroups
struct  GameGroups_t1652901023  : public MenuBase_t2236896407
{
public:
	// System.String Facebook.Unity.Example.GameGroups::gamerGroupName
	String_t* ___gamerGroupName_14;
	// System.String Facebook.Unity.Example.GameGroups::gamerGroupDesc
	String_t* ___gamerGroupDesc_15;
	// System.String Facebook.Unity.Example.GameGroups::gamerGroupPrivacy
	String_t* ___gamerGroupPrivacy_16;
	// System.String Facebook.Unity.Example.GameGroups::gamerGroupCurrentGroup
	String_t* ___gamerGroupCurrentGroup_17;

public:
	inline static int32_t get_offset_of_gamerGroupName_14() { return static_cast<int32_t>(offsetof(GameGroups_t1652901023, ___gamerGroupName_14)); }
	inline String_t* get_gamerGroupName_14() const { return ___gamerGroupName_14; }
	inline String_t** get_address_of_gamerGroupName_14() { return &___gamerGroupName_14; }
	inline void set_gamerGroupName_14(String_t* value)
	{
		___gamerGroupName_14 = value;
		Il2CppCodeGenWriteBarrier((&___gamerGroupName_14), value);
	}

	inline static int32_t get_offset_of_gamerGroupDesc_15() { return static_cast<int32_t>(offsetof(GameGroups_t1652901023, ___gamerGroupDesc_15)); }
	inline String_t* get_gamerGroupDesc_15() const { return ___gamerGroupDesc_15; }
	inline String_t** get_address_of_gamerGroupDesc_15() { return &___gamerGroupDesc_15; }
	inline void set_gamerGroupDesc_15(String_t* value)
	{
		___gamerGroupDesc_15 = value;
		Il2CppCodeGenWriteBarrier((&___gamerGroupDesc_15), value);
	}

	inline static int32_t get_offset_of_gamerGroupPrivacy_16() { return static_cast<int32_t>(offsetof(GameGroups_t1652901023, ___gamerGroupPrivacy_16)); }
	inline String_t* get_gamerGroupPrivacy_16() const { return ___gamerGroupPrivacy_16; }
	inline String_t** get_address_of_gamerGroupPrivacy_16() { return &___gamerGroupPrivacy_16; }
	inline void set_gamerGroupPrivacy_16(String_t* value)
	{
		___gamerGroupPrivacy_16 = value;
		Il2CppCodeGenWriteBarrier((&___gamerGroupPrivacy_16), value);
	}

	inline static int32_t get_offset_of_gamerGroupCurrentGroup_17() { return static_cast<int32_t>(offsetof(GameGroups_t1652901023, ___gamerGroupCurrentGroup_17)); }
	inline String_t* get_gamerGroupCurrentGroup_17() const { return ___gamerGroupCurrentGroup_17; }
	inline String_t** get_address_of_gamerGroupCurrentGroup_17() { return &___gamerGroupCurrentGroup_17; }
	inline void set_gamerGroupCurrentGroup_17(String_t* value)
	{
		___gamerGroupCurrentGroup_17 = value;
		Il2CppCodeGenWriteBarrier((&___gamerGroupCurrentGroup_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEGROUPS_T1652901023_H
#ifndef GRAPHREQUEST_T2775374912_H
#define GRAPHREQUEST_T2775374912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.GraphRequest
struct  GraphRequest_t2775374912  : public MenuBase_t2236896407
{
public:
	// System.String Facebook.Unity.Example.GraphRequest::apiQuery
	String_t* ___apiQuery_14;
	// UnityEngine.Texture2D Facebook.Unity.Example.GraphRequest::profilePic
	Texture2D_t2610545289 * ___profilePic_15;

public:
	inline static int32_t get_offset_of_apiQuery_14() { return static_cast<int32_t>(offsetof(GraphRequest_t2775374912, ___apiQuery_14)); }
	inline String_t* get_apiQuery_14() const { return ___apiQuery_14; }
	inline String_t** get_address_of_apiQuery_14() { return &___apiQuery_14; }
	inline void set_apiQuery_14(String_t* value)
	{
		___apiQuery_14 = value;
		Il2CppCodeGenWriteBarrier((&___apiQuery_14), value);
	}

	inline static int32_t get_offset_of_profilePic_15() { return static_cast<int32_t>(offsetof(GraphRequest_t2775374912, ___profilePic_15)); }
	inline Texture2D_t2610545289 * get_profilePic_15() const { return ___profilePic_15; }
	inline Texture2D_t2610545289 ** get_address_of_profilePic_15() { return &___profilePic_15; }
	inline void set_profilePic_15(Texture2D_t2610545289 * value)
	{
		___profilePic_15 = value;
		Il2CppCodeGenWriteBarrier((&___profilePic_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHREQUEST_T2775374912_H
#ifndef PAY_T987189821_H
#define PAY_T987189821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.Pay
struct  Pay_t987189821  : public MenuBase_t2236896407
{
public:
	// System.String Facebook.Unity.Example.Pay::payProduct
	String_t* ___payProduct_14;

public:
	inline static int32_t get_offset_of_payProduct_14() { return static_cast<int32_t>(offsetof(Pay_t987189821, ___payProduct_14)); }
	inline String_t* get_payProduct_14() const { return ___payProduct_14; }
	inline String_t** get_address_of_payProduct_14() { return &___payProduct_14; }
	inline void set_payProduct_14(String_t* value)
	{
		___payProduct_14 = value;
		Il2CppCodeGenWriteBarrier((&___payProduct_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAY_T987189821_H
#ifndef DIALOGSHARE_T1787441532_H
#define DIALOGSHARE_T1787441532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.DialogShare
struct  DialogShare_t1787441532  : public MenuBase_t2236896407
{
public:
	// System.String Facebook.Unity.Example.DialogShare::shareLink
	String_t* ___shareLink_14;
	// System.String Facebook.Unity.Example.DialogShare::shareTitle
	String_t* ___shareTitle_15;
	// System.String Facebook.Unity.Example.DialogShare::shareDescription
	String_t* ___shareDescription_16;
	// System.String Facebook.Unity.Example.DialogShare::shareImage
	String_t* ___shareImage_17;
	// System.String Facebook.Unity.Example.DialogShare::feedTo
	String_t* ___feedTo_18;
	// System.String Facebook.Unity.Example.DialogShare::feedLink
	String_t* ___feedLink_19;
	// System.String Facebook.Unity.Example.DialogShare::feedTitle
	String_t* ___feedTitle_20;
	// System.String Facebook.Unity.Example.DialogShare::feedCaption
	String_t* ___feedCaption_21;
	// System.String Facebook.Unity.Example.DialogShare::feedDescription
	String_t* ___feedDescription_22;
	// System.String Facebook.Unity.Example.DialogShare::feedImage
	String_t* ___feedImage_23;
	// System.String Facebook.Unity.Example.DialogShare::feedMediaSource
	String_t* ___feedMediaSource_24;

public:
	inline static int32_t get_offset_of_shareLink_14() { return static_cast<int32_t>(offsetof(DialogShare_t1787441532, ___shareLink_14)); }
	inline String_t* get_shareLink_14() const { return ___shareLink_14; }
	inline String_t** get_address_of_shareLink_14() { return &___shareLink_14; }
	inline void set_shareLink_14(String_t* value)
	{
		___shareLink_14 = value;
		Il2CppCodeGenWriteBarrier((&___shareLink_14), value);
	}

	inline static int32_t get_offset_of_shareTitle_15() { return static_cast<int32_t>(offsetof(DialogShare_t1787441532, ___shareTitle_15)); }
	inline String_t* get_shareTitle_15() const { return ___shareTitle_15; }
	inline String_t** get_address_of_shareTitle_15() { return &___shareTitle_15; }
	inline void set_shareTitle_15(String_t* value)
	{
		___shareTitle_15 = value;
		Il2CppCodeGenWriteBarrier((&___shareTitle_15), value);
	}

	inline static int32_t get_offset_of_shareDescription_16() { return static_cast<int32_t>(offsetof(DialogShare_t1787441532, ___shareDescription_16)); }
	inline String_t* get_shareDescription_16() const { return ___shareDescription_16; }
	inline String_t** get_address_of_shareDescription_16() { return &___shareDescription_16; }
	inline void set_shareDescription_16(String_t* value)
	{
		___shareDescription_16 = value;
		Il2CppCodeGenWriteBarrier((&___shareDescription_16), value);
	}

	inline static int32_t get_offset_of_shareImage_17() { return static_cast<int32_t>(offsetof(DialogShare_t1787441532, ___shareImage_17)); }
	inline String_t* get_shareImage_17() const { return ___shareImage_17; }
	inline String_t** get_address_of_shareImage_17() { return &___shareImage_17; }
	inline void set_shareImage_17(String_t* value)
	{
		___shareImage_17 = value;
		Il2CppCodeGenWriteBarrier((&___shareImage_17), value);
	}

	inline static int32_t get_offset_of_feedTo_18() { return static_cast<int32_t>(offsetof(DialogShare_t1787441532, ___feedTo_18)); }
	inline String_t* get_feedTo_18() const { return ___feedTo_18; }
	inline String_t** get_address_of_feedTo_18() { return &___feedTo_18; }
	inline void set_feedTo_18(String_t* value)
	{
		___feedTo_18 = value;
		Il2CppCodeGenWriteBarrier((&___feedTo_18), value);
	}

	inline static int32_t get_offset_of_feedLink_19() { return static_cast<int32_t>(offsetof(DialogShare_t1787441532, ___feedLink_19)); }
	inline String_t* get_feedLink_19() const { return ___feedLink_19; }
	inline String_t** get_address_of_feedLink_19() { return &___feedLink_19; }
	inline void set_feedLink_19(String_t* value)
	{
		___feedLink_19 = value;
		Il2CppCodeGenWriteBarrier((&___feedLink_19), value);
	}

	inline static int32_t get_offset_of_feedTitle_20() { return static_cast<int32_t>(offsetof(DialogShare_t1787441532, ___feedTitle_20)); }
	inline String_t* get_feedTitle_20() const { return ___feedTitle_20; }
	inline String_t** get_address_of_feedTitle_20() { return &___feedTitle_20; }
	inline void set_feedTitle_20(String_t* value)
	{
		___feedTitle_20 = value;
		Il2CppCodeGenWriteBarrier((&___feedTitle_20), value);
	}

	inline static int32_t get_offset_of_feedCaption_21() { return static_cast<int32_t>(offsetof(DialogShare_t1787441532, ___feedCaption_21)); }
	inline String_t* get_feedCaption_21() const { return ___feedCaption_21; }
	inline String_t** get_address_of_feedCaption_21() { return &___feedCaption_21; }
	inline void set_feedCaption_21(String_t* value)
	{
		___feedCaption_21 = value;
		Il2CppCodeGenWriteBarrier((&___feedCaption_21), value);
	}

	inline static int32_t get_offset_of_feedDescription_22() { return static_cast<int32_t>(offsetof(DialogShare_t1787441532, ___feedDescription_22)); }
	inline String_t* get_feedDescription_22() const { return ___feedDescription_22; }
	inline String_t** get_address_of_feedDescription_22() { return &___feedDescription_22; }
	inline void set_feedDescription_22(String_t* value)
	{
		___feedDescription_22 = value;
		Il2CppCodeGenWriteBarrier((&___feedDescription_22), value);
	}

	inline static int32_t get_offset_of_feedImage_23() { return static_cast<int32_t>(offsetof(DialogShare_t1787441532, ___feedImage_23)); }
	inline String_t* get_feedImage_23() const { return ___feedImage_23; }
	inline String_t** get_address_of_feedImage_23() { return &___feedImage_23; }
	inline void set_feedImage_23(String_t* value)
	{
		___feedImage_23 = value;
		Il2CppCodeGenWriteBarrier((&___feedImage_23), value);
	}

	inline static int32_t get_offset_of_feedMediaSource_24() { return static_cast<int32_t>(offsetof(DialogShare_t1787441532, ___feedMediaSource_24)); }
	inline String_t* get_feedMediaSource_24() const { return ___feedMediaSource_24; }
	inline String_t** get_address_of_feedMediaSource_24() { return &___feedMediaSource_24; }
	inline void set_feedMediaSource_24(String_t* value)
	{
		___feedMediaSource_24 = value;
		Il2CppCodeGenWriteBarrier((&___feedMediaSource_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIALOGSHARE_T1787441532_H
#ifndef APPINVITES_T1932089749_H
#define APPINVITES_T1932089749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.Example.AppInvites
struct  AppInvites_t1932089749  : public MenuBase_t2236896407
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPINVITES_T1932089749_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2800 = { sizeof (AppInvites_t1932089749), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2801 = { sizeof (AppLinks_t630454019), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2802 = { sizeof (AppRequests_t840515047), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2802[10] = 
{
	AppRequests_t840515047::get_offset_of_requestMessage_14(),
	AppRequests_t840515047::get_offset_of_requestTo_15(),
	AppRequests_t840515047::get_offset_of_requestFilter_16(),
	AppRequests_t840515047::get_offset_of_requestExcludes_17(),
	AppRequests_t840515047::get_offset_of_requestMax_18(),
	AppRequests_t840515047::get_offset_of_requestData_19(),
	AppRequests_t840515047::get_offset_of_requestTitle_20(),
	AppRequests_t840515047::get_offset_of_requestObjectID_21(),
	AppRequests_t840515047::get_offset_of_selectedAction_22(),
	AppRequests_t840515047::get_offset_of_actionTypeStrings_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2803 = { sizeof (DialogShare_t1787441532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2803[11] = 
{
	DialogShare_t1787441532::get_offset_of_shareLink_14(),
	DialogShare_t1787441532::get_offset_of_shareTitle_15(),
	DialogShare_t1787441532::get_offset_of_shareDescription_16(),
	DialogShare_t1787441532::get_offset_of_shareImage_17(),
	DialogShare_t1787441532::get_offset_of_feedTo_18(),
	DialogShare_t1787441532::get_offset_of_feedLink_19(),
	DialogShare_t1787441532::get_offset_of_feedTitle_20(),
	DialogShare_t1787441532::get_offset_of_feedCaption_21(),
	DialogShare_t1787441532::get_offset_of_feedDescription_22(),
	DialogShare_t1787441532::get_offset_of_feedImage_23(),
	DialogShare_t1787441532::get_offset_of_feedMediaSource_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2804 = { sizeof (GameGroups_t1652901023), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2804[4] = 
{
	GameGroups_t1652901023::get_offset_of_gamerGroupName_14(),
	GameGroups_t1652901023::get_offset_of_gamerGroupDesc_15(),
	GameGroups_t1652901023::get_offset_of_gamerGroupPrivacy_16(),
	GameGroups_t1652901023::get_offset_of_gamerGroupCurrentGroup_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2805 = { sizeof (GraphRequest_t2775374912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2805[2] = 
{
	GraphRequest_t2775374912::get_offset_of_apiQuery_14(),
	GraphRequest_t2775374912::get_offset_of_profilePic_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2806 = { sizeof (U3CTakeScreenshotU3Ec__Iterator0_t2900451216), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2806[9] = 
{
	U3CTakeScreenshotU3Ec__Iterator0_t2900451216::get_offset_of_U3CwidthU3E__0_0(),
	U3CTakeScreenshotU3Ec__Iterator0_t2900451216::get_offset_of_U3CheightU3E__0_1(),
	U3CTakeScreenshotU3Ec__Iterator0_t2900451216::get_offset_of_U3CtexU3E__0_2(),
	U3CTakeScreenshotU3Ec__Iterator0_t2900451216::get_offset_of_U3CscreenshotU3E__0_3(),
	U3CTakeScreenshotU3Ec__Iterator0_t2900451216::get_offset_of_U3CwwwFormU3E__0_4(),
	U3CTakeScreenshotU3Ec__Iterator0_t2900451216::get_offset_of_U24this_5(),
	U3CTakeScreenshotU3Ec__Iterator0_t2900451216::get_offset_of_U24current_6(),
	U3CTakeScreenshotU3Ec__Iterator0_t2900451216::get_offset_of_U24disposing_7(),
	U3CTakeScreenshotU3Ec__Iterator0_t2900451216::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2807 = { sizeof (MainMenu_t3848720420), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2808 = { sizeof (Pay_t987189821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2808[1] = 
{
	Pay_t987189821::get_offset_of_payProduct_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2809 = { sizeof (jetplane_t3634862322), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2810 = { sizeof (LoginModule_t1705691831), -1, sizeof(LoginModule_t1705691831_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2810[22] = 
{
	LoginModule_t1705691831::get_offset_of_TwtAuthToken_2(),
	LoginModule_t1705691831::get_offset_of_TwtAuthTokenSecret_3(),
	LoginModule_t1705691831::get_offset_of_RcvData_4(),
	LoginModule_t1705691831::get_offset_of_infourl_5(),
	LoginModule_t1705691831_StaticFields::get_offset_of_UserName_6(),
	LoginModule_t1705691831_StaticFields::get_offset_of_UserEmail_7(),
	LoginModule_t1705691831_StaticFields::get_offset_of_photo_url_8(),
	LoginModule_t1705691831_StaticFields::get_offset_of_photourlstring_9(),
	LoginModule_t1705691831_StaticFields::get_offset_of_UserID_10(),
	LoginModule_t1705691831::get_offset_of_LoginPanel_11(),
	LoginModule_t1705691831::get_offset_of_RegisterPanel_12(),
	LoginModule_t1705691831::get_offset_of_PopupPanel_13(),
	LoginModule_t1705691831::get_offset_of_LoginEmail_14(),
	LoginModule_t1705691831::get_offset_of_LoginPassword_15(),
	LoginModule_t1705691831::get_offset_of_RegistEmail_16(),
	LoginModule_t1705691831::get_offset_of_RegistPassword_17(),
	LoginModule_t1705691831::get_offset_of_RegistPasswordCheck_18(),
	LoginModule_t1705691831::get_offset_of_PopupMsg_19(),
	LoginModule_t1705691831_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_20(),
	LoginModule_t1705691831_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_21(),
	LoginModule_t1705691831_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_22(),
	LoginModule_t1705691831_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2811 = { sizeof (U3CStartTwitterLoginU3Ec__AnonStorey1_t698479547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2811[1] = 
{
	U3CStartTwitterLoginU3Ec__AnonStorey1_t698479547::get_offset_of_auth_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2812 = { sizeof (U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2812[6] = 
{
	U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697::get_offset_of_ScreeNname_0(),
	U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697::get_offset_of_U3CwwwU3E__0_1(),
	U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697::get_offset_of_U24this_2(),
	U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697::get_offset_of_U24current_3(),
	U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697::get_offset_of_U24disposing_4(),
	U3C_GetInfosFromAPIU3Ec__Iterator0_t1740305697::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2813 = { sizeof (MenuController_t1834083939), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2813[2] = 
{
	MenuController_t1834083939::get_offset_of_UserName_2(),
	MenuController_t1834083939::get_offset_of_ProfileImage_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2814 = { sizeof (U3C_GetImageFromUrlU3Ec__Iterator0_t295399921), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2814[6] = 
{
	U3C_GetImageFromUrlU3Ec__Iterator0_t295399921::get_offset_of_url_0(),
	U3C_GetImageFromUrlU3Ec__Iterator0_t295399921::get_offset_of_U3CimagewwwU3E__0_1(),
	U3C_GetImageFromUrlU3Ec__Iterator0_t295399921::get_offset_of_U24this_2(),
	U3C_GetImageFromUrlU3Ec__Iterator0_t295399921::get_offset_of_U24current_3(),
	U3C_GetImageFromUrlU3Ec__Iterator0_t295399921::get_offset_of_U24disposing_4(),
	U3C_GetImageFromUrlU3Ec__Iterator0_t295399921::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2815 = { sizeof (Mover_t178000308), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2815[1] = 
{
	Mover_t178000308::get_offset_of_speed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2816 = { sizeof (Boundary_t2747317414), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2816[4] = 
{
	Boundary_t2747317414::get_offset_of_xMin_0(),
	Boundary_t2747317414::get_offset_of_xMax_1(),
	Boundary_t2747317414::get_offset_of_zMin_2(),
	Boundary_t2747317414::get_offset_of_zMax_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2817 = { sizeof (PlayerController_t3361431126), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2817[7] = 
{
	PlayerController_t3361431126::get_offset_of_speed_2(),
	PlayerController_t3361431126::get_offset_of_tilt_3(),
	PlayerController_t3361431126::get_offset_of_firerate_4(),
	PlayerController_t3361431126::get_offset_of_nextFire_5(),
	PlayerController_t3361431126::get_offset_of_boundary_6(),
	PlayerController_t3361431126::get_offset_of_Shot_7(),
	PlayerController_t3361431126::get_offset_of_ShotSpawn_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2818 = { sizeof (Readme_t848846345), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2818[4] = 
{
	Readme_t848846345::get_offset_of_icon_2(),
	Readme_t848846345::get_offset_of_title_3(),
	Readme_t848846345::get_offset_of_sections_4(),
	Readme_t848846345::get_offset_of_loadedLayout_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2819 = { sizeof (Section_t1030319729), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2819[4] = 
{
	Section_t1030319729::get_offset_of_heading_0(),
	Section_t1030319729::get_offset_of_text_1(),
	Section_t1030319729::get_offset_of_linkText_2(),
	Section_t1030319729::get_offset_of_url_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2820 = { sizeof (TwitterDemo_t1484584867), -1, sizeof(TwitterDemo_t1484584867_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2820[5] = 
{
	TwitterDemo_t1484584867_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_2(),
	TwitterDemo_t1484584867_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_3(),
	TwitterDemo_t1484584867_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_4(),
	TwitterDemo_t1484584867_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_5(),
	TwitterDemo_t1484584867_StaticFields::get_offset_of_U3CU3Ef__amU24cache4_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2821 = { sizeof (IOSTwitterImpl_t1106630612), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2822 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2823 = { sizeof (ApiError_t641243796), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2823[2] = 
{
	ApiError_t641243796::get_offset_of_U3CcodeU3Ek__BackingField_0(),
	ApiError_t641243796::get_offset_of_U3CmessageU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2824 = { sizeof (AuthToken_t1276949169), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2824[2] = 
{
	AuthToken_t1276949169::get_offset_of_U3CtokenU3Ek__BackingField_0(),
	AuthToken_t1276949169::get_offset_of_U3CsecretU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2825 = { sizeof (TwitterSession_t3912102621), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2825[3] = 
{
	TwitterSession_t3912102621::get_offset_of_U3CidU3Ek__BackingField_0(),
	TwitterSession_t3912102621::get_offset_of_U3CuserNameU3Ek__BackingField_1(),
	TwitterSession_t3912102621::get_offset_of_U3CauthTokenU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2826 = { sizeof (Json_t457078173), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2827 = { sizeof (Parser_t3890547681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2827[2] = 
{
	0,
	Parser_t3890547681::get_offset_of_json_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2828 = { sizeof (TOKEN_t2667056928)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2828[13] = 
{
	TOKEN_t2667056928::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2829 = { sizeof (Serializer_t3830363813), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2829[1] = 
{
	Serializer_t3830363813::get_offset_of_builder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2830 = { sizeof (Twitter_t2327286307), -1, sizeof(Twitter_t2327286307_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2830[2] = 
{
	Twitter_t2327286307_StaticFields::get_offset_of_twitter_2(),
	Twitter_t2327286307_StaticFields::get_offset_of_twitterGameObject_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2831 = { sizeof (TwitterComponent_t3631078805), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2831[7] = 
{
	TwitterComponent_t3631078805::get_offset_of_U3CloginSuccessActionU3Ek__BackingField_2(),
	TwitterComponent_t3631078805::get_offset_of_U3CloginFailureActionU3Ek__BackingField_3(),
	TwitterComponent_t3631078805::get_offset_of_U3CemailSuccessActionU3Ek__BackingField_4(),
	TwitterComponent_t3631078805::get_offset_of_U3CemailFailureActionU3Ek__BackingField_5(),
	TwitterComponent_t3631078805::get_offset_of_U3CtweetSuccessActionU3Ek__BackingField_6(),
	TwitterComponent_t3631078805::get_offset_of_U3CtweetFailureActionU3Ek__BackingField_7(),
	TwitterComponent_t3631078805::get_offset_of_U3CtweetCancelActionU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2832 = { sizeof (TwitterInit_t67145824), -1, sizeof(TwitterInit_t67145824_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2832[1] = 
{
	TwitterInit_t67145824_StaticFields::get_offset_of_instance_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2833 = { sizeof (TwitterSettings_t3563184421), -1, sizeof(TwitterSettings_t3563184421_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2833[10] = 
{
	0,
	0,
	0,
	0,
	0,
	TwitterSettings_t3563184421_StaticFields::get_offset_of_instance_7(),
	TwitterSettings_t3563184421_StaticFields::get_offset_of_onChangeCallbacks_8(),
	TwitterSettings_t3563184421::get_offset_of_consumerKey_9(),
	TwitterSettings_t3563184421::get_offset_of_consumerSecret_10(),
	TwitterSettings_t3563184421_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2834 = { sizeof (OnChangeCallback_t3115138928), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2835 = { sizeof (Utils_t3709855574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2835[1] = 
{
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
