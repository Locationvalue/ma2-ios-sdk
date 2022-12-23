#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef NAUTILUSCORESDK_SWIFT_H
#define NAUTILUSCORESDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import NautilusContainerSDK;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusCoreSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)



SWIFT_CLASS("_TtC15NautilusCoreSDK17NautilusAPIClient")
@interface NautilusAPIClient : NSObject
+ (nonnull instancetype)instantiate SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)cancel;
@end

@class NSString;
@class NautilusAppConfig;
@protocol NautilusAppDelegate;

SWIFT_CLASS("_TtC15NautilusCoreSDK11NautilusApp")
@interface NautilusApp : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (NautilusApp * _Nonnull)app SWIFT_WARN_UNUSED_RESULT;
+ (NautilusApp * _Nonnull)appNamed:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
+ (void)initialzieWithApiKey:(NSString * _Nonnull)apiKey config:(NautilusAppConfig * _Nonnull)config;
+ (void)initializeWithName:(NSString * _Nonnull)name apiKey:(NSString * _Nonnull)apiKey config:(NautilusAppConfig * _Nonnull)config;
+ (void)initializeWithApiKey:(NSString * _Nonnull)apiKey config:(NautilusAppConfig * _Nonnull)config delegate:(id <NautilusAppDelegate> _Nullable)delegate;
+ (void)initializeWithName:(NSString * _Nonnull)name apiKey:(NSString * _Nonnull)apiKey config:(NautilusAppConfig * _Nonnull)config delegate:(id <NautilusAppDelegate> _Nullable)delegate;
@end


@interface NautilusApp (SWIFT_EXTENSION(NautilusCoreSDK))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull sdkVersionString;)
+ (NSString * _Nonnull)sdkVersionString SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull sdkBuildVersionString;)
+ (NSString * _Nonnull)sdkBuildVersionString SWIFT_WARN_UNUSED_RESULT;
@end

enum NautilusDeploymentEnvironment : NSInteger;

