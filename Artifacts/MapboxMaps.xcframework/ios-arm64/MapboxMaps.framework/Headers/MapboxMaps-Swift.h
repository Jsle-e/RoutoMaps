#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef MAPBOXMAPS_SWIFT_H
#define MAPBOXMAPS_SWIFT_H
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
@import CoreLocation;
@import Foundation;
@import MapboxCoreMaps;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MapboxMaps",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

SWIFT_CLASS("_TtC10MapboxMaps26AnnotationOrchestratorImpl")
@interface AnnotationOrchestratorImpl : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC10MapboxMaps14GestureHandler")
@interface GestureHandler : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC10MapboxMaps22AnyTouchGestureHandler")
@interface AnyTouchGestureHandler : GestureHandler
@end

@class UIGestureRecognizer;

@interface AnyTouchGestureHandler (SWIFT_EXTENSION(MapboxMaps)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end

@class NSCoder;

SWIFT_CLASS("_TtC10MapboxMaps15AttributionView")
@interface AttributionView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end





@class CLLocationManager;
@class CLLocation;
@class CLHeading;

SWIFT_CLASS("_TtC10MapboxMaps30CLLocationManagerDelegateProxy")
@interface CLLocationManagerDelegateProxy : NSObject <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateHeading:(CLHeading * _Nonnull)newHeading;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didFailWithError:(NSError * _Nonnull)error;
- (void)locationManagerDidChangeAuthorization:(CLLocationManager * _Nonnull)manager;
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(CLLocationManager * _Nonnull)manager SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC10MapboxMaps15CameraDebugView")
@interface CameraDebugView : UIView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end




/// A view that represents a camera view port.
SWIFT_CLASS("_TtC10MapboxMaps10CameraView")
@interface CameraView : UIView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end





/// <code>DistanceFormatter</code> implements a formatter object meant to be used for
/// geographic distances. The user’s current locale will be used by default
/// but it can be overriden by changing the locale property of the numberFormatter.
SWIFT_CLASS("_TtC10MapboxMaps17DistanceFormatter")
@interface DistanceFormatter : NSMeasurementFormatter
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


/// <code>DoubleTapToZoomInGestureHandler</code> updates the map camera in response
/// to double tap gestures with 1 touch
SWIFT_CLASS("_TtC10MapboxMaps31DoubleTapToZoomInGestureHandler")
@interface DoubleTapToZoomInGestureHandler : GestureHandler
@end


/// <code>DoubleTouchToZoomOutGestureHandler</code> updates the map camera in response
/// to single tap gestures with 2 touches
SWIFT_CLASS("_TtC10MapboxMaps34DoubleTouchToZoomOutGestureHandler")
@interface DoubleTouchToZoomOutGestureHandler : GestureHandler
@end


@protocol MTLDevice;
@class MBMCustomLayerRenderParameters;
@protocol MTLCommandBuffer;
@class MTLRenderPassDescriptor;

SWIFT_CLASS("_TtC10MapboxMaps19EmptyCustomRenderer")
@interface EmptyCustomRenderer : NSObject <MBMCustomLayerHost>
- (void)renderingWillStart:(id <MTLDevice> _Nonnull)metalDevice colorPixelFormat:(NSUInteger)colorPixelFormat depthStencilPixelFormat:(NSUInteger)depthStencilPixelFormat;
- (void)render:(MBMCustomLayerRenderParameters * _Nonnull)parameters mtlCommandBuffer:(id <MTLCommandBuffer> _Nonnull)mtlCommandBuffer mtlRenderPassDescriptor:(MTLRenderPassDescriptor * _Nonnull)mtlRenderPassDescriptor;
- (void)renderingWillEnd;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end







@interface MBMGlyphsRasterizationOptions (SWIFT_EXTENSION(MapboxMaps))
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@end



SWIFT_CLASS("_TtC10MapboxMaps18InfoButtonOrnament")
@interface InfoButtonOrnament : UIView
@property (nonatomic, getter=isHidden) BOOL hidden;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)infoTapped;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10MapboxMaps35InterruptDecelerationGestureHandler")
@interface InterruptDecelerationGestureHandler : GestureHandler
@end


