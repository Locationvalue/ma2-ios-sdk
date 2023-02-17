#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef NAUTILUSCOUPONSDK_SWIFT_H
#define NAUTILUSCOUPONSDK_SWIFT_H
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusCouponSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)


SWIFT_CLASS("_TtC17NautilusCouponSDK8CardType")
@interface CardType : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC17NautilusCouponSDK25CustomCellCouponImageList")
@interface CustomCellCouponImageList : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC17NautilusCouponSDK23NautilusAppExchangeType")
@interface NautilusAppExchangeType : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSString;
@class NautilusComponentDependency;
@class NautilusApp;
@protocol NautilusCouponDelegate;
@class NautilusCouponRouter;
@class NSError;
@class UIViewController;
@class NautilusCouponCategoryInfo;
enum NautilusCouponPublishType : NSInteger;

/// アプリとのインターフェース
SWIFT_CLASS("_TtC17NautilusCouponSDK14NautilusCoupon")
@interface NautilusCoupon : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
/// <code>NautilusCouponSDK</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
/// クーポン情報を利用したアクションを実装するための<code>delegate</code>
@property (nonatomic, weak) id <NautilusCouponDelegate> _Nullable delegate;
@property (nonatomic, readonly, strong) NautilusCouponRouter * _Nonnull router;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
+ (NautilusCoupon * _Nonnull)coupon SWIFT_WARN_UNUSED_RESULT;
+ (NautilusCoupon * _Nonnull)couponAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// クーポン一覧画面を返す
///
/// returns:
/// クーポン一覧画面（カテゴリタブあり）
- (UIViewController * _Nonnull)instantiateCouponListViewController SWIFT_WARN_UNUSED_RESULT;
/// カテゴリ選択された状態でクーポン一覧画面を返却する
/// \param category カテゴリ（<code>NautilusCouponCategoryInfo</code>）. nilの場合はすべて
///
/// \param useCategoryTab カテゴリタブをつけるかどうかのフラグ
///
///
/// returns:
/// クーポン一覧画面（<code>useCategoryTab</code>が<code>true</code>の時カテゴリタブあり）
- (UIViewController * _Nonnull)instantiateCouponListViewControllerWithCategory:(NautilusCouponCategoryInfo * _Nullable)category useCategoryTab:(BOOL)useCategoryTab SWIFT_WARN_UNUSED_RESULT;
/// カテゴリ選択された状態でクーポン一覧画面を返却する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param categoryID カテゴリID. <code>NSNotFound</code>の場合はすべて
///
/// \param useCategoryTab カテゴリタブをつけるかどうかのフラグ
///
///
/// returns:
/// クーポン一覧画面（<code>useCategoryTab</code>が<code>true</code>の時カテゴリタブあり）
- (UIViewController * _Nonnull)instantiateCouponListViewControllerWithCategoryID:(NSInteger)categoryID useCategoryTab:(BOOL)useCategoryTab SWIFT_WARN_UNUSED_RESULT;
/// カテゴリ選択された状態でクーポン一覧画面を返却する
/// \param categoryAlias カテゴリのエイリアス. nilの場合はすべて
///
/// \param useCategoryTab カテゴリタブをつけるかどうかのフラグ
///
///
/// returns:
/// クーポン一覧画面（<code>useCategoryTab</code>が<code>true</code>の時カテゴリタブあり）
- (UIViewController * _Nonnull)instantiateCouponListViewControllerWithCategoryAlias:(NSString * _Nullable)categoryAlias useCategoryTab:(BOOL)useCategoryTab SWIFT_WARN_UNUSED_RESULT;
/// お気に入りクーポン一覧VCを返す
- (UIViewController * _Nonnull)instantiateFavoriteCouponListViewController SWIFT_WARN_UNUSED_RESULT;
/// クーポンID・タイプからクーポン詳細画面を返す
/// \param couponID クーポンID
///
/// \param couponType クーポンタイプ(<code>NautilusCouponPublishType</code>)
///
///
/// returns:
/// クーポン詳細画面
- (UIViewController * _Nonnull)instantiateCouponDetailViewControllerWithCouponID:(NSInteger)couponID couponType:(enum NautilusCouponPublishType)couponType SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@class NautilusCouponSortKey;
@class NSDate;
@class NautilusCouponInfo;
@class NautilusCouponUseInfo;
@class NautilusCouponPublishTrigger;
@class NautilusCouponLog;
@protocol NautilusCouponUseValidObserver;