SWIFT_CLASS("_TtC15NautilusCoreSDK17NautilusAppConfig")
@interface NautilusAppConfig : NSObject
@property (nonatomic, readonly) enum NautilusDeploymentEnvironment environment;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15NautilusCoreSDK24NautilusAppConfigBuilder")
@interface NautilusAppConfigBuilder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (NautilusAppConfig * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
- (void)setEnvironment:(enum NautilusDeploymentEnvironment)environment;
@end

enum NautilusAppInitializationError : NSInteger;

/// Nautilusで発生するイベントを受け取るデリゲート
SWIFT_PROTOCOL("_TtP15NautilusCoreSDK19NautilusAppDelegate_")
@protocol NautilusAppDelegate
/// <code>NautilusApp</code>のインスタンスの初期化に成功
/// \param app 初期化された<code>NautilusApp</code>のインスタンス
///
- (void)onSuccessNautilusAppInitialization:(NautilusApp * _Nonnull)app;
/// <code>NautilusApp</code>のインスタンスの初期化に失敗
/// \param app 初期化に失敗した<code>NautilusApp</code>のインスタンス
///
/// \param error <code>NautilusAppInitializationError</code>で定義されたエラー事由
///
- (void)onFailureNautilusAppInitialization:(NautilusApp * _Nonnull)app error:(enum NautilusAppInitializationError)error;
@end

/// 初期化失敗事由の列挙型
typedef SWIFT_ENUM(NSInteger, NautilusAppInitializationError, open) {
/// ヘルスチェックに失敗
  NautilusAppInitializationErrorCryptoMalfunction = 0,
/// SDKの初期化に失敗
  NautilusAppInitializationErrorFeatureUnavailable = 1,
};


/// カメラの使用権限をSDKヘ提供するためのプロトコル
SWIFT_PROTOCOL("_TtP15NautilusCoreSDK32NautilusCameraPermissionProvider_")
@protocol NautilusCameraPermissionProvider
/// 拒否された場合に画面を閉じるか否か
///
/// returns:
///
/// <ul>
///   <li>
///     <code>true</code>: コードリーダー画面を閉じる
///   </li>
///   <li>
///     <code>false</code>: コードリーダー画面を閉じない
///   </li>
/// </ul>
@property (nonatomic, readonly) BOOL shouldCloseScreenWhenDenied;
/// カメラ使用の許諾を要求する
/// \param completion カメラの使用許諾の結果を受け取る処理. 許可された場合は、<code>true</code> を渡す. それ以外の場合は、<code>false</code>を渡す.
///
- (void)requestCameraPermissionWithCompletion:(void (^ _Nonnull)(BOOL))completion;
@end

/// MA 2.0 のAPIの接続先
/// 接続先は、ホスト名とパス内の指定で、切り替わる
/// つまり、2つの定義で接続先が指定される
typedef SWIFT_ENUM(NSInteger, NautilusDeploymentEnvironment, open) {
/// 開発環境 + ステージング向きパス
  NautilusDeploymentEnvironmentSandboxStaging = 0,
/// 開発環境 + 本番向きパス
  NautilusDeploymentEnvironmentSandboxProduction = 1,
/// 本番環境 + ステージング向きパス
  NautilusDeploymentEnvironmentPublicStaging = 2,
/// 本番環境 + 本番向きパス
  NautilusDeploymentEnvironmentPublicProduction = 3,
};

enum NautilusFeatureStatus : NSInteger;

SWIFT_PROTOCOL("_TtP15NautilusCoreSDK15NautilusFeature_")
@protocol NautilusFeature <NautilusComponent>
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
/// SDKの機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
@end

/// SDKの機能の利用可否ステータス
typedef SWIFT_ENUM(NSInteger, NautilusFeatureStatus, open) {
/// 初期化されていない
  NautilusFeatureStatusUninitialized = 0,
/// 利用不可
  NautilusFeatureStatusUnavailable = 1,
/// 利用可能
  NautilusFeatureStatusAvailable = 2,
/// 制限付きで利用可能
  NautilusFeatureStatusRestricted = 3,
};

/// Nautilusの初期化に失敗した理由
typedef SWIFT_ENUM(NSInteger, NautilusInitializationFailureReason, open) {
  NautilusInitializationFailureReasonCancelled = -10,
  NautilusInitializationFailureReasonUnknown = -1,
/// 端末の問題により、通信が行えない
  NautilusInitializationFailureReasonNoConnection = 0,
/// APIキー不正など、設定値が不正なため、サーバーへの正常なレスポンスが取得できない
  NautilusInitializationFailureReasonInvalidSettings = 1,
/// PIDの発番処理に失敗
  NautilusInitializationFailureReasonFailToIssuePID = 2,
/// サーバー側で処理に失敗
  NautilusInitializationFailureReasonFailOnServer = 3,
};
static NSString * _Nonnull const NautilusInitializationFailureReasonDomain = @"NautilusCoreSDK.NautilusInitializationFailureReason";


/// SDKで扱うための位置情報のデータ
SWIFT_CLASS("_TtC15NautilusCoreSDK16NautilusLocation")
@interface NautilusLocation : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 位置情報をSDKヘ提供するためのプロトコル
SWIFT_PROTOCOL("_TtP15NautilusCoreSDK24NautilusLocationProvider_")
@protocol NautilusLocationProvider
/// 位置情報を取得できるかどうか
/// <ul>
///   <li>
///     <code>true</code>: 位置情報取得の許諾がある
///   </li>
///   <li>
///     <code>false</code>: 位置情報取得の許諾がない
///     <ul>
///       <li>
///         取得可能かどうかがまだ決定していない
///       </li>
///       <li>
///         ユーザーが位置情報取得を拒否した
///       </li>
///       <li>
///         位置情報を取得できない状態を表す
///       </li>
///     </ul>
///   </li>
/// </ul>
@property (nonatomic, readonly) BOOL canTrackUserLocation;
/// 最後に取得したユーザーの位置情報
/// 位置情報取得の許諾がある場合でも、位置情報が未取得の場合は <code>nil</code> にする
/// 位置情報取得の許可がない場合は、必ず <code>nil</code> にする
@property (nonatomic, readonly, strong) NautilusLocation * _Nullable latestUserLocation;
/// 位置情報の更新を要求する
/// \param completion 位置情報が更新された後に呼ばれる処理. 位置情報が取得できた場合は、取得できた位置情報を渡す. 位置情報の取得に失敗した場合（許諾がない場合も含む）は、nil<code>を渡す.</code>
///
- (void)requestUpdateUserLocationWithCompletion:(void (^ _Nonnull)(NautilusLocation * _Nullable))completion;
/// 位置情報取得の許諾を要求する
/// \param completion 位置情報取得の許諾の結果を受け取る処理. 位置情報取得が許可された場合は、<code>true</code> を渡す. それ以外の場合は、<code>false</code>を渡す.
///
- (void)requestLocationPermissionWithCompletion:(void (^ _Nonnull)(BOOL))completion;
@end

/// CIDを利用したPUSHサービスへの端末登録が失敗した理由
typedef SWIFT_ENUM(NSInteger, NautilusPushDeviceRegistraionFailureReason, open) {
/// 処理成功
  NautilusPushDeviceRegistraionFailureReasonNone = 0,
/// 端末はすでにPush Serviceに登録されている
  NautilusPushDeviceRegistraionFailureReasonAlreadyRegistered = 1,
/// CIDが不正（CIDが未発行）
  NautilusPushDeviceRegistraionFailureReasonInvalidCID = 2,
/// 通信に失敗（サーバーでの処理失敗も含む）
  NautilusPushDeviceRegistraionFailureReasonNetworkError = 3,
/// SDKインスタンスが不正
  NautilusPushDeviceRegistraionFailureReasonInvalidInstance = 4,
};
static NSString * _Nonnull const NautilusPushDeviceRegistraionFailureReasonDomain = @"NautilusCoreSDK.NautilusPushDeviceRegistraionFailureReason";

/// SDKステータスエラー時に表示される文言の列挙型
typedef SWIFT_ENUM(NSInteger, NautilusStatusErrorKey, open) {
/// SDKの状態が、 uninitialized / unavailable で利用できないときに表示するエラーのタイトルの文言
  NautilusStatusErrorKeyUninitializedErrorTitle = 0,
/// SDKの状態が、 uninitialized / unavailable で利用できないときに表示するエラーのメッセージの文言
  NautilusStatusErrorKeyUninitializedErrorMessage = 1,
/// SDKの状態が、 restricted で利用できないときに表示するエラーのタイトルの文言
  NautilusStatusErrorKeyUnavailableErrorTitle = 2,
/// SDKの状態が、 restricted で利用できないときに表示するエラーのメッセージの文言
  NautilusStatusErrorKeyUnavailableErrorMessage = 3,
};


/// SDKステータスエラー時に表示される文言を扱うためのクラス
SWIFT_CLASS("_TtC15NautilusCoreSDK26NautilusStatusErrorStrings")
@interface NautilusStatusErrorStrings : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15NautilusCoreSDK15NetworkListener")
@interface NetworkListener : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef NAUTILUSCORESDK_SWIFT_H
#define NAUTILUSCORESDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import NautilusContainerSDK;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusCoreSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)



SWIFT_CLASS("_TtC15NautilusCoreSDK17NautilusAPIClient")
@interface NautilusAPIClient : NSObject
+ (nonnull instancetype)instantiate SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)cancel;
@end

