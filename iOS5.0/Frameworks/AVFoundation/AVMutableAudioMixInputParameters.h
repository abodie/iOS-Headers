/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAudioMixInputParameters.h>

@class AVMutableAudioMixInputParametersInternal;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters
{
    AVMutableAudioMixInputParametersInternal *_mutableInputParameters;
}

+ (id)audioMixInputParametersWithTrack:(id)arg1;
+ (id)audioMixInputParameters;
@property(nonatomic) int trackID;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setVolume:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;

@end