@interface NautilusCoupon (SWIFT_EXTENSION(NautilusCouponSDK))
/// 共通クーポン一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param offset 取得開始位置
///
/// \param limit 取得件数の指定
///
/// \param useCache キャッシュを利用する場合 true, しない場合 false
///
/// \param couponIDs クーポンIDの配列
///
/// \param categoryIDs カテゴリIDの配列
///
/// \param sortKeys <code>NautilusCouponSortKey</code> で定義された並び順
///
/// \param checkDateTime 取得基準時刻. 基準時刻後に配信されたクーポンを取得する
///
/// \param completion 成功時はクーポン一覧, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getCommonCouponListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache couponIDs:(NSArray<NSNumber *> * _Nullable)couponIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs sortKeys:(NSArray<NautilusCouponSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSArray<NautilusCouponInfo *> * _Nullable, NSError * _Nullable))completion SWIFT_DEPRECATED_MSG("", "getCommonCouponList(offset:limit:useCache:couponIDs:categoryIDs:searchWord:sortKeys:checkDateTime:completion:)");
/// 共通クーポン一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param offset 取得開始位置
///
/// \param limit 取得件数の指定
///
/// \param useCache キャッシュを利用する場合 true, しない場合 false
///
/// \param couponIDs クーポンIDの配列
///
/// \param categoryIDs カテゴリIDの配列
///
/// \param searchWord 検索ワード
///
/// \param sortKeys <code>NautilusCouponSortKey</code> で定義された並び順
///
/// \param checkDateTime 取得基準時刻. 基準時刻後に配信されたクーポンを取得する
///
/// \param completion 成功時はクーポン一覧, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getCommonCouponListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache couponIDs:(NSArray<NSNumber *> * _Nullable)couponIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs searchWord:(NSString * _Nullable)searchWord sortKeys:(NSArray<NautilusCouponSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSArray<NautilusCouponInfo *> * _Nullable, NSError * _Nullable))completion;
/// 共通クーポン件数を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param checkDateTime 取得基準時刻. 基準時刻後に配信されたクーポン件数を取得する
///
/// \param completion 成功時はクーポンの件数, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getCommonCouponCountWithCheckDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSInteger, NSError * _Nullable))completion;
/// 個人別クーポン一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param offset 取得開始位置
///
/// \param limit 取得件数の指定
///
/// \param useCache キャッシュを利用する場合 true, しない場合 false
///
/// \param couponIDs クーポンIDの配列
///
/// \param categoryIDs カテゴリIDの配列
///
/// \param sortKeys <code>NautilusCouponSortKey</code> で定義された並び順
///
/// \param checkDateTime 取得基準時刻. 基準時刻後に配信されたクーポンを取得する
///
/// \param completion 成功時はクーポン一覧, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getPrivateCouponListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache couponIDs:(NSArray<NSNumber *> * _Nullable)couponIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs sortKeys:(NSArray<NautilusCouponSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSArray<NautilusCouponInfo *> * _Nullable, NSError * _Nullable))completion SWIFT_DEPRECATED_MSG("", "getPrivateCouponList(offset:limit:useCache:couponIDs:categoryIDs:searchWord:sortKeys:checkDateTime:completion:)");
/// 個人別クーポン一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param offset 取得開始位置
///
/// \param limit 取得件数の指定
///
/// \param useCache キャッシュを利用する場合 true, しない場合 false
///
/// \param couponIDs クーポンIDの配列
///
/// \param categoryIDs カテゴリIDの配列
///
/// \param searchWord 検索ワード
///
/// \param sortKeys <code>NautilusCouponSortKey</code> で定義された並び順
///
/// \param checkDateTime 取得基準時刻. 基準時刻後に配信されたクーポンを取得する
///
/// \param completion 成功時はクーポン一覧, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getPrivateCouponListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache couponIDs:(NSArray<NSNumber *> * _Nullable)couponIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs searchWord:(NSString * _Nullable)searchWord sortKeys:(NSArray<NautilusCouponSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSArray<NautilusCouponInfo *> * _Nullable, NSError * _Nullable))completion;
/// 個人別クーポン件数を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param checkDateTime 取得基準時刻. 基準時刻後に配信されたクーポン件数を取得する
///
/// \param completion 成功時はクーポンの件数, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getPrivateCouponCountWithCheckDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSInteger, NSError * _Nullable))completion;
/// お気に入り店舗クーポン一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param offset 取得開始位置
///
/// \param limit 取得件数の指定
///
/// \param useCache キャッシュを利用する場合 true, しない場合 false
///
/// \param couponIDs クーポンIDの配列
///
/// \param categoryIDs カテゴリIDの配列
///
/// \param sortKeys <code>NautilusCouponSortKey</code> で定義された並び順
///
/// \param checkDateTime 取得基準時刻. 基準時刻後に配信されたクーポンを取得する
///
/// \param completion 成功時はクーポン一覧, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getFavoriteShopCouponListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache couponIDs:(NSArray<NSNumber *> * _Nullable)couponIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs sortKeys:(NSArray<NautilusCouponSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSArray<NautilusCouponInfo *> * _Nullable, NSError * _Nullable))completion SWIFT_DEPRECATED_MSG("", "getFavoriteShopCouponList(offset:limit:useCache:couponIDs:categoryIDs:searchWord:sortKeys:checkDateTime:completion:)");
/// お気に入り店舗クーポン一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param offset 取得開始位置
///
/// \param limit 取得件数の指定
///
/// \param useCache キャッシュを利用する場合 true, しない場合 false
///
/// \param couponIDs クーポンIDの配列
///
/// \param categoryIDs カテゴリIDの配列
///
/// \param searchWord 検索ワード
///
/// \param sortKeys <code>NautilusCouponSortKey</code> で定義された並び順
///
/// \param checkDateTime 取得基準時刻. 基準時刻後に配信されたクーポンを取得する
///
/// \param completion 成功時はクーポン一覧, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getFavoriteShopCouponListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache couponIDs:(NSArray<NSNumber *> * _Nullable)couponIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs searchWord:(NSString * _Nullable)searchWord sortKeys:(NSArray<NautilusCouponSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSArray<NautilusCouponInfo *> * _Nullable, NSError * _Nullable))completion;
/// お気に入り店舗クーポン件数を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param checkDateTime 取得基準時刻. 基準時刻後に配信されたクーポン件数を取得する
///
/// \param completion 成功時はクーポンの件数, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getFavoriteShopCouponCountWithCheckDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSInteger, NSError * _Nullable))completion;
/// 景品クーポン一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param offset 取得開始位置
///
/// \param limit 取得件数の指定
///
/// \param useCache キャッシュを利用する場合 true, しない場合 false
///
/// \param couponIDs クーポンIDの配列
///
/// \param categoryIDs カテゴリIDの配列
///
/// \param sortKeys <code>NautilusCouponSortKey</code> で定義された並び順
///
/// \param checkDateTime 取得基準時刻. 基準時刻後に配信されたクーポンを取得する
///
/// \param exchangeID 景品交換ID
///
/// \param completion 成功時はクーポン一覧, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getPrizeCouponListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache couponIDs:(NSArray<NSNumber *> * _Nullable)couponIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs sortKeys:(NSArray<NautilusCouponSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime exchangeID:(NSInteger)exchangeID completion:(void (^ _Nonnull)(NSArray<NautilusCouponInfo *> * _Nullable, NSError * _Nullable))completion SWIFT_DEPRECATED_MSG("", "getPrizeCouponList(offset:limit:useCache:couponIDs:categoryIDs:searchWord:sortKeys:checkDateTime:completion:)");
/// 景品クーポン一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param offset 取得開始位置
///
/// \param limit 取得件数の指定
///
/// \param useCache キャッシュを利用する場合 true, しない場合 false
///
/// \param couponIDs クーポンIDの配列
///
/// \param categoryIDs カテゴリIDの配列
///
/// \param searchWord 検索ワード
///
/// \param sortKeys <code>NautilusCouponSortKey</code> で定義された並び順
///
/// \param checkDateTime 取得基準時刻. 基準時刻後に配信されたクーポンを取得する
///
/// \param exchangeID 景品交換ID
///
/// \param completion 成功時はクーポン一覧, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getPrizeCouponListWithOffset:(NSInteger)offset limit:(NSInteger)limit useCache:(BOOL)useCache couponIDs:(NSArray<NSNumber *> * _Nullable)couponIDs categoryIDs:(NSArray<NSNumber *> * _Nullable)categoryIDs searchWord:(NSString * _Nullable)searchWord sortKeys:(NSArray<NautilusCouponSortKey *> * _Nullable)sortKeys checkDateTime:(NSDate * _Nullable)checkDateTime exchangeID:(NSInteger)exchangeID completion:(void (^ _Nonnull)(NSArray<NautilusCouponInfo *> * _Nullable, NSError * _Nullable))completion;
/// 景品クーポン件数を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param checkDateTime 取得基準時刻. 基準時刻後に配信されたクーポン件数を取得する
///
/// \param completion 成功時はクーポンの件数, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getPrizeCouponCountWithCheckDateTime:(NSDate * _Nullable)checkDateTime completion:(void (^ _Nonnull)(NSInteger, NSError * _Nullable))completion;
/// クーポン利用を行う
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param targetCouponInfo 利用するクーポンの情報
///
/// \param optionalParameters 追加のパラメータを送りたい場合はこれを利用する
///
/// \param completion 成功時は<code>true</code>, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)useCouponWithTargetCouponInfo:(NautilusCouponUseInfo * _Nonnull)targetCouponInfo optionalParameters:(NSDictionary<NSString *, NSString *> * _Nullable)optionalParameters completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// クーポン複数枚利用
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param couponUseInfoList 利用するクーポンの情報（複数）
///
/// \param optionalParameters 追加のパラメータを送りたい場合はこれを利用する
///
/// \param completion 成功時は<code>true</code>, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)useCouponsWithCouponUseInfoList:(NSArray<NautilusCouponUseInfo *> * _Nonnull)couponUseInfoList optionalParameters:(NSDictionary<NSString *, NSString *> * _Nullable)optionalParameters completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// お気に入りクーポン登録、削除を行う
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param addFavoriteCouponIDs お気に入りに登録したいクーポン
///
/// \param removeFavoriteCouponIDs お気に入りから削除したいクーポン
///
/// \param completion 成功時は<code>true</code>, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)updateFavoriteWithAddFavoriteCouponIDs:(NSArray<NSNumber *> * _Nullable)addFavoriteCouponIDs removeFavoriteCouponIDs:(NSArray<NSNumber *> * _Nullable)removeFavoriteCouponIDs completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// お気に入りクーポンの一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param completion 成功時はお気に入りクーポン一覧, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getFavoriteCouponListWithCompletion:(void (^ _Nonnull)(NSArray<NautilusCouponInfo *> * _Nullable, NSError * _Nullable))completion;
/// クーポンカテゴリー一覧を取得する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param completion 成功時はクーポンカテゴリ, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)getCouponCategoryListWithCompletion:(void (^ _Nonnull)(NSArray<NautilusCouponCategoryInfo *> * _Nullable, NSError * _Nullable))completion;
/// 景品クーポンを発行する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param trigger クーポン発行に必要な情報(<code>NautilusCouponPublishTrigger</code>)
///
/// \param completion 成功時は発行された景品クーポン, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)publishPrizeCouponWithTrigger:(NautilusCouponPublishTrigger * _Nonnull)trigger completion:(void (^ _Nonnull)(NSArray<NautilusCouponInfo *> * _Nullable, NSError * _Nullable))completion;
/// クーポン閲覧記録を送信する
/// Objective-Cから呼び出す場合は、こちらのメソッドを利用してください
/// \param couponLogs 送信する閲覧記録の配列
///
/// \param completion 成功時は<code>true</code>, 失敗時は<code>NSError</code>を受け取るクロージャ
///
- (void)sendCouponLogWithCouponLogs:(NSArray<NautilusCouponLog *> * _Nonnull)couponLogs completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
/// 指定のクーポンの「有効期限の終了日時」を計算する
/// \param coupon クーポン（<code>NautilusCouponInfo</code>）
///
///
/// returns:
/// 有効期限日時（<code>ma_coupon_default_use_limit_type</code>が<code>fixedHour</code>なら使用日・設定時刻、<code>fixedPeriod</code>なら使用日・使用時刻に設定秒を加算した時刻）
- (NSDate * _Nullable)calculateUsedCouponValidEndDateOf:(NautilusCouponInfo * _Nonnull)coupon SWIFT_WARN_UNUSED_RESULT;
/// 指定したクーポンが利用済みであれば、現在、利用可能期間内にあるのかを判定する
/// \param coupon 利用可能期間内かを確認するクーポン
///
///
/// returns:
///
/// クーポンが利用済み、かつ、指定された利用可能期間内にある場合は、<code>true</code> を返す
/// クーポンがまだ利用されていない場合と、利用可能期間外にある場合は、<code>false</code>を返す
- (BOOL)isValidUsedCoupon:(NautilusCouponInfo * _Nonnull)coupon SWIFT_WARN_UNUSED_RESULT;
/// 現在日時からクーポンの有効期間終了までの秒数を取得
/// \param coupon 有効期間を確認するクーポン
///
///
/// returns:
/// 有効期間終了までの秒数
- (NSInteger)calculateUsedCouponValidDurationFromNowOf:(NautilusCouponInfo * _Nonnull)coupon SWIFT_WARN_UNUSED_RESULT;
/// クーポンの有効期間が終了したら通知するオブザーバを登録
/// \param observer <code>NautilusCouponUseValidObserver</code> を継承したクラス
///
/// \param coupon 有効期間内のクーポン
///
///
/// returns:
/// 有効期間の終了通知登録が成功したかどうか
- (BOOL)registerCouponUseValidObserver:(id <NautilusCouponUseValidObserver> _Nonnull)observer for:(NautilusCouponInfo * _Nonnull)coupon SWIFT_WARN_UNUSED_RESULT;
/// クーポンの有効期間が終了したら通知するオブザーバの登録解除
/// \param coupon 有効期間の終了通知を登録済みのクーポン
///
///
/// returns:
/// 処理成功は <code>true</code>, 失敗は <code>false</code>
- (BOOL)unregisterCouponUseValidObserverFor:(NautilusCouponInfo * _Nonnull)coupon;
@end