@class NSString;
@class NautilusAppConfig;
@protocol NautilusAppDelegate;

SWIFT_CLASS("_TtC15NautilusCoreSDK11NautilusApp")
@interface NautilusApp : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (NautilusApp * _Nonnull)app SWIFT_WARN_UNUSED_RESULT;
+ (NautilusApp * _Nonnull)appNamed:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
+ (void)initialzieWithApiKey:(NSString * _Nonnull)apiKey config:(NautilusAppConfig * _Nonnull)config;
+ (void)initializeWithName:(NSString * _Nonnull)name apiKey:(NSString * _Nonnull)apiKey config:(NautilusAppConfig * _Nonnull)config;
+ (void)initializeWithApiKey:(NSString * _Nonnull)apiKey config:(NautilusAppConfig * _Nonnull)config delegate:(id <NautilusAppDelegate> _Nullable)delegate;
+ (void)initializeWithName:(NSString * _Nonnull)name apiKey:(NSString * _Nonnull)apiKey config:(NautilusAppConfig * _Nonnull)config delegate:(id <NautilusAppDelegate> _Nullable)delegate;
@end


@interface NautilusApp (SWIFT_EXTENSION(NautilusCoreSDK))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull sdkVersionString;)
+ (NSString * _Nonnull)sdkVersionString SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull sdkBuildVersionString;)
+ (NSString * _Nonnull)sdkBuildVersionString SWIFT_WARN_UNUSED_RESULT;
@end

enum NautilusDeploymentEnvironment : NSInteger;

