//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SBDisplayLayout;

@interface SBWorkspaceAppsActivationRequest : NSObject
{
    NSArray *_applications;
    SBDisplayLayout *_displayLayout;
}

+ (id)fullScreenActivationRequestForApp:(id)arg1;
+ (id)homeScreenActivationRequest;
@property(readonly, nonatomic) SBDisplayLayout *displayLayout; // @synthesize displayLayout=_displayLayout;
@property(readonly, nonatomic) NSArray *applications; // @synthesize applications=_applications;
- (void)dealloc;
- (id)initWithApplications:(id)arg1 displayLayout:(id)arg2;

@end