@interface InterruptDecelerationGestureHandler (SWIFT_EXTENSION(MapboxMaps)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end




SWIFT_CLASS("_TtC10MapboxMaps8LogoView")
@interface LogoView : UIView
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (void)drawRect:(CGRect)rect;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10MapboxMaps23LongPressGestureHandler")
@interface LongPressGestureHandler : NSObject <UIGestureRecognizerDelegate>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end


/// Options used when initializing <code>MapView</code>.
/// Contains the <code>MapOptions</code> (including <code>GlyphsRasterizationOptions</code>)
/// that are required to initialize a <code>MapView</code>.
SWIFT_CLASS("_TtC10MapboxMaps14MapInitOptions")
@interface MapInitOptions : NSObject
/// :nodoc:
/// See https://developer.apple.com/forums/thread/650054 for context
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@end


/// A protocol used to provide <code>MapInitOptions</code> when initializing a <code>MapView</code> with a Storyboard or
/// a nib.
SWIFT_PROTOCOL("_TtP10MapboxMaps22MapInitOptionsProvider_")
@protocol MapInitOptionsProvider
/// A method to be called when <code>MapView</code> needs initialization options
///
/// returns:
/// Initializations options for the <code>MapView</code>.
- (MapInitOptions * _Nonnull)mapInitOptions SWIFT_WARN_UNUSED_RESULT;
@end




@interface MBMMapOptions (SWIFT_EXTENSION(MapboxMaps))
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@end




SWIFT_CLASS("_TtC10MapboxMaps7MapView")
@interface MapView : UIView
@property (nonatomic, getter=isOpaque) BOOL opaque;
/// Outlet that can be used when initializing a MapView with a Storyboard or
/// a nib.
@property (nonatomic, readonly, weak) IBOutlet id <MapInitOptionsProvider> _Nullable mapInitOptionsProvider;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios_app_extension,unavailable);
/// :nodoc:
/// See https://developer.apple.com/forums/thread/650054 for context
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)didMoveToWindow;
@end






SWIFT_CLASS("_TtC10MapboxMaps25MapboxCompassOrnamentView")
@interface MapboxCompassOrnamentView : UIButton
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC10MapboxMaps19MapboxScaleBarLabel")
@interface MapboxScaleBarLabel : UILabel
- (void)drawTextInRect:(CGRect)rect;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10MapboxMaps26MapboxScaleBarOrnamentView")
@interface MapboxScaleBarOrnamentView : UIView
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
@end













SWIFT_CLASS("_TtC10MapboxMaps16PaddingDebugView")
@interface PaddingDebugView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


/// <code>PanGestureHandler</code> updates the map camera in response to a pan gesture
SWIFT_CLASS("_TtC10MapboxMaps17PanGestureHandler")
@interface PanGestureHandler : GestureHandler
@end


@interface PanGestureHandler (SWIFT_EXTENSION(MapboxMaps)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end


/// <code>PinchGestureHandler</code> updates the map camera in response to a 2-touch
/// gesture that may consist of translation, scaling, and rotation
SWIFT_CLASS("_TtC10MapboxMaps19PinchGestureHandler")
@interface PinchGestureHandler : GestureHandler
@end


@interface PinchGestureHandler (SWIFT_EXTENSION(MapboxMaps)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end


/// <code>PitchGestureHandler</code> updates the map camera in response to a vertical,
/// 2-touch pan gesture in which the angle between the touch points is less than 45°.
SWIFT_CLASS("_TtC10MapboxMaps19PitchGestureHandler")
@interface PitchGestureHandler : GestureHandler <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end



/// <code>QuickZoomGestureHandler</code> updates the map camera in response to double tap and drag gestures
SWIFT_CLASS("_TtC10MapboxMaps23QuickZoomGestureHandler")
@interface QuickZoomGestureHandler : GestureHandler
@end






/// <code>RotateGestureHandler</code> updates the map camera in response to 2-touch rotate gestures
SWIFT_CLASS("_TtC10MapboxMaps20RotateGestureHandler")
@interface RotateGestureHandler : GestureHandler
@end


@interface RotateGestureHandler (SWIFT_EXTENSION(MapboxMaps)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end




/// <code>SingleTapGestureHandler</code> manages a gesture recognizer looking for single tap touch events
SWIFT_CLASS("_TtC10MapboxMaps23SingleTapGestureHandler")
@interface SingleTapGestureHandler : GestureHandler
@end


@interface SingleTapGestureHandler (SWIFT_EXTENSION(MapboxMaps)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end

















@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC10MapboxMaps27TouchBeganGestureRecognizer")
@interface TouchBeganGestureRecognizer : UIGestureRecognizer
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nonnull)event;
- (nonnull instancetype)initWithTarget:(id _Nullable)target action:(SEL _Nullable)action OBJC_DESIGNATED_INITIALIZER;
@end















@interface NSUserDefaults (SWIFT_EXTENSION(MapboxMaps))
@property (nonatomic) BOOL MGLMapboxMetricsEnabled;
@end





SWIFT_CLASS("_TtC10MapboxMaps24ViewAnnotationsContainer")
@interface ViewAnnotationsContainer : UIView
/// Forwards all touch events to its subviews
- (UIView * _Nullable)hitTest:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (void)didAddSubview:(UIView * _Nonnull)subview;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
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
