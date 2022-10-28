#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7 (swiftlang-5.7.0.127.4 clang-1400.0.29.50)
#ifndef NAUTILUSSHOPSDK_SWIFT_H
#define NAUTILUSSHOPSDK_SWIFT_H
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusShopSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

/// お気に入り店舗の並び順指定
typedef SWIFT_ENUM(NSInteger, NautilusFavoriteShopSortOrder, open) {
/// 昇順, 対応する数値: 2
  NautilusFavoriteShopSortOrderAscending = 0,
/// 降順, 対応する数値: 1
  NautilusFavoriteShopSortOrderDescending = 1,
};

@class NSString;
@class NautilusComponentDependency;
@class NautilusApp;
@class UINavigationController;
@class UIViewController;
@class NautilusLocation;
@class NautilusShopInfo;
@class NSError;
@class NautilusShopSearchTagInfo;

/// アプリとのインターフェース
SWIFT_CLASS("_TtC15NautilusShopSDK12NautilusShop")
@interface NautilusShop : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application;
+ (NautilusShop * _Nonnull)shop SWIFT_WARN_UNUSED_RESULT;
+ (NautilusShop * _Nonnull)shopAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// 店舗検索画面を返却する
///
/// returns:
/// 店舗検索画面
- (UINavigationController * _Nonnull)createShop SWIFT_WARN_UNUSED_RESULT;
/// お気に入り店舗一覧のView Controllerを取得する
///
/// returns:
/// お気に入り店舗一覧画面
- (UIViewController * _Nonnull)instantiateFavoriteShop SWIFT_WARN_UNUSED_RESULT;
/// 店舗詳細のView Controllerを取得する
/// \param shopID 店舗ID
///
///
/// returns:
/// 店舗詳細画面
- (UIViewController * _Nonnull)instantiateShopDetailWithShopID:(NSInteger)shopID SWIFT_WARN_UNUSED_RESULT;
/// 店舗詳細のView Controllerを取得する
/// \param clientShopCode 更新用管理コード
///
///
/// returns:
/// 店舗詳細画面
- (UIViewController * _Nonnull)instantiateShopDetailWithClientShopCode:(NSString * _Nonnull)clientShopCode SWIFT_WARN_UNUSED_RESULT;
/// 店舗一覧のView Controllerを取得する
///
/// returns:
/// 店舗一覧画面
- (UIViewController * _Nonnull)instantiateShopListViewController SWIFT_WARN_UNUSED_RESULT;
/// 店舗一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getShopListWithOffset:(NSInteger)offset limit:(NSInteger)limit location:(NautilusLocation * _Nonnull)location range:(NSInteger)range completion:(void (^ _Nonnull)(NSArray<NautilusShopInfo *> * _Nullable, NSError * _Nullable))completion;
/// 店舗一覧を検索して取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)searchShopWithOffset:(NSInteger)offset limit:(NSInteger)limit location:(NautilusLocation * _Nullable)location range:(NSInteger)range shopName:(NSString * _Nullable)shopName prefectures:(NSArray<NSNumber *> * _Nullable)prefectures shopSearchTags:(NSArray<NSArray<NautilusShopSearchTagInfo *> *> * _Nullable)shopSearchTags shopIDs:(NSArray<NSNumber *> * _Nullable)shopIDs clientShopCDs:(NSArray<NSString *> * _Nullable)clientShopCDs completion:(void (^ _Nonnull)(NSArray<NautilusShopInfo *> * _Nullable, NSError * _Nullable))completion;
/// 店舗詳細を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getShopDetailWithShopID:(NSInteger)shopID clientShopCD:(NSString * _Nullable)clientShopCD completion:(void (^ _Nonnull)(NautilusShopInfo * _Nullable, NSError * _Nullable))completion;
/// お気に入り店舗登録、削除を行う
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)updateFavoriteWithAddFavoriteShopIDs:(NSArray<NSNumber *> * _Nonnull)addFavoriteShopIDs removeFavoriteShopIDs:(NSArray<NSNumber *> * _Nonnull)removeFavoriteShopIDs completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// お気に入り店舗の一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getFavoriteShopListWithOrder:(enum NautilusFavoriteShopSortOrder)order completion:(void (^ _Nonnull)(NSArray<NautilusShopInfo *> * _Nullable, NSError * _Nullable))completion;
/// 店舗検索タグ一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getShopSearchTagListWithCompletion:(void (^ _Nonnull)(NSArray<NautilusShopSearchTagInfo *> * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Amplitude 送信用 enum
/// 店舗詳細画面を開いた際のトリガー
typedef SWIFT_ENUM(NSInteger, NautilusShopDetailOpenEvent, open) {
  NautilusShopDetailOpenEventReceivedNotification = 0,
  NautilusShopDetailOpenEventOpenWithURL = 1,
  NautilusShopDetailOpenEventTapOnShopList = 2,
  NautilusShopDetailOpenEventTapOnSearchMap = 3,
  NautilusShopDetailOpenEventTapOnFavoriteShopList = 4,
};

