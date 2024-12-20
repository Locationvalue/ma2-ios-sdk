#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 6.0.2 effective-5.10 (swiftlang-6.0.2.1.2 clang-1600.0.26.4)
#ifndef NAUTILUSNOTIFICATIONSDK_SWIFT_H
#define NAUTILUSNOTIFICATIONSDK_SWIFT_H
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

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnon-modular-include-in-framework-module"
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#pragma clang diagnostic pop
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
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
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
# if __has_attribute(enum_extensibility)
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
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
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
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import NautilusContainerSDK;
@import NautilusCoreSDK;
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
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusNotificationSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class NautilusComponentDependency;
@class NSString;
@class NautilusApp;
@class NautilusNotificationHandler;
@class NSError;
@class NSData;
@class NautilusRegistrationTarget;
@class NautilusRemoteMessage;
@class NSDate;

SWIFT_CLASS("_TtC23NautilusNotificationSDK20NautilusNotification")
@interface NautilusNotification : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
/// <code>NautilusNotificationSDK</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
@property (nonatomic, readonly, strong) NautilusNotificationHandler * _Nonnull notificationHandler;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
+ (NautilusNotification * _Nonnull)notification SWIFT_WARN_UNUSED_RESULT;
+ (NautilusNotification * _Nonnull)notificationAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
- (void)removePushDeviceID;
- (void)registerDeviceToken:(NSData * _Nonnull)deviceToken completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
- (void)registerDeviceTokenString:(NSString * _Nonnull)deviceToken completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
- (void)registerDeviceToken:(NSData * _Nonnull)deviceToken SWIFT_DEPRECATED_MSG("", "register(deviceToken:completion:)");
- (void)registerDeviceTokenString:(NSString * _Nonnull)deviceToken SWIFT_DEPRECATED_MSG("", "register(deviceToken:completion:)");
- (void)registerInstallID:(NSString * _Nonnull)installID completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
- (void)registerNotificationDeviceWithCompletion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
/// 現在サーバーに登録している端末に対して、配信対象を登録する
/// \param registrationTarget PUSH通知の配信対象
///
/// \param completion サーバーで処理が行われた結果を受け取るハンドラ
///
- (void)registerPushTargetWithRegistrationTarget:(NautilusRegistrationTarget * _Nonnull)registrationTarget completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// 送信されたプッシュ通知の履歴を取得する
/// \param completion 成功時はプッシュ通知の履歴, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getRemoteNotificationsWithCompletion:(void (^ _Nonnull)(NSArray<NautilusRemoteMessage *> * _Nullable, NSError * _Nullable))completion;
/// 送信されたプッシュ通知の履歴を取得する
/// \param start 取得開始位置
///
/// \param count 取得件数の指定
///
/// \param completion 成功時はプッシュ通知の履歴, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getRemoteNotificationsWithStart:(NSInteger)start count:(NSInteger)count completion:(void (^ _Nonnull)(NSArray<NautilusRemoteMessage *> * _Nullable, NSError * _Nullable))completion;
/// 送信されたプッシュ通知の履歴を取得する
/// \param start 取得開始位置
///
/// \param count 取得件数の指定
///
/// \param checkDate 最終確認日時
///
/// \param completion 成功時はプッシュ通知の履歴, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getRemoteNotificationsWithStart:(NSInteger)start count:(NSInteger)count checkDate:(NSDate * _Nonnull)checkDate completion:(void (^ _Nonnull)(NSArray<NautilusRemoteMessage *> * _Nullable, NSError * _Nullable))completion;
/// プッシュ通知履歴を削除する
/// \param pushIDs 削除対象のプッシュIDの配列
///
/// \param completion 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)deleteHistoryWithPushIDs:(NSArray<NSNumber *> * _Nonnull)pushIDs completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class UNNotificationRequest;
@class NautilusPushNotificationInfo;
@class UNMutableNotificationContent;
@class UNNotificationContent;

