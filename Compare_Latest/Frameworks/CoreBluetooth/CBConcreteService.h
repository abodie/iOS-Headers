/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreBluetooth/CBService.h>

@class NSNumber;

@interface CBConcreteService : CBService
{
    NSNumber *_startHandle;
    NSNumber *_endHandle;
}

- (id)initWithPeripheral:(id)arg1 UUID:(id)arg2 startHandle:(id)arg3 endHandle:(id)arg4;
- (void)dealloc;
- (void)handlePeripheralDisconnection;
- (id)handleIncludedServicesDiscovered:(id)arg1;
- (id)handleCharacteristicsDiscovered:(id)arg1;
@property(readonly, nonatomic) NSNumber *endHandle; // @synthesize endHandle=_endHandle;
@property(readonly, nonatomic) NSNumber *startHandle; // @synthesize startHandle=_startHandle;

@end