typedef SWIFT_ENUM(NSInteger, NautilusShopError, open) {
/// 不明
  NautilusShopErrorUnknown = 0,
/// 接続エラー
  NautilusShopErrorConnection = 1,
/// API処理エラー
  NautilusShopErrorApiProcessError = 2,
/// HTTP/HTTPS通信エラー
  NautilusShopErrorHttpConnection = 3,
/// レスポンスのパースエラー
  NautilusShopErrorParseFailure = 4,
/// 明示的にユーザーによりキャンセルされた
  NautilusShopErrorUserCancelled = 5,
/// 不正なパラメータが渡された
  NautilusShopErrorInvalidParamater = 6,
/// 設定値の構成が不正エラー
  NautilusShopErrorIllegalConfiguration = 7,
};
static NSString * _Nonnull const NautilusShopErrorDomain = @"NautilusShopSDK.NautilusShopError";


/// 店舗外部リンク情報
SWIFT_CLASS("_TtC15NautilusShopSDK24NautilusShopExternalLink")
@interface NautilusShopExternalLink : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 店舗画像情報
SWIFT_CLASS("_TtC15NautilusShopSDK17NautilusShopImage")
@interface NautilusShopImage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// MA 2.0 店舗のデータ
SWIFT_CLASS("_TtC15NautilusShopSDK16NautilusShopInfo")
@interface NautilusShopInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIImage;

/// ピン画像を提供する
SWIFT_PROTOCOL("_TtP15NautilusShopSDK28NautilusShopPinImageProvider_")
@protocol NautilusShopPinImageProvider
/// 引数で渡された店舗情報に対応する画像を返す
/// \param shopInfo 店舗情報
///
- (UIImage * _Nonnull)provideShopPinImageWith:(NautilusShopInfo * _Nonnull)shopInfo SWIFT_WARN_UNUSED_RESULT;
@end


/// 店舗検索タグを指定して検索する際に、APIに渡す店舗検索タグの並びを任意に指定するためのプロトコル
SWIFT_PROTOCOL("_TtP15NautilusShopSDK39NautilusShopSearchTagFilteringOperation_")
@protocol NautilusShopSearchTagFilteringOperation
/// 店舗検索絞り込み画面で選択された店舗検索タグの一覧を受け取り、APIに渡すための変換処理を行う
/// APIに渡す店舗検索タグは、以下のようになる
/// <ul>
///   <li>
///     店舗検索タグの配列（内側の配列）
///     <ul>
///       <li>
///         同一配列内の店舗検索タグは、or検索
///       </li>
///     </ul>
///   </li>
///   <li>
///     戻り値の配列（外側の配列）
///     <ul>
///       <li>
///         店舗検索タグの配列同士は、and検索
///       </li>
///     </ul>
///   </li>
/// </ul>
/// \param tags 店舗検索絞り込み画面で選択された店舗検索タグ
///
///
/// returns:
///
/// 店舗検索を実行するための店舗検索タグの検索条件
- (NSArray<NSArray<NautilusShopSearchTagInfo *> *> * _Nonnull)transformSearchConditionWithTags:(NSArray<NautilusShopSearchTagInfo *> * _Nonnull)tags SWIFT_WARN_UNUSED_RESULT;
@end


/// 店舗検索タグデータ
SWIFT_CLASS("_TtC15NautilusShopSDK25NautilusShopSearchTagInfo")
@interface NautilusShopSearchTagInfo : NSObject
/// タグデータは必ずサーバから取得する
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
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
// Generated by Apple Swift version 5.7 (swiftlang-5.7.0.127.4 clang-1400.0.29.50)
#ifndef NAUTILUSSHOPSDK_SWIFT_H
#define NAUTILUSSHOPSDK_SWIFT_H
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusShopSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