@class UIImageView;
@class UILabel;
@class UIButton;
@class UIView;
@class NSCoder;

/// クーポンセルクラスの基底クラス
SWIFT_CLASS("_TtC17NautilusCouponSDK22NautilusCouponBaseCell")
@interface NautilusCouponBaseCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified couponCoverImageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified couponTitleLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified couponExpirePeriodLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified couponFavoriteButton;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified couponCoverImageOverlayView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified couponCoverImageOverlayImageView;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


/// クーポンカテゴリーのデータ
SWIFT_CLASS("_TtC17NautilusCouponSDK26NautilusCouponCategoryInfo")
@interface NautilusCouponCategoryInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// セル内のボタンタップ時の処理
SWIFT_PROTOCOL("_TtP17NautilusCouponSDK31NautilusCouponCellActionHandler_")
@protocol NautilusCouponCellActionHandler
- (void)addFavoriteWithCoupon:(NautilusCouponInfo * _Nonnull)coupon;
- (void)removeFavoriteWithCoupon:(NautilusCouponInfo * _Nonnull)coupon;
- (void)showCouponUseConditionWithCouponID:(NSInteger)couponID;
- (void)useCouponWithCouponID:(NSInteger)couponID;
- (void)toggleCouponUseViewWithCell:(NautilusCouponBaseCell * _Nonnull)cell couponID:(NSInteger)couponID;
@end


