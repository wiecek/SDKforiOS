// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from measurement.djinni

#import <Foundation/Foundation.h>
@class IPSIMeasurement;


@interface IPSIMeasurement : NSObject

+ (nullable IPSIMeasurement *)createMeasurement;

+ (nullable IPSIMeasurement *)createMeasurementWithParams:(nonnull NSString *)hexId
                                                     rssi:(float)rssi
                                                timestamp:(int64_t)timestamp;

- (void)setHexId:(nonnull NSString *)hexId;

- (nonnull NSString *)getHexId;

- (void)setRssi:(float)rssi;

- (float)getRssi;

- (void)setTimestamp:(int64_t)timestamp;

- (int64_t)getTimestamp;

- (BOOL)isEqual:(nullable IPSIMeasurement *)measurement;

@end
