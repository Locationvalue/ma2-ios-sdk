#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef NAUTILUSSTAMPUISDK_SWIFT_H
#define NAUTILUSSTAMPUISDK_SWIFT_H
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
@import NautilusCodeReaderSDK;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusStampUISDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class NautilusApp;
@class NautilusStampCardInfo;
@class UIViewController;

/// ルーターから、スタンプ詳細画面を生成するためのプロトコル
SWIFT_PROTOCOL("_TtP18NautilusStampUISDK37NautilusStampCardDetailInstantiatable_")
@protocol NautilusStampCardDetailInstantiatable
/// スタンプ詳細画面を生成する
/// \param app SDKのインスタンス
///
/// \param stampCard スタンプ情報
///
/// \param hasCloseButton 閉じるボタンを表示するか true:表示する, false:表示しない
///
///
/// returns:
/// カスタムスタンプ詳細画面
+ (UIViewController * _Nonnull)instantiateWithApp:(NautilusApp * _Nonnull)app stampCard:(NautilusStampCardInfo * _Nonnull)stampCard hasCloseButton:(BOOL)hasCloseButton SWIFT_WARN_UNUSED_RESULT;
@end

@class NSString;
@class NSBundle;
@class NSCoder;

/// スタンプカード詳細画面
SWIFT_CLASS("_TtC18NautilusStampUISDK37NautilusStampCardDetailViewController")
@interface NautilusStampCardDetailViewController : UIViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



@interface NautilusStampCardDetailViewController (SWIFT_EXTENSION(NautilusStampUISDK)) <NautilusStampCardDetailInstantiatable>
+ (UIViewController * _Nonnull)instantiateWithApp:(NautilusApp * _Nonnull)app stampCard:(NautilusStampCardInfo * _Nonnull)stampCard hasCloseButton:(BOOL)hasCloseButton SWIFT_WARN_UNUSED_RESULT;
@end



@interface NautilusStampCardDetailViewController (SWIFT_EXTENSION(NautilusStampUISDK)) <NautilusCodeReaderHandler>
- (BOOL)codeReaderHandle:(UIViewController * _Nonnull)viewController codeText:(NSString * _Nonnull)codeText SWIFT_WARN_UNUSED_RESULT;
- (BOOL)handleCodeDetectionError:(UIViewController * _Nonnull)viewController error:(enum NautilusCodeReaderError)error SWIFT_WARN_UNUSED_RESULT;
@end




/// ルーターから、スタンプ一覧画面を生成するためのプロトコル
SWIFT_PROTOCOL("_TtP18NautilusStampUISDK35NautilusStampCardListInstantiatable_")
@protocol NautilusStampCardListInstantiatable
/// スタンプ一覧画面を生成する
/// \param app SDKのインスタンス
///
///
/// returns:
/// カスタムスタンプ一覧画面
+ (UIViewController * _Nonnull)instantiateWithApp:(NautilusApp * _Nonnull)app SWIFT_WARN_UNUSED_RESULT;
@end


/// スタンプカード一覧画面
SWIFT_CLASS("_TtC18NautilusStampUISDK35NautilusStampCardListViewController")
@interface NautilusStampCardListViewController : UIViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NautilusStampCardListViewController (SWIFT_EXTENSION(NautilusStampUISDK)) <NautilusStampCardListInstantiatable>
+ (UIViewController * _Nonnull)instantiateWithApp:(NautilusApp * _Nonnull)app SWIFT_WARN_UNUSED_RESULT;
@end

@class NautilusStampCardUI;
@class NautilusStampPrizeInfo;

