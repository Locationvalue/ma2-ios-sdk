#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
#ifndef NAUTILUSINAPPMESSAGESDK_SWIFT_H
#define NAUTILUSINAPPMESSAGESDK_SWIFT_H
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

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NautilusInAppMessageSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)


/// アプリ内メッセージのデータ
SWIFT_CLASS("_TtC23NautilusInAppMessageSDK20NautilusInAppMessage")
@interface NautilusInAppMessage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@end




enum NautilusInAppMessageViewType : NSInteger;
@class NSString;
@class NSURL;

/// アプリ内メッセージを作成するためのBuilder
SWIFT_CLASS("_TtC23NautilusInAppMessageSDK27NautilusInAppMessageBuilder")
@interface NautilusInAppMessageBuilder : NSObject
/// イニシャライザ
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// アプリ内メッセージの表示形式を設定する
/// \param viewType 表示形式
///
- (void)setViewType:(enum NautilusInAppMessageViewType)viewType;
/// アプリ内メッセージに表示するメッセージ本文を設定する
/// \param message アプリ内メッセージのメッセージ本文
///
- (void)setMessage:(NSString * _Nonnull)message;
/// アプリ内メッセージに表示する画像のURLを設定する
/// \param imageURL アプリ内メッセージに表示する画像のURL
///
- (void)setImageURL:(NSURL * _Nullable)imageURL;
/// アプリ内メッセージからアクションで遷移する先のURLを設定する
/// \param transitionURL アプリ内メッセージから遷移する先のURL
///
- (void)setTransitionURL:(NSURL * _Nullable)transitionURL;
/// アプリ内メッセージからアクションで遷移する際に付与するパラメーターを設定する
/// \param transitionParameter アプリ内メッセージから遷移する際に付与するパラメーター
///
- (void)setTransitionParameter:(NSString * _Nullable)transitionParameter;
/// アプリ内メッセージの表示優先順位を設定する
/// \param sortNumber 表示優先順位
///
- (void)setSortNumber:(NSInteger)sortNumber;
/// 指定されたパラメーターでアプリ内メッセージを生成する
///
/// returns:
/// 現在までに設定されたパラメーターを反映したアプリ内メッセージのインスタンス
- (NautilusInAppMessage * _Nonnull)build SWIFT_WARN_UNUSED_RESULT;
@end

@protocol NautilusInAppMessageControllerDelegate;

/// アプリ内メッセージの表示を制御するためのコントローラー
SWIFT_CLASS("_TtC23NautilusInAppMessageSDK30NautilusInAppMessageController")
@interface NautilusInAppMessageController : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, weak) id <NautilusInAppMessageControllerDelegate> _Nullable delegate;)
+ (id <NautilusInAppMessageControllerDelegate> _Nullable)delegate SWIFT_WARN_UNUSED_RESULT;
+ (void)setDelegate:(id <NautilusInAppMessageControllerDelegate> _Nullable)value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// アプリ内メッセージをキューに追加する
/// 追加されたアプリ内メッセージは、指定された優先順に基づいて、キューの適切な位置に追加される
/// \param message 追加するアプリ内メッセージ
///
+ (void)addInAppMessage:(NautilusInAppMessage * _Nonnull)message;
@end


