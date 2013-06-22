/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSNumber, NSValue;

@interface _UIBarBackButtonItemAppearanceStorage : NSObject
{
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    NSValue *titlePositionOffset;
    NSValue *miniTitlePositionOffset;
    NSNumber *backgroundVerticalAdjustment;
    NSNumber *miniBackgroundVerticalAdjustment;
}

@property(retain, nonatomic) NSNumber *miniBackgroundVerticalAdjustment; // @synthesize miniBackgroundVerticalAdjustment;
@property(retain, nonatomic) NSNumber *backgroundVerticalAdjustment; // @synthesize backgroundVerticalAdjustment;
@property(retain, nonatomic) NSValue *miniTitlePositionOffset; // @synthesize miniTitlePositionOffset;
@property(retain, nonatomic) NSValue *titlePositionOffset; // @synthesize titlePositionOffset;
- (void)dealloc;
- (id)anyBackgroundImage;
- (id)backgroundImageForState:(unsigned int)arg1 isMini:(BOOL)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 isMini:(BOOL)arg3;

@end
