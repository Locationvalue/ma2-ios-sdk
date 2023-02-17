#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef NAUTILUSIDENTIFYSDK_SWIFT_H
#define NAUTILUSIDENTIFYSDK_SWIFT_H
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
@import CoreFoundation;
@import Foundation;
@import NautilusContainerSDK;
@import NautilusCoreSDK;
@import ObjectiveC;
@import UIKit;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusIdentifySDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class NautilusComponentDependency;
@class NSString;
@class NautilusApp;
@class NSError;
@protocol NautilusUser;
@class UIView;
@class NautilusUserInfoView;
@protocol NautilusUserInfoCodeImageProvider;

SWIFT_CLASS("_TtC19NautilusIdentifySDK16NautilusIdentify")
@interface NautilusIdentify : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
/// <code>NautilusIdentifySDK</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
+ (NautilusIdentify * _Nonnull)identify SWIFT_WARN_UNUSED_RESULT;
+ (NautilusIdentify * _Nonnull)identifyAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// 指定されたIDのユーザーに切り替える
/// 指定されたIDのユーザーが存在しない場合は、ユーザーを作成する
- (void)changeUserWithUserID:(NSString * _Nullable)userID;
/// 現在、SDKを利用しているユーザーの情報を取得する
- (id <NautilusUser> _Nonnull)getCurrentUser SWIFT_WARN_UNUSED_RESULT;
- (void)setManageCodeWithUserID:(NSString * _Nonnull)userID manageCode:(NSString * _Nonnull)manageCode completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (void)setExternalIDWithUserID:(NSString * _Nonnull)userID externalID:(NSString * _Nonnull)externalID externalIDType:(NSInteger)externalIDType completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (void)setManageCodeAndExternalIDWithUserID:(NSString * _Nonnull)userID manageCode:(NSString * _Nullable)manageCode externalID:(NSString * _Nonnull)externalID externalIDType:(NSInteger)externalIDType completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// 「ログイン状態」を登録する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param manageCode ログイン対象となるマネージコード
///
/// \param completion 成功なら true, 失敗なら<code>NSError</code>を受け取るクロージャ
///
- (void)setServerStatusToLoginWithManageCode:(NSString * _Nonnull)manageCode completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// 「ログアウト状態」を登録する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param completion 成功なら true, 失敗なら<code>NSError</code>を受け取るクロージャ
///
- (void)setServerStatusToLogoutWithCompletion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (UIView * _Nonnull)getUserInfoView SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)getUserInfoViewWithViewType:(SWIFT_METATYPE(NautilusUserInfoView) _Nonnull)viewType SWIFT_WARN_UNUSED_RESULT;
- (void)setCodeImageProvider:(id <NautilusUserInfoCodeImageProvider> _Nullable)codeImageProvider;
- (void)setCodeImageSize:(CGSize)codeImageSize;
/// CIDを削除する
- (void)removeCID;
/// 問い合わせ番号を削除する
- (void)removeReferenceNumber;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


typedef SWIFT_ENUM(NSInteger, NautilusIdentifyError, open) {
/// 不明
  NautilusIdentifyErrorUnknown = 0,
/// 接続エラー
  NautilusIdentifyErrorConnection = 1,
/// API処理エラー
  NautilusIdentifyErrorApiProcessError = 2,
/// HTTP/HTTPS通信エラー
  NautilusIdentifyErrorHttpConnection = 3,
/// レスポンスのパースエラー
  NautilusIdentifyErrorParseFailure = 4,
/// 明示的にユーザーによりキャンセルされた
  NautilusIdentifyErrorUserCancelled = 5,
/// パラメータが不正
  NautilusIdentifyErrorInvalidParamater = 6,
/// 不正なインスタンス
  NautilusIdentifyErrorInvalidInstance = 7,
/// パラメータ不正
  NautilusIdentifyErrorInvalidParameters = 100,
/// パラメータが不足している
  NautilusIdentifyErrorMissingRequiredParameter = 101,
/// パラメータフォーマット不正
  NautilusIdentifyErrorUnexpectedParameterFormat = 102,
/// サーバ側エラー
  NautilusIdentifyErrorServerError = 200,
/// メンテナンス中
  NautilusIdentifyErrorServiceMaintenance = 901,
/// 指定したAPIが存在しない
  NautilusIdentifyErrorUnknownAPIService = 903,
/// PIDが未登録
  NautilusIdentifyErrorInvalidUserPID = 905,
/// API KEYが不正
  NautilusIdentifyErrorDeveloperError = 906,
/// 未ログインのため利用不可
  NautilusIdentifyErrorRequiresLoginStatus = 907,
};
static NSString * _Nonnull const NautilusIdentifyErrorDomain = @"NautilusIdentifySDK.NautilusIdentifyError";