/// スタンプカード詳細画面で、景品交換後のダイアログでのアプリ挙動を規定するためのインターフェース
SWIFT_PROTOCOL("_TtP18NautilusStampUISDK36NautilusStampCardPrizeActionDelegate_")
@protocol NautilusStampCardPrizeActionDelegate
/// 景品交換結果ダイアログの景品ボタンのタイトルを設定する
/// \param stampCard SDKインスタンス
///
/// \param stampCardInfo 詳細画面に表示されているスタンプカードのデータ
///
/// \param prizeInfo 景品交換を行なったスタンプ景品のデータ
///
/// \param viewController 表示されている詳細画面
///
///
/// returns:
/// 景品交換結果ダイアログの景品ボタンのタイトル
- (NSString * _Nonnull)stampCard:(NautilusStampCardUI * _Nonnull)stampCard showPrizeButtonTitleForStampCardInfo:(NautilusStampCardInfo * _Nonnull)stampCardInfo prizeInfo:(NautilusStampPrizeInfo * _Nonnull)prizeInfo in:(UIViewController * _Nonnull)viewController SWIFT_WARN_UNUSED_RESULT;
/// 景品交換結果ダイアログから景品を表示する
/// note:
/// SDKで戻り値を見て、何らかの後処理をする、などは行なっていない
/// \param stampCard SDKインスタンス
///
/// \param stampCardInfo 詳細画面に表示されているスタンプカードのデータ
///
/// \param prizeInfo 景品交換を行なったスタンプ景品のデータ
///
/// \param viewController 表示されている詳細画面
///
///
/// returns:
/// 実装側で表示などの処理に成功した場合true, 失敗はfalse
- (BOOL)stampCard:(NautilusStampCardUI * _Nonnull)stampCard handleStampCardInfo:(NautilusStampCardInfo * _Nonnull)stampCardInfo prizeInfo:(NautilusStampPrizeInfo * _Nonnull)prizeInfo in:(UIViewController * _Nonnull)viewController SWIFT_WARN_UNUSED_RESULT;
@end

enum NautilusStampRoutableScreen : NSInteger;
@class NautilusCodeReaderSetting;

/// SDKでの画面遷移を制御するルーター
SWIFT_CLASS("_TtC18NautilusStampUISDK23NautilusStampCardRouter")
@interface NautilusStampCardRouter : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// 指定の画面の遷移先を登録する
/// \param screen 対象となる遷移先の名称
///
/// \param viewControllerClass 遷移先となる画面のクラス
///
- (void)registerWithScreen:(enum NautilusStampRoutableScreen)screen viewControllerClass:(SWIFT_METATYPE(UIViewController) _Nonnull)viewControllerClass;
/// 登録済みの遷移先の画面を登録解除する
/// 登録解除後は、デフォルトの遷移先に遷移するようになる
/// \param screen 登録解除の対象となる遷移先の名称
///
- (void)unregisterWithScreen:(enum NautilusStampRoutableScreen)screen;
/// スタンプカード一覧画面を生成する
///
/// returns:
/// スタンプカード一覧画面
- (UIViewController * _Nonnull)instantiateStampList SWIFT_WARN_UNUSED_RESULT;
/// スタンプカード詳細画面を生成する
/// \param stampCard スタンプカード情報
///
/// \param hasCloseButton 閉じるボタンを表示するか true:表示する, false:表示しない
///
///
/// returns:
/// スタンプカード詳細画面
- (UIViewController * _Nonnull)instantiateStampDetailWithStampCard:(NautilusStampCardInfo * _Nonnull)stampCard hasCloseButton:(BOOL)hasCloseButton SWIFT_WARN_UNUSED_RESULT;
/// コードリーダー画面を生成する
/// \param setting コードリーダー画面の表示設定
///
/// \param handler コード読み込み結果の受け取り先
///
///
/// returns:
/// コードリーダー画面
- (UIViewController * _Nonnull)instantiateStampCodeReaderWithSetting:(NautilusCodeReaderSetting * _Nonnull)setting handler:(id <NautilusCodeReaderHandler> _Nonnull)handler SWIFT_WARN_UNUSED_RESULT;
/// スタンプカード一覧画面に遷移する
/// \param viewController 表示元になるView Controllerのインスタンス
///
- (void)routeStampCardListIn:(UIViewController * _Nonnull)viewController;
/// スタンプカード詳細画面に遷移する
/// モーダル遷移(fullScreen)
/// \param stampCard スタンプカード情報
///
/// \param viewController 表示元になるView Controllerのインスタンス
///
/// \param hasCloseButton 閉じるボタンを表示するか true:表示する, false:表示しない
///
- (void)routeStampDetailWithStampCard:(NautilusStampCardInfo * _Nonnull)stampCard hasCloseButton:(BOOL)hasCloseButton in:(UIViewController * _Nonnull)viewController;
/// コードリーダー画面に遷移する
/// \param setting コードリーダー画面の表示設定
///
/// \param handler コード読み込み結果の受け取り先
///
/// \param viewController 表示元になるView Controllerのインスタンス
///
- (void)routeStampCodeReaderWithSetting:(NautilusCodeReaderSetting * _Nonnull)setting handler:(id <NautilusCodeReaderHandler> _Nonnull)handler in:(UIViewController * _Nonnull)viewController;
@end