/// プッシュ通知のメッセージを扱うクラス
SWIFT_CLASS("_TtC23NautilusNotificationSDK27NautilusNotificationHandler")
@interface NautilusNotificationHandler : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (BOOL)handleRemoteNotificationWithRequest:(UNNotificationRequest * _Nonnull)request action:(void (^ _Nullable)(NautilusPushNotificationInfo * _Nonnull))action;
- (BOOL)handleRemoteNotificationWithUserInfo:(NSDictionary * _Nonnull)userInfo action:(void (^ _Nullable)(NautilusPushNotificationInfo * _Nonnull))action;
- (BOOL)canHandleRemoteNotificationWithRequest:(UNNotificationRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
- (BOOL)canHandleRemoteNotificationWithUserInfo:(NSDictionary * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
- (void)didReceiveWithRequest:(UNNotificationRequest * _Nonnull)request bestAttemptContent:(UNMutableNotificationContent * _Nonnull)bestAttemptContent completion:(void (^ _Nonnull)(BOOL))completion;
- (void)serviceExtensionTimeWillExpireWithRequest:(UNNotificationRequest * _Nonnull)request bestAttemptContent:(UNMutableNotificationContent * _Nonnull)bestAttemptContent contentHandler:(SWIFT_NOESCAPE void (^ _Nonnull)(UNNotificationContent * _Nonnull))contentHandler;
@end

typedef SWIFT_ENUM(NSInteger, NautilusNotificationNetworkError, open) {
/// 不明
  NautilusNotificationNetworkErrorUnknown = 0,
/// 接続エラー
  NautilusNotificationNetworkErrorConnection = 1,
/// タイムアウト
  NautilusNotificationNetworkErrorTimedout = 2,
/// API処理エラー
  NautilusNotificationNetworkErrorApiProcessError = 3,
/// HTTP/HTTPS通信エラー
  NautilusNotificationNetworkErrorHttpConnection = 4,
/// レスポンスのパースエラー
  NautilusNotificationNetworkErrorParseFailure = 5,
/// 明示的にユーザーによりキャンセルされた
  NautilusNotificationNetworkErrorUserCancelled = 6,
/// SDKインスタンスが不正
  NautilusNotificationNetworkErrorInvalidInstance = 7,
/// 設定値の構成が不正エラー
  NautilusNotificationNetworkErrorIllegalConfiguration = 8,
/// パラメータ不正
  NautilusNotificationNetworkErrorInvalidParameters = 100,
/// パラメータが不足している
  NautilusNotificationNetworkErrorMissingRequiredParameter = 101,
/// パラメータフォーマット不正
  NautilusNotificationNetworkErrorUnexpectedParameterFormat = 102,
/// サーバ側エラー
  NautilusNotificationNetworkErrorServerError = 200,
/// メンテナンス中
  NautilusNotificationNetworkErrorServiceMaintenance = 901,
/// 指定したAPIが存在しない
  NautilusNotificationNetworkErrorUnknownAPIService = 903,
/// PIDが未登録
  NautilusNotificationNetworkErrorInvalidUserPID = 905,
/// API KEYが不正
  NautilusNotificationNetworkErrorDeveloperError = 906,
/// 未ログインのため利用不可
  NautilusNotificationNetworkErrorRequiresLoginStatus = 907,
};
static NSString * _Nonnull const NautilusNotificationNetworkErrorDomain = @"NautilusNotificationSDK.NautilusNotificationNetworkError";


SWIFT_CLASS("_TtC23NautilusNotificationSDK28NautilusPushNotificationInfo")
@interface NautilusPushNotificationInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 現在の端末をPUSH通知の配信対象として登録する情報
/// 現在のデバイストークンを紐付けるIDの指定
SWIFT_CLASS("_TtC23NautilusNotificationSDK26NautilusRegistrationTarget")
@interface NautilusRegistrationTarget : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// サーバーから送信されたリモートプッシュの内容
SWIFT_CLASS("_TtC23NautilusNotificationSDK21NautilusRemoteMessage")
@interface NautilusRemoteMessage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 6.0.2 effective-5.10 (swiftlang-6.0.2.1.2 clang-1600.0.26.4)
#ifndef NAUTILUSNOTIFICATIONSDK_SWIFT_H
#define NAUTILUSNOTIFICATIONSDK_SWIFT_H
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

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wnon-modular-include-in-framework-module"
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#pragma clang diagnostic pop
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
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
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
# if __has_attribute(enum_extensibility)
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
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
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
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import NautilusContainerSDK;
@import NautilusCoreSDK;
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
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusNotificationSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class NautilusComponentDependency;
@class NSString;
@class NautilusApp;
@class NautilusNotificationHandler;
@class NSError;
@class NSData;
@class NautilusRegistrationTarget;
@class NautilusRemoteMessage;
@class NSDate;

SWIFT_CLASS("_TtC23NautilusNotificationSDK20NautilusNotification")
@interface NautilusNotification : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
/// <code>NautilusNotificationSDK</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
@property (nonatomic, readonly, strong) NautilusNotificationHandler * _Nonnull notificationHandler;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
+ (NautilusNotification * _Nonnull)notification SWIFT_WARN_UNUSED_RESULT;
+ (NautilusNotification * _Nonnull)notificationAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
- (void)removePushDeviceID;
- (void)registerDeviceToken:(NSData * _Nonnull)deviceToken completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
- (void)registerDeviceTokenString:(NSString * _Nonnull)deviceToken completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
- (void)registerDeviceToken:(NSData * _Nonnull)deviceToken SWIFT_DEPRECATED_MSG("", "register(deviceToken:completion:)");
- (void)registerDeviceTokenString:(NSString * _Nonnull)deviceToken SWIFT_DEPRECATED_MSG("", "register(deviceToken:completion:)");
- (void)registerInstallID:(NSString * _Nonnull)installID completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
- (void)registerNotificationDeviceWithCompletion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
/// 現在サーバーに登録している端末に対して、配信対象を登録する
/// \param registrationTarget PUSH通知の配信対象
///
/// \param completion サーバーで処理が行われた結果を受け取るハンドラ
///
- (void)registerPushTargetWithRegistrationTarget:(NautilusRegistrationTarget * _Nonnull)registrationTarget completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// 送信されたプッシュ通知の履歴を取得する
/// \param completion 成功時はプッシュ通知の履歴, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getRemoteNotificationsWithCompletion:(void (^ _Nonnull)(NSArray<NautilusRemoteMessage *> * _Nullable, NSError * _Nullable))completion;
/// 送信されたプッシュ通知の履歴を取得する
/// \param start 取得開始位置
///
/// \param count 取得件数の指定
///
/// \param completion 成功時はプッシュ通知の履歴, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getRemoteNotificationsWithStart:(NSInteger)start count:(NSInteger)count completion:(void (^ _Nonnull)(NSArray<NautilusRemoteMessage *> * _Nullable, NSError * _Nullable))completion;
/// 送信されたプッシュ通知の履歴を取得する
/// \param start 取得開始位置
///
/// \param count 取得件数の指定
///
/// \param checkDate 最終確認日時
///
/// \param completion 成功時はプッシュ通知の履歴, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getRemoteNotificationsWithStart:(NSInteger)start count:(NSInteger)count checkDate:(NSDate * _Nonnull)checkDate completion:(void (^ _Nonnull)(NSArray<NautilusRemoteMessage *> * _Nullable, NSError * _Nullable))completion;
/// プッシュ通知履歴を削除する
/// \param pushIDs 削除対象のプッシュIDの配列
///
/// \param completion 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)deleteHistoryWithPushIDs:(NSArray<NSNumber *> * _Nonnull)pushIDs completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class UNNotificationRequest;
@class NautilusPushNotificationInfo;
@class UNMutableNotificationContent;
@class UNNotificationContent;

/// プッシュ通知のメッセージを扱うクラス
SWIFT_CLASS("_TtC23NautilusNotificationSDK27NautilusNotificationHandler")
@interface NautilusNotificationHandler : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (BOOL)handleRemoteNotificationWithRequest:(UNNotificationRequest * _Nonnull)request action:(void (^ _Nullable)(NautilusPushNotificationInfo * _Nonnull))action;
- (BOOL)handleRemoteNotificationWithUserInfo:(NSDictionary * _Nonnull)userInfo action:(void (^ _Nullable)(NautilusPushNotificationInfo * _Nonnull))action;
- (BOOL)canHandleRemoteNotificationWithRequest:(UNNotificationRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
- (BOOL)canHandleRemoteNotificationWithUserInfo:(NSDictionary * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
- (void)didReceiveWithRequest:(UNNotificationRequest * _Nonnull)request bestAttemptContent:(UNMutableNotificationContent * _Nonnull)bestAttemptContent completion:(void (^ _Nonnull)(BOOL))completion;
- (void)serviceExtensionTimeWillExpireWithRequest:(UNNotificationRequest * _Nonnull)request bestAttemptContent:(UNMutableNotificationContent * _Nonnull)bestAttemptContent contentHandler:(SWIFT_NOESCAPE void (^ _Nonnull)(UNNotificationContent * _Nonnull))contentHandler;
@end

typedef SWIFT_ENUM(NSInteger, NautilusNotificationNetworkError, open) {
/// 不明
  NautilusNotificationNetworkErrorUnknown = 0,
/// 接続エラー
  NautilusNotificationNetworkErrorConnection = 1,
/// タイムアウト
  NautilusNotificationNetworkErrorTimedout = 2,
/// API処理エラー
  NautilusNotificationNetworkErrorApiProcessError = 3,
/// HTTP/HTTPS通信エラー
  NautilusNotificationNetworkErrorHttpConnection = 4,
/// レスポンスのパースエラー
  NautilusNotificationNetworkErrorParseFailure = 5,
/// 明示的にユーザーによりキャンセルされた
  NautilusNotificationNetworkErrorUserCancelled = 6,
/// SDKインスタンスが不正
  NautilusNotificationNetworkErrorInvalidInstance = 7,
/// 設定値の構成が不正エラー
  NautilusNotificationNetworkErrorIllegalConfiguration = 8,
/// パラメータ不正
  NautilusNotificationNetworkErrorInvalidParameters = 100,
/// パラメータが不足している
  NautilusNotificationNetworkErrorMissingRequiredParameter = 101,
/// パラメータフォーマット不正
  NautilusNotificationNetworkErrorUnexpectedParameterFormat = 102,
/// サーバ側エラー
  NautilusNotificationNetworkErrorServerError = 200,
/// メンテナンス中
  NautilusNotificationNetworkErrorServiceMaintenance = 901,
/// 指定したAPIが存在しない
  NautilusNotificationNetworkErrorUnknownAPIService = 903,
/// PIDが未登録
  NautilusNotificationNetworkErrorInvalidUserPID = 905,
/// API KEYが不正
  NautilusNotificationNetworkErrorDeveloperError = 906,
/// 未ログインのため利用不可
  NautilusNotificationNetworkErrorRequiresLoginStatus = 907,
};
static NSString * _Nonnull const NautilusNotificationNetworkErrorDomain = @"NautilusNotificationSDK.NautilusNotificationNetworkError";


SWIFT_CLASS("_TtC23NautilusNotificationSDK28NautilusPushNotificationInfo")
@interface NautilusPushNotificationInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 現在の端末をPUSH通知の配信対象として登録する情報
/// 現在のデバイストークンを紐付けるIDの指定
SWIFT_CLASS("_TtC23NautilusNotificationSDK26NautilusRegistrationTarget")
@interface NautilusRegistrationTarget : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// サーバーから送信されたリモートプッシュの内容
SWIFT_CLASS("_TtC23NautilusNotificationSDK21NautilusRemoteMessage")
@interface NautilusRemoteMessage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