/// Nautilusのユーザー情報
SWIFT_PROTOCOL("_TtP19NautilusIdentifySDK12NautilusUser_")
@protocol NautilusUser
/// アプリ内でユーザーを識別するためのID
@property (nonatomic, readonly, copy) NSString * _Nonnull userID;
/// PID
@property (nonatomic, readonly, copy) NSString * _Nonnull pid;
/// アプリ側で管理している顧客管理コード
@property (nonatomic, readonly, copy) NSString * _Nullable manageCode;
/// 外部ID
@property (nonatomic, readonly, copy) NSString * _Nullable externalID;
/// 外部ID種別
@property (nonatomic, readonly) NSInteger externalIDType;
/// 匿名ユーザーかどうか
@property (nonatomic, readonly) BOOL isAnonymous;
@end

@class UIImage;

SWIFT_PROTOCOL("_TtP19NautilusIdentifySDK33NautilusUserInfoCodeImageProvider_")
@protocol NautilusUserInfoCodeImageProvider
- (UIImage * _Nullable)provideCodeImageFor:(NSString * _Nonnull)codeString size:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
@end

@class NSCoder;

SWIFT_CLASS("_TtC19NautilusIdentifySDK20NautilusUserInfoView")
@interface NautilusUserInfoView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19NautilusIdentifySDK28NautilusUserInfoViewProvider")
@interface NautilusUserInfoViewProvider : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)setCodeImageProvider:(id <NautilusUserInfoCodeImageProvider> _Nullable)codeImageProvider;
- (void)setCodeImageSize:(CGSize)codeImageSize;
- (UIView * _Nonnull)provideUserInfoView SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)provideUserInfoViewWithUser:(id <NautilusUser> _Nonnull)user SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)provideUserInfoViewWithViewType:(SWIFT_METATYPE(NautilusUserInfoView) _Nonnull)viewType SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)provideUserInfoViewWithUser:(id <NautilusUser> _Nonnull)user viewType:(SWIFT_METATYPE(NautilusUserInfoView) _Nonnull)viewType SWIFT_WARN_UNUSED_RESULT;
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
#ifndef NAUTILUSIDENTIFYSDK_SWIFT_H
#define NAUTILUSIDENTIFYSDK_SWIFT_H
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
@import CoreFoundation;
@import Foundation;
@import NautilusContainerSDK;
@import NautilusCoreSDK;
@import ObjectiveC;
@import UIKit;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusIdentifySDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class NautilusComponentDependency;
@class NSString;
@class NautilusApp;
@class NSError;
@protocol NautilusUser;
@class UIView;
@class NautilusUserInfoView;
@protocol NautilusUserInfoCodeImageProvider;

SWIFT_CLASS("_TtC19NautilusIdentifySDK16NautilusIdentify")
@interface NautilusIdentify : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
/// <code>NautilusIdentifySDK</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
+ (NautilusIdentify * _Nonnull)identify SWIFT_WARN_UNUSED_RESULT;
+ (NautilusIdentify * _Nonnull)identifyAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// 指定されたIDのユーザーに切り替える
/// 指定されたIDのユーザーが存在しない場合は、ユーザーを作成する
- (void)changeUserWithUserID:(NSString * _Nullable)userID;
/// 現在、SDKを利用しているユーザーの情報を取得する
- (id <NautilusUser> _Nonnull)getCurrentUser SWIFT_WARN_UNUSED_RESULT;
- (void)setManageCodeWithUserID:(NSString * _Nonnull)userID manageCode:(NSString * _Nonnull)manageCode completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (void)setExternalIDWithUserID:(NSString * _Nonnull)userID externalID:(NSString * _Nonnull)externalID externalIDType:(NSInteger)externalIDType completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (void)setManageCodeAndExternalIDWithUserID:(NSString * _Nonnull)userID manageCode:(NSString * _Nullable)manageCode externalID:(NSString * _Nonnull)externalID externalIDType:(NSInteger)externalIDType completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// 「ログイン状態」を登録する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param manageCode ログイン対象となるマネージコード
///
/// \param completion 成功なら true, 失敗なら<code>NSError</code>を受け取るクロージャ
///
- (void)setServerStatusToLoginWithManageCode:(NSString * _Nonnull)manageCode completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// 「ログアウト状態」を登録する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param completion 成功なら true, 失敗なら<code>NSError</code>を受け取るクロージャ
///
- (void)setServerStatusToLogoutWithCompletion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
- (UIView * _Nonnull)getUserInfoView SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)getUserInfoViewWithViewType:(SWIFT_METATYPE(NautilusUserInfoView) _Nonnull)viewType SWIFT_WARN_UNUSED_RESULT;
- (void)setCodeImageProvider:(id <NautilusUserInfoCodeImageProvider> _Nullable)codeImageProvider;
- (void)setCodeImageSize:(CGSize)codeImageSize;
/// CIDを削除する
- (void)removeCID;
/// 問い合わせ番号を削除する
- (void)removeReferenceNumber;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