@class NautilusComponentDependency;
@class NSError;

/// アプリとのインターフェース
SWIFT_CLASS("_TtC18NautilusStampUISDK19NautilusStampCardUI")
@interface NautilusStampCardUI : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
/// SDKでの画面遷移を制御するルーター
@property (nonatomic, readonly, strong) NautilusStampCardRouter * _Nonnull router;
/// スタンプカード詳細画面で、景品交換後のダイアログでのアプリ挙動を規定するためのインターフェース
@property (nonatomic, weak) id <NautilusStampCardPrizeActionDelegate> _Nullable prizeActionDelegate;
/// <code>NautilusStampUI</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
+ (NautilusStampCardUI * _Nonnull)stampCardUI SWIFT_WARN_UNUSED_RESULT;
+ (NautilusStampCardUI * _Nonnull)stampUIAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// スタンプカード一覧画面に画面遷移する
/// スタンプカードが1枚の場合, 詳細画面に遷移する
/// \param viewController 画面遷移元となる ViewController
///
- (void)presentStampCardListViewControllerIn:(UIViewController * _Nonnull)viewController;
/// スタンプカード一覧画面を生成する
///
/// returns:
/// スタンプカード一覧画面
- (NautilusStampCardListViewController * _Nonnull)instantiateStampCardListViewController SWIFT_WARN_UNUSED_RESULT;
/// スタンプカード詳細画面を生成する
/// \param stampCardID 詳細画面に表示するスタンプカードのID
///
/// \param hasCloseButton 閉じるボタンを表示するか true:表示する, false:表示しない
///
///
/// returns:
/// スタンプカード詳細画面
- (NautilusStampCardDetailViewController * _Nonnull)instantiateStampCardDetailViewControllerWithStampCardID:(NSInteger)stampCardID hasCloseButton:(BOOL)hasCloseButton SWIFT_WARN_UNUSED_RESULT;
/// スタンプカード詳細画面を生成する
/// \param stampCard 詳細画面に表示するスタンプカードのデータ
///
/// \param hasCloseButton 閉じるボタンを表示するか true:表示する, false:表示しない
///
///
/// returns:
/// スタンプカード詳細画面
- (NautilusStampCardDetailViewController * _Nonnull)instantiateStampCardDetailViewControllerWithStampCard:(NautilusStampCardInfo * _Nonnull)stampCard hasCloseButton:(BOOL)hasCloseButton SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// SDK内で遷移可能な画面の一覧
typedef SWIFT_ENUM(NSInteger, NautilusStampRoutableScreen, open) {
/// スタンプ一覧画面
  NautilusStampRoutableScreenStampCardList = 0,
/// スタンプ詳細画面
  NautilusStampRoutableScreenStampCardDetail = 1,
/// コード読み取り画面
  NautilusStampRoutableScreenStampCodeReader = 2,
};