SWIFT_CLASS("_TtC17NautilusCouponSDK18NautilusCouponData")
@interface NautilusCouponData : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// クーポンの情報をアプリに提供します
SWIFT_PROTOCOL("_TtP17NautilusCouponSDK22NautilusCouponDelegate_")
@protocol NautilusCouponDelegate
/// 引数で渡されたクーポンに対して、アプリ側でアクションを実行するか
/// \param content <code>NautilusCoupon</code>のインスタンス
///
/// \param couponCode クーポンコード
///
/// \param viewController メソッドを呼び出した<code>ViewController</code>
///
- (void)coupon:(NautilusCoupon * _Nonnull)coupon handleCouponCode:(NSString * _Nonnull)couponCode in:(UIViewController * _Nonnull)viewController;
@end


/// ルーターから、クーポン詳細画面を生成するためのプロトコル
SWIFT_PROTOCOL("_TtP17NautilusCouponSDK34NautilusCouponDetailInstantiatable_")
@protocol NautilusCouponDetailInstantiatable
/// クーポン詳細画面を生成する
/// \param app SDKのインスタンス
///
/// \param coupon 詳細画面に表示するクーポン
///
+ (UIViewController * _Nonnull)instantiateWithApp:(NautilusApp * _Nonnull)app coupon:(NautilusCouponInfo * _Nonnull)coupon SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, NautilusCouponError, open) {
/// 不明
  NautilusCouponErrorUnknown = 0,
/// 接続エラー
  NautilusCouponErrorConnection = 1,
/// API処理エラー
  NautilusCouponErrorApiProcessError = 2,
/// HTTP/HTTPS通信エラー
  NautilusCouponErrorHttpConnection = 3,
/// レスポンスのパースエラー
  NautilusCouponErrorParseFailure = 4,
/// 明示的にユーザーによりキャンセルされた
  NautilusCouponErrorUserCancelled = 5,
/// パラメータが不正
  NautilusCouponErrorInvalidParamater = 6,
/// 不正なSDKインスタンス
  NautilusCouponErrorInvalidInstance = 7,
/// 設定値の構成が不正エラー
  NautilusCouponErrorIllegalConfiguration = 8,
/// パラメータ不正
  NautilusCouponErrorInvalidParameters = 100,
/// パラメータが不足している
  NautilusCouponErrorMissingRequiredParameter = 101,
/// パラメータフォーマット不正
  NautilusCouponErrorUnexpectedParameterFormat = 102,
/// サーバ側エラー
  NautilusCouponErrorServerError = 200,
/// メンテナンス中
  NautilusCouponErrorServiceMaintenance = 901,
/// 指定したAPIが存在しない
  NautilusCouponErrorUnknownAPIService = 903,
/// PIDが未登録
  NautilusCouponErrorInvalidUserPID = 905,
/// API KEYが不正
  NautilusCouponErrorDeveloperError = 906,
/// 未ログインのため利用不可
  NautilusCouponErrorRequiresLoginStatus = 907,
};
static NSString * _Nonnull const NautilusCouponErrorDomain = @"NautilusCouponSDK.NautilusCouponError";