SWIFT_PROTOCOL("_TtP23NautilusInAppMessageSDK38NautilusInAppMessageControllerDelegate_")
@protocol NautilusInAppMessageControllerDelegate
/// アプリ内メッセージが表示される前に呼ばれる
/// \param inAppMessageID 表示されるアプリ内メッセージのID
///
- (void)inAppMessageBeforeDisplayInAppMessageID:(NSInteger)inAppMessageID;
/// アプリ内メッセージが表示された後に呼ばれる
/// \param inAppMessageID 表示されたアプリ内メッセージのID
///
- (void)inAppMessageAfterDisplayInAppMessageID:(NSInteger)inAppMessageID;
/// アプリ内メッセージが非表示になる前に呼ばれる
/// \param inAppMessageID 非表示になるアプリ内メッセージのID
///
- (void)inAppMessageBeforeCloseInAppMessageID:(NSInteger)inAppMessageID;
/// アプリ内メッセージが非表示になった後に呼ばれる
/// \param inAppMessageID 非表示になったアプリ内メッセージのID
///
- (void)inAppMessageAfterCloseInAppMessageID:(NSInteger)inAppMessageID;
/// アプリ内メッセージの「閉じる」ボタンがタップされた時に呼ばれる
/// \param inAppMessageID 「閉じる」ボタンがタップされたアプリ内メッセージのID
///
- (void)inAppMessageClickCloseButtonInAppMessageID:(NSInteger)inAppMessageID;
/// アプリ内メッセージのタップされた時に呼ばれる
/// アプリ内メッセージのタップは、表示形式によって、以下のタイミングになる
/// <ul>
///   <li>
///     トースト
///     <ul>
///       <li>
///         トースト自体がタップされた
///       </li>
///     </ul>
///   </li>
///   <li>
///     モーダル
///     <ul>
///       <li>
///         モーダルに表示されているボタンがタップされた
///       </li>
///     </ul>
///   </li>
/// </ul>
/// \param inAppMessageID タップされたアプリ内メッセージのID
///
- (void)inAppMessageClickActionButtonInAppMessageID:(NSInteger)inAppMessageID;
/// アプリ内メッセージに設定されているURLをアプリで扱うかを判定する
/// デフォルトでは、 <code>false</code> を返却する（SDK内で処理をする）
/// \param inAppMessageID 対象のアプリ内メッセージのID
///
/// \param url 遷移先となるURL
///
- (BOOL)inAppMessageCanHandleTransitionURLInAppMessageID:(NSInteger)inAppMessageID url:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
/// アプリ内メッセージに設定されているURLをアプリで表示する
/// デフォルトでは、SDKで処理を行うので、デフォルト実装は何もしない処理
/// \param url 遷移先のURL
///
- (void)inAppMessageHandleTransitionURLWithUrl:(NSURL * _Nonnull)url;
/// アプリ内メッセージに設定されているアプリ内遷移を処理する
/// \param transition アプリ内遷移の指定
///
- (void)inAppMessageHandleTransitionWithTransition:(NSString * _Nonnull)transition;
@end

@class NautilusComponentDependency;
@class NautilusApp;
@class NSError;

SWIFT_CLASS("_TtC23NautilusInAppMessageSDK27NautilusInAppMessageFeature")
@interface NautilusInAppMessageFeature : NSObject <NautilusFeature>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NautilusComponentType componentType;)
+ (NautilusComponentType)componentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSArray<NautilusComponentDependency *> * _Nonnull dependencies;)
+ (NSArray<NautilusComponentDependency *> * _Nonnull)dependencies SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable configFilename;)
+ (NSString * _Nullable)configFilename SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, strong) NautilusApp * _Nonnull app;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
/// <code>NautilusInAppMessageSDK</code>の機能の利用可否ステータス
@property (nonatomic, readonly) enum NautilusFeatureStatus featureStatus;
+ (void)initializeWithApplication:(NautilusApp * _Nonnull)application completion:(void (^ _Nonnull)(BOOL, NSError * _Nullable))completion;
+ (NautilusInAppMessageFeature * _Nonnull)inAppMessage SWIFT_WARN_UNUSED_RESULT;
+ (NautilusInAppMessageFeature * _Nonnull)inAppMessageAppNamed:(NSString * _Nonnull)appName SWIFT_WARN_UNUSED_RESULT;
- (void)triggerWithEventID:(NSString * _Nonnull)eventID;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




/// アプリ内メッセージの表示形式
typedef SWIFT_ENUM(NSInteger, NautilusInAppMessageViewType, open) {
/// 不明
/// 将来的に追加があったときのフォールバック用
  NautilusInAppMessageViewTypeUnknown = -1,
/// トースト
  NautilusInAppMessageViewTypeToast = 1,
/// モーダルダイアログ
  NautilusInAppMessageViewTypeModal = 2,
};







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