@interface UINavigationController (SWIFT_EXTENSION(NautilusStampUISDK))
/// デザインを保持するためNautilusStampUISDK内で初期化した<code>UINavigationController</code>に対して向きを設定
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
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
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef NAUTILUSSTAMPUISDK_SWIFT_H
#define NAUTILUSSTAMPUISDK_SWIFT_H
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
@import NautilusCodeReaderSDK;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusStampUISDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

@class NautilusApp;
@class NautilusStampCardInfo;
@class UIViewController;

/// ルーターから、スタンプ詳細画面を生成するためのプロトコル
SWIFT_PROTOCOL("_TtP18NautilusStampUISDK37NautilusStampCardDetailInstantiatable_")
@protocol NautilusStampCardDetailInstantiatable
/// スタンプ詳細画面を生成する
/// \param app SDKのインスタンス
///
/// \param stampCard スタンプ情報
///
/// \param hasCloseButton 閉じるボタンを表示するか true:表示する, false:表示しない
///
///
/// returns:
/// カスタムスタンプ詳細画面
+ (UIViewController * _Nonnull)instantiateWithApp:(NautilusApp * _Nonnull)app stampCard:(NautilusStampCardInfo * _Nonnull)stampCard hasCloseButton:(BOOL)hasCloseButton SWIFT_WARN_UNUSED_RESULT;
@end

@class NSString;
@class NSBundle;
@class NSCoder;

/// スタンプカード詳細画面
SWIFT_CLASS("_TtC18NautilusStampUISDK37NautilusStampCardDetailViewController")
@interface NautilusStampCardDetailViewController : UIViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



@interface NautilusStampCardDetailViewController (SWIFT_EXTENSION(NautilusStampUISDK)) <NautilusStampCardDetailInstantiatable>
+ (UIViewController * _Nonnull)instantiateWithApp:(NautilusApp * _Nonnull)app stampCard:(NautilusStampCardInfo * _Nonnull)stampCard hasCloseButton:(BOOL)hasCloseButton SWIFT_WARN_UNUSED_RESULT;
@end



@interface NautilusStampCardDetailViewController (SWIFT_EXTENSION(NautilusStampUISDK)) <NautilusCodeReaderHandler>
- (BOOL)codeReaderHandle:(UIViewController * _Nonnull)viewController codeText:(NSString * _Nonnull)codeText SWIFT_WARN_UNUSED_RESULT;
- (BOOL)handleCodeDetectionError:(UIViewController * _Nonnull)viewController error:(enum NautilusCodeReaderError)error SWIFT_WARN_UNUSED_RESULT;
@end




/// ルーターから、スタンプ一覧画面を生成するためのプロトコル
SWIFT_PROTOCOL("_TtP18NautilusStampUISDK35NautilusStampCardListInstantiatable_")
@protocol NautilusStampCardListInstantiatable
/// スタンプ一覧画面を生成する
/// \param app SDKのインスタンス
///
///
/// returns:
/// カスタムスタンプ一覧画面
+ (UIViewController * _Nonnull)instantiateWithApp:(NautilusApp * _Nonnull)app SWIFT_WARN_UNUSED_RESULT;
@end


/// スタンプカード一覧画面
SWIFT_CLASS("_TtC18NautilusStampUISDK35NautilusStampCardListViewController")
@interface NautilusStampCardListViewController : UIViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@interface NautilusStampCardListViewController (SWIFT_EXTENSION(NautilusStampUISDK)) <NautilusStampCardListInstantiatable>
+ (UIViewController * _Nonnull)instantiateWithApp:(NautilusApp * _Nonnull)app SWIFT_WARN_UNUSED_RESULT;
@end

@class NautilusStampCardUI;
@class NautilusStampPrizeInfo;

