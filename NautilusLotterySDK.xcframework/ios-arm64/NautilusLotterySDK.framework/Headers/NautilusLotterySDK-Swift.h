#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef NAUTILUSLOTTERYSDK_SWIFT_H
#define NAUTILUSLOTTERYSDK_SWIFT_H
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

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusLotterySDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;
@class NautilusComponentDependency;
@class NautilusApp;
@class NSError;
@class NautilusLotteryInfo;
@class NSDate;
@class NautilusLotteryIntervalCheckResult;
@class NautilusLotteryResult;

/// アプリとのインターフェース
SWIFT_CLASS("_TtC18NautilusLotterySDK15NautilusLottery")
@interface NautilusLottery : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) NautilusApp * _Nonnull app;
@property (nonatomic, copy) NSString * _Nullable name;
/// <code>NautilusLotterySDK</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
+ (NautilusLottery * _Nonnull)lottery SWIFT_WARN_UNUSED_RESULT;
+ (NautilusLottery * _Nonnull)lotteryAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// 抽選一覧を取得する
/// Objective-Cから呼び出す場合は, こちらのメソッドを利用してください
/// \param lotteryID 取得する抽選のIDの指定, 負の値ならば全件取得
///
/// \param ignoreMissed ハズレの抽選を除外する時は true, しない時は false
///
/// \param completion 成功時は抽選一覧, 失敗時はエラーを受け取るクロージャ
///
- (void)requestLotteryListWithLotteryID:(NSInteger)lotteryID ignoreMissed:(BOOL)ignoreMissed completion:(void (^ _Nonnull)(NSArray<NautilusLotteryInfo *> * _Nullable, NSError * _Nullable))completion;
/// 抽選一覧の件数を取得する
/// Objective-Cから呼び出す場合は, こちらのメソッドを利用してください
/// \param checkDateTime 取得基準時刻. 基準時刻より後に配信された件数を取得.
///
/// \param ignoreMissed ハズレの抽選を除外する時は true, しない時は false
///
/// \param completion 成功時は抽選一覧の件数, 失敗時はエラーを受け取るクロージャ
///
- (void)getLotteryCountWithCheckDateTime:(NSDate * _Nullable)checkDateTime ignoreMissed:(BOOL)ignoreMissed completion:(void (^ _Nonnull)(NSInteger, NSError * _Nullable))completion;
/// 抽選の間隔を確認する
/// Objective-Cから呼び出す場合は, こちらのメソッドを利用してください
/// \param lotteryID 間隔を確認する抽選のIDの指定
///
/// \param completion 成功時は抽選間隔の確認結果, 失敗時はエラーを受け取るクロージャ
///
- (void)checkLotteryIntervalWithLotteryID:(NSInteger)lotteryID completion:(void (^ _Nonnull)(NautilusLotteryIntervalCheckResult * _Nullable, NSError * _Nullable))completion;
/// 抽選処理を実行する
/// Objective-Cから呼び出す場合は, こちらのメソッドを利用してください
/// \param lotteryID 抽選処理を実行する抽選のIDの指定
///
/// \param completion 成功時は抽選結果, 失敗時はエラーを受け取るクロージャ
///
- (void)applyLotteryWithLotteryID:(NSInteger)lotteryID completion:(void (^ _Nonnull)(NautilusLotteryResult * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// <code>NautilusLottery</code>のエラー定義
typedef SWIFT_ENUM(NSInteger, NautilusLotteryError, open) {
/// 不明
  NautilusLotteryErrorUnknown = 0,
/// 接続エラー
  NautilusLotteryErrorConnection = 1,
/// API処理エラー
  NautilusLotteryErrorApiProcessError = 2,
/// HTTP/HTTPS通信エラー
  NautilusLotteryErrorHttpConnection = 3,
/// レスポンスのパースエラー
  NautilusLotteryErrorParseFailure = 4,
/// 明示的にユーザーによりキャンセルされた
  NautilusLotteryErrorUserCancelled = 5,
/// 不正なパラメータ
  NautilusLotteryErrorInvalidParamater = 6,
/// 不正なインスタンス
  NautilusLotteryErrorInvalidInstance = 7,
/// パラメータ不正
  NautilusLotteryErrorInvalidParameters = 100,
/// パラメータが不足している
  NautilusLotteryErrorMissingRequiredParameter = 101,
/// パラメータフォーマット不正
  NautilusLotteryErrorUnexpectedParameterFormat = 102,
/// サーバ側エラー
  NautilusLotteryErrorServerError = 200,
/// メンテナンス中
  NautilusLotteryErrorServiceMaintenance = 901,
/// 指定したAPIが存在しない
  NautilusLotteryErrorUnknownAPIService = 903,
/// PIDが未登録
  NautilusLotteryErrorInvalidUserPID = 905,
/// API KEYが不正
  NautilusLotteryErrorDeveloperError = 906,
/// 未ログインのため利用不可
  NautilusLotteryErrorRequiresLoginStatus = 907,
};
static NSString * _Nonnull const NautilusLotteryErrorDomain = @"NautilusLotterySDK.NautilusLotteryError";


/// 抽選データ
SWIFT_CLASS("_TtC18NautilusLotterySDK19NautilusLotteryInfo")
@interface NautilusLotteryInfo : NSObject
/// 抽選情報は必ずサーバから取得する
/// SDK外から初期化をさせない
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 抽選の間隔確認の結果
SWIFT_CLASS("_TtC18NautilusLotterySDK34NautilusLotteryIntervalCheckResult")
@interface NautilusLotteryIntervalCheckResult : NSObject
/// 抽選の間隔確認の結果は必ずサーバから取得する
/// SDK外から初期化をさせない
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 抽選結果となる景品として発行されたクーポンのデータ
SWIFT_CLASS("_TtC18NautilusLotterySDK30NautilusLotteryPrizeCouponInfo")
@interface NautilusLotteryPrizeCouponInfo : NSObject
/// クーポンデータは必ずサーバから取得する
/// SDK外から初期化をさせない
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 抽選結果となる景品のデータ
SWIFT_CLASS("_TtC18NautilusLotterySDK24NautilusLotteryPrizeInfo")
@interface NautilusLotteryPrizeInfo : NSObject
/// 抽選結果は必ずサーバから取得する
/// SDK外から初期化をさせない
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 抽選結果となる景品として発行されたポイントのデータ
SWIFT_CLASS("_TtC18NautilusLotterySDK29NautilusLotteryPrizePointInfo")
@interface NautilusLotteryPrizePointInfo : NSObject
/// ポイントデータは必ずサーバから取得する
/// SDK外から初期化をさせない
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// 抽選結果の景品の種別
typedef SWIFT_ENUM(NSInteger, NautilusLotteryPrizeType, open) {
/// クーポン
  NautilusLotteryPrizeTypeCoupon = 1,
/// ポイント
  NautilusLotteryPrizeTypePoint = 2,
};


/// 抽選結果のデータ
SWIFT_CLASS("_TtC18NautilusLotterySDK21NautilusLotteryResult")
@interface NautilusLotteryResult : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// 抽選の演出種別
typedef SWIFT_ENUM(NSInteger, NautilusLotteryType, open) {
/// スクラッチ
  NautilusLotteryTypeScratch = 1,
/// スロット
  NautilusLotteryTypeSlot = 2,
};

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