SWIFT_CLASS("_TtC15NautilusCoreSDK17NautilusAppConfig")
@interface NautilusAppConfig : NSObject
@property (nonatomic, readonly) enum NautilusDeploymentEnvironment environment;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC15NautilusCoreSDK24NautilusAppConfigBuilder")
@interface NautilusAppConfigBuilder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (NautilusAppConfig * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
- (void)setEnvironment:(enum NautilusDeploymentEnvironment)environment;
@end

enum NautilusAppInitializationError : NSInteger;

/// Nautilusで発生するイベントを受け取るデリゲート
SWIFT_PROTOCOL("_TtP15NautilusCoreSDK19NautilusAppDelegate_")
@protocol NautilusAppDelegate
/// <code>NautilusApp</code>のインスタンスの初期化に成功
/// \param app 初期化された<code>NautilusApp</code>のインスタンス
///
- (void)onSuccessNautilusAppInitialization:(NautilusApp * _Nonnull)app;
/// <code>NautilusApp</code>のインスタンスの初期化に失敗
/// \param app 初期化に失敗した<code>NautilusApp</code>のインスタンス
///
/// \param error <code>NautilusAppInitializationError</code>で定義されたエラー事由
///
- (void)onFailureNautilusAppInitialization:(NautilusApp * _Nonnull)app error:(enum NautilusAppInitializationError)error;
@end

/// 初期化失敗事由の列挙型
typedef SWIFT_ENUM(NSInteger, NautilusAppInitializationError, open) {
/// ヘルスチェックに失敗
  NautilusAppInitializationErrorCryptoMalfunction = 0,
/// SDKの初期化に失敗
  NautilusAppInitializationErrorFeatureUnavailable = 1,
};


/// カメラの使用権限をSDKヘ提供するためのプロトコル
SWIFT_PROTOCOL("_TtP15NautilusCoreSDK32NautilusCameraPermissionProvider_")
@protocol NautilusCameraPermissionProvider
/// 拒否された場合に画面を閉じるか否か
///
/// returns:
///
/// <ul>
///   <li>
///     <code>true</code>: コードリーダー画面を閉じる
///   </li>
///   <li>
///     <code>false</code>: コードリーダー画面を閉じない
///   </li>
/// </ul>
@property (nonatomic, readonly) BOOL shouldCloseScreenWhenDenied;
/// カメラ使用の許諾を要求する
/// \param completion カメラの使用許諾の結果を受け取る処理. 許可された場合は、<code>true</code> を渡す. それ以外の場合は、<code>false</code>を渡す.
///
- (void)requestCameraPermissionWithCompletion:(void (^ _Nonnull)(BOOL))completion;
@end

/// MA 2.0 のAPIの接続先
/// 接続先は、ホスト名とパス内の指定で、切り替わる
/// つまり、2つの定義で接続先が指定される
typedef SWIFT_ENUM(NSInteger, NautilusDeploymentEnvironment, open) {
/// 開発環境 + ステージング向きパス
  NautilusDeploymentEnvironmentSandboxStaging = 0,
/// 開発環境 + 本番向きパス
  NautilusDeploymentEnvironmentSandboxProduction = 1,
/// 本番環境 + ステージング向きパス
  NautilusDeploymentEnvironmentPublicStaging = 2,
/// 本番環境 + 本番向きパス
  NautilusDeploymentEnvironmentPublicProduction = 3,
};

enum NautilusFeatureStatus : NSInteger;

SWIFT_PROTOCOL("_TtP15NautilusCoreSDK15NautilusFeature_")
@protocol NautilusFeature <NautilusComponent>
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
/// SDKの機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
@end

/// SDKの機能の利用可否ステータス
typedef SWIFT_ENUM(NSInteger, NautilusFeatureStatus, open) {
/// 初期化されていない
  NautilusFeatureStatusUninitialized = 0,
/// 利用不可
  NautilusFeatureStatusUnavailable = 1,
/// 利用可能
  NautilusFeatureStatusAvailable = 2,
/// 制限付きで利用可能
  NautilusFeatureStatusRestricted = 3,
};

/// Nautilusの初期化に失敗した理由
typedef SWIFT_ENUM(NSInteger, NautilusInitializationFailureReason, open) {
  NautilusInitializationFailureReasonCancelled = -10,
  NautilusInitializationFailureReasonUnknown = -1,
/// 端末の問題により、通信が行えない
  NautilusInitializationFailureReasonNoConnection = 0,
/// APIキー不正など、設定値が不正なため、サーバーへの正常なレスポンスが取得できない
  NautilusInitializationFailureReasonInvalidSettings = 1,
/// PIDの発番処理に失敗
  NautilusInitializationFailureReasonFailToIssuePID = 2,
/// サーバー側で処理に失敗
  NautilusInitializationFailureReasonFailOnServer = 3,
};
static NSString * _Nonnull const NautilusInitializationFailureReasonDomain = @"NautilusCoreSDK.NautilusInitializationFailureReason";


/// SDKで扱うための位置情報のデータ
SWIFT_CLASS("_TtC15NautilusCoreSDK16NautilusLocation")
@interface NautilusLocation : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 位置情報をSDKヘ提供するためのプロトコル
SWIFT_PROTOCOL("_TtP15NautilusCoreSDK24NautilusLocationProvider_")
@protocol NautilusLocationProvider
/// 位置情報を取得できるかどうか
/// <ul>
///   <li>
///     <code>true</code>: 位置情報取得の許諾がある
///   </li>
///   <li>
///     <code>false</code>: 位置情報取得の許諾がない
///     <ul>
///       <li>
///         取得可能かどうかがまだ決定していない
///       </li>
///       <li>
///         ユーザーが位置情報取得を拒否した
///       </li>
///       <li>
///         位置情報を取得できない状態を表す
///       </li>
///     </ul>
///   </li>
/// </ul>
@property (nonatomic, readonly) BOOL canTrackUserLocation;
/// 最後に取得したユーザーの位置情報
/// 位置情報取得の許諾がある場合でも、位置情報が未取得の場合は <code>nil</code> にする
/// 位置情報取得の許可がない場合は、必ず <code>nil</code> にする
@property (nonatomic, readonly, strong) NautilusLocation * _Nullable latestUserLocation;
/// 位置情報の更新を要求する
/// \param completion 位置情報が更新された後に呼ばれる処理. 位置情報が取得できた場合は、取得できた位置情報を渡す. 位置情報の取得に失敗した場合（許諾がない場合も含む）は、nil<code>を渡す.</code>
///
- (void)requestUpdateUserLocationWithCompletion:(void (^ _Nonnull)(NautilusLocation * _Nullable))completion;
/// 位置情報取得の許諾を要求する
/// \param completion 位置情報取得の許諾の結果を受け取る処理. 位置情報取得が許可された場合は、<code>true</code> を渡す. それ以外の場合は、<code>false</code>を渡す.
///
- (void)requestLocationPermissionWithCompletion:(void (^ _Nonnull)(BOOL))completion;
@end

/// CIDを利用したPUSHサービスへの端末登録が失敗した理由
typedef SWIFT_ENUM(NSInteger, NautilusPushDeviceRegistraionFailureReason, open) {
/// 処理成功
  NautilusPushDeviceRegistraionFailureReasonNone = 0,
/// 端末はすでにPush Serviceに登録されている
  NautilusPushDeviceRegistraionFailureReasonAlreadyRegistered = 1,
/// CIDが不正（CIDが未発行）
  NautilusPushDeviceRegistraionFailureReasonInvalidCID = 2,
/// 通信に失敗（サーバーでの処理失敗も含む）
  NautilusPushDeviceRegistraionFailureReasonNetworkError = 3,
/// SDKインスタンスが不正
  NautilusPushDeviceRegistraionFailureReasonInvalidInstance = 4,
};
static NSString * _Nonnull const NautilusPushDeviceRegistraionFailureReasonDomain = @"NautilusCoreSDK.NautilusPushDeviceRegistraionFailureReason";

/// SDKステータスエラー時に表示される文言の列挙型
typedef SWIFT_ENUM(NSInteger, NautilusStatusErrorKey, open) {
/// SDKの状態が、 uninitialized / unavailable で利用できないときに表示するエラーのタイトルの文言
  NautilusStatusErrorKeyUninitializedErrorTitle = 0,
/// SDKの状態が、 uninitialized / unavailable で利用できないときに表示するエラーのメッセージの文言
  NautilusStatusErrorKeyUninitializedErrorMessage = 1,
/// SDKの状態が、 restricted で利用できないときに表示するエラーのタイトルの文言
  NautilusStatusErrorKeyUnavailableErrorTitle = 2,
/// SDKの状態が、 restricted で利用できないときに表示するエラーのメッセージの文言
  NautilusStatusErrorKeyUnavailableErrorMessage = 3,
};


/// SDKステータスエラー時に表示される文言を扱うためのクラス
SWIFT_CLASS("_TtC15NautilusCoreSDK26NautilusStatusErrorStrings")
@interface NautilusStatusErrorStrings : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15NautilusCoreSDK15NetworkListener")
@interface NetworkListener : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