/// スタンプカード詳細画面で、景品交換後のダイアログでのアプリ挙動を規定するためのインターフェース
SWIFT_PROTOCOL("_TtP18NautilusStampUISDK36NautilusStampCardPrizeActionDelegate_")
@protocol NautilusStampCardPrizeActionDelegate
/// 景品交換結果ダイアログの景品ボタンのタイトルを設定する
/// \param stampCard SDKインスタンス
///
/// \param stampCardInfo 詳細画面に表示されているスタンプカードのデータ
///
/// \param prizeInfo 景品交換を行なったスタンプ景品のデータ
///
/// \param viewController 表示されている詳細画面
///
///
/// returns:
/// 景品交換結果ダイアログの景品ボタンのタイトル
- (NSString * _Nonnull)stampCard:(NautilusStampCardUI * _Nonnull)stampCard showPrizeButtonTitleForStampCardInfo:(NautilusStampCardInfo * _Nonnull)stampCardInfo prizeInfo:(NautilusStampPrizeInfo * _Nonnull)prizeInfo in:(UIViewController * _Nonnull)viewController SWIFT_WARN_UNUSED_RESULT;
/// 景品交換結果ダイアログから景品を表示する
/// note:
/// SDKで戻り値を見て、何らかの後処理をする、などは行なっていない
/// \param stampCard SDKインスタンス
///
/// \param stampCardInfo 詳細画面に表示されているスタンプカードのデータ
///
/// \param prizeInfo 景品交換を行なったスタンプ景品のデータ
///
/// \param viewController 表示されている詳細画面
///
///
/// returns:
/// 実装側で表示などの処理に成功した場合true, 失敗はfalse
- (BOOL)stampCard:(NautilusStampCardUI * _Nonnull)stampCard handleStampCardInfo:(NautilusStampCardInfo * _Nonnull)stampCardInfo prizeInfo:(NautilusStampPrizeInfo * _Nonnull)prizeInfo in:(UIViewController * _Nonnull)viewController SWIFT_WARN_UNUSED_RESULT;
@end

enum NautilusStampRoutableScreen : NSInteger;
@class NautilusCodeReaderSetting;

/// SDKでの画面遷移を制御するルーター
SWIFT_CLASS("_TtC18NautilusStampUISDK23NautilusStampCardRouter")
@interface NautilusStampCardRouter : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// 指定の画面の遷移先を登録する
/// \param screen 対象となる遷移先の名称
///
/// \param viewControllerClass 遷移先となる画面のクラス
///
- (void)registerWithScreen:(enum NautilusStampRoutableScreen)screen viewControllerClass:(SWIFT_METATYPE(UIViewController) _Nonnull)viewControllerClass;
/// 登録済みの遷移先の画面を登録解除する
/// 登録解除後は、デフォルトの遷移先に遷移するようになる
/// \param screen 登録解除の対象となる遷移先の名称
///
- (void)unregisterWithScreen:(enum NautilusStampRoutableScreen)screen;
/// スタンプカード一覧画面を生成する
///
/// returns:
/// スタンプカード一覧画面
- (UIViewController * _Nonnull)instantiateStampList SWIFT_WARN_UNUSED_RESULT;
/// スタンプカード詳細画面を生成する
/// \param stampCard スタンプカード情報
///
/// \param hasCloseButton 閉じるボタンを表示するか true:表示する, false:表示しない
///
///
/// returns:
/// スタンプカード詳細画面
- (UIViewController * _Nonnull)instantiateStampDetailWithStampCard:(NautilusStampCardInfo * _Nonnull)stampCard hasCloseButton:(BOOL)hasCloseButton SWIFT_WARN_UNUSED_RESULT;
/// コードリーダー画面を生成する
/// \param setting コードリーダー画面の表示設定
///
/// \param handler コード読み込み結果の受け取り先
///
///
/// returns:
/// コードリーダー画面
- (UIViewController * _Nonnull)instantiateStampCodeReaderWithSetting:(NautilusCodeReaderSetting * _Nonnull)setting handler:(id <NautilusCodeReaderHandler> _Nonnull)handler SWIFT_WARN_UNUSED_RESULT;
/// スタンプカード一覧画面に遷移する
/// \param viewController 表示元になるView Controllerのインスタンス
///
- (void)routeStampCardListIn:(UIViewController * _Nonnull)viewController;
/// スタンプカード詳細画面に遷移する
/// モーダル遷移(fullScreen)
/// \param stampCard スタンプカード情報
///
/// \param viewController 表示元になるView Controllerのインスタンス
///
/// \param hasCloseButton 閉じるボタンを表示するか true:表示する, false:表示しない
///
- (void)routeStampDetailWithStampCard:(NautilusStampCardInfo * _Nonnull)stampCard hasCloseButton:(BOOL)hasCloseButton in:(UIViewController * _Nonnull)viewController;
/// コードリーダー画面に遷移する
/// \param setting コードリーダー画面の表示設定
///
/// \param handler コード読み込み結果の受け取り先
///
/// \param viewController 表示元になるView Controllerのインスタンス
///
- (void)routeStampCodeReaderWithSetting:(NautilusCodeReaderSetting * _Nonnull)setting handler:(id <NautilusCodeReaderHandler> _Nonnull)handler in:(UIViewController * _Nonnull)viewController;
@end