typedef SWIFT_ENUM(NSInteger, NautilusCouponExchangeType, open) {
  NautilusCouponExchangeTypeExchange = 1,
  NautilusCouponExchangeTypeNotExchange = 0,
};


/// MA 2.0 クーポン画像のデータ
SWIFT_CLASS("_TtC17NautilusCouponSDK23NautilusCouponImageInfo")
@interface NautilusCouponImageInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// MA 2.0 クーポンのデータ
SWIFT_CLASS("_TtC17NautilusCouponSDK18NautilusCouponInfo")
@interface NautilusCouponInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// ルーターから、クーポン一覧画面を生成するためのプロトコル
SWIFT_PROTOCOL("_TtP17NautilusCouponSDK32NautilusCouponListInstantiatable_")
@protocol NautilusCouponListInstantiatable
/// クーポン一覧画面を生成する
/// \param app SDKのインスタンス
///
/// \param category 表示するカテゴリーの指定。全てのクーポンを表示する場合は、 <code>nil</code>を指定する。
///
+ (UIViewController * _Nonnull)instantiateWithApp:(NautilusApp * _Nonnull)app category:(NautilusCouponCategoryInfo * _Nullable)category SWIFT_WARN_UNUSED_RESULT;
/// 一覧画面で表示しているクーポンのカテゴリー
/// 全てのクーポンを表示している場合は、<code>nil</code>となる。
@property (nonatomic, readonly, strong) NautilusCouponCategoryInfo * _Nullable couponCategory;
@end