typedef SWIFT_ENUM(NSInteger, NautilusIdentifyError, open) {
/// 不明
  NautilusIdentifyErrorUnknown = 0,
/// 接続エラー
  NautilusIdentifyErrorConnection = 1,
/// API処理エラー
  NautilusIdentifyErrorApiProcessError = 2,
/// HTTP/HTTPS通信エラー
  NautilusIdentifyErrorHttpConnection = 3,
/// レスポンスのパースエラー
  NautilusIdentifyErrorParseFailure = 4,
/// 明示的にユーザーによりキャンセルされた
  NautilusIdentifyErrorUserCancelled = 5,
/// パラメータが不正
  NautilusIdentifyErrorInvalidParamater = 6,
/// 不正なインスタンス
  NautilusIdentifyErrorInvalidInstance = 7,
/// パラメータ不正
  NautilusIdentifyErrorInvalidParameters = 100,
/// パラメータが不足している
  NautilusIdentifyErrorMissingRequiredParameter = 101,
/// パラメータフォーマット不正
  NautilusIdentifyErrorUnexpectedParameterFormat = 102,
/// サーバ側エラー
  NautilusIdentifyErrorServerError = 200,
/// メンテナンス中
  NautilusIdentifyErrorServiceMaintenance = 901,
/// 指定したAPIが存在しない
  NautilusIdentifyErrorUnknownAPIService = 903,
/// PIDが未登録
  NautilusIdentifyErrorInvalidUserPID = 905,
/// API KEYが不正
  NautilusIdentifyErrorDeveloperError = 906,
/// 未ログインのため利用不可
  NautilusIdentifyErrorRequiresLoginStatus = 907,
};
static NSString * _Nonnull const NautilusIdentifyErrorDomain = @"NautilusIdentifySDK.NautilusIdentifyError";


/// Nautilusのユーザー情報
SWIFT_PROTOCOL("_TtP19NautilusIdentifySDK12NautilusUser_")
@protocol NautilusUser
/// アプリ内でユーザーを識別するためのID
@property (nonatomic, readonly, copy) NSString * _Nonnull userID;
/// PID
@property (nonatomic, readonly, copy) NSString * _Nonnull pid;
/// アプリ側で管理している顧客管理コード
@property (nonatomic, readonly, copy) NSString * _Nullable manageCode;
/// 外部ID
@property (nonatomic, readonly, copy) NSString * _Nullable externalID;
/// 外部ID種別
@property (nonatomic, readonly) NSInteger externalIDType;
/// 匿名ユーザーかどうか
@property (nonatomic, readonly) BOOL isAnonymous;
@end

@class UIImage;

SWIFT_PROTOCOL("_TtP19NautilusIdentifySDK33NautilusUserInfoCodeImageProvider_")
@protocol NautilusUserInfoCodeImageProvider
- (UIImage * _Nullable)provideCodeImageFor:(NSString * _Nonnull)codeString size:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
@end

@class NSCoder;

SWIFT_CLASS("_TtC19NautilusIdentifySDK20NautilusUserInfoView")
@interface NautilusUserInfoView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC19NautilusIdentifySDK28NautilusUserInfoViewProvider")
@interface NautilusUserInfoViewProvider : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)setCodeImageProvider:(id <NautilusUserInfoCodeImageProvider> _Nullable)codeImageProvider;
- (void)setCodeImageSize:(CGSize)codeImageSize;
- (UIView * _Nonnull)provideUserInfoView SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)provideUserInfoViewWithUser:(id <NautilusUser> _Nonnull)user SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)provideUserInfoViewWithViewType:(SWIFT_METATYPE(NautilusUserInfoView) _Nonnull)viewType SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)provideUserInfoViewWithUser:(id <NautilusUser> _Nonnull)user viewType:(SWIFT_METATYPE(NautilusUserInfoView) _Nonnull)viewType SWIFT_WARN_UNUSED_RESULT;
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
