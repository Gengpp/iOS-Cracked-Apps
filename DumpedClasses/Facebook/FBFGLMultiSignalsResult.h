//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, FBBluetoothDataList, FBFGLLocationServiceConfig, FBFGLLogger, FBFGLWifiData, NSDate, NSError;

@interface FBFGLMultiSignalsResult : NSObject
{
    FBBluetoothDataList *_blueToothDataList;
    NSError *_error;
    FBFGLWifiData *_wifiData;
    NSDate *_startTimeStamp;
    FBFGLLogger *_logger;
    FBFGLLocationServiceConfig *_config;
    CLLocation *_location;
}

@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)_getCellInfo;
- (id)_getConnectedWifiInfo;
- (id)_getBluetoothInfo;
- (id)_getLocationManagerInfo;
- (id)getLocationUpdateInput;
- (id)getWifiData;
- (id)getBluetoothData;
- (id)getLocation;
- (void)setWifiData:(id)arg1;
- (void)setBluetoothData:(id)arg1;
- (void)setSignalError:(id)arg1;
- (id)hasSignalError;
- (id)initWithTimestamp:(id)arg1 logger:(id)arg2 config:(id)arg3 location:(id)arg4;
- (id)initWithTimeStamp:(id)arg1 logger:(id)arg2 config:(id)arg3;

@end