@class NautilusComponentDependency;
@class NSError;

/// アプリとのインターフェース
SWIFT_CLASS("_TtC18NautilusStampUISDK19NautilusStampCardUI")
@interface NautilusStampCardUI : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
/// SDKでの画面遷移を制御するルーター
@property (nonatomic, readonly, strong) NautilusStampCardRouter * _Nonnull router;
/// スタンプカード詳細画面で、景品交換後のダイアログでのアプリ挙動を規定するためのインターフェース
@property (nonatomic, weak) id <NautilusStampCardPrizeActionDelegate> _Nullable prizeActionDelegate;
/// <code>NautilusStampUI</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
+ (NautilusStampCardUI * _Nonnull)stampCardUI SWIFT_WARN_UNUSED_RESULT;
+ (NautilusStampCardUI * _Nonnull)stampUIAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
/// スタンプカード一覧画面に画面遷移する
/// スタンプカードが1枚の場合, 詳細画面に遷移する
/// \param viewController 画面遷移元となる ViewController
///
- (void)presentStampCardListViewControllerIn:(UIViewController * _Nonnull)viewController;
/// スタンプカード一覧画面を生成する
///
/// returns:
/// スタンプカード一覧画面
- (NautilusStampCardListViewController * _Nonnull)instantiateStampCardListViewController SWIFT_WARN_UNUSED_RESULT;
/// スタンプカード詳細画面を生成する
/// \param stampCardID 詳細画面に表示するスタンプカードのID
///
/// \param hasCloseButton 閉じるボタンを表示するか true:表示する, false:表示しない
///
///
/// returns:
/// スタンプカード詳細画面
- (NautilusStampCardDetailViewController * _Nonnull)instantiateStampCardDetailViewControllerWithStampCardID:(NSInteger)stampCardID hasCloseButton:(BOOL)hasCloseButton SWIFT_WARN_UNUSED_RESULT;
/// スタンプカード詳細画面を生成する
/// \param stampCard 詳細画面に表示するスタンプカードのデータ
///
/// \param hasCloseButton 閉じるボタンを表示するか true:表示する, false:表示しない
///
///
/// returns:
/// スタンプカード詳細画面
- (NautilusStampCardDetailViewController * _Nonnull)instantiateStampCardDetailViewControllerWithStampCard:(NautilusStampCardInfo * _Nonnull)stampCard hasCloseButton:(BOOL)hasCloseButton SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// SDK内で遷移可能な画面の一覧
typedef SWIFT_ENUM(NSInteger, NautilusStampRoutableScreen, open) {
/// スタンプ一覧画面
  NautilusStampRoutableScreenStampCardList = 0,
/// スタンプ詳細画面
  NautilusStampRoutableScreenStampCardDetail = 1,
/// コード読み取り画面
  NautilusStampRoutableScreenStampCodeReader = 2,
};


@interface UINavigationController (SWIFT_EXTENSION(NautilusStampUISDK))
/// デザインを保持するためNautilusStampUISDK内で初期化した<code>UINavigationController</code>に対して向きを設定
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
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
