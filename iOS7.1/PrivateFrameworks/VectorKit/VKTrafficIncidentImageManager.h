//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMapTable;

@interface VKTrafficIncidentImageManager : NSObject
{
    NSCache *_imageCache;
    NSMapTable *_targetDisplayToProvider;
}

+ (id)sharedManager;
- (void)setIncidentIconProvider:(CDUnknownBlockType)arg1 forTargetDisplay:(int)arg2;
- (id)iconForIncidentType:(int)arg1 contentScale:(float)arg2;
- (id)imageForIncidentType:(int)arg1 contentScale:(float)arg2;
- (id)iconForIncidentType:(int)arg1 contentScale:(float)arg2 targetDisplay:(int)arg3;
- (id)imageForIncidentType:(int)arg1 contentScale:(float)arg2 targetDisplay:(int)arg3;
- (void)dealloc;

@end