/// クーポン閲覧APIに引き渡すパラメーター
SWIFT_CLASS("_TtC17NautilusCouponSDK17NautilusCouponLog")
@interface NautilusCouponLog : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// クーポン閲覧APIで記録するログ種別
typedef SWIFT_ENUM(NSInteger, NautilusCouponLogType, open) {
/// 詳細閲覧
  NautilusCouponLogTypeViewCoupon = 0,
/// クーポンのURLをタップ
  NautilusCouponLogTypeTapCouponURL = 1,
};


/// クーポン発行APIに引き渡すパラメーター
SWIFT_CLASS("_TtC17NautilusCouponSDK28NautilusCouponPublishTrigger")
@interface NautilusCouponPublishTrigger : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// クーポンの発行タイミングの定義
typedef SWIFT_ENUM(NSInteger, NautilusCouponPublishTriggerType, open) {
/// 会員情報の初回登録
  NautilusCouponPublishTriggerTypeInitialMemberRegistration = 0,
/// アプリの初回ダウンロード
  NautilusCouponPublishTriggerTypeAppDownload = 1,
/// 会員カード連携
  NautilusCouponPublishTriggerTypeMemberCardRegistration = 2,
/// 指定コード発行
  NautilusCouponPublishTriggerTypeCouponCode = 3,
/// 景品
  NautilusCouponPublishTriggerTypePrize = 4,
};