/// お気に入り店舗の並び順指定
typedef SWIFT_ENUM(NSInteger, NautilusFavoriteShopSortOrder, open) {
/// 昇順, 対応する数値: 2
  NautilusFavoriteShopSortOrderAscending = 0,
/// 降順, 対応する数値: 1
  NautilusFavoriteShopSortOrderDescending = 1,
};

@class NSString;
@class NautilusComponentDependency;
@class NautilusApp;
@class UINavigationController;
@class UIViewController;
@class NautilusLocation;
@class NautilusShopInfo;
@class NSError;
@class NautilusShopSearchTagInfo;

/// アプリとのインターフェース
SWIFT_CLASS("_TtC15NautilusShopSDK12NautilusShop")
@interface NautilusShop : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application;
+ (NautilusShop * _Nonnull)shop SWIFT_WARN_UNUSED_RESULT;
+ (NautilusShop * _Nonnull)shopAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// 店舗検索画面を返却する
///
/// returns:
/// 店舗検索画面
- (UINavigationController * _Nonnull)createShop SWIFT_WARN_UNUSED_RESULT;
/// お気に入り店舗一覧のView Controllerを取得する
///
/// returns:
/// お気に入り店舗一覧画面
- (UIViewController * _Nonnull)instantiateFavoriteShop SWIFT_WARN_UNUSED_RESULT;
/// 店舗詳細のView Controllerを取得する
/// \param shopID 店舗ID
///
///
/// returns:
/// 店舗詳細画面
- (UIViewController * _Nonnull)instantiateShopDetailWithShopID:(NSInteger)shopID SWIFT_WARN_UNUSED_RESULT;
/// 店舗詳細のView Controllerを取得する
/// \param clientShopCode 更新用管理コード
///
///
/// returns:
/// 店舗詳細画面
- (UIViewController * _Nonnull)instantiateShopDetailWithClientShopCode:(NSString * _Nonnull)clientShopCode SWIFT_WARN_UNUSED_RESULT;
/// 店舗一覧のView Controllerを取得する
///
/// returns:
/// 店舗一覧画面
- (UIViewController * _Nonnull)instantiateShopListViewController SWIFT_WARN_UNUSED_RESULT;
/// 店舗一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getShopListWithOffset:(NSInteger)offset limit:(NSInteger)limit location:(NautilusLocation * _Nonnull)location range:(NSInteger)range completion:(void (^ _Nonnull)(NSArray<NautilusShopInfo *> * _Nullable, NSError * _Nullable))completion;
/// 店舗一覧を検索して取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)searchShopWithOffset:(NSInteger)offset limit:(NSInteger)limit location:(NautilusLocation * _Nullable)location range:(NSInteger)range shopName:(NSString * _Nullable)shopName prefectures:(NSArray<NSNumber *> * _Nullable)prefectures shopSearchTags:(NSArray<NSArray<NautilusShopSearchTagInfo *> *> * _Nullable)shopSearchTags shopIDs:(NSArray<NSNumber *> * _Nullable)shopIDs clientShopCDs:(NSArray<NSString *> * _Nullable)clientShopCDs completion:(void (^ _Nonnull)(NSArray<NautilusShopInfo *> * _Nullable, NSError * _Nullable))completion;
/// 店舗詳細を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getShopDetailWithShopID:(NSInteger)shopID clientShopCD:(NSString * _Nullable)clientShopCD completion:(void (^ _Nonnull)(NautilusShopInfo * _Nullable, NSError * _Nullable))completion;
/// お気に入り店舗登録、削除を行う
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)updateFavoriteWithAddFavoriteShopIDs:(NSArray<NSNumber *> * _Nonnull)addFavoriteShopIDs removeFavoriteShopIDs:(NSArray<NSNumber *> * _Nonnull)removeFavoriteShopIDs completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// お気に入り店舗の一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getFavoriteShopListWithOrder:(enum NautilusFavoriteShopSortOrder)order completion:(void (^ _Nonnull)(NSArray<NautilusShopInfo *> * _Nullable, NSError * _Nullable))completion;
/// 店舗検索タグ一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
- (void)getShopSearchTagListWithCompletion:(void (^ _Nonnull)(NSArray<NautilusShopSearchTagInfo *> * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Amplitude 送信用 enum
/// 店舗詳細画面を開いた際のトリガー
typedef SWIFT_ENUM(NSInteger, NautilusShopDetailOpenEvent, open) {
  NautilusShopDetailOpenEventReceivedNotification = 0,
  NautilusShopDetailOpenEventOpenWithURL = 1,
  NautilusShopDetailOpenEventTapOnShopList = 2,
  NautilusShopDetailOpenEventTapOnSearchMap = 3,
  NautilusShopDetailOpenEventTapOnFavoriteShopList = 4,
};

typedef SWIFT_ENUM(NSInteger, NautilusShopError, open) {
/// 不明
  NautilusShopErrorUnknown = 0,
/// 接続エラー
  NautilusShopErrorConnection = 1,
/// API処理エラー
  NautilusShopErrorApiProcessError = 2,
/// HTTP/HTTPS通信エラー
  NautilusShopErrorHttpConnection = 3,
/// レスポンスのパースエラー
  NautilusShopErrorParseFailure = 4,
/// 明示的にユーザーによりキャンセルされた
  NautilusShopErrorUserCancelled = 5,
/// 不正なパラメータが渡された
  NautilusShopErrorInvalidParamater = 6,
/// 設定値の構成が不正エラー
  NautilusShopErrorIllegalConfiguration = 7,
};
static NSString * _Nonnull const NautilusShopErrorDomain = @"NautilusShopSDK.NautilusShopError";


/// 店舗外部リンク情報
SWIFT_CLASS("_TtC15NautilusShopSDK24NautilusShopExternalLink")
@interface NautilusShopExternalLink : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// 店舗画像情報
SWIFT_CLASS("_TtC15NautilusShopSDK17NautilusShopImage")
@interface NautilusShopImage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// MA 2.0 店舗のデータ
SWIFT_CLASS("_TtC15NautilusShopSDK16NautilusShopInfo")
@interface NautilusShopInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIImage;

/// ピン画像を提供する
SWIFT_PROTOCOL("_TtP15NautilusShopSDK28NautilusShopPinImageProvider_")
@protocol NautilusShopPinImageProvider
/// 引数で渡された店舗情報に対応する画像を返す
/// \param shopInfo 店舗情報
///
- (UIImage * _Nonnull)provideShopPinImageWith:(NautilusShopInfo * _Nonnull)shopInfo SWIFT_WARN_UNUSED_RESULT;
@end


/// 店舗検索タグを指定して検索する際に、APIに渡す店舗検索タグの並びを任意に指定するためのプロトコル
SWIFT_PROTOCOL("_TtP15NautilusShopSDK39NautilusShopSearchTagFilteringOperation_")
@protocol NautilusShopSearchTagFilteringOperation
/// 店舗検索絞り込み画面で選択された店舗検索タグの一覧を受け取り、APIに渡すための変換処理を行う
/// APIに渡す店舗検索タグは、以下のようになる
/// <ul>
///   <li>
///     店舗検索タグの配列（内側の配列）
///     <ul>
///       <li>
///         同一配列内の店舗検索タグは、or検索
///       </li>
///     </ul>
///   </li>
///   <li>
///     戻り値の配列（外側の配列）
///     <ul>
///       <li>
///         店舗検索タグの配列同士は、and検索
///       </li>
///     </ul>
///   </li>
/// </ul>
/// \param tags 店舗検索絞り込み画面で選択された店舗検索タグ
///
///
/// returns:
///
/// 店舗検索を実行するための店舗検索タグの検索条件
- (NSArray<NSArray<NautilusShopSearchTagInfo *> *> * _Nonnull)transformSearchConditionWithTags:(NSArray<NautilusShopSearchTagInfo *> * _Nonnull)tags SWIFT_WARN_UNUSED_RESULT;
@end


/// 店舗検索タグデータ
SWIFT_CLASS("_TtC15NautilusShopSDK25NautilusShopSearchTagInfo")
@interface NautilusShopSearchTagInfo : NSObject
/// タグデータは必ずサーバから取得する
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
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
