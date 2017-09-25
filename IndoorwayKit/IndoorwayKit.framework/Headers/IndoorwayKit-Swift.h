// Generated by Apple Swift version 4.0 (swiftlang-900.0.65 clang-900.0.37)
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

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
#if __has_feature(modules)
@import CoreBluetooth;
@import CoreLocation;
@import ObjectiveC;
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#import <IndoorwayKit/IndoorwayKit.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("IndoorwayKit")








@class IndoorwayLatLon;

/// Indoorway annotation
SWIFT_PROTOCOL("_TtP12IndoorwayKit19IndoorwayAnnotation_")
@protocol IndoorwayAnnotation <NSObject>
/// Center point of the annotation
@property (nonatomic, readonly, strong) IndoorwayLatLon * _Nonnull coordinate;
/// The title of the annotation
@property (nonatomic, readonly, copy) NSString * _Nullable title;
/// The subtitle of the annotation
@property (nonatomic, readonly, copy) NSString * _Nullable subtitle;
@end

@class NSCoder;

/// Class responsible for presenting annotations in a map view.
/// The map view asks its delegate to provide corresponding annotation view.
/// Annotation views can be recycled ad reused. This process is maintained by map view.
SWIFT_CLASS("_TtC12IndoorwayKit23IndoorwayAnnotationView")
@interface IndoorwayAnnotationView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


/// Indoorway building information class
SWIFT_CLASS("_TtC12IndoorwayKit17IndoorwayBuilding")
@interface IndoorwayBuilding : NSObject
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end




/// The default annotation view for the Indoorway map view
SWIFT_CLASS("_TtC12IndoorwayKit29IndoorwayCircleAnnotationView")
@interface IndoorwayCircleAnnotationView : IndoorwayAnnotationView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// The Indoorway configuration class
SWIFT_CLASS("_TtC12IndoorwayKit22IndoorwayConfiguration")
@interface IndoorwayConfiguration : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



/// Indoorway error codes
typedef SWIFT_ENUM(NSInteger, IndoorwayErrorCode) {
  IndoorwayErrorCodeBluetoothNotAvailable = 77500,
  IndoorwayErrorCodeBuildingsManager = 77700,
  IndoorwayErrorCodeLogotypeManager = 77701,
  IndoorwayErrorCodeRadiomap = 77702,
  IndoorwayErrorCodeMapManager = 77703,
  IndoorwayErrorCodePointsOfInterestTypesManager = 77704,
  IndoorwayErrorCodeLocationRangingManager = 77705,
  IndoorwayErrorCodeCameraNotAvailable = 77706,
  IndoorwayErrorCodeVisitorsManager = 77707,
  IndoorwayErrorCodeVisitorsLocationsManager = 77708,
  IndoorwayErrorCodeLocationsManager = 77709,
  IndoorwayErrorCodeLoginManager = 77710,
  IndoorwayErrorCodeNoRadioMap = 77711,
  IndoorwayErrorCodeUserNotAuthorized = 77800,
};


/// Object that contains a geographical coordinate
SWIFT_CLASS("_TtC12IndoorwayKit15IndoorwayLatLon")
@interface IndoorwayLatLon : NSObject
/// Initializes and returns location object with latitude and longitude equal 0.0
///
/// returns:
/// A location object with latitude and longitude equal 0.0
- (nonnull instancetype)init;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
@end




/// Object represents the geographical location data
/// and the information about corresponding map
SWIFT_CLASS("_TtC12IndoorwayKit17IndoorwayLocation")
@interface IndoorwayLocation : NSObject
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end




/// Indoorway logotype
SWIFT_CLASS("_TtC12IndoorwayKit17IndoorwayLogotype")
@interface IndoorwayLogotype : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end




/// Indoorway map information class
SWIFT_CLASS("_TtC12IndoorwayKit12IndoorwayMap")
@interface IndoorwayMap : NSObject
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


/// Description of the map
SWIFT_CLASS("_TtC12IndoorwayKit23IndoorwayMapDescription")
@interface IndoorwayMapDescription : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class IndoorwayObjectInfo;

