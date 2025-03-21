#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 6.0.2 effective-5.10 (swiftlang-6.0.2.1.2 clang-1600.0.26.4)
#ifndef NAUTILUSBANNERSDK_SWIFT_H
#define NAUTILUSBANNERSDK_SWIFT_H
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
#pragma clang diagnostic ignored "-Wunsafe-buffer-usage"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusBannerSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class NSString;
@class NautilusComponentDependency;
@class NautilusApp;
@class NSError;
@class NautilusBannerCategory;
@class NautilusBannerInfo;
@class NautilusBannerLog;
@class NautilusBannerCarouselView;

/// アプリとのインターフェース
SWIFT_CLASS("_TtC17NautilusBannerSDK14NautilusBanner")
@interface NautilusBanner : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
/// <code>NautilusBannerSDK</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
+ (NautilusBanner * _Nonnull)banner SWIFT_WARN_UNUSED_RESULT;
+ (NautilusBanner * _Nonnull)bannerAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// バナーのカテゴリー一覧を取得する
/// Objective-Cから呼び出す場合は, こちらのメソッドを利用してください
/// \param completion 成功時はカテゴリー一覧, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getBannerCategoryListWithCompletion:(void (^ _Nonnull)(NSArray<NautilusBannerCategory *> * _Nullable, NSError * _Nullable))completion;
/// 指定されたカテゴリのバナー情報一覧を取得する
/// Objective-Cから呼び出す場合は, こちらのメソッドを利用してください
/// \param categoryID カテゴリID
///
/// \param completion 成功時はバナー情報一覧, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getBannerListWithCategoryID:(NSInteger)categoryID completion:(void (^ _Nonnull)(NSArray<NautilusBannerInfo *> * _Nullable, NSError * _Nullable))completion;
/// バナーアクションログを送信
/// Objective-Cから呼び出す場合は, こちらのメソッドを利用してください
/// \param bannerLogs <code>NautilusBannerLog</code>の配列
///
/// \param completion 成功時はtrue, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)sendBannerLogWithBannerLogs:(NSArray<NautilusBannerLog *> * _Nonnull)bannerLogs completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// バナーログを溜めて送信する
/// 10件溜めて送信
/// Objective-Cから呼び出す場合は, こちらのメソッドを利用してください
/// \param bannerLog <code>NautilusBannerLog</code>バナーログ
///
/// \param completion 成功時はtrue, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)storeBannerActionLogWithBannerLog:(NautilusBannerLog * _Nonnull)bannerLog completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// 溜めているバナーログを強制的に送信する
/// Objective-Cから呼び出す場合は, こちらのメソッドを利用してください
/// \param completion 成功時はtrue, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)flushBannerActionLogWithCompletion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// カルーセルのスクロールを止める
/// \param carouselViews スクロールを止めたい<code>NautilusBannerCarouselView</code>の配列
///
- (void)stopCarouselScroll:(NSArray<NautilusBannerCarouselView *> * _Nonnull)carouselViews;
/// カルーセルのスクロールを再開する
/// 開始は画像読み込みをトリガーにして自動で開始されるのでこのメソッドを利用する必要はない
/// \param carouselViews スクロールを再開したい<code>NautilusBannerCarouselView</code>の配列
///
- (void)resumeCarouselScroll:(NSArray<NautilusBannerCarouselView *> * _Nonnull)carouselViews;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// アプリ内遷移の情報
SWIFT_CLASS("_TtC17NautilusBannerSDK21NautilusBannerAppLink")
@interface NautilusBannerAppLink : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSCoder;

/// バナーViewの基底クラス
SWIFT_CLASS("_TtC17NautilusBannerSDK18NautilusBannerView")
@interface NautilusBannerView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


/// バナーカルーセルView
SWIFT_CLASS("_TtC17NautilusBannerSDK26NautilusBannerCarouselView")
@interface NautilusBannerCarouselView : NautilusBannerView
- (void)layoutSubviews;
- (void)updateConstraints;
@end

@class UIScrollView;

@interface NautilusBannerCarouselView (SWIFT_EXTENSION(NautilusBannerSDK)) <UIScrollViewDelegate>
- (void)scrollViewWillBeginDragging:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
@end