/// クーポンタイプ
/// 1:全体 2:個人別 3:店舗別 4:景品
typedef SWIFT_ENUM(NSInteger, NautilusCouponPublishType, open) {
  NautilusCouponPublishTypeCommon = 1,
  NautilusCouponPublishTypePrivate = 2,
  NautilusCouponPublishTypeShop = 3,
  NautilusCouponPublishTypePrize = 4,
};

/// SDK内で遷移可能な画面の一覧
typedef SWIFT_ENUM(NSInteger, NautilusCouponRoutableScreen, open) {
/// カテゴリータブ付きのクーポン一覧画面
  NautilusCouponRoutableScreenCouponTabList = 0,
/// カテゴリータブ無しのクーポン一覧画面
  NautilusCouponRoutableScreenCouponList = 1,
/// クーポン詳細画面
  NautilusCouponRoutableScreenCouponDetail = 2,
/// お気に入りクーポン一覧画面
  NautilusCouponRoutableScreenFavoriteCouponList = 3,
};


/// SDKでの画面遷移を制御するルーター
SWIFT_CLASS("_TtC17NautilusCouponSDK20NautilusCouponRouter")
@interface NautilusCouponRouter : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// 指定の画面の遷移先を登録する
/// \param screen 対象となる遷移先の名称
///
/// \param viewControllerClass 遷移先となる画面のクラス
///
- (void)registerWithScreen:(enum NautilusCouponRoutableScreen)screen viewControllerClass:(SWIFT_METATYPE(UIViewController) _Nonnull)viewControllerClass;
/// 登録済みの遷移先の画面を登録解除する
/// 登録解除後は、デフォルトの遷移先に遷移するようになる
/// \param screen 登録解除の対象となる遷移先の名称
///
- (void)unregisterWithScreen:(enum NautilusCouponRoutableScreen)screen;
/// カテゴリータブ付きのクーポン一覧画面を生成する
/// \param category 表示時に選択するカテゴリーの指定。表示時に特定のタブを選択しないときは、<code>nil</code>を指定する。
///
- (UIViewController * _Nonnull)instantiateCouponTabListWithCategory:(NautilusCouponCategoryInfo * _Nullable)category SWIFT_WARN_UNUSED_RESULT;
/// クーポン一覧画面を生成する
/// \param category 表示するカテゴリーの指定。全てのクーポンを表示する場合は、<code>nil</code>を指定する。
///
- (UIViewController * _Nonnull)instantiateCouponListWithCategory:(NautilusCouponCategoryInfo * _Nullable)category SWIFT_WARN_UNUSED_RESULT;
/// クーポン詳細画面を生成する
/// \param coupon 詳細画面に表示するクーポン
///
- (UIViewController * _Nonnull)instantiateCouponDetailWithCoupon:(NautilusCouponInfo * _Nonnull)coupon SWIFT_WARN_UNUSED_RESULT;
/// お気に入りクーポン一覧画面を生成する
- (UIViewController * _Nonnull)instantiateFavoriteCouponList SWIFT_WARN_UNUSED_RESULT;
/// カテゴリータブ付きのクーポン一覧画面に遷移する
/// note:
/// 基本的にはプッシュ遷移
/// \param category 表示時に選択するカテゴリーの指定。表示時に特定のタブを選択しないときは、<code>nil</code>を指定する。
///
/// \param viewController 表示元になるView Controllerのインスタンス
///
- (void)routeCouponTabListWithCategory:(NautilusCouponCategoryInfo * _Nullable)category in:(UIViewController * _Nonnull)viewController;
/// クーポン一覧画面に遷移する
/// note:
/// 基本的にはプッシュ遷移
/// \param category 表示するカテゴリーの指定。全てのクーポンを表示する場合は、<code>nil</code>を指定する。
///
/// \param viewController 表示元になるView Controllerのインスタンス
///
- (void)routeCouponListWithCategory:(NautilusCouponCategoryInfo * _Nullable)category in:(UIViewController * _Nonnull)viewController;
/// クーポン詳細画面に遷移する
/// note:
/// モーダル遷移
/// \param coupon 詳細画面に表示するクーポン
///
/// \param viewController 表示元になるView Controllerのインスタンス
///
- (void)routeCouponDetailWithCoupon:(NautilusCouponInfo * _Nonnull)coupon in:(UIViewController * _Nonnull)viewController;
/// お気に入りクーポン一覧画面に遷移する
/// note:
/// モーダル遷移
/// \param viewController 表示元になるView Controllerのインスタンス
///
- (void)routeFavoriteCouponListIn:(UIViewController * _Nonnull)viewController;
@end