/// Protocol for map renderer configuration
/// Implementation should cache return values
SWIFT_PROTOCOL("_TtP12IndoorwayKit33IndoorwayMapRendererConfiguration_")
@protocol IndoorwayMapRendererConfiguration
/// Source of map outline stroke color
///
/// returns:
/// Map outline stroke color
- (CGColorRef _Nullable)outlineStrokeColor SWIFT_WARN_UNUSED_RESULT;
/// Source of map outline width
///
/// returns:
/// Map outline width
- (CGFloat)outlineStrokeWidth SWIFT_WARN_UNUSED_RESULT;
/// Source of map outline fill color
///
/// returns:
/// Map outline fill color
- (CGColorRef _Nullable)outlineFillColor SWIFT_WARN_UNUSED_RESULT;
/// Source of map background color
///
/// returns:
/// Map background color
- (CGColorRef _Nonnull)backgroundColor SWIFT_WARN_UNUSED_RESULT;
/// Source of stroke color for object
/// \param object The object for color specification
///
///
/// returns:
/// Stroke color for object
- (CGColorRef _Nullable)strokeColorForObject:(IndoorwayObjectInfo * _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
/// Source of fill color for object
/// \param object The object for color specification
///
///
/// returns:
/// Fill color for object
- (CGColorRef _Nullable)fillColorForObject:(IndoorwayObjectInfo * _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
/// Source of stroke width for object
/// \param object The object for width specification
///
///
/// returns:
/// Stroke width for object
- (CGFloat)strokeWidthForObject:(IndoorwayObjectInfo * _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
/// Source of text color for object labels
///
/// returns:
/// Text color for object labels
- (CGColorRef _Nonnull)textColor SWIFT_WARN_UNUSED_RESULT;
/// Source of text stroke color for object labels
///
/// returns:
/// Text stroke color for object labels
- (CGColorRef _Nonnull)textStrokeColor SWIFT_WARN_UNUSED_RESULT;
/// Source of text size for object labels
///
/// returns:
/// Text size for object labels
- (CGFloat)textSize SWIFT_WARN_UNUSED_RESULT;
/// Fill color for selected object
@property (nonatomic, readonly) CGColorRef _Nullable selectedObjectFillColor;
/// Custom fill color for selected object. Has higher priority than <code>selectedObjectFillColor</code>.
/// If the method returns nil for an object, value returned by<code>selectedObjectFillColor</code> will be used.
/// \param object The object for color specification
///
///
/// returns:
/// Fill color for selected object
- (CGColorRef _Nullable)selectedObjectFillColorForObject:(IndoorwayObjectInfo * _Nullable)object SWIFT_WARN_UNUSED_RESULT;
/// Stroke color for selected object
@property (nonatomic, readonly) CGColorRef _Nullable selectedObjectStrokeColor;
/// Fill color for user’s location. Works only with default annotation
@property (nonatomic, readonly) CGColorRef _Nullable usersLocationFillColor;
/// Stroke color of user’s location. Works only with default annotation
@property (nonatomic, readonly) CGColorRef _Nullable usersLocationStrokeColor;
@end

@class UIWindow;

/// Indoorway map view
SWIFT_CLASS("_TtC12IndoorwayKit16IndoorwayMapView")
@interface IndoorwayMapView : UIView
/// Method displays navigation from user’s current location to the Indoorway object with matching identifier
/// \param objectId The destination Indoorway object identifier
///
- (void)navigateToObjectWithId:(NSString * _Nonnull)objectId;
/// Method displays navigation from user’s current location to the Indoorway object
/// \param object The destination Indoorway object
///
- (void)navigateToObject:(IndoorwayObjectInfo * _Nonnull)object;
/// Method displays navigation between start and destination Indoorway object
/// \param startObject The start Indoorway object
///
/// \param stopObject The destination Indoorway object
///
- (void)navigateFromObject:(IndoorwayObjectInfo * _Nonnull)startObject toObject:(IndoorwayObjectInfo * _Nonnull)stopObject;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(UIWindow * _Nullable)newWindow;
- (void)layoutSubviews;
@end









@class IndoorwayUserLocation;

/// Indoorway map view delegate
SWIFT_PROTOCOL("_TtP12IndoorwayKit24IndoorwayMapViewDelegate_")
@protocol IndoorwayMapViewDelegate <NSObject>
@optional
/// Method called when map did finish loading
/// \param mapView The map view that did finish loading
///
- (void)mapViewDidFinishLoadingMap:(IndoorwayMapView * _Nonnull)mapView;
/// Method called when map did fail loading map
/// \param mapView The map view that did fail loading map
///
/// \param error Error that occurred
///
- (void)mapViewDidFailLoadingMap:(IndoorwayMapView * _Nonnull)mapView withError:(NSError * _Nonnull)error;
/// Method called when user did tap location
/// \param mapView The map view that received tap
///
/// \param location The location where tap was received
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didTapLocation:(IndoorwayLatLon * _Nonnull)location;
/// Method tells the delegate that the location of the user was updated.
/// \param mapView The map view which determines user location
///
/// \param userLocation The updated user location
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didUpdate:(IndoorwayUserLocation * _Nonnull)userLocation;
/// Method tells the delegate that an attempt to locate the user’s position failed.
/// \param mapView The map view which determines user location
///
/// \param error The error containing a reason that determining user location failed
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didFailToLocateUserWithError:(NSError * _Nonnull)error;
/// Method tells the delegate that the mapView recovered after a previous error
/// \param mapView The map view which determines user location
///
/// \param error The error from which we recovered
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didRecoverAfterError:(NSError * _Nonnull)error;
/// Method determines that map view should select Indoorway object
/// \param mapView The map view that should or not select object
///
/// \param indoorObjectInfo The object that should or not be selected
///
///
/// returns:
/// returns true if object should be selected
- (BOOL)mapView:(IndoorwayMapView * _Nonnull)mapView shouldSelectIndoorObject:(IndoorwayObjectInfo * _Nonnull)indoorObjectInfo SWIFT_WARN_UNUSED_RESULT;
/// Method called when Indoorway object did select
/// \param mapView The map view that contains selected Indoorway object
///
/// \param indoorObjectInfo The selected Indoorway object
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didSelectIndoorObject:(IndoorwayObjectInfo * _Nonnull)indoorObjectInfo;
/// Method called when Indoorway object did deselect
/// \param mapView The map view that contains deselected Indoorway object
///
/// \param indoorObjectInfo The deselected Indoorway object
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didDeselectIndoorObject:(IndoorwayObjectInfo * _Nonnull)indoorObjectInfo;
/// Method returns the view associated with the specified annotation object
/// Discussion:
/// Rather than creating new view each time the method is called, it should call <code>dequeueReusableAnnotationViewWithIdentifier(_ identifier:)</code> on the <code>IndoorwayMapView</code> instance to obtain dequeued view.
/// If it doesn’t exist, it should create a new one. After both of ways view should be configured to reflect the annotation properties before returning.
/// If the object in the annotation parameter is an instance of the IndoorwayUserLocation class, you can provide a custom view to display the user’s location.
/// To display the user’s location using the standard system view, return nil.
/// If you do not implement this method, or if you return nil from your implementation for annotations other than the user location annotation, the map view uses a standard circle annotation view.
/// \param mapView The map view that asked the annotation view
///
/// \param annotation The object that represents the annotation that is about to be displayed. In addition to your custom annotations, this object could be an IndoorwayUserLocation object representing the user’s current location.
///
///
/// returns:
/// The annotation view to display for the specified annotation or nil if you want to display a standard annotation view
- (IndoorwayAnnotationView * _Nullable)mapView:(IndoorwayMapView * _Nonnull)mapView viewForAnnotation:(id <IndoorwayAnnotation> _Nonnull)annotation SWIFT_WARN_UNUSED_RESULT;
/// Method called when user did select annotation view
/// \param mapView The map view that contains annotation view
///
/// \param view The selected annotation view
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didSelectAnnotationView:(IndoorwayAnnotationView * _Nonnull)view;
/// Method called when user did deselect annotation view
/// \param mapView The map view that contains annotation view
///
/// \param view The deselected annotation view
///
- (void)mapView:(IndoorwayMapView * _Nonnull)mapView didDeselectAnnotationView:(IndoorwayAnnotationView * _Nonnull)view;
@end


/// Indoorway object information
SWIFT_CLASS("_TtC12IndoorwayKit19IndoorwayObjectInfo")
@interface IndoorwayObjectInfo : NSObject
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSUInteger hash;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

/// Indoorway object type
typedef SWIFT_ENUM(NSInteger, IndoorwayObjectType) {
/// Room
  IndoorwayObjectTypeRoom = 0,
/// Toilet
  IndoorwayObjectTypeToilet = 1,
/// Cloakroom
  IndoorwayObjectTypeCloakroom = 2,
/// Information
  IndoorwayObjectTypeInformation = 3,
/// Inaccessible
  IndoorwayObjectTypeInaccessible = 4,
/// Elevator
  IndoorwayObjectTypeElevator = 5,
/// Stairs
  IndoorwayObjectTypeStairs = 6,
/// Point
  IndoorwayObjectTypePoint = 7,
/// Atm
  IndoorwayObjectTypeAtm = 8,
/// Entrance
  IndoorwayObjectTypeEntrance = 9,
/// VendingMachine
  IndoorwayObjectTypeVendingMachine = 10,
/// Path
  IndoorwayObjectTypePath = 11,
/// Unknown
  IndoorwayObjectTypeUnknown = 12,
};


/// Indoorway point of interest type
SWIFT_CLASS("_TtC12IndoorwayKit16IndoorwayPOIType")
@interface IndoorwayPOIType : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end




/// QR code scanner view
SWIFT_CLASS("_TtC12IndoorwayKit26IndoorwayQRCodeScannerView")
@interface IndoorwayQRCodeScannerView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end


/// Indoorway user location annotation
SWIFT_CLASS("_TtC12IndoorwayKit21IndoorwayUserLocation")
@interface IndoorwayUserLocation : NSObject <IndoorwayAnnotation>
/// Returns nil if location is not determined yet
@property (nonatomic, readonly, strong) IndoorwayLatLon * _Nonnull coordinate;
/// The title to be displayed for the annotation
@property (nonatomic, copy) NSString * _Nullable title;
/// The subtitle to be displayed for the annotation
@property (nonatomic, copy) NSString * _Nullable subtitle;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

/// Indoorway visitor sex
typedef SWIFT_ENUM(NSUInteger, IndoorwayVisitorSex) {
/// Undefined
  IndoorwayVisitorSexUndefined = 0,
/// Male
  IndoorwayVisitorSexMale = 1,
/// Female
  IndoorwayVisitorSexFemale = 2,
};







SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
