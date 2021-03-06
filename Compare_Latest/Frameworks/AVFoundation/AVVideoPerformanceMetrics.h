//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVVideoPerformanceMetricsInternal;

@interface AVVideoPerformanceMetrics : NSObject
{
    AVVideoPerformanceMetricsInternal *_performanceMetricsInternal;
}

@property(readonly, nonatomic) double totalFrameDelay;
@property(readonly, nonatomic) unsigned long numberOfCorruptedVideoFrames;
@property(readonly, nonatomic) unsigned long numberOfDroppedVideoFrames;
@property(readonly, nonatomic) unsigned long totalNumberOfVideoFrames;
- (void)dealloc;
- (void)finalize;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