/// APIから取得するデータの並び順
SWIFT_CLASS("_TtC17NautilusCouponSDK21NautilusCouponSortKey")
@interface NautilusCouponSortKey : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// APIから取得するデータの並び順のキー名
typedef SWIFT_ENUM(NSInteger, NautilusCouponSortKeyName, open) {
/// 掲載開始日時
  NautilusCouponSortKeyNamePublishStartDateTime = 0,
/// 掲載終了日時
  NautilusCouponSortKeyNamePublishEndDateTime = 1,
/// 利用開始日時
  NautilusCouponSortKeyNameUseStartDateTime = 2,
/// 利用終了日時
  NautilusCouponSortKeyNameUseEndDateTime = 3,
/// 表示優先順位
  NautilusCouponSortKeyNameSortNumber = 4,
};

/// APIから取得するデータの並び順の順序指定
typedef SWIFT_ENUM(NSInteger, NautilusCouponSortKeyOrder, open) {
  NautilusCouponSortKeyOrderAscending = 0,
  NautilusCouponSortKeyOrderDescending = 1,
};


/// ルーターから、カテゴリータブ付きのクーポン一覧画面を生成するためのプロトコル
SWIFT_PROTOCOL("_TtP17NautilusCouponSDK35NautilusCouponTabListInstantiatable_")
@protocol NautilusCouponTabListInstantiatable
/// カテゴリータブ付きのクーポン一覧画面を生成する
/// \param app SDKのインスタンス
///
/// \param category 表示時に選択するカテゴリーの指定。表示時に特定のタブを選択しないときは、<code>nil</code>を指定する。
///
+ (UIViewController * _Nonnull)instantiateWithApp:(NautilusApp * _Nonnull)app category:(NautilusCouponCategoryInfo * _Nullable)category SWIFT_WARN_UNUSED_RESULT;
@end


/// クーポン利用APIに引き渡すパラメーター
SWIFT_CLASS("_TtC17NautilusCouponSDK21NautilusCouponUseInfo")
@interface NautilusCouponUseInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// クーポン利用を監視する
SWIFT_PROTOCOL("_TtP17NautilusCouponSDK30NautilusCouponUseValidObserver_")
@protocol NautilusCouponUseValidObserver
/// クーポンが無効になった時呼ばれる
- (void)onCouponInvalidWithCoupon:(NautilusCouponInfo * _Nonnull)coupon;
@end


/// ルーターから、お気に入りクーポン一覧画面を生成するためのプロトコル
SWIFT_PROTOCOL("_TtP17NautilusCouponSDK40NautilusFavoriteCouponListInstantiatable_")
@protocol NautilusFavoriteCouponListInstantiatable
/// クーポン詳細画面を生成する
/// \param app SDKのインスタンス
///
+ (UIViewController * _Nonnull)instantiateWithApp:(NautilusApp * _Nonnull)app SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, PublishTiming, open) {
  PublishTimingFirstRegister = 1,
  PublishTimingFirstDownload = 2,
  PublishTimingCardPublication = 3,
  PublishTimingCodePublication = 4,
};

typedef SWIFT_ENUM(NSInteger, SectionType, open) {
  SectionTypeUseStatus = 0,
  SectionTypeNone = 1,
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