/// カテゴリー情報
SWIFT_CLASS("_TtC17NautilusBannerSDK22NautilusBannerCategory")
@interface NautilusBannerCategory : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// バナーの操作・処理に失敗した理由
typedef SWIFT_ENUM(NSInteger, NautilusBannerError, open) {
/// 不明
  NautilusBannerErrorUnknown = 0,
/// 接続エラー
  NautilusBannerErrorConnection = 1,
/// タイムアウト
  NautilusBannerErrorTimedout = 2,
/// API処理エラー
  NautilusBannerErrorApiProcessError = 3,
/// HTTP/HTTPS通信エラー
  NautilusBannerErrorHttpConnection = 4,
/// レスポンスのパースエラー
  NautilusBannerErrorParseFailure = 5,
/// 明示的にユーザーによりキャンセルされた
  NautilusBannerErrorUserCancelled = 6,
/// パラメータが不正
  NautilusBannerErrorInvalidParamater = 7,
/// インスタンスが不正
  NautilusBannerErrorInvalidInstance = 8,
/// 設定値の構成が不正エラー
  NautilusBannerErrorIllegalConfiguration = 9,
/// パラメータ不正
  NautilusBannerErrorInvalidParameters = 100,
/// パラメータが不足している
  NautilusBannerErrorMissingRequiredParameter = 101,
/// パラメータフォーマット不正
  NautilusBannerErrorUnexpectedParameterFormat = 102,
/// サーバ側エラー
  NautilusBannerErrorServerError = 200,
/// メンテナンス中
  NautilusBannerErrorServiceMaintenance = 901,
/// 指定したAPIが存在しない
  NautilusBannerErrorUnknownAPIService = 903,
/// PIDが未登録
  NautilusBannerErrorInvalidUserPID = 905,
/// API KEYが不正
  NautilusBannerErrorDeveloperError = 906,
/// 未ログインのため利用不可
  NautilusBannerErrorRequiresLoginStatus = 907,
};
static NSString * _Nonnull const NautilusBannerErrorDomain = @"NautilusBannerSDK.NautilusBannerError";


/// バナー情報
SWIFT_CLASS("_TtC17NautilusBannerSDK18NautilusBannerInfo")
@interface NautilusBannerInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// バナーの遷移先の指定
typedef SWIFT_ENUM(NSInteger, NautilusBannerLinkType, open) {
/// アプリ内遷移
  NautilusBannerLinkTypeFunction = 0,
/// Web遷移（内部指定）
  NautilusBannerLinkTypeInternal = 1,
/// Web遷移（外部指定）
  NautilusBannerLinkTypeExternal = 2,
};


/// バナーリストView
SWIFT_CLASS("_TtC17NautilusBannerSDK22NautilusBannerListView")
@interface NautilusBannerListView : NautilusBannerView
- (void)layoutSubviews;
- (void)updateConstraints;
@end


/// バナーログ
SWIFT_CLASS("_TtC17NautilusBannerSDK17NautilusBannerLog")
@interface NautilusBannerLog : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// バナーログを送信するタイミング
typedef SWIFT_ENUM(NSInteger, NautilusBannerLogType, open) {
  NautilusBannerLogTypeShow = 0,
  NautilusBannerLogTypeTap = 1,
};


@class NautilusBannerWebLink;

/// バナーの表示タイミング・タップした時の操作をアプリ側で制御するためのデリゲート
SWIFT_PROTOCOL("_TtP17NautilusBannerSDK26NautilusBannerViewDelegate_")
@protocol NautilusBannerViewDelegate
/// バナーの取得を開始する前に呼ばれる
- (void)willLoadBannerSet;
/// バナーの取得、バナー画像の読み込みが完了した時に呼ばれる
- (void)didLoadBannerImages;
/// バナーの処理に失敗した時に呼ばれる
/// \param error NautilusBannerError
///
- (void)failLoadBannerSetWithError:(enum NautilusBannerError)error;
/// バナーViewのURLがタップされた時に呼ばれる
/// \param bannerView タップされたバナーのView
///
/// \param banner タップされたバナーの情報
///
/// \param link タップされたバナーのリンク情報
///
///
/// returns:
/// デリゲートでURLから遷移をしたときは、<code>true</code>を返す。それ以外の場合は、<code>false</code>を返す。
- (BOOL)bannerView:(NautilusBannerView * _Nonnull)bannerView didTap:(NautilusBannerInfo * _Nonnull)banner tapInternalLink:(NautilusBannerWebLink * _Nonnull)link SWIFT_WARN_UNUSED_RESULT;
/// バナーViewのURLがタップされた時に呼ばれる（SFSafariViewController）
/// \param bannerView タップされたバナーのView
///
/// \param banner タップされたバナーの情報
///
/// \param link タップされたバナーのリンク情報
///
///
/// returns:
/// デリゲートでURLから遷移をしたときは、<code>true</code>を返す。それ以外の場合は、<code>false</code>を返す。
- (BOOL)bannerView:(NautilusBannerView * _Nonnull)bannerView didTap:(NautilusBannerInfo * _Nonnull)banner tapExternalLink:(NautilusBannerWebLink * _Nonnull)link SWIFT_WARN_UNUSED_RESULT;
/// バナーViewのアプリ内リンクがタップされた時に呼ばれる（アプリ内遷移）
/// important:
/// アプリ内遷移は、SDKからは処理が行えないため、アプリ側で必ず実装を行う
/// \param bannerView タップされたバナーのView
///
/// \param banner タップされたバナーの情報
///
/// \param link タップされたバナーのリンク情報
///
- (void)bannerView:(NautilusBannerView * _Nonnull)bannerView didTap:(NautilusBannerInfo * _Nonnull)banner tapAppLink:(NautilusBannerAppLink * _Nonnull)link;
@end


/// web遷移の情報
SWIFT_CLASS("_TtC17NautilusBannerSDK21NautilusBannerWebLink")
@interface NautilusBannerWebLink : NSObject
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
